import importlib.util
import io
import json
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location("agent_reach_research", ROOT / "tools/agent_reach_research.py")
research = importlib.util.module_from_spec(spec)
spec.loader.exec_module(research)


class ResearchEvidenceTests(unittest.TestCase):
    def test_pinned_skill(self):
        self.assertEqual(research.verify_files()["result"], "PASS")

    def test_exact_utf8_capture(self):
        with tempfile.TemporaryDirectory() as tmp:
            output = Path(tmp) / "attempt"
            result = research.run_capture(
                [sys.executable, "-c", "import sys; sys.stdout.buffer.write(bytes([195,169]))"],
                output, os.environ.copy())
            self.assertEqual(result["status"], "CAPTURED")
            self.assertEqual((output / "stdout.bin").read_bytes(), b"\xc3\xa9")

    def test_failure_preserved_and_not_overwritten(self):
        with tempfile.TemporaryDirectory() as tmp:
            output = Path(tmp) / "attempt"
            command = [sys.executable, "-c", "import sys; print('failure'); sys.exit(7)"]
            result = research.run_capture(command, output, os.environ.copy())
            self.assertEqual((result["status"], result["returncode"]), ("FAILED", 7))
            before = (output / "result.json").read_bytes()
            with self.assertRaises(FileExistsError):
                research.run_capture(command, output, os.environ.copy())
            self.assertEqual((output / "result.json").read_bytes(), before)

    def test_timeout_retains_partial_output_without_retry(self):
        with tempfile.TemporaryDirectory() as tmp:
            output = Path(tmp) / "attempt"
            with patch.object(research.subprocess, "run", side_effect=subprocess.TimeoutExpired(
                    ["reader"], 60, output=b"partial", stderr=b"error")) as run:
                result = research.run_capture(["reader"], output, {})
            self.assertEqual(result["status"], "TIMEOUT")
            self.assertEqual((output / "stdout.bin").read_bytes(), b"partial")
            self.assertEqual((output / "stderr.bin").read_bytes(), b"error")
            run.assert_called_once()

    def test_token_remains_in_child_environment(self):
        with patch.dict(os.environ, {"GH_TOKEN": "existing-token"}, clear=True):
            with patch.object(research.subprocess, "run") as run:
                self.assertEqual(research.github_environment()["GH_TOKEN"], "existing-token")
            run.assert_not_called()
        with tempfile.TemporaryDirectory() as tmp:
            output = Path(tmp) / "attempt"
            completed = subprocess.CompletedProcess(["gh"], 1, b"existing-token", b"existing-token")
            with patch.object(research.subprocess, "run", return_value=completed):
                result = research.run_capture(["gh"], output, {"GH_TOKEN": "existing-token"})
            self.assertTrue(result["credentials_redacted"])
            for path in output.iterdir():
                self.assertNotIn(b"existing-token", path.read_bytes())

    def test_missing_tool_is_not_success(self):
        with tempfile.TemporaryDirectory() as tmp:
            output = Path(tmp) / "attempt"
            with patch.object(research.subprocess, "run", side_effect=FileNotFoundError):
                result = research.run_capture(["unavailable-reader"], output, {})
            self.assertEqual(result["status"], "FAILED")
            self.assertEqual(json.loads((output / "result.json").read_text())["error_type"],
                             "FileNotFoundError")

    def test_authentication_failure_is_recorded_without_helper_output(self):
        for failure in (RuntimeError("private detail"), FileNotFoundError("private path"),
                        subprocess.TimeoutExpired(["helper"], 15, output=b"secret")):
            with self.subTest(failure=type(failure).__name__), tempfile.TemporaryDirectory() as tmp:
                output = Path(tmp) / "attempt"
                with patch.object(research, "github_environment", side_effect=failure) as auth:
                    with patch.object(sys, "stdout", new_callable=io.StringIO):
                        code = research.main(["github-code", "query", "--output", str(output)])
                auth.assert_called_once()
                self.assertEqual(code, 1)
                saved = (output / "result.json").read_text()
                self.assertEqual(json.loads(saved)["status"], "UNAVAILABLE")
                self.assertNotIn("private", saved)
                self.assertNotIn("secret", saved)


if __name__ == "__main__":
    unittest.main()
