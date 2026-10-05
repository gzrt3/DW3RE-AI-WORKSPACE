"""Replay a supported native graphics tail from two real, pinned PCSX2 checkpoints.

This compares the decoded GPR128, integer/control subset and every EE RAM byte.
It does not restore or compare the emulator's scheduler, VU, GS, IOP or timing.
"""
import argparse
from datetime import datetime, timezone
import hashlib
import json
from pathlib import Path
import struct
import subprocess
import sys

import pcsx2_capture

ROOT = Path(__file__).resolve().parents[1]
MAGIC = b'DW3EER01'
RAM_BYTES = 32 * 1024 * 1024
CONTROL64 = ('HI', 'HI1', 'LO', 'LO1')
CONTROL32 = ('SA', 'pc', 'Status', 'Cause', 'EPC')
PACKET_BYTES = 576
ENTRY_RETURNS = {0x19A510: 0x180490, 0x1B8040: 0x1804A4, 0x1B7F84: 0x180328,
                 0x1B1004: 0x1A7068, 0x1B100C: 0x1A76D8}
LIMITATIONS = [
    'Only one recorded scalar/RAM interval to a return or callee entry is replayed; no caller, callee or scheduler runs.',
    'The pinned decoder exposes no canonical cross-host pending branch state; native branch_pc is diagnostic only.',
    'FPU, VU, GS/GIF, SPU2, IOP, DMA, TLB/cache, timer, instruction-count and external device state are not restored or compared.',
    'Runtime hardware state starts from its normal initialization. This interval uses captured EE RAM; no full savestate import is claimed.',
    'A matching pair does not prove other branch paths, gameplay, whole-system lockstep or any final acceptance criterion.',
]


def save_new(path, value):
    with path.open('x', encoding='utf-8') as stream:
        json.dump(value, stream, indent=2, ensure_ascii=False)
        stream.write('\n')


def identity(path):
    path = Path(path).resolve()
    digest = hashlib.sha256()
    with path.open('rb') as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b''):
            digest.update(block)
    return {'path': str(path), 'bytes': path.stat().st_size, 'sha256': digest.hexdigest()}


def encode_registers(registers):
    values = []
    if len(registers['gpr']) != 32:
        raise ValueError('GPR_COUNT_MISMATCH')
    for register in registers['gpr']:
        values.extend(int(register[lane], 16) for lane in ('low64', 'high64'))
    values.extend(int(registers[name], 16) for name in CONTROL64)
    controls = [int(registers[name], 16) for name in CONTROL32]
    if not isinstance(registers['delay_slot'], bool):
        raise ValueError('DELAY_FLAG_NOT_DECODED')
    packet = MAGIC + struct.pack('<68Q6I', *values, *controls, int(registers['delay_slot']))
    if len(packet) != PACKET_BYTES:
        raise ValueError('REGISTER_PACKET_SIZE_MISMATCH')
    return packet


def decode_registers(packet):
    if len(packet) != PACKET_BYTES or packet[:8] != MAGIC:
        raise ValueError('INVALID_NATIVE_REGISTER_PACKET')
    values = struct.unpack('<68Q6I', packet[8:])
    if values[-1] not in (0, 1):
        raise ValueError('INVALID_NATIVE_DELAY_FLAG')
    registers = {'gpr': [
        {'low64': f'0x{values[2 * i]:016x}', 'high64': f'0x{values[2 * i + 1]:016x}'}
        for i in range(32)
    ]}
    registers.update({name: f'0x{values[64 + i]:016x}' for i, name in enumerate(CONTROL64)})
    registers.update({name: f'0x{values[68 + i]:08x}' for i, name in enumerate(CONTROL32)})
    registers['delay_slot'] = bool(values[-1])
    return registers


