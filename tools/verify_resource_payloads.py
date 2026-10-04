"""Compare native versioned resource SHA256 observations with original evidence."""
import argparse
import hashlib
import json
from pathlib import Path


def read_native(path):
    rows = {}
    for line in path.read_text(encoding='utf-8').splitlines():
        parts = line.split('\t')
        if len(parts) != 4:
            raise ValueError('native observation must have four TSV columns')
        version, rid, size, digest = parts
        if version not in ('dw3', 'dw3xl') or not rid.isdecimal() or not size.isdecimal():
            raise ValueError('invalid native resource identity')
        if len(digest) != 64 or any(c not in '0123456789abcdef' for c in digest):
            raise ValueError('native payload SHA256 must be lowercase hex')
        key = (version, int(rid))
        if key in rows:
            raise ValueError('duplicate native resource identity')
        rows[key] = (int(size), digest)
    return rows


def compare(reference, native):
    document = json.loads(reference.read_text(encoding='utf-8'))
    expected = {}
    versions = []
    for game in document['games']:
        version = game['game']
        if version not in ('dw3', 'dw3xl') or version in versions:
            raise ValueError('reference must have one entry per original game')
        versions.append(version)
        for entry in game['resources']:
            if type(entry['rid']) is not int or type(entry['bytes']) is not int or entry['rid'] < 0 or entry['bytes'] < 0:
                raise ValueError('invalid reference resource identity')
            key = (version, entry['rid'])
            if key in expected:
                raise ValueError('duplicate reference resource')
            digest = entry['sha256']
            if not isinstance(digest, str) or len(digest) != 64 or any(c not in '0123456789abcdef' for c in digest):
                raise ValueError('invalid reference SHA256')
            expected[key] = (entry['bytes'], digest)
    if sorted(versions) != ['dw3', 'dw3xl']:
        raise ValueError('both source games required')
    observed = read_native(native)
    missing = sorted(expected.keys() - observed.keys())
    extra = sorted(observed.keys() - expected.keys())
    changed = sorted(key for key in expected.keys() & observed.keys() if expected[key] != observed[key])
    return {'status': 'MATCH' if not (missing or extra or changed) else 'DIFFERENT',
            'expected_resources': len(expected), 'observed_resources': len(observed),
            'missing': missing, 'extra': extra, 'changed': changed,
            'reference_sha256': hashlib.sha256(reference.read_bytes()).hexdigest(),
            'native_sha256': hashlib.sha256(native.read_bytes()).hexdigest(),
            'scope': 'Payload bytes and versioned resource identity only; gameplay parity not assessed.'}


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--reference', type=Path, required=True)
    parser.add_argument('--native', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    result = compare(args.reference, args.native)
    with args.output.open('x', encoding='utf-8') as stream:
        json.dump(result, stream, indent=2)
    print(result['status'], result['observed_resources'])
    raise SystemExit(0 if result['status'] == 'MATCH' else 1)
