"""Import both ISO9660 discs locally. This prepares data, not a playable port."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import struct

SECTOR = 2048
EDITIONS = {'dw3': ('SLUS_202.77', 'LINKDATA.BNS'), 'dw3xl': ('SLUS_206.17', 'LINKDAT2.BNS')}


def digest(path):
    before = path.stat()
    sha = hashlib.sha256()
    with path.open('rb') as source:
        for block in iter(lambda: source.read(1024 * 1024), b''):
            sha.update(block)
    after = path.stat()
    if (before.st_size, before.st_mtime_ns) != (after.st_size, after.st_mtime_ns):
        raise ValueError('input_changed')
    return sha.hexdigest()


def both(data, offset, width):
    little = int.from_bytes(data[offset:offset+width], 'little')
    big = int.from_bytes(data[offset+width:offset+width*2], 'big')
    if little != big:
        raise ValueError('inconsistent_iso_endianness')
    return little


class Disc:
    def __init__(self, path, edition):
        self.path = Path(path).resolve(strict=True)
        self.edition = edition
        self.size = self.path.stat().st_size
        if self.size % SECTOR:
            raise ValueError('only_2048_byte_sector_iso_supported')
        self.files = []
        self.seen = set()
        self.visited = set()
        with self.path.open('rb') as stream:
            primary = None
            terminated = False
            for index in range(16, 80):
                descriptor = self.read(stream, index*SECTOR, SECTOR)
                if descriptor[1:6] != b'CD001' or descriptor[6] != 1:
                    raise ValueError('invalid_iso_descriptor')
                if descriptor[0] == 1:
                    if primary is not None:
                        raise ValueError('duplicate_primary_descriptor')
                    primary = descriptor
                if descriptor[0] == 255:
                    terminated = True
                    break
            if primary is None or not terminated or both(primary, 128, 2) != SECTOR:
                raise ValueError('unsupported_iso_volume')
            self.volume_bytes = both(primary, 80, 4) * SECTOR
            if self.volume_bytes > self.size or self.volume_bytes < 18*SECTOR:
                raise ValueError('truncated_iso_volume')
            root = self.record(primary[156:190], root=True)
            if not root['directory']:
                raise ValueError('root_not_directory')
            self.walk(stream, root, '', 0)
            names = {row['path'] for row in self.files}
            elf, archive = EDITIONS[edition]
            if not {elf, archive, 'SYSTEM.CNF'} <= names:
                raise ValueError('wrong_or_incomplete_edition')
            if any(other[0] in names for key, other in EDITIONS.items() if key != edition):
                raise ValueError('ambiguous_disc_edition')
            config = next(row for row in self.files if row['path'] == 'SYSTEM.CNF')
            if config['bytes'] > 65536:
                raise ValueError('oversized_boot_config')
            text = self.read(stream, config['offset'], config['bytes']).decode('ascii', errors='strict')
            boot = re.findall(r'(?im)^\s*BOOT2\s*=\s*cdrom0:\\([^\s;]+);1\s*$', text)
            if len(boot) != 1 or boot[0].upper() != elf:
                raise ValueError('boot_identity_mismatch')
        self.sha256 = digest(self.path)

    def read(self, stream, offset, count):
        limit = getattr(self, 'volume_bytes', self.size)
        if offset < 0 or count < 0 or offset+count > limit:
            raise ValueError('iso_extent_out_of_bounds')
        stream.seek(offset)
        result = stream.read(count)
        if len(result) != count:
            raise ValueError('short_iso_read')
        return result

    def record(self, data, root=False):
        if len(data) < 34 or data[0] != len(data) or data[1] != 0:
            raise ValueError('invalid_or_extended_record')
        name_size = data[32]
        if 33+name_size > len(data) or not name_size:
            raise ValueError('invalid_name_length')
        flags = data[25]
        if flags & ~3 or data[26] or data[27] or both(data, 28, 2) != 1:
            raise ValueError('unsupported_multi_extent_or_interleave')
        raw = data[33:33+name_size]
        if raw in (b'\0', b'\1'):
            name = None
        else:
            name = raw.decode('ascii', errors='strict')
            if not re.fullmatch(r'[A-Z0-9_.-]+(?:;1)?', name) or name in ('.', '..'):
                raise ValueError('unsafe_iso_name')
            name = name.removesuffix(';1')
            if name.endswith('.') or name.startswith('.') or name.split('.')[0] in {'CON', 'PRN', 'AUX', 'NUL', *(f'COM{i}' for i in range(1,10)), *(f'LPT{i}' for i in range(1,10))}:
                raise ValueError('unsupported_host_name')
        offset, size = both(data, 2, 4)*SECTOR, both(data, 10, 4)
        if offset+size > self.volume_bytes:
            raise ValueError('iso_extent_out_of_bounds')
        return {'name': name, 'offset': offset, 'bytes': size, 'directory': bool(flags & 2)}

    def walk(self, stream, row, prefix, depth):
        identity = (row['offset'], row['bytes'])
        if identity in self.visited or depth > 16 or row['bytes'] > 8*1024*1024 or len(self.visited) >= 8192:
            raise ValueError('cyclic_or_oversized_directory')
        self.visited.add(identity)
        data = self.read(stream, row['offset'], row['bytes'])
        pos = 0
        while pos < len(data):
            length = data[pos]
            if not length:
                pos = (pos//SECTOR+1)*SECTOR
                continue
            if pos+length > len(data) or pos//SECTOR != (pos+length-1)//SECTOR:
                raise ValueError('record_crosses_sector')
            entry = self.record(data[pos:pos+length])
            pos += length
            if entry['name'] is None:
                continue
            name = prefix + entry['name']
            if name.casefold() in self.seen or len(self.seen) >= 100000:
                raise ValueError('duplicate_or_excessive_entries')
            self.seen.add(name.casefold())
            if entry['directory']:
                self.walk(stream, entry, name+'/', depth+1)
            else:
                self.files.append({'path': name, 'offset': entry['offset'], 'bytes': entry['bytes']})


def prepare(base, xl, output):
    discs = [Disc(base, 'dw3'), Disc(xl, 'dw3xl')]
    output = Path(output).resolve()
    if output.exists() or any(d.path.is_relative_to(output) for d in discs):
        raise ValueError('choose_new_output_outside_originals')
    ancestor = output.parent
    while not ancestor.exists():
        ancestor = ancestor.parent
    required = sum(row['bytes'] for d in discs for row in d.files)
    if shutil.disk_usage(ancestor).free < required + 256*1024*1024:
        raise ValueError('insufficient_space')
    output.mkdir(parents=True, exist_ok=False)
    receipt = {'schema': 1, 'status': 'DATA_PREPARED_NOT_PLAYABLE', 'mixjoy': 'UNRESOLVED', 'games': []}
    for disc in discs:
        files = []
        root = output / disc.edition
        root.mkdir()
        with disc.path.open('rb') as source:
            for row in disc.files:
                target = root / row['path']
                if not target.resolve().is_relative_to(root.resolve()):
                    raise ValueError('destination_escape')
                target.parent.mkdir(parents=True, exist_ok=True)
                sha = hashlib.sha256()
                source.seek(row['offset'])
                remaining = row['bytes']
                with target.open('xb') as dst:
                    while remaining:
                        block = source.read(min(1024*1024, remaining))
                        if not block:
                            raise ValueError('short_iso_read')
                        dst.write(block)
                        sha.update(block)
                        remaining -= len(block)
                    dst.flush()
                    os.fsync(dst.fileno())
                if digest(target) != sha.hexdigest():
                    raise ValueError('extraction_verification_failed')
                files.append({'path': row['path'], 'bytes': row['bytes'], 'sha256': sha.hexdigest(), 'iso_offset': row['offset']})
        if digest(disc.path) != disc.sha256:
            raise ValueError('input_changed')
        receipt['games'].append({'edition': disc.edition, 'executable': EDITIONS[disc.edition][0], 'iso_sha256': disc.sha256,
                                 'identity_basis': 'BOOT2 and required ISO9660 paths; not a canonical full-disc hash database', 'files': files})
    with (output/'import_receipt.json').open('x', encoding='utf-8') as target:
        json.dump(receipt, target, indent=2)
    return {'status': receipt['status'], 'mixjoy': receipt['mixjoy'], 'files': sum(len(d.files) for d in discs), 'extracted_bytes': required}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--dw3', type=Path, required=True)
    parser.add_argument('--xl', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    try:
        print(json.dumps(prepare(args.dw3, args.xl, args.output)))
    except (ValueError, OSError, UnicodeError) as error:
        # Keep partial output for diagnosis; never write a successful receipt on failure.
        print(json.dumps({'status': 'IMPORT_FAILED', 'error_type': type(error).__name__}))
        return 1
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
