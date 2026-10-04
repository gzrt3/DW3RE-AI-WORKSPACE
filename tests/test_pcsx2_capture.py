"""Synthetic archives ONLY, in temp directories; never independent retail."""
import json
from pathlib import Path
import struct
import sys
import tempfile
import unittest
from unittest.mock import patch
import zipfile
import io
import shutil
from types import SimpleNamespace
from contextlib import redirect_stdout
sys.path.insert(0, str(Path(__file__).resolve().parents[1]/'tools'))
import pcsx2_capture as p


class CaptureTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.root = Path(self.tmp.name)

    def archive(self, pc=0x100008, version='v2.8.2', ram_size=0x2000000, duplicate=False):
        raw = bytearray(1200)
        for i in range(32): struct.pack_into('<QQ', raw, i*16, i+10, i+100)
        for offset,value in [(512,0x123456789abcdef0),(520,123),(528,456),(536,789)]: struct.pack_into('<Q', raw, offset,value)
        for offset,value in [(680,pc),(672,17),(676,1),(1100,1),(592,0x111),(596,0x222),(600,0x333)]: struct.pack_into('<I',raw,offset,value)
        tag=b'cpuRegs'+bytes(25)
        path=self.root/'synthetic.p2s'
        with zipfile.ZipFile(path,'w',compression=zipfile.ZIP_DEFLATED) as z:
            z.writestr('PCSX2 Savestate Version.id',struct.pack('<I',1)+version.encode()+bytes(20))
            z.writestr('PCSX2 Internal Structures.dat',b'prefix'+tag+raw+(tag if duplicate else b''))
            z.writestr('eeMemory.bin',bytes(ram_size))
        return path

    def test_decode_widths_and_offsets(self):
        regs,ram=p.decode(self.archive())
        self.assertEqual(regs['gpr'][31],{'low64':'0x0000000000000029','high64':'0x0000000000000083'})
        self.assertEqual(regs['HI'],'0x123456789abcdef0')
        self.assertEqual(regs['HI1'],'0x000000000000007b')
        self.assertEqual(regs['Status'],'0x00000111')
        self.assertEqual(regs['Cause'],'0x00000222')
        self.assertEqual(regs['EPC'],'0x00000333')
        self.assertEqual(len(ram),0x2000000)

    def test_wrong_version_rejected(self):
        with self.assertRaisesRegex(ValueError,'BUILD'): p.decode(self.archive(version='v2.3.261'))

    def test_wrong_ram_rejected(self):
        with self.assertRaisesRegex(ValueError,'RAM'): p.decode(self.archive(ram_size=100))

    def test_duplicate_register_tag_rejected(self):
        with self.assertRaisesRegex(ValueError,'TAG'): p.decode(self.archive(duplicate=True))

    def test_no_memory_write_load_or_control_rpc(self):
        for command in (b'\x04',b'\x05',b'\x06',b'\x07',b'\x0a',b'\xff'):
            with self.assertRaisesRegex(ValueError,'FORBIDDEN'): p.rpc(command)

    def test_running_emulator_rejected(self):
        with patch.object(p,'rpc',return_value=struct.pack('<I',0)):
            with self.assertRaisesRegex(ValueError,'PAUSED'):p.paused()

    def test_exact_order_first_and_second_hit(self):
        self.assertEqual(p.PCS[0],0x100008)
        self.assertEqual(p.PCS[4],0x100018)
        self.assertEqual(p.PCS[9],0x10002c)
        self.assertEqual(p.PCS[10],0x100018)
        self.assertEqual(len(p.PCS),11)

    def test_original_files_never_overwritten(self):
        path=self.root/'original.json'
        p.write_new(path,{'original':True})
        with self.assertRaises(FileExistsError): p.write_new(path,{'original':False})
        self.assertEqual(json.loads(path.read_text()),{'original':True})

    def test_second_f11_same_vm_state_rejected_with_both_pcs(self):
        # Reproduce observed point01/02: fresh archive, unchanged PC 0c,
        # different version padding, no instruction advancement.
        raw=self.root/'raw';raw.mkdir()
        first=self.archive(pc=0x10000c)
        shutil.copyfile(first,raw/'point_01.p2s')
        with zipfile.ZipFile(first) as z:contents={n:z.read(n) for n in z.namelist()}
        contents['PCSX2 Savestate Version.id']+=b'different metadata padding'
        rejected=raw/'point_02.p2s'
        with zipfile.ZipFile(rejected,'w',compression=zipfile.ZIP_DEFLATED) as z:
            for n,v in contents.items():z.writestr(n,v)
        p.write_new(raw/'point_01.json',{'pc':'0x0010000c'})
        before=p.r.hash_file(rejected)
        regs,ram=p.decode(rejected)
        self.assertEqual((regs,ram),p.decode(raw/'point_01.p2s'))
        output=io.StringIO()
        with redirect_stdout(output),self.assertRaisesRegex(ValueError,'WRONG_EE_PC_ORIGINAL_PRESERVED'):
            p.observation(self.root,rejected,regs,2,{'started_monotonic_ns':10})
        result=json.loads(output.getvalue())
        self.assertEqual(result['EXPECTED_PC'],'0x00100010')
        self.assertEqual(result['OBSERVED_PC'],'0x0010000c')
        self.assertEqual(result['reason'],'NO_PC_PROGRESS_OBSERVED')
        self.assertEqual(p.r.hash_file(rejected),before)
        self.assertFalse((raw/'point_02.json').exists())
        self.assertTrue((self.root/'observations/point_02.json').exists())

    def test_vm_log_requires_ordered_single_step_edge(self):
        resume='[1] (VMManager) Resuming...\n'
        pause='[2] (VMManager) Pausing...\n'
        self.assertFalse(p.pause_edge('Saving slot 0\n'))
        self.assertFalse(p.pause_edge(resume))
        self.assertTrue(p.pause_edge(resume+pause))
        for text in (pause,resume+resume,resume+pause+resume):
            with self.assertRaisesRegex(ValueError,'AMBIGUOUS'):p.pause_edge(text)

    def test_wait_step_no_action_times_out_without_acceptance(self):
        path=self.root/'emulog.txt';path.write_text('Saving slot 0\n')
        with patch.object(p.time,'monotonic',side_effect=[0,2]),patch.object(p.time,'sleep'),patch.object(p,'paused') as paused:
            with self.assertRaisesRegex(ValueError,'NO_COMPLETED_VM_STEP'):
                p.wait_step(path,0,1,SimpleNamespace(poll=lambda:None))
            paused.assert_not_called()

    def test_wait_step_checks_actual_paused_state(self):
        path=self.root/'emulog.txt';path.write_text('(VMManager) Resuming...\n(VMManager) Pausing...\n')
        with patch.object(p.time,'monotonic',return_value=0),patch.object(p,'paused',side_effect=ValueError('EMULATOR_MUST_BE_PAUSED')):
            with self.assertRaisesRegex(ValueError,'MUST_BE_PAUSED'):
                p.wait_step(path,0,1,SimpleNamespace(poll=lambda:None))

    def test_wait_step_detects_log_truncation(self):
        path=self.root/'emulog.txt';path.write_text('')
        with patch.object(p.time,'monotonic',return_value=0):
            with self.assertRaisesRegex(ValueError,'LOG_TRUNCATED'):
                p.wait_step(path,1,1,SimpleNamespace(poll=lambda:None))

    def test_relative_project_root_cross_drive_absolute_launch_and_parents(self):
        self.assertEqual(str(p.h.ROOT).lower(),r'c:\fate soldiers 3')
        self.assertEqual(p.EXE.drive.upper(),'D:')
        with tempfile.TemporaryDirectory(dir=p.h.ROOT/'artifacts') as tmp:
            root=Path(tmp)/'capture';relative=root.relative_to(p.h.ROOT)
            plan=p.launch_plan(relative)
            def spawn(argv,**kwargs):
                self.assertEqual(argv[argv.index('-datapath')+1],str(root/'session'))
                self.assertTrue(Path(argv[argv.index('-datapath')+1]).is_absolute())
                self.assertTrue((root/'session/PCSX2').is_dir())
                self.assertTrue(Path(argv[0]).is_absolute())
                self.assertTrue(Path(argv[argv.index('-elf')+1]).is_absolute())
                self.assertEqual(Path(kwargs['cwd']).drive.upper(),'D:')
                return SimpleNamespace(pid=123)
            with patch.object(p.subprocess,'Popen',side_effect=spawn):
                p.start_owned(root,plan,{'test':'synthetic, emulator not launched'})
            meta=json.loads((root/'launch.json').read_text())
            for key in ('requested_datapath','resolved_datapath','pcsx2_executable','cwd','full_argv'):
                self.assertEqual(meta[key],plan[key])
            self.assertFalse(Path(plan['requested_datapath']).is_absolute())

    def test_early_exit_is_startup_failure_not_pine_timeout(self):
        with patch.object(p.time,'monotonic',return_value=0),patch.object(p,'paused') as paused:
            with self.assertRaisesRegex(ValueError,'PCSX2_STARTUP_PROCESS_EXITED_BEFORE_ENTRY'):
                p.wait_entry(SimpleNamespace(poll=lambda:3),1)
            paused.assert_not_called()

    def test_no_initialization_is_startup_timeout_not_entry_failure(self):
        with patch.object(p.time,'monotonic',side_effect=[0,2]),patch.object(p.time,'sleep'),patch.object(p,'paused',side_effect=ConnectionRefusedError):
            with self.assertRaisesRegex(ValueError,'PCSX2_STARTUP_OR_INITIALIZATION_TIMEOUT'):
                p.wait_entry(SimpleNamespace(poll=lambda:None),1)

    def test_creation_failure_preserves_launch_plan(self):
        plan=p.launch_plan(self.root)
        with patch.object(p.subprocess,'Popen',side_effect=OSError('never log raw detail')):
            with self.assertRaisesRegex(ValueError,'PCSX2_PROCESS_CREATION_FAILED'):
                p.start_owned(self.root,plan,{})
        meta=json.loads((self.root/'launch.json').read_text())
        self.assertEqual(meta['startup_error'],'PCSX2_PROCESS_CREATION_FAILED')
        self.assertNotIn('never log raw detail',json.dumps(meta))

    def test_failed_launch_without_raw_points_cannot_be_reused(self):
        p.write_new(self.root/'launch.json',{'original_failed_launch':True})
        before=p.r.hash_file(self.root/'launch.json')
        with patch.object(p,'prepare_guided') as prepare,patch.object(p.subprocess,'Popen') as spawn:
            with self.assertRaisesRegex(ValueError,'PRESERVED_USE_NEW_ROOT'):
                p.guided(self.root,watch=True)
            prepare.assert_not_called();spawn.assert_not_called()
        self.assertEqual(p.r.hash_file(self.root/'launch.json'),before)


if __name__=='__main__':unittest.main()
