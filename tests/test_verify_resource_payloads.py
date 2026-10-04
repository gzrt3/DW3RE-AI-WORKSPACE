import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

spec = importlib.util.spec_from_file_location('verify_resource_payloads', Path(__file__).resolve().parents[1] / 'tools/verify_resource_payloads.py')
tool = importlib.util.module_from_spec(spec)
spec.loader.exec_module(tool)


class ResourceComparisonTests(unittest.TestCase):
    def test_version_collision_missing_extra_and_mismatch(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            reference = root/'reference.json'
            native = root/'native.tsv'
            reference.write_text(json.dumps({'games': [
                {'game': 'dw3', 'resources': [{'rid': 0, 'bytes': 4, 'sha256': 'a'*64}]},
                {'game': 'dw3xl', 'resources': [{'rid': 0, 'bytes': 5, 'sha256': 'b'*64}]}]}))
            correct = 'dw3\t0\t4\t'+'a'*64+'\ndw3xl\t0\t5\t'+'b'*64+'\n'
            native.write_text(correct)
            self.assertEqual(tool.compare(reference, native)['status'], 'MATCH')
            native.write_text(correct.replace('dw3xl\t0\t5\t'+'b'*64, 'dw3xl\t0\t4\t'+'a'*64))
            self.assertEqual(tool.compare(reference, native)['changed'], [('dw3xl', 0)])
            native.write_text(correct.splitlines()[0]+'\n')
            self.assertEqual(tool.compare(reference, native)['missing'], [('dw3xl', 0)])
            native.write_text(correct+'dw3xl\t1\t0\t'+'c'*64+'\n')
            self.assertEqual(tool.compare(reference, native)['extra'], [('dw3xl', 1)])
            native.write_text(correct+correct.splitlines()[0]+'\n')
            with self.assertRaisesRegex(ValueError, 'duplicate'):
                tool.compare(reference, native)
            native.write_text('dw3\t0\t4\tinvalid\n')
            with self.assertRaisesRegex(ValueError, 'SHA256'):
                tool.compare(reference, native)


if __name__ == '__main__':
    unittest.main()
