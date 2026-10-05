"""Identify original boot-movie candidates and their mounted copies; never play them.

Names and ELF string references are static evidence, not proof of boot order or use.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import struct


def sha256(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def elf_references(elf, names):
    data = elf.read_bytes()
    if data[:6] != b'\x7fELF\x01\x01':
        raise ValueError('Expected original ELF32 little-endian image')
    phoff = struct.unpack_from('<I', data, 28)[0]
    entsize, count = struct.unpack_from('<HH', data, 42)
    segments = []
    for i in range(count):
        kind, offset, vaddr, _, filesz = struct.unpack_from('<IIIII', data, phoff + entsize * i)
        if kind == 1:
            segments.append((offset, vaddr, filesz))
    result = []
    for name in names:
        cursor = 0
        while (at := data.find(name.encode('ascii'), cursor)) >= 0:
            result.append({'name': name, 'file_offset': hex(at), 'virtual_addresses': [
                hex(vaddr + at - offset) for offset, vaddr, size in segments if offset <= at < offset + size]})
            cursor = at + 1
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original-root', required=True, type=Path)
    parser.add_argument('--combined-root', required=True, type=Path)
    parser.add_argument('--output', required=True, type=Path)
    args = parser.parse_args()
    names = ['KOEILOGO.PSS', 'OMEGA.PSS', 'OPENING.PSS']
    report = {'scope': 'Static candidate identity only; boot order, decoding, loops and Press Start unverified',
              'variants': [], 'all_mounted_candidates_match': True}
    for original, mounted in [('dw3_ps2', 'dw3_base'), ('dw3xl_ps2', 'dw3_xl')]:
        root = args.original_root / original
        cnf = (root / 'SYSTEM.CNF').read_text(encoding='ascii')
        boot = re.search(r'^BOOT2\s*=\s*cdrom0:\\([A-Z0-9_.]+);1\s*$', cnf, re.MULTILINE)
        if not boot:
            raise ValueError('Missing or unsupported BOOT2 in original SYSTEM.CNF')
        elf_name = boot.group(1)
        elf = root / elf_name
        row = {'variant': mounted, 'elf': elf_name, 'elf_sha256': sha256(elf),
               'elf_candidate_name_references': elf_references(elf, names), 'candidates': []}
        for movie in sorted(p for p in root.rglob('*.PSS') if p.name in names):
            relative = movie.relative_to(root)
            copy = args.combined_root / mounted / relative
            original_hash = sha256(movie)
            copy_hash = sha256(copy) if copy.is_file() else None
            match = original_hash == copy_hash
            row['candidates'].append({'path': relative.as_posix(), 'bytes': movie.stat().st_size,
                'original_sha256': original_hash, 'mounted_sha256': copy_hash, 'match': match})
            report['all_mounted_candidates_match'] &= match
        if not row['candidates']:
            report['all_mounted_candidates_match'] = False
        report['variants'].append(row)
    # Exclusive output preserves historical failed inventories as well as passing ones.
    with args.output.open('x', encoding='utf-8') as output:
        json.dump(report, output, ensure_ascii=False, indent=2)
        output.write('\n')
    print(json.dumps({'variants': len(report['variants']),
                      'candidates': sum(len(v['candidates']) for v in report['variants']),
                      'all_mounted_candidates_match': report['all_mounted_candidates_match']}))
    return 0 if report['all_mounted_candidates_match'] else 1


if __name__ == '__main__':
    raise SystemExit(main())
