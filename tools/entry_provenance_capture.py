"""Additive paused-PC observations for the entry provenance experiment.

Uses the existing restricted PINE interface; never runs, loads or writes guest
state. Each observation retains the original save and the entire EE RAM.
"""
import argparse
import json
from pathlib import Path
import shutil
import time
import zipfile

import pcsx2_capture as pc
import retail_compare as rc


def capture(root, label, expected_pc):
    root = Path(root).resolve()
    launch = json.loads((root / 'launch.json').read_text())
    if Path(launch['effective_data_directory']).resolve() != root / 'session/PCSX2':
        raise ValueError('SESSION_DIRECTORY_MISMATCH')
    if not label.replace('_', '').isalnum():
        raise ValueError('INVALID_LABEL')
    out = root / 'landmarks' / label
    out.mkdir(parents=True, exist_ok=False)
    identity = pc.identity()
    pc.paused()
    if b'2.8.2' not in pc.rpc(b'\x08'):
        raise ValueError('VERSION_MISMATCH')
    saves = root / 'session/PCSX2/sstates'
    before = {p: (p.stat().st_mtime_ns, p.stat().st_size) for p in saves.glob('*.p2s')}
    pc.rpc(b'\x09\x00')
    deadline = time.monotonic() + 30
    while time.monotonic() < deadline:
        changed = [p for p in saves.glob('*.p2s')
                   if (p.stat().st_mtime_ns, p.stat().st_size) != before.get(p)]
        if len(changed) == 1:
            try:
                pc.decode(changed[0])
                original = out / 'original.p2s'
                with changed[0].open('rb') as src, original.open('xb') as dst:
                    shutil.copyfileobj(src, dst)
                regs, ram = pc.decode(original)
                pc.paused()
                pc.write_new(out / 'registers.json', regs)
                with (out / 'eeMemory.bin').open('xb') as f:
                    f.write(ram)
                result = dict(identity, label=label, expected_pc=f'0x{expected_pc:08x}',
                              observed_pc=regs['pc'], paused=True,
                              timestamp_utc=pc.h.now(), launch_sha256=rc.hash_file(root/'launch.json'),
                              status='MATCH' if int(regs['pc'], 16) == expected_pc else 'REJECTED_PC',
                              files={p.name:rc.hash_file(p) for p in out.iterdir() if p.is_file()})
                result['boot_method'] = 'isolated retail ELF; Computer Use debugger action; paused PINE save'
                pc.write_new(out / 'manifest.json', result)
                print(json.dumps(dict(path=str(out), **result)))
                if result['status'] != 'MATCH':
                    raise ValueError('UNEXPECTED_PC_EVIDENCE_PRESERVED')
                return result
            except (zipfile.BadZipFile, PermissionError):
                pass
        time.sleep(.2)
    raise TimeoutError('PAUSED_SAVE_TIMEOUT')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('root', type=Path)
    parser.add_argument('label')
    parser.add_argument('pc', type=lambda s:int(s, 0))
    args = parser.parse_args()
    capture(args.root, args.label, args.pc)
