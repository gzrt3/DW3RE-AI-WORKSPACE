"""Compare native19AA4C against actual original1B7F0C checkpoint, including12 MMIO words."""
import argparse
from datetime import datetime, timezone
import json
from pathlib import Path
import struct
import subprocess
import sys
import zipfile

import original_graphics_checkpoint_replay as shared
import pcsx2_capture

ROOT = shared.ROOT
MAGIC = b'DW3DMA01'
HARDWARE = (
    ('GIF_CHCR', 0x1000A000), ('GIF_MADR', 0x1000A010), ('GIF_QWC', 0x1000A020),
    ('GIF_TADR', 0x1000A030), ('GIF_ASR0', 0x1000A040), ('GIF_ASR1', 0x1000A050),
    ('D_CTRL', 0x1000E000), ('D_STAT', 0x1000E010), ('D_PCR', 0x1000E020),
    ('GIF_CTRL', 0x10003000), ('GIF_MODE', 0x10003010), ('GIF_STAT', 0x10003020),
)
LIMITATIONS = [
    'One original DMA-submit entry/return interval is compared; no caller or scheduler loop executes.',
    'Only the listed12 EE hardware words are restored through test-only raw owner backing and compared; no generic hardware import.',
    'Pending DMA/GIF queues, GS internal registers/VRAM, VU, SPU2, IOP, FPU, TLB/cache and timing are not restored or compared.',
    'Captured input must have no running GIF STR, GIF pause/mask or FIFO occupancy; unsupported input is rejected.',
    'Actual native GIF arbiter packets are recorded and forwarded to native GS, whose initial state is not the captured original GS state.',
    'Canonical pending-branch internals remain unverified; decoded GPR128/control,32MB RAM and hardware differences are never suppressed.',
    'A subset match does not establish whole-system parity, rendered output, other paths or final acceptance criteria.',
]


def hardware(path):
    with zipfile.ZipFile(path) as state:
        entries = state.namelist()
        if len(entries) != len(set(entries)):
            raise ValueError('DUPLICATE_SAVE_ENTRIES')
        info = state.getinfo('eeHwRegs.bin')
        if info.file_size != 65536:
            raise ValueError('EE_HW_SIZE_MISMATCH')
        raw = state.read(info)
    return {name: struct.unpack_from('<I', raw, address - 0x10000000)[0] for name, address in HARDWARE}


def encode_hardware(values):
    return MAGIC + b''.join(struct.pack('<II', address, values[name]) for name, address in HARDWARE)


def decode_hardware(packet):
    if len(packet) != 8 + 8 * len(HARDWARE) or packet[:8] != MAGIC:
        raise ValueError('NATIVE_HW_PACKET_INVALID')
    values = {}
    for (name, expected), (address, value) in zip(HARDWARE, struct.iter_unpack('<II', packet[8:]), strict=True):
        if address != expected:
            raise ValueError('NATIVE_HW_ADDRESS_ALLOWLIST_MISMATCH')
        values[name] = value
    return values


def compare_hardware(native, original):
    return [{'name': name, 'address': f'0x{address:08x}', 'native': f'0x{native[name]:08x}',
             'original': f'0x{original[name]:08x}'} for name, address in HARDWARE if native[name] != original[name]]


def packet_records(data):
    records = []
    position = 0
    while position < len(data):
        if len(data) - position < 4:
            raise ValueError('TRUNCATED_GIF_PACKET_LENGTH')
        size = struct.unpack_from('<I', data, position)[0]
        position += 4
        if not size or size > len(data) - position:
            raise ValueError('TRUNCATED_OR_EMPTY_GIF_PACKET')
        payload = data[position:position + size]
        records.append({'bytes': size, 'hex': payload.hex()})
        position += size
    return records


def sources():
    paths = [Path(__file__), ROOT / 'tools/build_original_dma_checkpoint_replay.py',
             ROOT / 'tools/original_graphics_checkpoint_replay.py', ROOT / 'tools/pcsx2_capture.py',
             ROOT / 'tests/original_dma_checkpoint_replay/CMakeLists.txt',
             ROOT / 'tests/original_dma_checkpoint_replay/dma_tail_replay.cpp',
             ROOT / 'src/dma_init_continuation.cpp', ROOT / 'cmake/ExistingRuntime.cmake',
             ROOT / 'tools/PS2Recomp/ps2xRuntime/include/ps2_runtime.h',
             ROOT / 'tools/PS2Recomp/ps2xRuntime/include/ps2_runtime_macros.h',
             ROOT / 'tools/PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp',
             ROOT / 'tools/PS2Recomp/ps2xRuntime/src/lib/ps2_memory.cpp']
    paths.extend(sorted((ROOT / 'src/recovered').glob('*.inc')))
    return [shared.identity(path) for path in paths]


