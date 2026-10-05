"""Verify the pinned rule files offline; this is not a game-quality verdict."""
from __future__ import annotations

import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
REVISION = '388cbe3b6c37d5175b9f460015bb092ef9e34894'
REPOSITORY = 'https://github.com/miqdadbadjuber/anti-slop'
FILES = {
    '.agents/skills/antislop/SKILL.md': 'skills/antislop/SKILL.md',
    '.agents/skills/antislop/VERSION': 'skills/antislop/VERSION',
    '.agents/skills/antislop/LICENSE': 'LICENSE',
    '.agents/skills/antislop-code/SKILL.md': 'skills/antislop-code/SKILL.md',
    '.agents/skills/antislop-code/LICENSE': 'LICENSE',
}


def verify(root=ROOT):
    manifest = json.loads((root / 'third_party/antislop.json').read_text(encoding='utf-8'))
    if (manifest['revision'] != REVISION or manifest['repository'] != REPOSITORY
            or manifest['license'] != 'MIT' or manifest['version'] != '3.2.20'):
        raise ValueError('Unexpected anti-slop provenance; review the update')
    records = manifest['files']
    if len(records) != len(FILES) or {f['path']: f['source'] for f in records} != FILES:
        raise ValueError('Unexpected anti-slop file set')
    for record in records:
        path = root / record['path']
        if path.resolve() != root.resolve() / record['path']:
            raise ValueError('Linked anti-slop file: ' + record['path'])
        raw = path.read_bytes()
        if len(raw) != record['bytes'] or hashlib.sha256(raw).hexdigest() != record['sha256']:
            raise ValueError('Anti-slop integrity mismatch: ' + record['path'])
    return {'state': 'PINNED_FILES_MATCH', 'revision': REVISION,
            'files_verified': len(records), 'gameplay_verified': False,
            'scope': 'Rule-file identity only; no runtime or visual-parity certification.'}


if __name__ == '__main__':
    try:
        print(json.dumps(verify(), indent=2))
    except (OSError, ValueError, KeyError, TypeError) as error:
        print(json.dumps({'state': 'REVIEW_REQUIRED', 'error': str(error),
                          'gameplay_verified': False}))
        raise SystemExit(1)
