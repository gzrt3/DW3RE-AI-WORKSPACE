"""Synthetic process fixtures; never evidence of a native game boot."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]/'tools'))
import native_boot_probe as probe


class NativeBootProbeTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory(prefix='native probe ')
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        self.output = self.root/'evidence'
        self.app = self.root/'app'
        self.app.mkdir()
        self.dump = self.root/'dump original'
        self.dump.mkdir()
        self.exe = self.app/'fixture.exe'
        self.exe.write_bytes(b'not a native executable')
        self.elf = self.dump/'fixture.elf'
        self.elf.write_bytes(b'synthetic ELF bytes')
        self.script = self.root/'fixture script.py'

    def fixture_command(self, code):
        self.script.write_text(code, encoding='utf-8')
        return [sys.executable, '-I', '-u', str(self.script)]

    def execute_fixture(self, code, timeout=30):
        command = self.fixture_command(code)
        self.output.mkdir()
        cwd = self.output/'run'
        cwd.mkdir()
        return probe.run_process(command, cwd, self.output, timeout)

    def run_fixture_probe(self, code, timeout=30):
        command = self.fixture_command(code)
        with patch.object(probe, 'native_command', return_value=command), patch.object(probe, 'source_identities', return_value=[]):
            return probe.run(self.exe, self.dump, self.elf, self.output, timeout)

    def test_raw_output_large_enough_to_fill_pipes_and_nonzero_exit(self):
        result = self.execute_fixture(
            'import os, sys\n'
            'os.write(1, b"A" * 200000 + b"\\x00\\xff")\n'
            'os.write(2, b"E" * 200000 + b"\\xfe")\n'
            'sys.exit(7)\n')
        self.assertEqual(result['status'], 'PROCESS_FAILED')
        self.assertEqual(result['exit_code'], 7)
        self.assertFalse(result['timed_out'])
        self.assertFalse(result['termination_requested'])
        self.assertEqual((self.output/'stdout.bin').read_bytes(), b'A'*200000+b'\x00\xff')
        self.assertEqual((self.output/'stderr.bin').read_bytes(), b'E'*200000+b'\xfe')
        self.assertEqual(result['logs']['stdout.bin']['sha256'],
                         hashlib.sha256(b'A'*200000+b'\x00\xff').hexdigest())

    def test_timeout_keeps_partial_logs_and_terminates_only_owned_process(self):
        kwargs = {'stdin': subprocess.DEVNULL, 'stdout': subprocess.DEVNULL, 'stderr': subprocess.DEVNULL}
        if sys.platform == 'win32':
            kwargs['creationflags'] = subprocess.CREATE_NO_WINDOW
        other = subprocess.Popen([sys.executable, '-I', '-c', 'import time; time.sleep(60)'], **kwargs)
        try:
            result = self.execute_fixture(
                'import os, time\n'
                'os.write(1, b"before timeout\\n")\n'
                'os.write(2, b"error stream\\n")\n'
                'time.sleep(60)\n', timeout=1)
            self.assertEqual(result['status'], 'TIMEOUT')
            self.assertTrue(result['timed_out'])
            self.assertTrue(result['termination_requested'])
            self.assertIsNotNone(result['exit_code'])
            self.assertGreaterEqual(result['duration_seconds'], 1)
            self.assertLess(result['duration_seconds'], 15)
            self.assertEqual((self.output/'stdout.bin').read_bytes(), b'before timeout\n')
            self.assertEqual((self.output/'stderr.bin').read_bytes(), b'error stream\n')
            self.assertIsNone(other.poll(), 'unrelated process must remain alive')
        finally:
            if other.poll() is None:
                other.kill()
            other.wait(timeout=10)

    def test_zero_exit_is_only_process_exited_and_configuration_is_isolated(self):
        (self.app/'settings.ini').write_bytes(b'fixture=original\n')
        (self.app/'fixture.dll').write_bytes(b'fixture DLL')
        result = self.run_fixture_probe(
            'from pathlib import Path\n'
            'assert Path("settings.ini").read_bytes() == b"fixture=original\\n"\n'
            'Path("settings.ini").write_bytes(b"runtime changed its own copy")\n'
            'Path("mc0").mkdir()\n'
            'print("fixture complete")\n')
        launch = json.loads((self.output/'launch.json').read_text())
        self.assertEqual(result['status'], 'PROCESS_EXITED')
        self.assertEqual(result['exit_code'], 0)
        self.assertFalse(result['boot_verified'])
        self.assertEqual(result['game_parity'], 'NOT_ASSESSED')
        self.assertEqual(result['input_integrity'], 'MATCH')
        self.assertEqual(result['changed_inputs'], [])
        self.assertEqual((self.app/'settings.ini').read_bytes(), b'fixture=original\n')
        self.assertEqual(self.elf.read_bytes(), b'synthetic ELF bytes')
        self.assertEqual(launch['exe']['sha256'], probe.hash_file(self.exe))
        self.assertEqual(launch['elf']['sha256'], probe.hash_file(self.elf))
        self.assertEqual(len(launch['adjacent_dlls']), 1)
        self.assertEqual(len(launch['staged_configuration']), 1)
        self.assertTrue((self.output/'run/mc0').is_dir())
        self.assertFalse((self.app/'mc0').exists())
        self.assertEqual(result['launch_sha256'], probe.hash_file(self.output/'launch.json'))

    def test_launch_failure_preserves_identities_and_diagnostics(self):
        with patch.object(probe, 'source_identities', return_value=[]):
            result = probe.run(self.exe, self.dump, self.elf, self.output)
        self.assertEqual(result['status'], 'LAUNCH_FAILED')
        self.assertIsNone(result['pid'])
        self.assertIsNone(result['exit_code'])
        self.assertFalse(result['boot_verified'])
        self.assertEqual(result['input_integrity'], 'MATCH')
        self.assertTrue((self.output/'launch.json').is_file())
        self.assertTrue((self.output/'result.json').is_file())
        self.assertEqual((self.output/'stdout.bin').read_bytes(), b'')

    def test_input_mutation_is_reported_without_rewriting_original_hash(self):
        before = probe.hash_file(self.elf)
        result = self.run_fixture_probe(
            'from pathlib import Path\n'
            f'Path({str(self.elf)!r}).write_bytes(b"fixture mutation")\n')
        self.assertEqual(result['status'], 'PROCESS_EXITED')
        self.assertEqual(result['input_integrity'], 'CHANGED')
        self.assertEqual(result['changed_inputs'], [str(self.elf.resolve())])
        self.assertFalse(result['boot_verified'])
        launch = json.loads((self.output/'launch.json').read_text())
        self.assertEqual(launch['elf']['sha256'], before)
        self.assertNotEqual(result['inputs_after'][1]['sha256'], before)

    def test_existing_output_is_never_reused_or_overwritten(self):
        self.output.mkdir()
        marker = self.output/'result.json'
        marker.write_bytes(b'previous evidence')
        with patch.object(probe, 'run_process') as child:
            with self.assertRaises(FileExistsError):
                probe.run(self.exe, self.dump, self.elf, self.output)
            child.assert_not_called()
        self.assertEqual(marker.read_bytes(), b'previous evidence')

    def test_invalid_timeout_and_output_inside_originals_rejected_before_launch(self):
        for value in (0, -1, 301, 'nan', 'inf', 'oops'):
            with self.subTest(timeout=value), self.assertRaises(argparse.ArgumentTypeError):
                probe.timeout_value(value)
        self.assertEqual(probe.timeout_value('1'), 1)
        self.assertEqual(probe.timeout_value('300'), 300)
        for target in (self.dump/'run', self.app/'run'):
            with self.subTest(output=target), patch.object(probe, 'run_process') as child:
                with self.assertRaisesRegex(ValueError, 'outside'):
                    probe.run(self.exe, self.dump, self.elf, target)
                child.assert_not_called()
                self.assertFalse(target.exists())

    def test_native_command_has_exact_argument_boundaries(self):
        self.assertEqual(probe.native_command(self.exe, self.dump, self.elf),
                         [str(self.exe), str(self.dump), str(self.elf)])

    def test_live_observation_preserves_deadline_exit_as_failure_not_boot(self):
        command = self.fixture_command('import sys\nassert sys.argv[-2:] == ["--live-seconds", "1"]\nsys.exit(2)\n')
        with patch.object(probe, 'native_command', return_value=command), patch.object(probe, 'source_identities', return_value=[]):
            result = probe.run(self.exe, self.dump, self.elf, self.output, live_seconds=1)
        self.assertEqual(result['status'], 'PROCESS_FAILED')
        self.assertEqual(result['exit_code'], 2)
        self.assertFalse(result['boot_verified'])
        self.assertEqual(result['input_integrity'], 'MATCH')
        launch = json.loads((self.output/'launch.json').read_text())
        self.assertEqual(launch['live_observation_seconds'], 1)
        self.assertEqual(launch['command'][-2:], ['--live-seconds', '1'])

    def test_invalid_live_observation_never_launches(self):
        for value in (0, -1, 86401, True, 1.5, '1'):
            with self.subTest(value=value), patch.object(probe, 'run_process') as child:
                with self.assertRaisesRegex(ValueError, 'live-seconds'):
                    probe.run(self.exe, self.dump, self.elf, self.output, live_seconds=value)
                child.assert_not_called()
                self.assertFalse(self.output.exists())

    def test_iop_modules_staged_and_original_mutation_reported(self):
        iop = self.root/'iop'
        (iop/'dw3xl').mkdir(parents=True)
        module = iop/'dw3xl/CDVDFSV.IRX'
        module.write_bytes(b'synthetic module')
        (iop/'dw3xl/module_manifest.json').write_text('{}')
        command = self.fixture_command(
            'from pathlib import Path\n'
            'assert Path("data/iop/dw3xl/CDVDFSV.IRX").read_bytes() == b"synthetic module"\n'
            'Path("data/iop/dw3xl/CDVDFSV.IRX").write_bytes(b"local change")\n')
        with patch.object(probe, 'native_command', return_value=command), patch.object(probe, 'source_identities', return_value=[]):
            result = probe.run(self.exe, self.dump, self.elf, self.output, iop_root=iop)
        self.assertEqual(result['input_integrity'], 'MATCH')
        self.assertEqual(module.read_bytes(), b'synthetic module')
        launch = json.loads((self.output/'launch.json').read_text())
        self.assertEqual(len(launch['original_iop']), 2)
        self.assertEqual(len(launch['staged_iop']), 2)
        second = self.root/'second'
        command = self.fixture_command(f'from pathlib import Path\nPath({str(module)!r}).write_bytes(b"mutated fixture")\n')
        with patch.object(probe, 'native_command', return_value=command), patch.object(probe, 'source_identities', return_value=[]):
            result = probe.run(self.exe, self.dump, self.elf, second, iop_root=iop)
        self.assertEqual(result['changed_inputs'], [str(module.resolve())])
        self.assertEqual(result['input_integrity'], 'CHANGED')

    def test_iop_staging_rejects_unexpected_file_before_launch(self):
        iop = self.root/'iop'
        iop.mkdir()
        (iop/'unrelated.txt').write_text('preserve')
        with patch.object(probe, 'run_process') as child:
            with self.assertRaisesRegex(ValueError, 'IRX'):
                probe.run(self.exe, self.dump, self.elf, self.output, iop_root=iop)
            child.assert_not_called()
        self.assertFalse(self.output.exists())


if __name__ == '__main__':
    unittest.main()
