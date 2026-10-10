"""Validate a local, uncompressed v2.8.2 GS dump; emit no game payloads."""
import argparse
import hashlib
import json
import struct
from pathlib import Path


def inspect(data):
    def need(offset, size):
        if offset < 0 or size < 0 or offset + size > len(data):
            raise ValueError('Truncated GS dump')

    def u32(offset):
        need(offset, 4)
        return struct.unpack_from('<I', data, offset)[0]

    if len(data) > 256 * 1024 * 1024 or u32(0) != 0xffffffff:
        raise ValueError('Unsupported GS dump')
    header = u32(4)
    if not 36 <= header <= 16 * 1024 * 1024:
        raise ValueError('Invalid header extent')
    need(8, header)
    version, frozen, serial_offset, serial_bytes, _, width, height, image_offset, image_bytes = struct.unpack_from('<9I', data, 8)
    if version != 9 or frozen < 4:
        raise ValueError('Unsupported freeze version or extent')
    for offset, size in ((serial_offset, serial_bytes), (image_offset, image_bytes)):
        if size and (offset < 36 or offset + size > header):
            raise ValueError('Header member exceeds extent')
    if width * height * 4 != image_bytes:
        raise ValueError('Screenshot extent mismatch')
    pos = 8 + header
    need(pos, frozen + 8192)
    if u32(pos) != version:
        raise ValueError('Header and freeze versions disagree')
    field = 0 if u32(pos + frozen + 0x1000) & 0x2000 else 1
    pos += frozen + 8192
    counts = [0, 0, 0, 0]
    first_vsync_offset = None
    last_kind = None
    while pos < len(data):
        last_kind = data[pos]
        pos += 1
        if last_kind == 0:
            need(pos, 5)
            path, size = data[pos], u32(pos + 1)
            if path != 3 or not size or size % 16 or size > 64 * 1024 * 1024:
                raise ValueError('Expected ordered path-3 whole-qword transfer')
            pos += 5
            need(pos, size)
            pos += size
        elif last_kind == 1:
            need(pos, 1)
            if data[pos] > 1 or data[pos] != field:
                raise ValueError('VSync field disagrees with CSR')
            if first_vsync_offset is None:
                first_vsync_offset = pos
            pos += 1
        elif last_kind == 2:
            size = u32(pos)
            if not 0 < size <= 1024 * 1024:
                raise ValueError('FIFO qword extent exceeds bound')
            pos += 4
        elif last_kind == 3:
            need(pos, 8192)
            field = 0 if u32(pos + 0x1000) & 0x2000 else 1
            pos += 8192
        else:
            raise ValueError('Unknown GS event')
        counts[last_kind] += 1
    return {'schema': 1, 'sha256': hashlib.sha256(data).hexdigest(), 'bytes': len(data),
            'freeze_version': version, 'freeze_bytes': frozen,
            'transfer_records': counts[0], 'vsync_events': counts[1],
            'fifo_records': counts[2], 'register_records': counts[3],
            'packet_csr_field_mismatches': 0, 'last_event_kind': last_kind,
            'first_vsync_offset': first_vsync_offset}


def inspect_file(path):
    if path.stat().st_size > 256 * 1024 * 1024:
        raise ValueError('GS dump exceeds bound')
    return inspect(path.read_bytes())


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('capture', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    result = inspect_file(args.capture)
    with args.output.open('x', encoding='utf-8') as stream:
        json.dump(result, stream, indent=2)
    print(json.dumps(result))
