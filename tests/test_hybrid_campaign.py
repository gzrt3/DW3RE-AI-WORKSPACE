import copy
import json
from pathlib import Path
import sys
import tempfile
import threading
import time
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import hybrid_router as h
import hybrid_campaign as c


class CampaignTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.root = Path(self.tmp.name)
        self.policy = json.loads(h.POLICY.read_text())
        self.journal = h.Journal(self.root/'global')
        self.calls = []

    def good(self, p, m, *args):
        self.calls.append(p)
        return '{"ok":true}', {}, True, m

    def authorize_mock_aws(self):
        self.journal.append({'kind':'attempt','provider':'aws','model':'us.amazon.nova-2-lite-v1:0',
            'success':True,'state':'AVAILABLE','error':None,'event_id':'mock-aws-health-fixture','job_id':'mock-aws-health-fixture'})

    def task(self, tid='one', providers=None, **extra):
        return dict(id=tid, kind='worker', providers=providers or ['ollama'],
                    instruction='Return {"ok":true}', expected={'ok':True}, **extra)

    def campaign(self, tasks=None, adapter=None, clock=lambda:1000):
        manifest = {'id':'test', 'tasks':tasks or [self.task()]}
        policy=copy.deepcopy(self.policy)
        # Zero-rate fixture only: tests call mocks, never AWS. Production
        # remains fail-closed until explicit model pricing and reconciliation.
        policy['prices_per_million_tokens']['aws/us.amazon.nova-2-lite-v1:0']={'input':0,'output':0}
        policy['prices_per_million_tokens']['aws/us.amazon.nova-pro-v1:0']={'input':0,'output':0}
        return c.Campaign(manifest, self.root/'campaign', h.Router(self.journal, policy, adapter or self.good), clock)

    def test_nova_default_and_disabled_routes(self):
        self.assertEqual(self.policy['models']['aws'], 'us.amazon.nova-2-lite-v1:0')
        for route in self.policy['routes'].values():
            self.assertFalse(any(p == 'openai' or 'openai.' in str(m) or 'haiku' in str(m) for p,m in route))

    def test_nova_converse_payload(self):
        def cli(args, deadline):
            payload=json.loads(Path(args[args.index('--cli-input-json')+1][7:]).read_text())
            self.assertEqual(payload['modelId'],'us.amazon.nova-2-lite-v1:0')
            self.assertEqual(payload['inferenceConfig']['maxTokens'],32)
            self.assertNotIn('toolConfig',payload)
            return {'output':{'message':{'content':[{'text':'{"ok":true}'}]}},'stopReason':'end_turn','usage':{'inputTokens':1}}
        with patch.object(h,'cli',side_effect=cli):
            self.assertTrue(h.invoke('aws',self.policy['models']['aws'],'tiny',20,32)[2])

    def test_block_disallowed_models_before_network(self):
        with patch.object(h,'cli') as cli:
            for m in ['us.openai.gpt-5.6-luna','anthropic.claude-3-haiku-20240307-v1:0']:
                with self.assertRaises(h.Failure): h.invoke('aws',m,'x',10,32)
            cli.assert_not_called()

    def test_failover_rejects_malformed_json(self):
        def adapter(p,m,*args):
            self.calls.append(p)
            return ('```json\n{"ok":true}\n```' if p=='gemini' else '{"ok":true}'),{},True,m
        campaign=self.campaign([self.task(providers=['gemini','ollama'])],adapter)
        result=campaign.run()
        self.assertEqual(self.calls,['gemini','ollama'])
        self.assertEqual(result['tasks']['one']['provider'],'ollama')
        self.assertEqual([e['review'] for e in self.journal.events() if e['kind']=='review'],['REJECTED','ACCEPTED'])

    def test_provider_exception_fails_over(self):
        def adapter(p,m,*args):
            if p=='azure': raise h.Failure('RATE_LIMITED','RATE_LIMIT')
            return self.good(p,m,*args)
        result=self.campaign([self.task(providers=['azure','ollama'])],adapter).run()
        self.assertEqual(result['tasks']['one']['status'],'ACCEPTED')

    def test_circuit_opens_and_half_open_after_cooldown(self):
        camp=self.campaign()
        camp.circuit('gemini',False,'RATE_LIMIT')
        camp.circuit('gemini',False,'RATE_LIMIT')
        self.assertFalse(camp.available('gemini'))
        camp.clock=lambda:1301
        self.assertTrue(camp.available('gemini'))
        camp.circuit('gemini',True)
        self.assertEqual(camp.state['circuits']['gemini']['failures'],0)

    def test_resume_no_duplicate_completed_task(self):
        self.campaign().run()
        self.campaign().run()
        self.assertEqual(self.calls,['ollama'])

    def test_recover_returned_attempt_without_new_call(self):
        camp=self.campaign()
        job=camp.job(camp.tasks['one'])
        camp.task_state('one',status='RUNNING',job_id=h.digest(job),provider='ollama',tried=['ollama'])
        camp.router.attempt(job,'ollama',camp.router.model('ollama'))
        result=self.campaign().run()
        self.assertEqual(self.calls,['ollama'])
        self.assertEqual(result['tasks']['one']['status'],'ACCEPTED')

    def test_unknown_interrupted_request_not_repeated(self):
        camp=self.campaign()
        camp.task_state('one',status='RUNNING',job_id='unknown',provider='ollama',tried=['ollama'])
        resumed=self.campaign()
        self.assertEqual(resumed.state['tasks']['one']['status'],'INTERRUPTED_UNKNOWN')
        resumed.run()
        self.assertEqual(self.calls,[])

    def test_independent_review_uses_different_provider(self):
        self.authorize_mock_aws()
        tasks=[self.task('primary',['azure']),self.task('review',['azure','aws'],depends=['primary'],review_of='primary')]
        report=self.campaign(tasks).run()
        self.assertEqual(self.calls,['azure','aws'])
        self.assertEqual(report['tasks']['review']['status'],'ACCEPTED')

    def test_review_exhaustion_cannot_accept(self):
        tasks=[self.task('primary'),self.task('review',depends=['primary'],review_of='primary')]
        report=self.campaign(tasks).run()
        self.assertEqual(report['tasks']['review']['status'],'FAILED')

    def test_typed_contract_duplicate_keys_and_nonfinite(self):
        for text in ['{"ok":1}','{"ok":true,"ok":true}','{"ok":NaN}','text {"ok":true}']:
            self.assertFalse(c.semantic(text,{'ok':True})[0])

    def test_secret_redaction_covers_entire_header_and_aws(self):
        with patch.dict(h.os.environ,{'AWS_SECRET_ACCESS_KEY':'synthetic-aws-secret'}):
            event=self.journal.append({'kind':'fixture','response':'Authorization: Bearer synthetic-token\nsynthetic-aws-secret'})
            text=json.dumps(event)
            self.assertNotIn('synthetic-token',text)
            self.assertNotIn('synthetic-aws-secret',text)

    def test_bounded_tasks_and_resume(self):
        tasks=[self.task('one'),self.task('two')]
        self.campaign(tasks).run(max_tasks=1)
        self.assertEqual(len(self.calls),1)
        self.campaign(tasks).run(max_tasks=1)
        self.assertEqual(len(self.calls),2)

    def test_exhaustion_is_failure(self):
        def bad(*a): raise h.Failure('AUTH_FAILED','AUTH_OR_PERMISSION')
        result=self.campaign(adapter=bad).run()
        self.assertEqual(result['status'],'PROVIDER_EXHAUSTED')
        self.assertEqual(result['tasks']['one']['status'],'FAILED')

    def test_graceful_stop_before_scheduling(self):
        camp=self.campaign(); camp.stopping=True
        self.assertEqual(camp.run()['status'],'INTERRUPTED')
        self.assertEqual(self.calls,[])

    def test_concurrency_limits_and_shared_budget(self):
        guard=threading.Lock(); active=set(); high=[0]
        def adapter(p,m,*a):
            with guard:
                self.assertNotIn(p,active); active.add(p)
                self.assertLessEqual(len(active-{'ollama'}),2)
                high[0]=max(high[0],len(active))
            time.sleep(.04)
            with guard: active.remove(p)
            return '{"ok":true}',{},True,m
        tasks=[self.task(str(i),[p]) for i,p in enumerate(['azure','aws','gemini','ollama','azure'])]
        self.campaign(tasks,adapter).run()
        self.assertGreaterEqual(high[0],2)
        self.assertEqual(sum(e['kind']=='reservation' and e['provider']=='azure' for e in self.journal.events()),2)

    def test_manifest_drift_fails_closed(self):
        self.campaign().run()
        with self.assertRaises(h.Failure):
            self.campaign([self.task('different')])

    def test_budget_block_survives_resume(self):
        camp=self.campaign(); camp.circuit('aws',False,'UNKNOWN_COST_CALL_CAP')
        resumed=self.campaign(clock=lambda:999999)
        self.assertFalse(resumed.available('aws'))

    def test_reject_manifest_hash_typo_before_calls(self):
        task=self.task(sources=[{'path':'irrelevant','sha256':'a'*63,'lines':[1,2]}])
        path=self.root/'bad.json';path.write_text(json.dumps({'id':'test','tasks':[task]}))
        with self.assertRaises(h.Failure):c.load_manifest(path)

    def test_completed_artifact_tamper_is_not_cached_success(self):
        camp=self.campaign();report=camp.run()
        Path(report['tasks']['one']['artifact']['path']).write_text('changed')
        with self.assertRaises(h.Failure):self.campaign()

    def test_native_json_format_keeps_strict_validator(self):
        with patch.object(h,'http') as http:
            http.side_effect=[{}, {'response':'```json\n{}\n```','done':True}]
            response=h.invoke('ollama','qwen2.5-coder:7b','bounded',30,64,json_output=True)[0]
            self.assertEqual(http.call_args.args[1]['format'],'json')
            self.assertFalse(c.semantic(response,{})[0])

    def test_structured_divergence_proposal_stays_pending_semantic_review(self):
        candidate={'observation':'A.LO','retail':'0x3c','host':'0x0'}
        contract={'kind':'first-divergence-review-proposal-v1','candidate_sha256':h.digest(candidate),
                  'allowed_assessments':['SUPPORTS_CANDIDATE_FOR_INVESTIGATION'],
                  'allowed_evidence_refs':['retail-compare.first_verifiable_divergence']}
        answer=json.dumps({'candidate':candidate,'assessment':'SUPPORTS_CANDIDATE_FOR_INVESTIGATION',
                           'rationale':'The supplied comparison records this as its first field mismatch.',
                           'evidence_refs':['retail-compare.first_verifiable_divergence']})
        task=self.task(providers=['azure'],proposal_schema=contract)
        campaign=self.campaign([task],lambda p,m,*a:(answer,{},True,m))
        result=campaign.run();state=result['tasks']['one']
        self.assertEqual(state['status'],'PROPOSED')
        self.assertEqual(state['semantic_status'],'PENDING_SEMANTIC_REVIEW')
        self.assertFalse([e for e in self.journal.events() if e['kind']=='review'])
        self.assertEqual(result['providers']['azure']['status'],'PROPOSAL_PENDING_SEMANTIC_REVIEW')
        self.assertFalse(c.proposal(answer,dict(contract,candidate=candidate))[0] is False)

    def test_proposal_format_rejection_fails_over_to_next_authorized_provider(self):
        self.authorize_mock_aws()
        candidate={'observation':'A.LO','retail':'0x3c','host':'0x0'}
        contract={'kind':'first-divergence-review-proposal-v1','candidate_sha256':h.digest(candidate),
                  'allowed_assessments':['SUPPORTS_CANDIDATE_FOR_INVESTIGATION'],
                  'allowed_evidence_refs':['retail-compare.first_verifiable_divergence']}
        valid=json.dumps({'candidate':candidate,'assessment':'SUPPORTS_CANDIDATE_FOR_INVESTIGATION',
                          'rationale':'Candidate is present in the comparison report.',
                          'evidence_refs':['retail-compare.first_verifiable_divergence']})
        def adapter(provider,model,*args):
            self.calls.append(provider)
            return ('```json\n'+valid+'\n```' if provider=='azure' else valid),{},True,model
        task=self.task(providers=['azure','aws'],proposal_schema=contract)
        result=self.campaign([task],adapter).run()
        self.assertEqual(self.calls,['azure','aws'])
        self.assertEqual(result['tasks']['one']['provider'],'aws')
        self.assertEqual(result['tasks']['one']['status'],'PROPOSED')
        self.assertEqual(result['tasks']['one']['semantic_status'],'PENDING_SEMANTIC_REVIEW')
        self.assertEqual(len([e for e in self.journal.events() if e['kind']=='attempt' and e.get('job_id')!='mock-aws-health-fixture']),2)
        self.assertFalse([e for e in self.journal.events() if e['kind']=='review'])
        resumed=self.campaign([task],adapter).run()
        self.assertEqual(self.calls,['azure','aws'])
        self.assertEqual(resumed['tasks']['one']['status'],'PROPOSED')

    def test_pinned_debugger_validation_does_not_accept_other_branch_logic(self):
        camp=self.campaign()
        source='if (info.conditionMet) { bpAddr = info.branchTarget; } else { bpAddr = pc + (2 * 4); } CBreakPoints::AddBreakPoint(cpu->getCpuType(), bpAddr, true, true, true)'
        with patch.object(camp,'inputs',return_value=[{'text':source,'sha256':'synthetic'}]):
            self.assertFalse(camp.local({'kind':'debugger_contract'})['delay_slot_separate_stop'])
        with patch.object(camp,'inputs',return_value=[{'text':source.replace('2 * 4','1 * 4'),'sha256':'synthetic'}]):
            with self.assertRaises(h.Failure):camp.local({'kind':'debugger_contract'})

    def test_model_override_and_eol_classification(self):
        with patch.dict(h.os.environ,{'BEDROCK_MODEL_ID':'custom-profile'}):
            self.assertEqual(self.campaign().router.model('aws'),'custom-profile')
        self.assertEqual(h.classify('model is end-of-life').code,'MODEL_EOL')

    def test_malformed_usage_is_provider_failure_with_local_fallback(self):
        def adapter(p,m,*a):
            return '{"ok":true}',None if p=='aws' else {},True,m
        self.authorize_mock_aws()
        result=self.campaign([self.task(providers=['aws','ollama'])],adapter).run()
        aws_attempts=[e for e in self.journal.events() if e['kind']=='attempt' and e.get('provider')=='aws' and e.get('job_id')!='mock-aws-health-fixture']
        self.assertEqual(result['tasks']['one']['provider'],'ollama')
        self.assertEqual(aws_attempts[-1]['error'],'INVALID_PROVIDER_USAGE')


if __name__=='__main__': unittest.main()
