"""Synthetic fixtures in temporary directories; never retail evidence."""
import copy
import hashlib
import json
from pathlib import Path
import sys
import tempfile
import unittest
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
import retail_compare as r


def state(pc='0x00100008',hit=1):
    v={k:'0x'+'0'*w for k,w in r.SPECIAL.items()}
    v.update(pc=pc,hit=hit,gpr=[{'low64':'0x0000000000000000','high64':'0x0000000000000000'} for _ in range(32)],
             branch=None,delay_slot=None,absent={'branch':'synthetic unavailable','delay_slot':'synthetic unavailable'})
    return v


def capture():
    return {'snapshots':{'A':r.registers(state()),'B':r.registers(state('0x00100018',2))},
            'trace':[dict(pc=f'0x{0x100008+i*4:08x}',opcode='0x00000000',before=None,after=None,
                          branch_taken=None,delay_slot=i==10) for i in range(11)],'memory':{}}


class RetailComparisonTests(unittest.TestCase):
    def test_first_divergence_order_and_values(self):
        a=capture();b=copy.deepcopy(a)
        b['snapshots']['A']['r29.low64']='0x0000000000080000'
        b['trace'][2]['opcode']='0xffffffff'
        first=r.compare(a,b)['first_verifiable_divergence']
        self.assertEqual(first['observation'],'A.r29.low64')
        self.assertEqual(first['retail'],'0x0000000000000000')
        self.assertEqual(first['host'],'0x0000000000080000')
        self.assertIsNone(first['subsystem'])

    def test_missing_not_zero_and_not_full_equivalence(self):
        a=capture(); b=copy.deepcopy(a)
        b['snapshots']['A']['HI']=None
        result=r.compare(a,b)
        self.assertIsNone(result['first_verifiable_divergence'])
        self.assertIn('A.HI',result['unobserved_fields'])
        self.assertEqual(result['BOOT_CHAIN_STATUS'],'STOPPED_NOT_CLOSED')

    def test_width_and_missing_reason(self):
        s=state();s['gpr'][4]['high64']='0x0'
        with self.assertRaises(ValueError): r.registers(s)
        s=state();s['HI']=None
        with self.assertRaises(ValueError): r.registers(s)

    def test_first_memory_byte(self):
        a=capture();b=copy.deepcopy(a)
        a['memory'][('A',0x2d0580,4)]=b'abcd'
        b['memory'][('A',0x2d0580,4)]=b'abXd'
        first=r.compare(a,b)['first_verifiable_divergence']
        self.assertEqual(first['observation'],'A.memory@0x002d0582')

    def test_manifest_hash_hit_and_origin(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp);files={}
            for label,pc,hit in [('A','0x00100008',1),('B','0x00100018',2)]:
                name=f'snapshot_{label}/registers.json'; p=root/name;p.parent.mkdir()
                p.write_text(json.dumps(state(pc,hit)));files[name]=r.hash_file(p)
            p=root/'trace.jsonl';p.write_text('\n'.join(json.dumps(t) for t in capture()['trace']))
            files[p.name]=r.hash_file(p)
            meta={'origin':'PCSX2','elf_sha256':r.ELF_SHA256,'pcsx2_version':'SYNTHETIC_TEST_ONLY',
                  'exe_sha256':'0'*64,'boot_method':'SYNTHETIC_TEST_ONLY','files':files}
            (root/'manifest.json').write_text(json.dumps(meta))
            r.load_capture(root,'PCSX2')
            with self.assertRaises(ValueError): r.load_capture(root,'HOST')
            bad=state('0x00100018',1)
            p=root/'snapshot_B/registers.json';p.write_text(json.dumps(bad))
            with self.assertRaises(ValueError): r.load_capture(root,'PCSX2')
            meta['files']['snapshot_B/registers.json']=r.hash_file(p)
            (root/'manifest.json').write_text(json.dumps(meta))
            with self.assertRaisesRegex(ValueError,'PC/hit'): r.load_capture(root,'PCSX2')

    def test_path_escape_rejected(self):
        with self.assertRaises(ValueError): r.child(Path('capture'),'../elsewhere')


if __name__=='__main__':unittest.main()
