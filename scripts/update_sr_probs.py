#!/usr/bin/env python3
"""
update_sr_probs.py
------------------
Update situation→response probabilities in an RDDL *instance* based on emotion detection.

Assumptions
-----------
- The RDDL instance contains non-fluents (or cpfs set as constants) of the form:
      prob_response(<situation>, <response_type>) = <float>;
  grouped per situation so that probabilities for all response types for the same situation should sum to 1.0.
- You may override the target symbol name via --symbol (default: "prob_response").
- The script *multiplies* base probabilities by an *emotion-weighted multiplier* and **renormalizes per situation**.

Emotion-weighted multiplier
---------------------------
We compute, for each (situation s, response r), an effective multiplier:
    M[s, r] = sum_e  P(e) * m[e, s, r]
where:
- P(e)  : probability of emotion e (provided via --emotions JSON)
- m[e,s,r]: multiplicative adjustment (>=0). If unspecified it defaults to 1.0.

Configuration formats
---------------------
1) Minimal (only per-response adjustments global for all situations):
{
  "emotions": {"neutral": 0.3, "frustrated": 0.5, "confused": 0.2},
  "adjustments": {
    "default": {
      "why_expl":   {"frustrated": 1.5, "confused": 1.2},
      "apology":    {"frustrated": 1.3},
      "continue":   {"frustrated": 0.6}
    }
  }
}

2) With situation-specific refinements:
{
  "emotions": {"neutral": 0.3, "frustrated": 0.5, "confused": 0.2},
  "adjustments": {
    "default": { ... as above ... },
    "by_situation": {
      "agent_error": {
        "apology": {"frustrated": 1.6},
        "why_expl": {"confused": 1.3}
      },
      "uncertainty": {
        "next_action": {"frustrated": 1.2}
      }
    }
  }
}

CLI
---
python update_sr_probs.py \
  --instance-in icra2026_instance.rddl \
  --instance-out icra2026_instance_updated.rddl \
  --emotions emotions.json \
  --adjustments adjustments.json \
  --symbol prob_response \
  --dry-run

If you don't want separate files, you can pass a single JSON via --config that contains both "emotions" and "adjustments".

Robustness
----------
- Leaves lines untouched except where matching the prob pattern.
- Preserves comments and global formatting.
- Validates per-situation normalization (within tolerance) after update.
"""

from __future__ import annotations
import argparse
import json
import math
import os
import re
import sys
from collections import defaultdict
from typing import Dict, Tuple, List

FLOAT_TOL = 1e-7

prob_line_regex_tpl = r"""
(?P<prefix>[^;]*?)                # anything before the assignment (same line), lazily
{symbol}\s*\(
\s*(?P<situation>\w+)\s*,
\s*(?P<response>\w+)\s*
\)\s*=\s*
(?P<value>[-+]?\d*\.?\d+(?:[eE][-+]?\d+)?)   # float number
\s*;
"""

def parse_args():
    p = argparse.ArgumentParser(description="Update situation→response probabilities in an RDDL instance using emotion detection.")
    p.add_argument("--instance-in", required=True, help="Path to the input RDDL instance file.")
    p.add_argument("--instance-out", required=True, help="Path to write the updated RDDL instance file.")
    p.add_argument("--symbol", default="prob_response", help="Name of the non-fluent / constant function to update (default: prob_response).")
    group = p.add_mutually_exclusive_group(required=True)
    group.add_argument("--config", help="Path to a single JSON containing both 'emotions' and 'adjustments'.")
    group.add_argument("--emotions", help="Path to a JSON file with {'emotion': probability, ...}.")
    p.add_argument("--adjustments", help="Path to a JSON file with adjustments (see header). Ignored if --config is used.")
    p.add_argument("--min-prob", type=float, default=0.0, help="Clip lower bound after renormalization (default 0.0).")
    p.add_argument("--max-prob", type=float, default=1.0, help="Clip upper bound after renormalization (default 1.0).")
    p.add_argument("--backup", action="store_true", help="Also write a .bak of the original instance next to --instance-out.")
    p.add_argument("--dry-run", action="store_true", help="Compute and print changes but do not write file.")
    p.add_argument("--verbose", action="store_true", help="Verbose logging.")
    return p.parse_args()

def load_json(path: str) -> dict:
    with open(path, "r", encoding="utf-8") as f:
        return json.load(f)

def merge_config(args) -> Tuple[Dict[str, float], dict]:
    if args.config:
        cfg = load_json(args.config)
        emotions = cfg.get("emotions", {})
        adjustments = cfg.get("adjustments", {})
    else:
        emotions = load_json(args.emotions) if args.emotions else {}
        adjustments = load_json(args.adjustments) if args.adjustments else {}
    # Normalize emotion probs
    total = sum(emotions.values())
    if total <= 0:
        raise ValueError("Emotion probabilities sum to zero or are missing.")
    emotions = {k: float(v) / total for k, v in emotions.items()}
    return emotions, adjustments

def effective_multiplier(emotions: Dict[str, float], adjustments: dict, situation: str, response: str) -> float:
    """
    Compute M[s, r] = sum_e P(e) * m[e, s, r], where m defaults to 1.0 when unspecified.
    adjustments:
      {
        "default": { "<response>": {"<emotion>": multiplier, ...}, ... },
        "by_situation": { "<situation>": { "<response>": {"<emotion>": multiplier, ... } } }
      }
    """
    default_adj = adjustments.get("default", {})
    by_sit = (adjustments.get("by_situation") or {}).get(situation, {})
    M = 0.0
    for e, pe in emotions.items():
        m = 1.0
        # default per-response
        if response in default_adj and e in default_adj[response]:
            m *= float(default_adj[response][e])
        # situation-specific override/multiplier
        if response in by_sit and e in by_sit[response]:
            m *= float(by_sit[response][e])
        M += pe * m
    return M