def compare_registers(actual, expected):
    differences = []
    for index, (left, right) in enumerate(zip(actual['gpr'], expected['gpr'], strict=True)):
        for lane in ('low64', 'high64'):
            if int(left[lane], 16) != int(right[lane], 16):
                differences.append({'field': f'gpr[{index}].{lane}', 'native': left[lane], 'original': right[lane]})
    for name in (*CONTROL64, *CONTROL32):
        if int(actual[name], 16) != int(expected[name], 16):
            differences.append({'field': name, 'native': actual[name], 'original': expected[name]})
    if actual['delay_slot'] != expected['delay_slot']:
        differences.append({'field': 'delay_slot', 'native': actual['delay_slot'], 'original': expected['delay_slot']})
    return differences


def compare_ram(actual, expected, diff_path):
    if len(actual) != RAM_BYTES or len(expected) != RAM_BYTES:
        raise ValueError('COMPARISON_RAM_SIZE_MISMATCH')
    mismatches = 0
    ranges = []
    start = None
    with diff_path.open('xb') as stream:
        for offset, (left, right) in enumerate(zip(actual, expected, strict=True)):
            if left != right:
                if start is None:
                    start = offset
                stream.write(struct.pack('<IBB', offset, left, right))
                mismatches += 1
            elif start is not None:
                ranges.append({'start': f'0x{start:08x}', 'bytes': offset - start})
                start = None
        if start is not None:
            ranges.append({'start': f'0x{start:08x}', 'bytes': len(actual) - start})
    return {'compared_bytes': RAM_BYTES, 'mismatching_bytes': mismatches, 'ranges': ranges,
            'complete_diff': identity(diff_path), 'diff_record': 'little-endian uint32 address, uint8 native, uint8 original'}


def source_identities():
    paths = [Path(__file__).resolve(), ROOT / 'tools/pcsx2_capture.py',
             ROOT / 'tests/original_checkpoint_replay/graphics_tail_replay.cpp',
             ROOT / 'tests/original_checkpoint_replay/CMakeLists.txt',
             ROOT / 'tools/build_original_graphics_checkpoint_replay.py',
             ROOT / 'src/graphics_init_continuation.cpp', ROOT / 'cmake/ExistingRuntime.cmake',
             ROOT / 'src/waitsema_continuation.cpp', ROOT / 'include/fate/waitsema_continuation.hpp',
             ROOT / 'tools/PS2Recomp/ps2xRuntime/include/ps2_runtime.h',
             ROOT / 'tools/PS2Recomp/ps2xRuntime/include/ps2_runtime_macros.h',
             ROOT / 'tools/PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp',
             ROOT / 'tools/PS2Recomp/ps2xRuntime/src/lib/ps2_memory.cpp']
    paths.extend(sorted((ROOT / 'src/recovered').glob('*.inc')))
    return [identity(path) for path in paths]


