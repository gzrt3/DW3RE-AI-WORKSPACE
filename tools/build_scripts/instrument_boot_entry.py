"""Add observation/lifetime barriers to one entry; never regenerate or patch opcodes."""
import hashlib
from pathlib import Path
import re
import sys

source, output = map(Path, sys.argv[1:])
raw = source.read_bytes()
lines = raw.decode("utf-8-sig").splitlines(keepends=True)
result = ['#include "fate/boot_chain_probe.hpp"\n']
observations = barriers = 0
for line in lines:
    match = re.match(r"\s*// (0x[0-9a-fA-F]+): (0x[0-9a-fA-F]+)\s", line)
    if match:
        result.append(line)
        result.append(f"    fate::bootchain::observe(*ctx, {match[1]}u, {match[2]}u);\n")
        observations += 1
        continue
    if "runtime->" in line and not line.lstrip().startswith("//"):
        method = re.search(r"runtime->(\w+)", line).group(1)
        result.append(f'    fate::bootchain::require_runtime(runtime, *ctx, "{method}");\n')
        barriers += 1
    line = re.sub(r"(SET_GPR_\w+\(ctx,\s*)(\d+)(\s*,)",
                  r"\1fate::bootchain::register_index(\2)\3", line)
    result.append(line)
if observations != 34 or barriers != 5:
    raise SystemExit(f"Unexpected entry shape: {observations} instructions, {barriers} calls; inspect before instrumenting")
output.parent.mkdir(parents=True, exist_ok=True)
output.write_text("// Instrumented source SHA256: " + hashlib.sha256(raw).hexdigest()
                  + "\n" + "".join(result), encoding="utf-8")
