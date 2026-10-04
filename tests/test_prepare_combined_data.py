import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

spec = importlib.util.spec_from_file_location('prepare_combined_data', Path(__file__).resolve().parents[1] / 'tools/prepare_combined_data.py')
tool = importlib.util.module_from_spec(spec)
spec.loader.exec_module(tool)


class CombinedDataTests(unittest.TestCase):
    def test_variants_idempotence_and_source_changes(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            games = []
            for version, content in [('dw3', b'base content'), ('dw3xl', b'XL variant')]:
                source = root/version
                source.mkdir()
                file = source/'SHARED.BNS'
                file.write_bytes(content)
                size, sha = tool.identity(file)
                games.append({'game': version, 'dump': str(source), 'files': [{'path': 'SHARED.BNS', 'bytes': size, 'dump_bytes': size, 'sha256': sha, 'dump_sha256': sha, 'dump_status': 'MATCH'}]})
            audit = root/'audit.json'
            audit.write_text(json.dumps({'games': games}))
            output = root/'data'
            self.assertEqual(tool.prepare(audit, output)['files'], 2)
            self.assertEqual(tool.prepare(audit, output)['files'], 2)
            self.assertEqual((output/'dw3_base/SHARED.BNS').read_bytes(), b'base content')
            self.assertEqual((output/'dw3_xl/SHARED.BNS').read_bytes(), b'XL variant')
            (output/'dw3_base/SHARED.BNS').write_bytes(b'user file')
            with self.assertRaisesRegex(ValueError, 'replace'):
                tool.prepare(audit, output)
            self.assertEqual((output/'dw3_base/SHARED.BNS').read_bytes(), b'user file')
            (root/'dw3/SHARED.BNS').write_bytes(b'changed original fixture')
            with self.assertRaisesRegex(ValueError, 'changed'):
                tool.prepare(audit, root/'newdata')
            self.assertFalse((root/'newdata').exists())


if __name__ == '__main__':
    unittest.main()