def run(args):
    args.output = args.output.resolve()
    args.output.mkdir(parents=True, exist_ok=False)
    before = sources()
    inputs_before = [shared.identity(path) for path in (args.entry, args.return_state, args.exe)]
    entry, entry_ram = pcsx2_capture.decode(args.entry)
    original, original_ram = pcsx2_capture.decode(args.return_state)
    entry_hw, original_hw = hardware(args.entry), hardware(args.return_state)
    for label, value in (('entry.decoded.json', entry), ('return.decoded.json', original),
                         ('entry.hardware.json', entry_hw), ('return.hardware.json', original_hw)):
        shared.save_new(args.output / label, value)
    if int(entry['pc'], 16) != 0x19AA4C or int(original['pc'], 16) != 0x1B7F0C:
        raise ValueError('CHECKPOINT_PC_MISMATCH')
    for checkpoint in (entry, original):
        if checkpoint['delay_slot'] is not False or checkpoint['native_state']['pcsx2_branch_raw'] != 0:
            raise ValueError('CHECKPOINT_PENDING_BRANCH_UNSUPPORTED')
    if entry_hw['GIF_CHCR'] & 0x100 or entry_hw['GIF_CTRL'] & 8 or entry_hw['GIF_MODE'] & 1 or entry_hw['GIF_STAT'] & 0x1F000000:
        raise ValueError('CAPTURED_PENDING_OR_MASKED_GIF_UNSUPPORTED')
    for name, data in (('entry.ram.bin', entry_ram), ('entry.regs.bin', shared.encode_registers(entry)),
                       ('entry.hw.bin', encode_hardware(entry_hw))):
        with (args.output / name).open('xb') as stream:
            stream.write(data)
    command = [str(args.exe.resolve())] + [str(args.output / name) for name in
               ('entry.ram.bin', 'entry.regs.bin', 'entry.hw.bin', 'native.ram.bin', 'native.regs.bin', 'native.hw.bin', 'gif.packets.bin')]
    shared.save_new(args.output / 'launch.json', {'command': command, 'cwd': str(ROOT),
                    'started_utc': datetime.now(timezone.utc).isoformat(), 'sources': before, 'inputs': inputs_before})
    completed = subprocess.run(command, cwd=ROOT, capture_output=True, timeout=30, check=False)
    for name, data in (('stdout.bin', completed.stdout), ('stderr.bin', completed.stderr)):
        with (args.output / name).open('xb') as stream:
            stream.write(data)
    after = sources()
    inputs_after = [shared.identity(path) for path in (args.entry, args.return_state, args.exe)]
    shared.save_new(args.output / 'source-after.json', after)
    result = {'finished_utc': datetime.now(timezone.utc).isoformat(), 'native_exit_code': completed.returncode,
              'scope': 'Original19AA4C to1B7F0C GPR128/control/RAM plus12 hardware words',
              'inputs_unchanged': inputs_before == inputs_after, 'sources_unchanged': before == after,
              'limitations': LIMITATIONS, 'acceptance_gates_closed': 0}
    manifest = json.loads(args.build_manifest.read_text(encoding='utf-8-sig'))
    live = {item['path']: item['sha256'] for item in before}
    result['build_manifest'] = shared.identity(args.build_manifest)
    result['build_identity_match'] = (manifest['success'] and manifest['binary']['sha256'] == shared.identity(args.exe)['sha256']
        and all(live.get(item['path']) == item['sha256'] for item in manifest['source_after']))
    if completed.returncode == 0:
        native = shared.decode_registers((args.output / 'native.regs.bin').read_bytes())
        native_hw = decode_hardware((args.output / 'native.hw.bin').read_bytes())
        shared.save_new(args.output / 'native.decoded.json', native)
        shared.save_new(args.output / 'native.hardware.json', native_hw)
        result['register_differences'] = shared.compare_registers(native, original)
        result['hardware_differences'] = compare_hardware(native_hw, original_hw)
        result['hardware_words_compared'] = len(HARDWARE)
        result['register_scope'] = {'gpr128': 32, 'decoded_integer_control_fields': 10}
        result['ram'] = shared.compare_ram((args.output / 'native.ram.bin').read_bytes(), original_ram, args.output / 'ram.diff.bin')
        result['actual_native_gif_packets'] = packet_records((args.output / 'gif.packets.bin').read_bytes())
        result['match'] = (not result['register_differences'] and not result['hardware_differences']
                           and not result['ram']['mismatching_bytes'] and result['inputs_unchanged']
                           and result['sources_unchanged'] and result['build_identity_match'])
    else:
        result.update(match=False, comparison='NOT COMPLETE: native replay process failed; raw output preserved')
    shared.save_new(args.output / 'result.json', result)
    print(json.dumps(result, indent=2))
    return 0 if result['match'] else 1


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ('entry', 'return-state', 'exe', 'output', 'build-manifest'):
        parser.add_argument('--' + name, type=Path, required=True)
    args = parser.parse_args()
    try:
        return run(args)
    except (OSError, ValueError, subprocess.TimeoutExpired) as error:
        if args.output.is_dir() and not (args.output / 'error.json').exists():
            shared.save_new(args.output / 'error.json', {'error': str(error), 'type': type(error).__name__, 'comparison': 'NOT COMPLETE'})
        print(f'FAIL {type(error).__name__}: {error}', file=sys.stderr)
        return 2


if __name__ == '__main__':
    raise SystemExit(main())
