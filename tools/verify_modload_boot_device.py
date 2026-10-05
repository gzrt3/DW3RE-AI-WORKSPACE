"""Replay the identified MODLOAD1.6 validator through the native IOP core.

Requires the user's original module; never downloads or substitutes a fixture.
This is an original-instruction comparison, not an independent PCSX2 trace.
"""
import argparse
import hashlib
import json
from pathlib import Path
import struct
import subprocess

from generate_resume_catalog import elf_words

MODULE_SHA256 = "4a9027499d8fe06ced66d0ab66a9e930b30943c17fd2b5ae5f0bf76abf8360a7"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--module", type=Path, required=True)
    parser.add_argument("--exe", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()
    module, exe, output = args.module.resolve(), args.exe.resolve(), args.output.resolve()
    if output.exists():
        raise ValueError("Use a new output directory; preserve previous attempts")
    blob = module.read_bytes()
    if hashlib.sha256(blob).hexdigest() != MODULE_SHA256:
        raise ValueError("Module does not match the identified original MODLOAD1.6")
    words = elf_words(blob)
    table = 0x2DB0
    if (words[table] != 0x41C00000 or words[table + 8] & 0xFFFF != 0x0106 or
            words[table + 12] != 0x6C646F6D or words[table + 16] != 0x0064616F or
            words[table + 20 + 15 * 4] != 0x1700):
        raise ValueError("Original export table does not match the verified contract")
    fragment = b"".join(struct.pack("<I", words[pc]) for pc in range(0x1700, 0x17E0, 4))
    exe_hash = hashlib.sha256(exe.read_bytes()).hexdigest()
    output.mkdir(parents=True)
    original = output / "original-1700-17dc.bin"
    original.write_bytes(fragment)
    command = [str(exe), str(original)]
    with (output / "stdout.log").open("xb") as stdout, (output / "stderr.log").open("xb") as stderr:
        try:
            completed = subprocess.run(command, stdout=stdout, stderr=stderr, timeout=30, check=False)
            code, timed_out = completed.returncode, False
        except subprocess.TimeoutExpired:
            code, timed_out = None, True
    report = {
        "module": str(module), "module_sha256": MODULE_SHA256,
        "export": {"version": 0x0106, "ordinal": 15, "table": table, "entry": 0x1700},
        "original_slice_sha256": hashlib.sha256(fragment).hexdigest(),
        "command": command, "exe_sha256": exe_hash,
        "exit_code": code, "timed_out": timed_out,
        "scope": "Original instructions through IopCpuCore compared with HLE return value and preserved ABI. Synthetic path inputs. No PCSX2 trace, original module startup, or game parity claim.",
    }
    (output / "verification.json").write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(report))
    return 0 if code == 0 and not timed_out else 1


if __name__ == "__main__":
    raise SystemExit(main())
