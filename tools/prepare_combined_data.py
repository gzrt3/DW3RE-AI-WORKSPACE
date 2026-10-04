"""Stage both verified extracted releases, preserving version identities."""
import argparse
import hashlib
import json
from pathlib import Path
import shutil


def identity(path):
    before = path.stat()
    sha = hashlib.sha256()
    with path.open('rb') as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b''):
            sha.update(block)
    after = path.stat()
    if (before.st_size, before.st_mtime_ns) != (after.st_size, after.st_mtime_ns):
        raise ValueError(f'changing file {path}')
    return after.st_size, sha.hexdigest()


def prepare(audit, output):
    audit_bytes = audit.read_bytes()
    document = json.loads(audit_bytes)
    games = document['games']
    if sorted(game['game'] for game in games) != ['dw3', 'dw3xl']:
        raise ValueError('exactly DW3 and DW3XL source records are required')
    planned = []
    for game in games:
        source_root = Path(game['dump']).resolve(strict=True)
        if output.resolve().is_relative_to(source_root) or source_root.is_relative_to(output.resolve()):
            raise ValueError('output overlaps original release root')
        variant = 'dw3_base' if game['game'] == 'dw3' else 'dw3_xl'
        seen = set()
        for entry in game['files']:
            name = entry['path']
            if '\\' in name or ':' in name or any(part in ('', '.', '..') for part in name.split('/')):
                raise ValueError('invalid resource path')
            if name.casefold() in seen:
                raise ValueError('ambiguous resource identity')
            seen.add(name.casefold())
            if entry['dump_status'] != 'MATCH' or entry['dump_sha256'] != entry['sha256'] or entry['dump_bytes'] != entry['bytes']:
                raise ValueError('source is not verified against original ISO extent')
            source = (source_root / name).resolve(strict=True)
            if not source.is_relative_to(source_root):
                raise ValueError('source escapes release root')
            target = output / variant / name
            if not target.resolve().is_relative_to(output.resolve()):
                raise ValueError('destination escapes data root')
            if source == target.resolve():
                raise ValueError('output overlaps original source')
            expected = (entry['bytes'], entry['sha256'])
            if target.exists() and (not target.is_file() or identity(target) != expected):
                raise ValueError(f'refusing to replace differing file {target}')
            if identity(source) != expected:
                raise ValueError(f'source changed since original audit: {source}')
            planned.append((source, target, expected, game['game'], name))
    records = [{'game': version, 'path': name, 'relative_path': target.relative_to(output).as_posix(),
                'bytes': expected[0], 'sha256': expected[1]}
               for _, target, expected, version, name in planned]
    manifest = {'schema_version': 1, 'audit': str(audit.resolve()),
                'audit_sha256': hashlib.sha256(audit_bytes).hexdigest(), 'files': records,
                'routing': 'Version-specific roots only. Shared precedence and game-table integration not implemented.',
                'game_parity': 'NOT_COMPLETE'}
    manifest_path = output / 'combined_data_manifest.json'
    content = json.dumps(manifest, indent=2) + '\n'
    if manifest_path.exists() and manifest_path.read_text(encoding='utf-8') != content:
        raise ValueError('refusing to replace differing manifest')
    required = sum(expected[0] for _, target, expected, _, _ in planned if not target.exists())
    ancestor = output.resolve()
    while not ancestor.exists():
        ancestor = ancestor.parent
    if shutil.disk_usage(ancestor).free < required + 256 * 1024 * 1024:
        raise ValueError('insufficient space; preserve 256 MB reserve')
    for source, target, expected, version, name in planned:
        target.parent.mkdir(parents=True, exist_ok=True)
        if not target.exists():
            with source.open('rb') as src, target.open('xb') as dst:
                shutil.copyfileobj(src, dst, 1024 * 1024)
        if identity(target) != expected or identity(source) != expected:
            raise ValueError(f'copy verification failed: {target}')
    if manifest_path.exists():
        if manifest_path.read_text(encoding='utf-8') != content:
            raise ValueError('refusing to replace differing manifest')
    else:
        with manifest_path.open('x', encoding='utf-8') as stream:
            stream.write(content)
    return {'files': len(records), 'copied_or_verified_bytes': sum(row['bytes'] for row in records),
            'manifest': str(manifest_path)}


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--audit', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    print(json.dumps(prepare(args.audit, args.output)))
