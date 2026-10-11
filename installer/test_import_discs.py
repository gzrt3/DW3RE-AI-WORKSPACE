"""Adversarial importer tests with synthetic ISO9660 media only."""
import json
from pathlib import Path
import tempfile
import unittest
from import_discs import Disc, prepare, SECTOR


def dual(value, width):
    return value.to_bytes(width, 'little') + value.to_bytes(width, 'big')


def record(name, sector, size, flags=0):
    length = 33+len(name)+(1 if len(name)%2 == 0 else 0)
    row = bytearray(length)
    row[0] = length
    row[2:10] = dual(sector, 4)
    row[10:18] = dual(size, 4)
    row[25] = flags
    row[28:32] = dual(1, 2)
    row[32] = len(name)
    row[33:33+len(name)] = name
    return row


def fixture(path, xl=False, mutation=None):
    elf, archive = ('SLUS_206.17', 'LINKDAT2.BNS') if xl else ('SLUS_202.77', 'LINKDATA.BNS')
    config = ('BOOT2 = cdrom0:\\'+elf+';1\r\nVER = 1.00\r\n').encode('ascii')
    media = bytearray(32*SECTOR)
    primary = bytearray(SECTOR)
    primary[:7] = b'\x01CD001\x01'
    primary[80:88] = dual(32, 4)
    primary[128:132] = dual(SECTOR, 2)
    primary[156:190] = record(b'\0', 20, SECTOR, 2)
    media[16*SECTOR:17*SECTOR] = primary
    media[17*SECTOR:17*SECTOR+7] = b'\xffCD001\x01'
    directory = b''.join([record(b'\0',20,SECTOR,2), record(b'\1',20,SECTOR,2),
                          record(b'SYSTEM.CNF;1',21,len(config)), record((elf+';1').encode(),22,8),
                          record((archive+';1').encode(),23,16)])
    media[20*SECTOR:20*SECTOR+len(directory)] = directory
    media[21*SECTOR:21*SECTOR+len(config)] = config
    media[22*SECTOR:22*SECTOR+8] = b'fixture!'
    media[23*SECTOR:23*SECTOR+16] = bytes(range(16))
    if mutation:
        mutation(media)
    path.write_bytes(media)
    return path


class ImportTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.root = Path(self.temp.name)
        self.base = fixture(self.root/'base.iso')
        self.xl = fixture(self.root/'xl.iso', True)

    def tearDown(self):
        self.temp.cleanup()

    def reject(self, mutate, edition='dw3'):
        fixture(self.base, mutation=mutate)
        with self.assertRaises((ValueError, UnicodeError)):
            Disc(self.base, edition)

    def test_extract_and_verify_both_editions(self):
        result = prepare(self.base, self.xl, self.root/'output')
        self.assertEqual(result['files'], 6)
        receipt = json.loads((self.root/'output/import_receipt.json').read_text())
        self.assertEqual(receipt['status'], 'DATA_PREPARED_NOT_PLAYABLE')
        self.assertEqual(receipt['mixjoy'], 'UNRESOLVED')
        self.assertEqual((self.root/'output/dw3/SLUS_202.77').read_bytes(), b'fixture!')
        self.assertEqual([g['edition'] for g in receipt['games']], ['dw3', 'dw3xl'])

    def test_originals_unchanged(self):
        before = self.base.read_bytes(), self.xl.read_bytes()
        prepare(self.base, self.xl, self.root/'out')
        self.assertEqual(before, (self.base.read_bytes(), self.xl.read_bytes()))

    def test_existing_destination_preserved(self):
        out = self.root/'out'
        out.mkdir()
        (out/'keep.txt').write_text('keep')
        with self.assertRaises(ValueError):
            prepare(self.base, self.xl, out)
        self.assertEqual((out/'keep.txt').read_text(), 'keep')

    def test_swapped_disc_roles_rejected_before_output(self):
        with self.assertRaises(ValueError):
            prepare(self.xl, self.base, self.root/'out')
        self.assertFalse((self.root/'out').exists())

    def test_boot_identity_mismatch(self):
        self.reject(lambda m: m.__setitem__(slice(21*SECTOR,21*SECTOR+35), b'BOOT2 = cdrom0:\\SLUS_999.99;1\r\n'.ljust(35,b' ')))

    def test_unsupported_raw_sector_image(self):
        self.base.write_bytes(self.base.read_bytes()+b'x')
        with self.assertRaises(ValueError):
            Disc(self.base,'dw3')

    def test_inconsistent_endian_volume(self):
        self.reject(lambda m: m.__setitem__(16*SECTOR+87, 31))

    def test_truncated_volume(self):
        self.base.write_bytes(self.base.read_bytes()[:-SECTOR])
        with self.assertRaises(ValueError):
            Disc(self.base,'dw3')

    def test_invalid_descriptor(self):
        self.reject(lambda m: m.__setitem__(16*SECTOR+1, 0))

    def test_duplicate_directory_name(self):
        extra = record(b'SYSTEM.CNF;1',21,20)
        offset = 20*SECTOR+68+len(record(b'SYSTEM.CNF;1',21,20))
        fixture(self.base, mutation=lambda m: m.__setitem__(slice(offset,offset+len(extra)), extra))
        with self.assertRaisesRegex(ValueError, 'duplicate_or_excessive_entries'):
            Disc(self.base, 'dw3')

    def test_path_traversal(self):
        bad = record(b'../ESCAPE;1',23,16)
        self.reject(lambda m: m.__setitem__(slice(20*SECTOR+68,20*SECTOR+68+len(bad)),bad))

    def test_cycle(self):
        bad = record(b'CYCLE',20,SECTOR,2)
        self.reject(lambda m: m.__setitem__(slice(20*SECTOR+68,20*SECTOR+68+len(bad)),bad))

    def test_multi_extent_rejected(self):
        self.reject(lambda m: m.__setitem__(20*SECTOR+68+25,128))

    def test_extent_outside_volume(self):
        self.reject(lambda m: m.__setitem__(slice(20*SECTOR+68+2,20*SECTOR+68+10),dual(33,4)))


if __name__ == '__main__':
    unittest.main()
