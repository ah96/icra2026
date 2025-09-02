#!/usr/bin/env bash
set -euo pipefail

# === Baseline runner ===
# Runs your two commands from the repo root and logs everything into THIS baseline folder.

# This baseline folder (where this script lives)
RUN_DIR="$(cd "$(dirname "$0")" && pwd)"
# Your repo root (two levels up from runs/baseline_.../)
ROOT_DIR="$(cd "${RUN_DIR}/../.." && pwd)"

# Clean up the server on exit, even if something fails
cleanup() {
  if [[ -f "${RUN_DIR}/server.pid" ]] && kill -0 "$(cat "${RUN_DIR}/server.pid")" 2>/dev/null; then
    kill "$(cat "${RUN_DIR}/server.pid")" || true
  fi
}
trap cleanup EXIT

echo "[INFO] Baseline folder: ${RUN_DIR}"
echo "[INFO] Repo root:       ${ROOT_DIR}"

# 1) Start the server (your exact command), from repo root
(
  cd "${ROOT_DIR}"
  nohup ./run-server.py -b ./rddl/ > "${RUN_DIR}/run-server.log" 2>&1 &
  echo $! > "${RUN_DIR}/server.pid"
)
echo "[INFO] Server PID: $(cat "${RUN_DIR}/server.pid")"
sleep 2  # increase to 5–10 if your server needs longer to start

# 2) Run PROST (your exact command), log to baseline folder
#    Change SEEDS to (1 2 3 4 5) if you want multiple runs.
SEEDS=(1)
for SEED in "${SEEDS[@]}"; do
  echo "[INFO] Running prost seed=${SEED}"
  (
    cd "${ROOT_DIR}"
    ./prost.py icra2026_instance "[Prost -s ${SEED} -se [IPC2014]]" \
      > "${RUN_DIR}/prost_seed${SEED}.log" 2>&1
  )
done

# 3) Stop server (trap also handles this)
if [[ -f "${RUN_DIR}/server.pid" ]]; then
  kill "$(cat "${RUN_DIR}/server.pid")" || true
fi

echo "[DONE] Logs in: ${RUN_DIR}"
