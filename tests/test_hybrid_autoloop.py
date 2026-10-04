"""No real cloud or retail calls. Planner/adapter fixtures stay in temp dirs."""
import copy
import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch
from types import SimpleNamespace

sys.path.insert(0, str(Path(__file__).resolve().parents[1]/'tools'))
import hybrid_autoloop as a
import hybrid_campaign as c
import hybrid_router as h


class AutoloopTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.root = Path(self.tmp.name)
        self.calls = []
        self.policy = json.loads(h.POLICY.read_text())
        # Explicit zero-rate fixtures keep mocked AWS contract tests from
        # requiring production pricing or making a cloud request.
        self.policy['prices_per_million_tokens']['aws/us.amazon.nova-2-lite-v1:0']={'input':0,'output':0}
        self.journal = h.Journal(self.root/'global')
        self.router = h.Router(self.journal, self.policy, self.good)
        self.identity_patch = patch.object(a.pc, 'identity', return_value={'fixture': 'SYNTHETIC_UNIT_TEST_ONLY'})
        self.identity_patch.start()
        self.addCleanup(self.identity_patch.stop)

    def good(self, p, m, *_):
        self.calls.append(p)
        return '{"ok":true}', {}, True, m

    def mock_aws_health(self,journal):
        journal.append({'kind':'attempt','provider':'aws','model':'us.amazon.nova-2-lite-v1:0',
            'success':True,'state':'AVAILABLE','error':None,'event_id':'mock-aws-health-fixture','job_id':'mock-aws-health-fixture'})

    def worker(self, tid='worker', providers=None, **extra):
        return dict(id=tid, kind='worker', providers=providers or ['ollama'],
                    instruction='Return {"ok":true}', expected={'ok': True}, **extra)

    def loop(self, **kw):
        return a.Autoloop(self.root/'loop', self.router, capture_root=self.root/'capture', **kw)

    def simple_plan(self, loop, tasks=None, stop='NO_USEFUL_WORK'):
        def plan():
            if loop.state['cycles']: return None, stop, 'fixture exhausted'
            return {'phase': 'fixture', 'tasks': tasks or [self.worker()]}, None, None
        loop.plan = plan

    def test_fresh_start_checkpoint_and_resume_zero_duplicate(self):
        loop = self.loop(); self.simple_plan(loop)
        self.assertEqual(loop.run()['TASKS_COMPLETED'], 1)
        resumed = self.loop(); self.simple_plan(resumed)
        self.assertEqual(resumed.run()['AUTLOOP_STATUS'], 'NO_USEFUL_WORK')
        self.assertEqual(self.calls, ['ollama'])
        self.assertTrue((self.root/'loop/state.json').exists())

    def test_ctrl_c_drains_and_checkpoints(self):
        loop = self.loop(); self.simple_plan(loop)
        def stop(p, m, *args):
            loop.stop()
            return self.good(p, m, *args)
        self.router.adapter = stop
        self.assertEqual(loop.run()['AUTLOOP_STATUS'], 'INTERRUPTED')
        resumed = self.loop(); self.simple_plan(resumed)
        resumed.run()
        self.assertEqual(self.calls, ['ollama'])

    def test_partial_campaign_resume_does_not_repeat_completed_task(self):
        loop = self.loop(); self.simple_plan(loop, [self.worker('one'), self.worker('two')])
        self.assertEqual(loop.run(max_tasks=1)['AUTLOOP_STATUS'], 'BOUNDED_PAUSE')
        resumed = self.loop(); self.simple_plan(resumed)
        resumed.run(max_tasks=1)
        self.assertEqual(self.calls, ['ollama', 'ollama'])

    def test_completed_campaign_next_barrier_and_human_stop_no_busy_wait(self):
        loop = self.loop()
        loop.emit('fixture', preparation_complete=True, preflight_version=a.PREFLIGHT_VERSION)
        with patch.object(loop, 'capture_status', return_value={'status': 'ABSENT'}):
            result = loop.run(max_cycles=20)
        self.assertEqual(result['AUTLOOP_STATUS'], 'WAITING_FOR_HUMAN_EVIDENCE')
        self.assertEqual(result['CYCLES_COMPLETED'], 0)
        self.assertEqual(self.calls, [])

    def test_new_arrival_after_human_stop_generates_comparison_campaign(self):
        loop = self.loop(); loop.emit('fixture', preparation_complete=True, preflight_version=a.PREFLIGHT_VERSION)
        with patch.object(loop, 'capture_status', return_value={'status': 'ABSENT'}): loop.run()
        resumed = self.loop()
        with patch.object(resumed, 'capture_status', return_value={'status': 'RETAIL_CAPTURE_AVAILABLE', 'root': str(self.root/'retail'), 'fingerprint': 'a'*64}):
            plan, status, _ = resumed.plan()
        self.assertEqual(plan['phase'], 'compare')
        self.assertEqual(resumed.state['barrier'], 'RETAIL_CAPTURE_AVAILABLE')
        self.assertIsNone(status)

    def test_max_cycle_termination(self):
        loop = self.loop()
        loop.plan = lambda: ({'phase': 'fixture', 'tasks': [self.worker()]}, None, None)
        result = loop.run(max_cycles=2)
        self.assertEqual(result['AUTLOOP_STATUS'], 'MAX_CYCLES')
        self.assertEqual(result['CYCLES_COMPLETED'], 2)
        self.assertEqual(len(self.calls), 2)

    def test_no_useful_work_no_calls(self):
        loop = self.loop(); loop.plan = lambda: (None, 'NO_USEFUL_WORK', 'all evidence checked')
        self.assertEqual(loop.run()['AUTLOOP_STATUS'], 'NO_USEFUL_WORK')
        self.assertFalse(self.calls)

    def test_cloud_budget_exhaustion_no_network(self):
        for i in range(2): self.router.reserve(str(i), 'aws', self.router.model('aws'), 'x', 32)
        loop = self.loop(); self.simple_plan(loop, [self.worker(providers=['aws'])])
        for p in ('azure', 'gemini'):
            for i in range(2): self.router.reserve(str(i), p, self.router.model(p), 'x', 32)
        result = loop.run()
        self.assertEqual(result['AUTLOOP_STATUS'], 'PROVIDER_BUDGET_EXHAUSTED')
        self.assertEqual(result['CLOUD_CALLS'], 0)
        self.assertFalse(self.calls)

    def test_failure_and_malformed_json_failover(self):
        self.mock_aws_health(self.journal)
        def adapter(p, m, *_):
            self.calls.append(p)
            if p == 'gemini': raise h.Failure('RATE_LIMITED', 'RATE_LIMIT')
            return ('```json\n{"ok":true}\n```' if p == 'aws' else '{"ok":true}'), {}, True, m
        self.router.adapter = adapter
        loop = self.loop(); self.simple_plan(loop, [self.worker(providers=['gemini', 'aws', 'ollama'])])
        result = loop.run()
        self.assertEqual(result['TASKS_COMPLETED'], 1)
        self.assertEqual(self.calls, ['gemini', 'aws', 'ollama'])
        self.assertEqual([e['review'] for e in self.journal.events() if e['kind']=='review'], ['REJECTED', 'ACCEPTED'])

    def test_one_explicit_repair_preserves_rejected_original(self):
        for provider in ('aws', 'gemini'):
            with self.subTest(provider=provider):
                journal = h.Journal(self.root/provider)
                calls = []
                def adapter(p, m, prompt, *_):
                    calls.append(prompt)
                    return ('```json\n{"ok":true}\n```' if len(calls)==1 else '{"ok":true}'), {}, True, m
                if provider=='aws':self.mock_aws_health(journal)
                campaign = c.Campaign({'id': provider, 'tasks': [self.worker(providers=[provider], repair_once=True)]},
                                      self.root/('campaign-'+provider), h.Router(journal, copy.deepcopy(self.policy), adapter))
                result = campaign.run()
                self.assertEqual(result['tasks']['worker']['status'], 'ACCEPTED')
                self.assertEqual(len(calls), 2)
                self.assertIn('Reformat', calls[1])
                attempts = [e for e in journal.events() if e['kind']=='attempt' and e.get('job_id')!='mock-aws-health-fixture']
                self.assertTrue(attempts[0]['response'].startswith('```'))
                self.assertEqual([e['review'] for e in journal.events() if e['kind']=='review'], ['REJECTED', 'ACCEPTED'])
                self.assertEqual(result['providers'][provider]['live_calls'], 2)

    def test_repair_not_infinite(self):
        self.mock_aws_health(self.journal)
        self.router.adapter = lambda p,m,*_: ('bad markdown', {}, True, m)
        campaign = c.Campaign({'id':'repair', 'tasks':[self.worker(providers=['aws'], repair_once=True)]}, self.root/'repair', self.router)
        campaign.run()
        self.assertEqual(sum(e['kind']=='attempt' and e.get('job_id')!='mock-aws-health-fixture' for e in self.journal.events()), 2)

    def test_explicit_budget_grant_additive_and_idempotent(self):
        self.policy['prices_per_million_tokens']['aws/us.amazon.nova-2-lite-v1:0']={'input':0,'output':0}
        for i in range(2): self.router.reserve(str(i), 'aws', self.router.model('aws'), 'x', 32)
        self.assertEqual(self.router.remaining_calls('aws'), 0)
        self.router.authorize_window('human-one', ['aws'], 2)
        self.router.authorize_window('human-one', ['aws'], 2)
        self.assertEqual(self.router.remaining_calls('aws'), 2)
        self.router.reserve('new', 'aws', self.router.model('aws'), 'x', 32)
        self.assertEqual(self.router.remaining_calls('aws'), 1)
        self.assertEqual(sum(e['kind']=='reservation' for e in self.journal.events()), 3)
        with self.assertRaises(h.Failure): self.router.authorize_window('human-one', ['aws'], 3)

    def test_tampered_journal_fails_closed(self):
        loop = self.loop(); loop.emit('test')
        path = self.root/'loop/journal.jsonl'
        path.write_text(path.read_text().replace('"test"', '"forged"'))
        with self.assertRaises(h.Failure): self.loop()

    def test_checkpoint_projection_rebuilt_from_journal(self):
        loop = self.loop(); loop.emit('test', barrier='WAITING_FOR_HUMAN_EVIDENCE')
        (self.root/'loop/state.json').write_text('{}')
        self.assertEqual(self.loop().state['barrier'], 'WAITING_FOR_HUMAN_EVIDENCE')

    def test_secret_like_evidence_not_logged(self):
        loop = self.loop()
        with self.assertRaises(h.Failure): loop.emit('bad', fixture='Authorization: Bearer DO_NOT_STORE_TEST_TOKEN')
        self.assertFalse(loop.journal.exists())

    def test_invalid_capture_stops_before_providers(self):
        loop = self.loop()
        with patch.object(loop, 'capture_status', return_value={'status':'INVALID_RETAIL_EVIDENCE'}): result = loop.run()
        self.assertEqual(result['AUTLOOP_STATUS'], 'SAFETY_EVIDENCE_BARRIER')
        self.assertFalse(self.calls)

    def test_timeout_bound(self):
        clock = iter([0, 20])
        loop = self.loop(clock=lambda:next(clock))
        self.assertEqual(loop.run(max_seconds=1)['AUTLOOP_STATUS'], 'TIME_LIMIT')

    def test_qt_help_exit_one_requires_real_version_and_options(self):
        # This observed Qt CLI contract is unrelated to provider success.
        loop=self.loop()
        identity={'exe_sha256':a.pc.EXE_HASH}
        good=SimpleNamespace(returncode=1,stdout=b'',stderr=b'PCSX2 v2.8.2 -debugger -datapath')
        with patch.object(a.pc,'identity',return_value=identity), patch.object(a.subprocess,'run',return_value=good):
            self.assertEqual(loop.capabilities({})['current_help_exit'],1)
        bad=SimpleNamespace(returncode=1,stdout=b'',stderr=b'initialization failed')
        with patch.object(a.pc,'identity',return_value=identity), patch.object(a.subprocess,'run',return_value=bad):
            with self.assertRaises(h.Failure):loop.capabilities({})

    def test_valid_arrival_runs_validation_and_comparison_after_restart(self):
        loop=self.loop();loop.emit('fixture',preparation_complete=True,preflight_version=a.PREFLIGHT_VERSION)
        with patch.object(loop,'capture_status',return_value={'status':'ABSENT'}):loop.run()
        resumed=self.loop(handlers={'validate_capture':lambda _: {'status':'RETAIL_CAPTURE_AVAILABLE'},
                                  'compare_capture':lambda _: {'status':'NO_DIVERGENCE_IN_OBSERVED_FIELDS', 'first_verifiable_divergence':None}})
        arrival={'status':'RETAIL_CAPTURE_AVAILABLE','root':str(self.root/'retail'),'fingerprint':'b'*64}
        with patch.object(resumed,'capture_status',return_value=arrival):result=resumed.run()
        self.assertEqual(result['AUTLOOP_STATUS'],'NO_USEFUL_WORK')
        self.assertEqual(result['CYCLES_COMPLETED'],1)
        self.assertEqual(result['TASKS_COMPLETED'],2)
        self.assertFalse(self.calls)

    def test_host_capture_missing_is_explicit_barrier(self):
        loop=self.loop(handlers={'validate_capture':lambda _: {'status':'RETAIL_CAPTURE_AVAILABLE'}})
        arrival={'status':'RETAIL_CAPTURE_AVAILABLE','root':str(self.root/'retail'),'fingerprint':'c'*64}
        with patch.object(loop,'capture_status',return_value=arrival):result=loop.run()
        self.assertEqual(result['AUTLOOP_STATUS'],'SAFETY_EVIDENCE_BARRIER')
        self.assertEqual(result['CURRENT_BARRIER'],'HOST_CAPTURE_REQUIRED')
        self.assertFalse(self.calls)

    def test_cloud_review_routes_to_different_provider(self):
        loop=self.loop()
        tasks=[self.worker('primary',providers=['ollama']),self.worker('review',providers=['ollama','azure'],
                                                                     review_of='primary',depends=['primary'])]
        self.simple_plan(loop,tasks)
        result=loop.run()
        self.assertEqual(self.calls,['ollama','azure'])
        self.assertEqual(result['CLOUD_CALLS'],1)


if __name__=='__main__': unittest.main()
