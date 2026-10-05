import json
from pathlib import Path
import shutil
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import verify_antislop as antislop


class AntislopIntegrityTests(unittest.TestCase):
    def setUp(self):
        directory = tempfile.TemporaryDirectory()
        self.addCleanup(directory.cleanup)
        self.root = Path(directory.name)
        for name in [*antislop.FILES, 'third_party/antislop.json']:
            target = self.root / name
            target.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(antislop.ROOT / name, target)

    def test_installed_files_match_without_certifying_gameplay(self):
        result = antislop.verify(self.root)
        self.assertEqual(result['state'], 'PINNED_FILES_MATCH')
        self.assertFalse(result['gameplay_verified'])

    def test_changed_rule_and_missing_license_fail(self):
        path = self.root / '.agents/skills/antislop/SKILL.md'
        raw = path.read_bytes()
        path.write_bytes(raw + b'\nAltered rule\n')
        with self.assertRaisesRegex(ValueError, 'integrity mismatch'):
            antislop.verify(self.root)
        path.write_bytes(raw)
        (self.root / '.agents/skills/antislop-code/LICENSE').unlink()
        with self.assertRaises(FileNotFoundError):
            antislop.verify(self.root)

    def test_unreviewed_revision_fails(self):
        path = self.root / 'third_party/antislop.json'
        manifest = json.loads(path.read_text())
        manifest['revision'] = '0' * 40
        path.write_text(json.dumps(manifest))
        with self.assertRaisesRegex(ValueError, 'provenance'):
            antislop.verify(self.root)

    def test_unexpected_path_and_duplicate_record_fail(self):
        path = self.root / 'third_party/antislop.json'
        manifest = json.loads(path.read_text())
        for name in ('../private.txt', manifest['files'][1]['path']):
            manifest['files'][0]['path'] = name
            path.write_text(json.dumps(manifest))
            with self.assertRaisesRegex(ValueError, 'file set'):
                antislop.verify(self.root)


if __name__ == '__main__':
    unittest.main()
