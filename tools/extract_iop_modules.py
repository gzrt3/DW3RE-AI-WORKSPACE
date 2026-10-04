"""Copy selected original IOPRP modules into data without changing originals."""
import argparse
import hashlib
import json
from pathlib import Path
import struct


def parse_romdir(image):
    if len(image) < 16 or image[:10].split(b'\0')[0] != b'RESET':
        raise ValueError('IOPRP must begin with a RESET ROMDIR entry')
    entries = {}
    offset = 0
    for position in range(0, min(len(image), 65536), 16):
        if position + 16 > len(image):
            break
        raw_name = image[position:position + 10]
        if raw_name[0] == 0:
            if 'ROMDIR' not in entries:
                raise ValueError('missing ROMDIR')
            directory = entries['ROMDIR']
            if directory['offset'] != 0 or directory['size'] < position + 16:
                raise ValueError('invalid ROMDIR extent')
            return entries
        name = raw_name.split(b'\0')[0].decode('ascii')
        if not name or any(c not in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_' for c in name):
            raise ValueError('unsafe ROMDIR name')
        if name in entries:
            raise ValueError('duplicate ROMDIR name')
        size = struct.unpack_from('<I', image, position + 12)[0]
        if offset > len(image) or size > len(image) - offset:
            raise ValueError('module exceeds image')
        entries[name] = {'offset': offset, 'size': size}
        offset += (size + 15) & ~15
    raise ValueError('unterminated ROMDIR')


def digest(data):
    return hashlib.sha256(data).hexdigest()


def extract(source, output, names):
    image = source.read_bytes()
    entries = parse_romdir(image)
    selected = []
    for name in names:
        if name not in entries:
            raise ValueError(f'missing module {name}')
        entry = entries[name]
        data = image[entry['offset']:entry['offset'] + entry['size']]
        if len(data) < 52 or data[:7] != b'\x7fELF\x01\x01\x01' or struct.unpack_from('<H', data, 18)[0] != 8:
            raise ValueError(f'{name} is not a MIPS ELF32 module')
        target = output / (name + '.IRX')
        if target.exists() and target.read_bytes() != data:
            raise ValueError(f'refusing to replace differing file {target}')
        selected.append((target, data, {'name': name, **entry, 'sha256': digest(data)}))
    report = {'source': str(source.resolve()), 'source_sha256': digest(image),
              'modules': [entry for _, _, entry in selected]}
    manifest = output / 'module_manifest.json'
    content = json.dumps(report, indent=2) + '\n'
    if manifest.exists() and manifest.read_text(encoding='utf-8') != content:
        raise ValueError('refusing to replace differing provenance manifest')
    output.mkdir(parents=True, exist_ok=True)
    for target, data, _ in selected:
        if not target.exists():
            with target.open('xb') as handle:
                handle.write(data)
    if not manifest.exists():
        with manifest.open('x', encoding='utf-8') as handle:
            handle.write(content)
    if digest(source.read_bytes()) != report['source_sha256']:
        raise ValueError('source changed during extraction')
    return report


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--modules', nargs='+', default=['CDVDFSV'])
    args = parser.parse_args()
    print(json.dumps(extract(args.source, args.output, args.modules), indent=2))