def run(args):
    output = args.output.resolve()
    output.mkdir(parents=True, exist_ok=False)
    sources_before = source_identities()
    inputs_before = [identity(path) for path in (args.entry, args.return_state, args.exe)]
    entry, entry_ram = pcsx2_capture.decode(args.entry)
    original, original_ram = pcsx2_capture.decode(args.return_state)
    save_new(output / 'entry.decoded.json', entry)
    save_new(output / 'return.decoded.json', original)
    save_new(output / 'source-before.json', sources_before)
    save_new(output / 'inputs-before.json', inputs_before)
    entry_pc = int(entry['pc'], 16)
    if entry_pc not in ENTRY_RETURNS or int(original['pc'], 16) != ENTRY_RETURNS[entry_pc]:
        raise ValueError('CHECKPOINT_PC_MISMATCH')
    for checkpoint in (entry, original):
        if checkpoint['delay_slot'] is not False or checkpoint['native_state']['pcsx2_branch_raw'] != 0:
            raise ValueError('CHECKPOINT_PENDING_BRANCH_UNSUPPORTED')
    for name, data in (('entry.ram.bin', entry_ram), ('entry.regs.bin', encode_registers(entry))):
        with (output / name).open('xb') as stream:
            stream.write(data)
    command = [str(args.exe.resolve()), str(output / 'entry.ram.bin'), str(output / 'entry.regs.bin'),
               str(output / 'native.ram.bin'), str(output / 'native.regs.bin')]
    save_new(output / 'launch.json', {'started_utc': datetime.now(timezone.utc).isoformat(),
             'command': command, 'cwd': str(ROOT), 'sources': sources_before, 'inputs': inputs_before})
    completed = subprocess.run(command, cwd=ROOT, capture_output=True, timeout=30, check=False)
    for name, data in (('stdout.bin', completed.stdout), ('stderr.bin', completed.stderr)):
        with (output / name).open('xb') as stream:
            stream.write(data)
    sources_after = source_identities()
    inputs_after = [identity(path) for path in (args.entry, args.return_state, args.exe)]
    save_new(output / 'source-after.json', sources_after)
    save_new(output / 'inputs-after.json', inputs_after)
    result = {'scope': f'Native0x{entry_pc:08X} compared with actual PCSX2 entry/0x{ENTRY_RETURNS[entry_pc]:08X} return; one integer/RAM interval',
              'finished_utc': datetime.now(timezone.utc).isoformat(), 'native_exit_code': completed.returncode,
              'inputs_unchanged': inputs_before == inputs_after, 'sources_unchanged_during_run': sources_before == sources_after,
              'limitations': LIMITATIONS, 'acceptance_gates_closed': 0,
              'provenance_limit': 'Existing runtime libraries are linked read-only; run hashes are not a clean-build provenance claim.'}
    if args.build_manifest is not None:
        manifest = json.loads(args.build_manifest.read_text(encoding='utf-8-sig'))
        result['build_manifest'] = identity(args.build_manifest)
        build_sources = {item['path']: item['sha256'] for item in manifest['source_after']}
        live_sources = {item['path']: item['sha256'] for item in sources_before}
        result['build_source_match'] = all(live_sources.get(path) == digest for path, digest in build_sources.items())
        result['build_binary_match'] = identity(args.exe)['sha256'] == manifest['binary']['sha256']
        result['build_unchanged'] = (manifest['success'] and manifest['source_before'] == manifest['source_after']
                                    and manifest['library_before'] == manifest['library_after'])
    if completed.returncode == 0:
        native = decode_registers((output / 'native.regs.bin').read_bytes())
        save_new(output / 'native.decoded.json', native)
        result['register_differences'] = compare_registers(native, original)
        result['register_scope'] = {'gpr128': 32, 'decoded_integer_control_fields': 10}
        result['ram'] = compare_ram((output / 'native.ram.bin').read_bytes(), original_ram, output / 'ram.diff.bin')
        result['match'] = (not result['register_differences'] and result['ram']['mismatching_bytes'] == 0
                           and result['inputs_unchanged'] and result['sources_unchanged_during_run']
                           and result.get('build_source_match', True) and result.get('build_binary_match', True)
                           and result.get('build_unchanged', True))
    else:
        result['match'] = False
        result['comparison'] = 'NOT RUN: native replay failed; raw process output preserved'
    save_new(output / 'result.json', result)
    print(json.dumps(result, indent=2))
    return 0 if result['match'] else 1


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--entry', type=Path, required=True)
    parser.add_argument('--return-state', type=Path, required=True)
    parser.add_argument('--exe', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--build-manifest', type=Path)
    args = parser.parse_args()
    try:
        return run(args)
    except (OSError, ValueError, subprocess.TimeoutExpired) as error:
        if args.output.is_dir() and not (args.output / 'error.json').exists():
            save_new(args.output / 'error.json', {'error': str(error), 'type': type(error).__name__,
                     'comparison': 'NOT COMPLETE', 'limitations': LIMITATIONS})
        print(f'FAIL {type(error).__name__}: {error}', file=sys.stderr)
        return 2


if __name__ == '__main__':
    raise SystemExit(main())
