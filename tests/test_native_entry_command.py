"""Build supervisor process fixtures, not evidence of game boot."""
import json
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import time
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import native_entry_slice as entry


class NativeEntryCommandTests(unittest.TestCase):
    def test_success_and_nonzero_preserve_logs(self):
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder)
            entry.command([sys.executable, '-c', 'print("done")'], root/'ok.log', 10)
            self.assertIn('done', (root/'ok.log').read_text())
            with self.assertRaises(RuntimeError):
                entry.command([sys.executable, '-c', 'print("failed"); raise SystemExit(7)'], root/'bad.log', 10)
            self.assertIn('failed', (root/'bad.log').read_text())

    @unittest.skipUnless(os.name == 'nt', 'Windows process tree contract')
    def test_timeout_stops_owned_child_and_preserves_unrelated_process(self):
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder)
            pid_file = root/'child.pid'
            child_script = root/'child.py'
            child_script.write_text('import time\nfrom pathlib import Path\n'
                                    'import sys\nfor i in range(200):\n'
                                    ' Path(sys.argv[1]).write_text(str(i))\n time.sleep(0.05)\n')
            pulse = root/'pulse'
            parent = root/'parent.py'
            parent.write_text('import subprocess,sys,time\nfrom pathlib import Path\n'
                              'p=subprocess.Popen([sys.executable,sys.argv[1],sys.argv[2]])\n'
                              'Path(sys.argv[3]).write_text(str(p.pid))\n'
                              'print("child started",flush=True)\ntime.sleep(60)\n')
            other = subprocess.Popen([sys.executable, '-c', 'import time;time.sleep(60)'],
                                     creationflags=subprocess.CREATE_NO_WINDOW)
            child_pid = None
            try:
                with self.assertRaises(subprocess.TimeoutExpired):
                    entry.command([sys.executable,str(parent),str(child_script),str(pulse),str(pid_file)],root/'timeout.log',3)
                child_pid = int(pid_file.read_text())
                self.assertIsNone(other.poll())
                first = pulse.read_text()
                time.sleep(0.3)
                self.assertEqual(first,pulse.read_text(), 'owned descendant must stop writing')
                result = json.loads((root/'timeout.interrupted.json').read_text())
                self.assertEqual(result['status'],'TIMEOUT')
                self.assertEqual(result['tree_cleanup_result'],0)
                self.assertIn('child started',(root/'timeout.log').read_text())
            finally:
                other.kill()
                other.wait()
                if child_pid is not None:
                    subprocess.run(['taskkill','/PID',str(child_pid),'/F'],stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL)


if __name__ == '__main__':
    unittest.main()
