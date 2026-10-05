import copy
from pathlib import Path
import struct
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import original_graphics_checkpoint_replay as replay


def registers():
    result = {'gpr': [{'low64': f'0x{i:016x}', 'high64': f'0x{(1 << 63) + i:016x}'} for i in range(32)],
              'delay_slot': False}
    result.update({name: f'0x{index:016x}' for index, name in enumerate(replay.CONTROL64)})
    result.update({name: f'0x{index:08x}' for index, name in enumerate(replay.CONTROL32)})
    return result


class ReplayToolContracts(unittest.TestCase):
    def test_packet_round_trip_preserves_all_128_bit_lanes_and_decoded_control(self):
        original = registers()
        self.assertEqual(replay.decode_registers(replay.encode_registers(original)), original)

    def test_packet_rejects_truncation_magic_and_non_boolean_delay(self):
        packet = replay.encode_registers(registers())
        for candidate in (packet[:-1], b'BADMAGIC' + packet[8:], packet[:-4] + struct.pack('<I', 2)):
            with self.assertRaises(ValueError):
                replay.decode_registers(candidate)

    def test_all_register_divergences_are_reported_including_upper_lanes_and_delay(self):
        expected = registers()
        native = copy.deepcopy(expected)
        for register in native['gpr']:
            for lane in ('low64', 'high64'):
                register[lane] = f'0x{int(register[lane], 16) ^ 8:016x}'
        for name in (*replay.CONTROL64, *replay.CONTROL32):
            native[name] = f'0x{int(native[name], 16) ^ 8:x}'
        native['delay_slot'] = True
        self.assertEqual(len(replay.compare_registers(native, expected)), 74)

    def test_ram_compares_first_last_and_separated_bytes_and_preserves_each_difference(self):
        native = bytearray(replay.RAM_BYTES)
        original = bytearray(replay.RAM_BYTES)
        offsets = (0, 1, 0x3694E0, replay.RAM_BYTES - 1)
        for index, offset in enumerate(offsets, 1):
            native[offset] = index
            original[offset] = index + 4
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / 'diff.bin'
            result = replay.compare_ram(native, original, path)
            self.assertEqual(result['compared_bytes'], replay.RAM_BYTES)
            self.assertEqual(result['mismatching_bytes'], 4)
            self.assertEqual(result['ranges'], [{'start': '0x00000000', 'bytes': 2},
                             {'start': '0x003694e0', 'bytes': 1}, {'start': '0x01ffffff', 'bytes': 1}])
            self.assertEqual(list(struct.iter_unpack('<IBB', path.read_bytes())),
                             [(offset, i, i + 4) for i, offset in enumerate(offsets, 1)])

    def test_ram_size_mismatch_does_not_silently_compare_prefix(self):
        with tempfile.TemporaryDirectory() as directory:
            with self.assertRaises(ValueError):
                replay.compare_ram(b'\0', b'\0', Path(directory) / 'diff.bin')


if __name__ == '__main__':
    unittest.main()
