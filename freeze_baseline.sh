#!/usr/bin/env bash
set -euo pipefail

# === Step 0: Baseline Snapshot Helper ===
# Creates a timestamped baseline folder, copies rddl/*.rddl (if present),
# records file hashes & system info, and generates a runner script where
# you paste the exact PROST command(s) you used.

# Usage:
#   1) Place this script at your project root (same level as rddl/).
#   2) Run:  bash freeze_baseline.sh
#   3) Edit: runs/<baseline>/PROST_COMMANDS_TO_RUN.sh with your exact commands.
#   4) Execute that file to capture logs in the same folder.

TS=$(date +%Y%m%d_%H%M%S)
RUN_DIR="runs/baseline_${TS}"
mkdir -p "${RUN_DIR}/rddl"

# Copy RDDL files if they exist
if ls rddl/*.rddl >/dev/null 2>&1; then
  cp rddl/*.rddl "${RUN_DIR}/rddl/"
fi

# Record hashes & system info
python3 - << 'PY' > "${RUN_DIR}/baseline_snapshot.json"
import hashlib, glob, json, platform, sys, time, os
snapshot = {
  "timestamp": time.strftime("%Y-%m-%d %H:%M:%S"),
  "platform": platform.platform(),
  "python_version": sys.version,
  "cwd": os.getcwd(),
  "rddl_files": {},
}
for f in glob.glob("rddl/*.rddl"):
    with open(f, "rb") as fh:
        snapshot["rddl_files"][f] = {"sha256": hashlib.sha256(fh.read()).hexdigest()}
print(json.dumps(snapshot, indent=2))
PY

# Runner placeholder
cat > "${RUN_DIR}/PROST_COMMANDS_TO_RUN.sh" << 'EOF'
#!/usr/bin/env bash
# Paste your exact commands here so we preserve the baseline run.
# Example (EDIT to your env):
#
# PROST_BIN="/path/to/prost"
# DOMAIN="rddl/domain.rddl"
# INSTANCE="rddl/instance.rddl"
# SEED=1
#
# mkdir -p logs
# "${PROST_BIN}" \
#   --domain "${DOMAIN}" \
#   --instance "${INSTANCE}" \
#   --seed "${SEED}" \
#   > "${RUN_DIR}/prost_seed${SEED}.log" 2>&1
#
# for SEED in 1 2 3 4 5; do
#   "${PROST_BIN}" --domain "${DOMAIN}" --instance "${INSTANCE}" --seed "${SEED}" \
#     > "${RUN_DIR}/prost_seed${SEED}.log" 2>&1
# done
EOF
chmod +x "${RUN_DIR}/PROST_COMMANDS_TO_RUN.sh"

# Minimal readme inside the run folder (created at runtime)
cat > "${RUN_DIR}/README_BASELINE.txt" << 'EOF'
Baseline Snapshot (Step 0)
- rddl/ : copy of RDDL files used for the baseline
- baseline_snapshot.json : hashes + system info
- PROST_COMMANDS_TO_RUN.sh : paste & run your exact PROST commands here
EOF

echo "Created ${RUN_DIR}"
echo "Now edit and run: ${RUN_DIR}/PROST_COMMANDS_TO_RUN.sh"
