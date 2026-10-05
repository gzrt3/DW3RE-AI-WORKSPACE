from pathlib import Path
import struct
import sys
import tempfile
import unittest
import zipfile

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import original_dma_checkpoint_replay as dma


class OriginalDmaReplayContracts(unittest.TestCase):
    def test_exact_hardware_subset_roundtrip_and_madr_stat_difference_preservation(self):
        original = {name: index for index, (name, _) in enumerate(dma.HARDWARE)}
        self.assertEqual(dma.decode_hardware(dma.encode_hardware(original)), original)
        native = dict(original)
        native['GIF_MADR'] = 0x1FFFB90
        native['GIF_STAT'] = 0x2000000
        self.assertEqual([item['name'] for item in dma.compare_hardware(native, original)], ['GIF_MADR', 'GIF_STAT'])

    def test_hardware_rejects_truncated_packet_and_any_changed_address(self):
        packet = dma.encode_hardware({name: 0 for name, _ in dma.HARDWARE})
        for candidate in (packet[:-1], packet[:8] + struct.pack('<I', 0x1000B000) + packet[12:]):
            with self.assertRaises(ValueError):
                dma.decode_hardware(candidate)

    def test_savestate_hardware_size_and_allowlist_offsets(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / 'original.p2s'
            raw = bytearray(65536)
            for index, (_, address) in enumerate(dma.HARDWARE):
                struct.pack_into('<I', raw, address - 0x10000000, index + 1)
            with zipfile.ZipFile(path, 'w') as archive:
                archive.writestr('eeHwRegs.bin', raw)
            self.assertEqual(dma.hardware(path), {name: index + 1 for index, (name, _) in enumerate(dma.HARDWARE)})
            invalid = Path(directory) / 'invalid.p2s'
            with zipfile.ZipFile(invalid, 'w') as archive:
                archive.writestr('eeHwRegs.bin', raw[:-1])
            with self.assertRaises(ValueError):
                dma.hardware(invalid)

    def test_actual_payload_record_decoder_preserves_bytes_and_rejects_incomplete(self):
        payload = bytes(range(32))
        self.assertEqual(dma.packet_records(struct.pack('<I', 32) + payload), [{'bytes': 32, 'hex': payload.hex()}])
        for candidate in (b'\1', struct.pack('<I', 32) + payload[:-1], struct.pack('<I', 0)):
            with self.assertRaises(ValueError):
                dma.packet_records(candidate)


if __name__ == '__main__':
    unittest.main()
