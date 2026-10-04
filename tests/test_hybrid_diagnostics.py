import importlib.util
import json
from pathlib import Path
import sys
import unittest
from unittest.mock import Mock, patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import hybrid_diagnostics as d


class DiagnosticsTests(unittest.TestCase):
    def test_cli_stderr_does_not_escape(self):
        result = d.safe_cli_diagnostic("secret-string\nPermissionError: [Errno 13] Permission denied: 'C:\\Users\\fixture\\.azure\\commandIndex.json'")
        self.assertTrue(result['permission_denied'])
        self.assertEqual(result['errno'], 13)
        self.assertTrue(result['denied_path'].endswith('commandIndex.json'))
        self.assertNotIn('secret-string', json.dumps(result))

    def test_cli_token_stdout_is_discarded(self):
        process = Mock(returncode=0, stdout='{"accessToken":"sensitive-test-value"}', stderr='')
        with patch.object(d.subprocess, 'run', return_value=process):
            result = d.command_probe(['az', 'account', 'get-access-token'])
        self.assertTrue(result['success'])
        self.assertNotIn('sensitive-test-value', json.dumps(result))

    def test_permission_denied_is_transport_barrier(self):
        denial = PermissionError(13, 'sensitive-test-value')
        with patch.object(d.socket, 'getaddrinfo', return_value=[object()]), patch.object(d.urllib.request, 'build_opener') as opener:
            opener.return_value.open.side_effect = d.urllib.error.URLError(denial)
            result = d.endpoint_probe(d.URLS['openai'])
        self.assertTrue(result['dns']['success'])
        self.assertFalse(result['transport_reachable'])
        self.assertEqual(result['errno'], 13)
        self.assertNotIn('sensitive-test-value', json.dumps(result))

    def test_401_proves_transport_only(self):
        with patch.object(d.socket, 'getaddrinfo', return_value=[object()]), patch.object(d.urllib.request, 'build_opener') as opener:
            opener.return_value.open.side_effect = d.urllib.error.HTTPError(d.URLS['openai'], 401, 'Unauthorized', {}, None)
            result = d.endpoint_probe(d.URLS['openai'])
        self.assertTrue(result['transport_reachable'])
        self.assertFalse(result['credentials_sent'])
        self.assertEqual(result['http_status'], 401)

    def test_version_whitelist(self):
        process = Mock(returncode=0, stdout='aws-cli/2.99.1 Python/3.12.9 secret-string', stderr='')
        with patch.object(d.subprocess, 'run', return_value=process):
            result = d.command_probe(['aws', '--version'], version=True)
        self.assertEqual(result['version'], '2.99.1')
        self.assertNotIn('secret-string', json.dumps(result))

    def test_inaccessible_path_is_not_reported_missing(self):
        with patch.object(d.shutil, 'which', return_value=None), patch.object(d.os, 'stat', side_effect=PermissionError(13, 'denied')):
            result = d.executables()
        for provider in result.values():
            self.assertIsNone(provider['path_resolution'])
            for candidate in provider['known_paths']:
                self.assertIsNone(candidate['exists'])

    def test_live_campaign_cannot_repeat(self):
        journal = Mock()
        journal.lock.return_value.__enter__ = Mock()
        journal.lock.return_value.__exit__ = Mock(return_value=False)
        journal.events.return_value = [{'kind': 'diagnostic_campaign_started', 'campaign': d.CAMPAIGN}]
        with patch.object(d.h, 'Journal', return_value=journal), patch.object(d.sys, 'argv', ['diagnostics', '--live-ready']), patch.object(d, 'executables') as probes:
            with self.assertRaises(d.h.Failure) as caught:
                d.main()
        self.assertEqual(caught.exception.code, 'CAMPAIGN_ALREADY_ATTEMPTED_NO_RETRY')
        probes.assert_not_called()


if __name__ == '__main__':
    unittest.main()
