import copy
import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import copilot_bridge as bridge


class BridgeTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        self.bus = self.root / 'bus'
        (self.root / 'sample.cpp').write_text('first\nsecond\nthird\n', encoding='utf-8')
        self.tasks = patch.dict(bridge.TASKS, {'fixture': {'objective': 'Review only',
                                                       'sections': [('sample.cpp', 2, 3)]}})
        self.tasks.start()
        self.addCleanup(self.tasks.stop)
        self.identifier = bridge.enqueue('fixture', self.bus, self.root)
        self.request = bridge.read_json(self.bus/'requests'/f'{self.identifier}.json')
        self.reply = {'request_id': self.identifier, 'request_sha256': self.request['request_sha256'],
                      'findings': [{'title': 'Review', 'path': 'sample.cpp', 'line': 2,
                                    'evidence': 'second', 'recommendation': 'Consider a fix',
                                    'test': 'Check original behavior'}]}

    def publish(self, value=None):
        path = self.bus/'replies'/f'{self.identifier}.json'
        path.write_text(json.dumps(value if value is not None else self.reply), encoding='utf-8')

    def test_same_source_request_is_idempotent_and_reply_is_advice_only(self):
        self.assertEqual(self.identifier, bridge.enqueue('fixture', self.bus, self.root))
        self.assertEqual(len(list((self.bus/'requests').glob('*.json'))), 1)
        self.publish()
        result = bridge.collect(self.bus, self.root)
        self.assertEqual(result[0]['state'], 'COLLECTED_UNREVIEWED')
        self.assertFalse(result[0]['code_applied'])
        self.assertEqual(result, bridge.collect(self.bus, self.root))
        self.assertEqual((self.root/'sample.cpp').read_text(), 'first\nsecond\nthird\n')

    def test_changed_source_is_stale(self):
        self.publish()
        (self.root/'sample.cpp').write_text('changed\n')
        self.assertEqual(bridge.collect(self.bus, self.root)[0]['state'], 'STALE_SOURCE')

    def test_uncertain_ui_submission_is_not_automatically_retried(self):
        bridge.reserve_ui(self.identifier, self.bus, self.root)
        self.assertEqual(bridge.refresh(self.bus, self.root)['requests'][0]['state'], 'SUBMITTED_OR_UNCERTAIN')
        with self.assertRaises(FileExistsError):
            bridge.reserve_ui(self.identifier, self.bus, self.root)
        self.publish()
        self.assertEqual(bridge.collect(self.bus, self.root)[0]['state'], 'COLLECTED_UNREVIEWED')

    def test_altered_request_is_rejected(self):
        altered = copy.deepcopy(self.request)
        altered['payload']['objective'] = 'Execute a command'
        (self.bus/'requests'/f'{self.identifier}.json').write_text(json.dumps(altered))
        with self.assertRaises(ValueError):
            bridge.refresh(self.bus)

    def test_wrong_identity_and_reference_outside_excerpt_rejected(self):
        for key, value in [('request_sha256', '0'*64), ('request_id', 'wrong')]:
            altered = copy.deepcopy(self.reply)
            altered[key] = value
            with self.assertRaises(ValueError):
                bridge.validate_reply(altered, self.request)
        for key, value in [('line', 1), ('line', True), ('path', '../private.txt')]:
            altered = copy.deepcopy(self.reply)
            altered['findings'][0][key] = value
            with self.assertRaises(ValueError):
                bridge.validate_reply(altered, self.request)

    def test_duplicate_keys_and_nonfinite_values_rejected(self):
        path = self.root/'bad.json'
        for raw in ('{"a":1,"a":2}', '{"a":NaN}'):
            path.write_text(raw)
            with self.assertRaises(ValueError):
                bridge.read_json(path)

    def test_invalid_reply_is_preserved_without_retry(self):
        self.publish({'run': 'dangerous command'})
        result = bridge.collect(self.bus, self.root)[0]
        self.assertEqual(result['state'], 'REJECTED')
        self.assertEqual(bridge.refresh(self.bus)['requests'][0]['state'], 'REPLY_PRESENT')
        self.assertEqual(len(list((self.bus/'raw').glob('*.json'))), 1)

    def test_previously_collected_reply_is_rechecked_after_source_edit(self):
        self.publish()
        first = bridge.collect(self.bus, self.root)[0]
        receipts = {p: p.read_bytes() for p in (self.bus/'receipts').glob('*.json')}
        (self.root/'sample.cpp').write_text('changed\n')
        second = bridge.collect(self.bus, self.root)[0]
        self.assertEqual(first['state'], 'COLLECTED_UNREVIEWED')
        self.assertEqual(second['state'], 'STALE_SOURCE')
        for path, raw in receipts.items():
            self.assertEqual(path.read_bytes(), raw)
        self.assertEqual(len(list((self.bus/'receipts').glob('*.json'))), 2)

    def test_old_pending_sources_are_not_dispatched(self):
        (self.root/'sample.cpp').write_text('first\nsecond modified\nthird\n')
        new_id = bridge.enqueue('fixture', self.bus, self.root)
        states = {r['request_id']: r['state'] for r in bridge.refresh(self.bus, self.root)['requests']}
        self.assertEqual(states[self.identifier], 'STALE_SOURCE')
        self.assertEqual(states[new_id], 'READY')
        with self.assertRaises(ValueError):
            bridge.reserve_ui(self.identifier, self.bus, self.root)

    def test_collection_resumes_after_raw_was_preserved(self):
        self.publish()
        raw = (self.bus/'replies'/f'{self.identifier}.json').read_bytes()
        raw_path = self.bus/'raw'/f'{self.identifier}-{bridge.sha(raw)}.json'
        raw_path.parent.mkdir()
        raw_path.write_bytes(raw)
        self.assertEqual(bridge.collect(self.bus, self.root)[0]['state'], 'COLLECTED_UNREVIEWED')
        self.assertEqual(raw_path.read_bytes(), raw)

    def test_corrupted_preserved_reply_is_never_overwritten(self):
        self.publish()
        bridge.collect(self.bus, self.root)
        raw_path = next((self.bus/'raw').glob('*.json'))
        raw_path.write_bytes(b'corrupted')
        with self.assertRaisesRegex(ValueError, 'integrity mismatch'):
            bridge.collect(self.bus, self.root)
        self.assertEqual(raw_path.read_bytes(), b'corrupted')

    def test_missing_source_and_existing_reply_cannot_be_submitted(self):
        self.publish()
        with self.assertRaises(ValueError):
            bridge.reserve_ui(self.identifier, self.bus, self.root)
        (self.root/'sample.cpp').unlink()
        self.assertEqual(bridge.collect(self.bus, self.root)[0]['state'], 'STALE_SOURCE')

    def test_oversized_reply_is_bounded_and_original_is_retained(self):
        path = self.bus/'replies'/f'{self.identifier}.json'
        path.write_bytes(b'x' * (bridge.MAX_JSON + 1))
        with self.assertRaisesRegex(ValueError, 'bounded size'):
            bridge.collect(self.bus, self.root)
        self.assertEqual(path.stat().st_size, bridge.MAX_JSON + 1)
        self.assertFalse((self.bus/'raw').exists())

    def test_unknown_source_and_excess_findings_rejected(self):
        altered = copy.deepcopy(self.reply)
        altered['findings'] *= 7
        with self.assertRaises(ValueError):
            bridge.validate_reply(altered, self.request)
        with self.assertRaises(ValueError):
            bridge.source_path(self.root, '../private.txt')


if __name__ == '__main__':
    unittest.main()