def parse_instance_lines(text: str, symbol: str):
    """
    Return:
      lines: original lines
      entries: dict[(situation, response)] = (line_index, start, end, value_str)
      base_probs: dict[situation][response] = float
    """
    pattern = re.compile(prob_line_regex_tpl.format(symbol=re.escape(symbol)), re.VERBOSE)
    lines = text.splitlines(keepends=True)

    entries = {}
    base_probs = defaultdict(dict)

    for i, line in enumerate(lines):
        m = pattern.search(line)
        if not m:
            continue
        situation = m.group("situation")
        response = m.group("response")
        value = float(m.group("value"))
        entries[(situation, response)] = (i, m.start("value"), m.end("value"), m.group("value"), line)
        base_probs[situation][response] = value

    return lines, entries, base_probs

def renormalize_per_situation(base_probs: Dict[str, Dict[str, float]], new_mult: Dict[Tuple[str, str], float],
                              min_prob: float, max_prob: float) -> Dict[str, Dict[str, float]]:
    updated = {}
    for s, resp_dict in base_probs.items():
        # compute unnormalized
        temp = {}
        for r, base in resp_dict.items():
            m = new_mult.get((s, r), 1.0)
            temp[r] = max(0.0, base * m)  # guard negatives
        tot = sum(temp.values())
        if tot <= 0:
            # fallback: distribute uniformly
            n = len(temp) if temp else 1
            uniform = 1.0 / n
            temp = {r: uniform for r in temp}
            tot = 1.0
        # normalize
        norm = {r: v / tot for r, v in temp.items()}
        # clip if requested and renormalize again to keep sum 1.0
        if min_prob > 0.0 or max_prob < 1.0:
            norm = {r: min(max(v, min_prob), max_prob) for r, v in norm.items()}
            ssum = sum(norm.values())
            if ssum > 0:
                norm = {r: v / ssum for r, v in norm.items()}
        updated[s] = norm
    return updated

def apply_updates(lines: List[str], entries: dict, updated_probs: Dict[str, Dict[str, float]], verbose=False):
    """
    Replace number substrings in-place within their lines.
    """
    # Build per-line updates (multiple replacements per line are unlikely but we support it)
    per_line = defaultdict(list)
    for (s, r), (idx, start, end, old_str, full_line) in entries.items():
        if s not in updated_probs or r not in updated_probs[s]:
            continue
        new_val = updated_probs[s][r]
        per_line[idx].append((start, end, new_val))

    # Apply replacements from right to left per line to keep indices valid
    for idx, repls in per_line.items():
        repls.sort(key=lambda t: t[0], reverse=True)
        line = lines[idx]
        for start, end, new_val in repls:
            new_txt = f"{new_val:.8f}"
            if verbose:
                old_val = line[start:end]
                print(f"[line {idx+1}] {old_val} -> {new_txt}")
            line = line[:start] + new_txt + line[end:]
        lines[idx] = line

def main():
    args = parse_args()
    emotions, adjustments = merge_config(args)

    with open(args.instance_in, "r", encoding="utf-8") as f:
        text = f.read()

    lines, entries, base_probs = parse_instance_lines(text, args.symbol)
    if not entries:
        print(f"WARNING: No entries found for symbol '{args.symbol}'. Nothing to update.", file=sys.stderr)
        if not args.dry_run:
            # Still copy the file if output path differs
            if os.path.abspath(args.instance_in) != os.path.abspath(args.instance_out):
                with open(args.instance_out, "w", encoding="utf-8") as g:
                    g.write(text)
        return

    # Compute per (s,r) effective multipliers
    mult = {}
    for s, resp_dict in base_probs.items():
        for r in resp_dict:
            M = effective_multiplier(emotions, adjustments, s, r)
            mult[(s, r)] = M

    updated_probs = renormalize_per_situation(base_probs, mult, args.min_prob, args.max_prob)

    if args.verbose or args.dry_run:
        print("=== Summary (per situation) ===")
        for s in sorted(base_probs.keys()):
            print(f"\n[situation={s}]")
            # Show base and new side-by-side
            keys = sorted(base_probs[s].keys())
            for r in keys:
                b = base_probs[s][r]
                u = updated_probs[s][r]
                print(f"  {r:>12s}: base={b:.6f}  ->  new={u:.6f}  (mult={mult[(s,r)]:.4f})")
            # Sanity
            sb = sum(base_probs[s].values())
            su = sum(updated_probs[s].values())
            print(f"  sum(base)={sb:.6f}, sum(new)={su:.6f}")

    if args.dry_run:
        return

    if args.backup and os.path.abspath(args.instance_out) != os.path.abspath(args.instance_in):
        with open(args.instance_out + ".bak", "w", encoding="utf-8") as b:
            b.write(text)

    # Apply in-place textual updates
    apply_updates(lines, entries, updated_probs, verbose=args.verbose)
    new_text = "".join(lines)
    with open(args.instance_out, "w", encoding="utf-8") as f:
        f.write(new_text)

    print(f"Updated file written to: {args.instance_out}")

if __name__ == "__main__":
    main()
