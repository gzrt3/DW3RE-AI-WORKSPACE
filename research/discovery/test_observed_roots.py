"""Negative contracts for metadata gates; synthetic observations are not parity."""
import unittest
from observed_roots import boundary, observe, verify_pins


REPORT='''CB:owner_at_entry=NONE
CB:instruction=00235cc0,bytes=4,stores=0,terminal=false,delay_depth=0
CB:instruction=00235cc4,bytes=4,stores=1,terminal=false,delay_depth=0
CB:instruction=00235cc8,bytes=4,stores=1,terminal=false,delay_depth=0
CB:instruction=00235ccc,bytes=4,stores=0,terminal=true,delay_depth=1
CB:instruction=00235cd0,bytes=4,stores=0,terminal=false,delay_depth=0
CB:counts=outside_flows:0
CB:report_complete=true
'''
EVENT='[missing-target] IndirectCall source=0x1a73c0 target=0x235cc0 pc=0x235cc0 ra=0x1a73c8 sp=0x1ffbfc0 gp=0x2d8170'


class Gates(unittest.TestCase):
    def test_modified_input_rejected(self):
        with self.assertRaises(ValueError):verify_pins({'elf':'a'},{'elf':{'sha256':'b'}})

    def test_missing_pin_rejected(self):
        with self.assertRaises(ValueError):verify_pins({}, {'elf':{'sha256':'a'}})

    def test_pin_identity(self):
        verify_pins({'elf':'a'},{'elf':{'sha256':'a'}})

    def test_extent_includes_delay_excludes_padding(self):
        rows,end=boundary(REPORT,0x235cc0)
        self.assertEqual(end,0x235cd4)
        self.assertEqual(sum(r[2] for r in rows),2)

    def test_call_labels_and_full_return(self):
        self.assertEqual(observe(EVENT)[0]['ra'],0x1a73c8)

    def test_conflicting_duplicated_target_rejected(self):
        with self.assertRaises(ValueError):observe(EVENT.replace('pc=0x235cc0','pc=0x235cd0'))

    def test_bad_return_rejected(self):
        with self.assertRaises(ValueError):observe(EVENT.replace('ra=0x1a73c8','ra=0x235cc0'))

    def test_unobserved_static_edge_rejected(self):
        with self.assertRaises(ValueError):observe(EVENT.replace('IndirectCall','DirectCall'))

    def test_missing_delay_rejected(self):
        with self.assertRaises(ValueError):boundary(REPORT.replace('CB:instruction=00235cd0,bytes=4,stores=0,terminal=false,delay_depth=0\n',''),0x235cc0)

    def test_nested_control_flow_rejected(self):
        with self.assertRaises(ValueError):boundary(REPORT.replace('00235cc4,bytes=4,stores=1,terminal=false,delay_depth=0','00235cc4,bytes=4,stores=1,terminal=false,delay_depth=1'),0x235cc0)

    def test_missing_completion_rejected(self):
        with self.assertRaises(ValueError):boundary(REPORT.replace('CB:report_complete=true',''),0x235cc0)

    def test_external_flow_rejected(self):
        with self.assertRaises(ValueError):boundary(REPORT.replace('outside_flows:0','outside_flows:1'),0x235cc0)

    def test_overlap_owner_rejected(self):
        with self.assertRaises(ValueError):boundary(REPORT.replace('owner_at_entry=NONE','owner_at_entry=00235cb0'),0x235cc0)

if __name__=='__main__':unittest.main()
