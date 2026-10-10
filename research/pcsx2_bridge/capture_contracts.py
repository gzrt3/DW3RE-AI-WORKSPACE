"""Adversarial public-format fixtures, independent of any game capture."""
import struct
import unittest
from validate_capture import inspect


def fixture(events=b'\x01\x01'):
    # GSDump.h: packed nine-u32 header; v9 freeze prefix; 8192 GS register bytes.
    return bytearray(struct.pack('<11I', 0xffffffff, 36, 9, 4, 36, 0, 0, 0, 0, 36, 0)
                     + struct.pack('<I', 9) + bytes(8192) + events)


class CaptureContracts(unittest.TestCase):
    def test_valid_and_repeatable(self):
        data = fixture()
        self.assertEqual(inspect(data), inspect(data))
        self.assertEqual(inspect(data)['vsync_events'], 1)

    def test_field_disagrees(self):
        with self.assertRaisesRegex(ValueError, 'field disagrees'):
            inspect(fixture(b'\x01\x00'))

    def test_field_outside_domain(self):
        with self.assertRaisesRegex(ValueError, 'field disagrees'):
            inspect(fixture(b'\x01\x02'))

    def test_truncated_registers(self):
        with self.assertRaisesRegex(ValueError, 'Truncated'):
            inspect(fixture()[:-3])

    def test_truncated_transfer(self):
        with self.assertRaisesRegex(ValueError, 'Truncated'):
            inspect(fixture(b'\x00\x03' + struct.pack('<I', 16) + bytes(15)))

    def test_unaligned_transfer(self):
        with self.assertRaisesRegex(ValueError, 'whole-qword'):
            inspect(fixture(b'\x00\x03' + struct.pack('<I', 15) + bytes(15)))

    def test_unarbitrated_path(self):
        with self.assertRaisesRegex(ValueError, 'path-3'):
            inspect(fixture(b'\x00\x01' + struct.pack('<I', 16) + bytes(16)))

    def test_unbounded_fifo(self):
        with self.assertRaisesRegex(ValueError, 'FIFO'):
            inspect(fixture(b'\x02' + struct.pack('<I', 1024 * 1024 + 1)))

    def test_inconsistent_freeze(self):
        data = fixture()
        struct.pack_into('<I', data, 44, 8)
        with self.assertRaisesRegex(ValueError, 'versions disagree'):
            inspect(data)

    def test_header_member_outside_extent(self):
        data = fixture()
        struct.pack_into('<I', data, 20, 37)
        struct.pack_into('<I', data, 24, 1)
        with self.assertRaisesRegex(ValueError, 'member exceeds'):
            inspect(data)

    def test_unknown_event(self):
        with self.assertRaisesRegex(ValueError, 'Unknown'):
            inspect(fixture(b'\x04'))


if __name__ == '__main__':
    unittest.main()
