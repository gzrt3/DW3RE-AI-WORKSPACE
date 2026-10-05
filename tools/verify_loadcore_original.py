"""Run bounded LOADCORE1.3 instruction comparison with locally owned IRX files."""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import subprocess
from datetime import datetime, timezone

LOADCORE_SHA256 = '51c9e79f4529d3590643a46ce63d73433b377a38ccc9fd0fad59a25b463d3bd3'


def identity(path):
    path = path.resolve(strict=True)
    raw = path.read_bytes()
    return {'path': str(path), 'bytes': len(raw), 'sha256': hashlib.sha256(raw).hexdigest()}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--exe', type=Path, required=True)
    parser.add_argument('--loadcore', type=Path, required=True)
    parser.add_argument('--module', type=Path, action='append', required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    sources = [args.exe, args.loadcore, *args.module]
    before = [identity(path) for path in sources]
    if before[1]['sha256'] != LOADCORE_SHA256:
        raise ValueError('Original LOADCORE does not match the reviewed instruction intervals')
    args.output.mkdir(parents=True, exist_ok=False)
    command = [str(path.resolve()) for path in sources]
    result = {'created_utc': datetime.now(timezone.utc).isoformat(),
              'command': command, 'inputs_before': before,
              'scope': 'Original LOADCORE22/23 instructions executed in the local IOP core, compared with native HLE. Not independent PCSX2 lockstep or gameplay parity.',
              'timeout_seconds': 60, 'boot_verified': False}
    (args.output / 'launch.json').write_text(json.dumps(result, indent=2), encoding='utf-8')
    try:
        with (args.output / 'stdout.log').open('wb') as stdout, (args.output / 'stderr.log').open('wb') as stderr:
            process = subprocess.run(command, stdout=stdout, stderr=stderr, timeout=60, check=False)
        result.update(state='PASS' if process.returncode == 0 else 'FAIL', exit_code=process.returncode)
    except subprocess.TimeoutExpired:
        result.update(state='TIMEOUT', exit_code=None)
    after = [identity(path) for path in sources]
    result['input_integrity'] = 'MATCH' if before == after else 'CHANGED'
    result['inputs_after'] = after
    result['logs'] = [identity(args.output / name) for name in ('stdout.log', 'stderr.log')]
    (args.output / 'result.json').write_text(json.dumps(result, indent=2), encoding='utf-8')
    print(json.dumps({key: result[key] for key in ('state', 'exit_code', 'input_integrity')}))
    return 0 if result['state'] == 'PASS' and result['input_integrity'] == 'MATCH' else 1


if __name__ == '__main__':
    raise SystemExit(main())
