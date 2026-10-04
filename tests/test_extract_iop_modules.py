import importlib.util
from pathlib import Path
import struct
import tempfile
import unittest

spec = importlib.util.spec_from_file_location('extract_iop_modules', Path(__file__).resolve().parents[1] / 'tools/extract_iop_modules.py')
extractor = importlib.util.module_from_spec(spec)
spec.loader.exec_module(extractor)


def fixture():
    image = bytearray(128)
    for index, (name, size) in enumerate((('RESET', 0), ('ROMDIR', 64), ('CDVDFSV', 64))):
        image[index * 16:index * 16 + len(name)] = name.encode()
        struct.pack_into('<I', image, index * 16 + 12, size)
    image[64:71] = b'\x7fELF\x01\x01\x01'
    struct.pack_into('<H', image, 82, 8)
    return image


class ExtractionTests(unittest.TestCase):
    def test_exact_copy_idempotence_and_refuse_replacement(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            source = root / 'IOPRP.IMG'
            image = fixture()
            source.write_bytes(image)
            output = root / 'data'
            first = extractor.extract(source, output, ['CDVDFSV'])
            self.assertEqual((output / 'CDVDFSV.IRX').read_bytes(), image[64:])
            self.assertEqual(extractor.extract(source, output, ['CDVDFSV']), first)
            self.assertEqual(source.read_bytes(), image)
            (output / 'CDVDFSV.IRX').write_bytes(b'existing user file')
            with self.assertRaises(ValueError):
                extractor.extract(source, output, ['CDVDFSV'])
            self.assertEqual((output / 'CDVDFSV.IRX').read_bytes(), b'existing user file')

    def test_reject_extent_name_and_missing_module(self):
        for kind in ('extent', 'name', 'terminator'):
            image = fixture()
            if kind == 'extent':
                struct.pack_into('<I', image, 44, 1000)
            elif kind == 'name':
                image[32:35] = b'../'
            else:
                image[48:53] = b'EXTRA'
            with self.subTest(kind=kind), self.assertRaises(ValueError):
                extractor.parse_romdir(image)
        with tempfile.TemporaryDirectory() as directory:
            source = Path(directory) / 'IOPRP.IMG'
            source.write_bytes(fixture())
            output = Path(directory) / 'data'
            with self.assertRaises(ValueError):
                extractor.extract(source, output, ['LOADFILE'])
            self.assertFalse(output.exists())


if __name__ == '__main__':
    unittest.main()
