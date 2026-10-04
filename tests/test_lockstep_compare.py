"""Synthetic comparisons; these fixtures never certify retail behavior."""
import copy
import json
from pathlib import Path
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]/'tools'))
import lockstep_compare as lc
import verify_entry as ve
from test_retail_compare import state


def capture(count=3):
    events = []
    for index in range(count):
        pc = f'0x{0x100008 + index*4:08x}'
        events.append(dict(sequence=index, pc=pc, hit=1, label=f'point{index}',
                           state=lc.flatten(state(pc)), memory=[]))
    return dict(metadata=dict(elf_sha256='0'*64), events=events)


class LockstepTests(unittest.TestCase):
    def test_initial_mismatch_does_not_hide_later_new_difference(self):
        retail = capture()
        host = copy.deepcopy(retail)
        for event in host['events']:
            event['state']['LO'] = '0x000000000000003c'
        host['events'][2]['state']['r2.low64'] = '0x0000000002000000'
        report = lc.compare(retail, host)
        self.assertEqual(report['first_difference']['classification'], 'INITIAL_STATE_DIFFERENCE')
        new = report['first_new_difference']
        self.assertEqual(new['sequence'], 2)
        self.assertEqual(new['previous_checkpoint']['sequence'], 1)
        self.assertEqual(new['differences'][0]['field'], 'r2.low64')

    def test_unknown_then_different_is_not_claimed_new(self):
        retail = capture(2)
        host = copy.deepcopy(retail)
        retail['events'][0]['state']['HI'] = None
        host['events'][1]['state']['HI'] = '0x0000000000000001'
        self.assertIsNone(lc.compare(retail, host)['first_new_difference'])

    def test_no_resync_on_repeated_or_missing_checkpoint(self):
        retail = capture()
        host = copy.deepcopy(retail)
        host['events'][1]['hit'] = 2
        report = lc.compare(retail, host)
        self.assertEqual(report['status'], 'TRACE_SEQUENCE_MISMATCH')
        self.assertEqual(len(report['checkpoints']), 1)
        host = copy.deepcopy(retail)
        host['events'].pop()
        self.assertEqual(lc.compare(retail, host)['sequence_error']['sequence'], 2)

    def test_missing_banks_never_pass_as_complete(self):
        report = lc.compare(capture(), capture())
        self.assertEqual(report['status'], 'INCOMPLETE_OBSERVATIONS')
        self.assertIn('fpu', report['checkpoints'][0]['unobserved_fields'])
        self.assertIn('vu1', report['checkpoints'][0]['unobserved_fields'])

    def test_float_bits_and_vector_lanes_are_compared_exactly(self):
        raw = state()
        raw['fpu'] = dict(f=['0x00000000']*32, acc='0x00000000', fcr31='0x00000000')
        raw['vu0'] = dict(vf=[['0x00000000']*4 for _ in range(32)],
                          vi=['0x00000000']*16, acc=['0x00000000']*4,
                          **{key:'0x00000000' for key in ('q','p','i','status','mac','clip')})
        retail = capture(1)
        retail['events'][0]['state'] = lc.flatten(raw)
        raw['fpu']['f'][0] = '0x80000000'
        raw['vu0']['vf'][31][3] = '0x7fc01234'
        host = capture(1)
        host['events'][0]['state'] = lc.flatten(raw)
        diffs = lc.compare(retail, host)['checkpoints'][0]['differences']
        self.assertEqual([item['field'] for item in diffs], ['fpu.f[0]', 'vu0.vf[31][3]'])

    def test_wrong_bank_width_and_branch_type_rejected(self):
        raw = state()
        raw['fpu'] = dict(f=['0x0']*32, acc='0x00000000', fcr31='0x00000000')
        with self.assertRaises(ValueError): lc.flatten(raw)
        raw = state()
        raw['delay_slot'] = 1
        with self.assertRaises(ValueError): lc.flatten(raw)

    def test_different_games_rejected(self):
        a, b = capture(), capture()
        b['metadata']['elf_sha256'] = '1'*64
        with self.assertRaisesRegex(ValueError, 'different ELF'): lc.compare(a, b)

    def test_memory_first_byte_across_chunk_boundary(self):
        with tempfile.TemporaryDirectory() as tmp:
            a, b = Path(tmp)/'a.bin', Path(tmp)/'b.bin'
            a.write_bytes(b'a'*65536+b'12')
            b.write_bytes(b'a'*65536+b'1X')
            self.assertEqual(lc.memory_difference(a,b), dict(offset=65537, retail='0x32', host='0x58'))

    def test_duplicate_keys_and_nan_rejected(self):
        for text in ('{"a":1,"a":2}', '{"a":NaN}'):
            with self.assertRaises(ValueError): lc.strict_json(text)

    def test_manifest_checks_hash_sequence_and_occurrence(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            registers = root/'registers.json'
            registers.write_text(json.dumps(state()))
            meta = dict(schema_version=1, origin='HOST', session='synthetic', scope='synthetic',
                        elf_sha256='0'*64, files={'registers.json':lc.legacy.hash_file(registers)},
                        checkpoints=[dict(sequence=0, hit=1, registers='registers.json')])
            manifest = root/'manifest.json'
            manifest.write_text(json.dumps(meta))
            self.assertEqual(len(lc.load_capture(manifest,'HOST')['events']),1)
            meta['checkpoints'][0]['hit'] = 2
            manifest.write_text(json.dumps(meta))
            with self.assertRaisesRegex(ValueError, 'occurrence'): lc.load_capture(manifest,'HOST')
            meta['checkpoints'][0]['hit'] = 1
            manifest.write_text(json.dumps(meta))
            registers.write_text('{}')
            with self.assertRaisesRegex(ValueError, 'hash mismatch'): lc.load_capture(manifest,'HOST')

    def test_boundary_return_is_reported_without_hiding_other_differences(self):
        retail = capture(2)
        retail['events'][0]['label'] = 'pre_syscall60'
        retail['events'][1]['label'] = 'post_syscall60'
        host = copy.deepcopy(retail)
        host['events'][1]['state']['r2.low64'] = '0x0000000002000000'
        report = lc.compare(retail,host)
        boundaries = ve.boundary_results(report)
        self.assertTrue(boundaries['SetupThread']['argument_registers_match'])
        self.assertFalse(boundaries['SetupThread']['v0_matches'])
        self.assertEqual(report['status'],'DIVERGENCE_OBSERVED')


if __name__ == '__main__':
    unittest.main()
