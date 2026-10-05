import contextlib
import json
import os
from pathlib import Path
import sys
import tempfile
import types
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import adviser_pool as pool
import copilot_bridge as bridge


class PoolTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        environment = patch.dict(os.environ, {
            'DW3_PRIVATE_ROOT': '', 'DW3_HYBRID_ROUTER': '', 'DW3_GITHUB_BRIDGE': '',
        })
        environment.start()
        self.addCleanup(environment.stop)
        (self.root / 'source.cpp').write_text('return result;\n')
        self.task = {'objective': 'Check return ownership', 'sections': [('source.cpp', 1, 1)]}
        self.tasks = patch.dict(bridge.TASKS, {'rpc-continuation-review': self.task})
        self.tasks.start()
        self.addCleanup(self.tasks.stop)

    def request(self):
        exchange = pool.exchanges(self.root)['bedrock']
        return bridge.enqueue('rpc-continuation-review', exchange, self.root), exchange

    def module(self, result):
        events, calls = [], []
        class Journal:
            @contextlib.contextmanager
            def lock(self):
                yield
            def events(self):
                return events
            def append(self, event):
                events.append(event)
        class Router:
            def __init__(self, journal):
                self.journal = journal
            def job(self, prompt, **kwargs):
                if len(prompt.encode()) > 16000:
                    raise ValueError('Too large')
                return {'prompt': prompt, **kwargs}
            def aws_role_model(self, role):
                return role
            def attempt(self, job, provider, model):
                calls.append((job, provider, model))
                return result
        return types.SimpleNamespace(EVIDENCE=self.root, Journal=Journal, Router=Router,
                                     digest=lambda v: bridge.sha(bridge.canonical(v))), calls

    def test_collection_invokes_no_models_and_isolates_bad_queue(self):
        bad = pool.exchanges(self.root)['microsoft_copilot_ui'] / 'requests/broken.json'
        bad.parent.mkdir(parents=True)
        bad.write_text('{}')
        with patch.object(pool, 'load_router', side_effect=AssertionError('No provider expected')):
            result = pool.sync(self.root, enqueue=True)
        self.assertEqual(result['microsoft_copilot_ui']['state'], 'BRIDGE_REVIEW_REQUIRED')
        for name in ('github_copilot', 'chatgpt_ui', 'bedrock'):
            self.assertEqual(result[name]['ready'], 1)
            self.assertFalse(result[name]['model_invoked_by_runner'])

    def test_private_router_does_not_redirect_github_scheduler(self):
        other = self.root / 'private'
        self.assertEqual(pool.exchanges(self.root, other)['github_copilot'], self.root / 'artifacts/copilot_bridge')
        path = self.root / 'artifacts/adviser_pool/config.json'
        bridge.write_new(path, {'private_root': str(other), 'github_bridge': str(other / 'queue')})
        private, router = pool.configuration(self.root)
        self.assertEqual(private, other.resolve())
        self.assertEqual(router, (other / 'tools/hybrid_router.py').resolve())
        self.assertEqual(pool.exchanges(self.root)['github_copilot'], (other / 'queue').resolve())

    def test_enqueue_idempotent_and_uncertain_not_ready(self):
        identifier, exchange = self.request()
        self.assertEqual(identifier, bridge.enqueue('rpc-continuation-review', exchange, self.root))
        bridge.reserve_ui(identifier, exchange, self.root)
        self.assertEqual(pool.sync(self.root, enqueue=True)['bedrock']['ready'], 0)

    def test_stale_request_never_enters_budget_or_adapter(self):
        identifier, _ = self.request()
        (self.root / 'source.cpp').write_text('changed')
        module, calls = self.module({})
        with patch.object(pool, 'load_router', return_value=module), self.assertRaises(ValueError):
            pool.dispatch_bedrock(identifier, self.root)
        self.assertEqual(calls, [])

    def test_budget_failure_preserved_and_not_automatically_retried(self):
        identifier, exchange = self.request()
        module, calls = self.module({'event_id': 'fixture', 'success': False, 'state': 'FAILED',
                                    'error': 'LOCAL_BUDGET_CAP', 'adapter_attempted': False})
        with patch.object(pool, 'load_router', return_value=module):
            receipt = pool.dispatch_bedrock(identifier, self.root)
            with self.assertRaises(ValueError):
                pool.dispatch_bedrock(identifier, self.root)
        self.assertFalse(receipt['adapter_attempted'])
        self.assertEqual(len(calls), 1)
        self.assertEqual(bridge.refresh(exchange, self.root)['requests'][0]['state'], 'SUBMITTED_OR_UNCERTAIN')

    def test_malformed_reply_is_preserved_without_repair_or_execution(self):
        identifier, exchange = self.request()
        raw = 'not json; remove everything'
        module, calls = self.module({'event_id': 'fixture', 'success': True, 'state': 'AVAILABLE',
                                    'response': raw, 'adapter_attempted': True})
        with patch.object(pool, 'load_router', return_value=module):
            receipt = pool.dispatch_bedrock(identifier, self.root)
        self.assertEqual((exchange / 'replies' / (identifier + '.json')).read_text(), raw)
        self.assertEqual(bridge.collect(exchange, self.root)[0]['state'], 'REJECTED')
        self.assertFalse(receipt['code_applied'])
        self.assertEqual(calls[0][1:], ('aws', 'NOVA_PRO'))


if __name__ == '__main__':
    unittest.main()
