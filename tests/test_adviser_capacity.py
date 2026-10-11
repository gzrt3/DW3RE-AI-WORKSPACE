"""Offline configuration and quota selection; no model or account requests."""
import os
from pathlib import Path
import sys
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import adviser_capacity as capacity


class CapacityTests(unittest.TestCase):
    def test_missing_executable_never_launches_process(self):
        with patch.dict(os.environ, {}, clear=True), patch.object(capacity.subprocess, 'Popen') as launch:
            self.assertEqual(capacity.observe()['state'], 'ADVISER_UNKNOWN')
            launch.assert_not_called()

    def test_executable_is_explicitly_configured(self):
        with patch.dict(os.environ, {'DW3_ADVISER_EXECUTABLE': 'local-adviser'}, clear=True), \
                patch.object(capacity.shutil, 'which', return_value='verified-path') as lookup:
            self.assertEqual(capacity.executable(), 'verified-path')
            lookup.assert_called_once_with('local-adviser')

    def test_single_quota_bucket_is_selected(self):
        with patch.dict(os.environ, {}, clear=True):
            observed = capacity.sanitize({'rateLimitsByLimitId': {
                'fixture': {'primary': {'usedPercent': 100, 'resetsAt': 1000}}}}, {})
        self.assertEqual(observed['state'], 'ADVISER_COOLDOWN')

    def test_multiple_buckets_require_explicit_selection(self):
        limits = {'rateLimitsByLimitId': {
            'one': {'primary': {'usedPercent': 10}},
            'two': {'primary': {'usedPercent': 100}}}}
        with patch.dict(os.environ, {}, clear=True):
            self.assertEqual(capacity.sanitize(limits, {})['state'], 'ADVISER_UNKNOWN')
        with patch.dict(os.environ, {'DW3_ADVISER_RATE_LIMIT_ID': 'two'}, clear=True):
            self.assertEqual(capacity.sanitize(limits, {})['state'], 'ADVISER_COOLDOWN')
        with patch.dict(os.environ, {'DW3_ADVISER_RATE_LIMIT_ID': 'missing'}, clear=True):
            self.assertEqual(capacity.sanitize(limits, {})['state'], 'ADVISER_UNKNOWN')


if __name__ == '__main__':
    unittest.main()
