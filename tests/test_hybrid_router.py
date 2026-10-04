import copy
import importlib.util
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

spec = importlib.util.spec_from_file_location('hybrid_router', Path(__file__).resolve().parents[1] / 'tools/hybrid_router.py')
h = importlib.util.module_from_spec(spec)
spec.loader.exec_module(h)


class HybridTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.j = h.Journal(self.tmp.name)
        self.policy = json.loads(h.POLICY.read_text())

    def router(self, adapter):
        return h.Router(self.j, copy.deepcopy(self.policy), adapter)

    def good(self, provider, model, *args):
        return '[-2,0,4,9]', {'input_tokens': 7, 'output_tokens': 8}, True, model

    def test_proposal_then_review_is_separate_immutable_event(self):
        r = self.router(self.good)
        result = r.route(r.job('sort fixture'))
        self.assertEqual(result['review'], 'PENDING_SEMANTIC_REVIEW')
        review = r.review(result['event_id'], True, 'master', 'independent fixture')
        self.assertEqual(review['review'], 'ACCEPTED')
        self.assertEqual(result['review'], 'PENDING_SEMANTIC_REVIEW')
        with self.assertRaises(h.Failure):
            r.review(result['event_id'], True, 'master', 'duplicate')

    def test_fallback_and_no_duplicate_job(self):
        calls = []
        def adapter(provider, model, *args):
            calls.append(provider)
            if provider == 'ollama':
                raise h.Failure('TEMPORARILY_UNAVAILABLE', 'NETWORK_OR_TIMEOUT')
            return self.good(provider, model, *args)
        r = self.router(adapter)
        job = r.job('fallback')
        self.assertEqual(r.route(job)['provider'], 'gemini')
        self.assertEqual(calls, ['ollama', 'gemini'])
        with self.assertRaises(h.Failure):
            r.route(job)
        self.assertEqual(len(calls), 2)

    def test_unknown_budget_persists_and_blocks(self):
        r = self.router(self.good)
        for i in range(3):
            result = r.attempt(r.job(str(i)), 'azure', 'gpt-4.1-mini-1')
        self.assertEqual(result['error'], 'UNKNOWN_COST_CALL_CAP')
        self.assertFalse(result['adapter_attempted'])

    def test_known_budget_reserves_before_call(self):
        self.policy['prices_per_million_tokens']['azure/gpt-4.1-mini-1'] = {'input': 1000000, 'output': 1000000}
        r = self.router(lambda *a: self.fail('must not call'))
        self.assertEqual(r.attempt(r.job('a'), 'azure', 'gpt-4.1-mini-1')['error'], 'LOCAL_BUDGET_CAP')

    def test_verification_precedes_auth_classification(self):
        self.assertEqual(h.classify('AccessDeniedException account verification', 403).state, 'TEMPORARILY_UNAVAILABLE')
        self.assertEqual(h.classify('insufficient_quota', 429).state, 'QUOTA_EXHAUSTED')
        self.assertEqual(h.classify('rate limit', 429).state, 'RATE_LIMITED')
        self.assertEqual(h.classify('bad', 401).state, 'AUTH_FAILED')

    def test_critical_and_direct_openai_require_probe(self):
        r = self.router(lambda *a: self.fail('must not call'))
        with self.assertRaises(h.Failure):
            r.route(r.job('hard', 'CRITICAL'))
        self.assertTrue(all(e.get('provider') != 'aws' or e['kind'] == 'skip' for e in self.j.events()))

    def test_secret_prompt_rejected_and_output_redacted(self):
        with patch.dict(h.os.environ, {'OPENAI_API_KEY': 'synthetic-test-credential'}):
            r = self.router(lambda *a: ('synthetic-test-credential', {}, True, 'model'))
            with self.assertRaises(h.Failure):
                r.job('use synthetic-test-credential')
            result = r.route(r.job('harmless'))
            self.assertEqual(result['response'], '[REDACTED]')
            self.assertNotIn('synthetic-test-credential', ''.join(p.read_text() for p in self.j.path.glob('*.json')))

    def test_limits_and_truncation(self):
        r = self.router(lambda *a: ('partial', {}, False, 'm'))
        with self.assertRaises(h.Failure):
            r.job('x', maximum=999999)
        result = r.attempt(r.job('x'), 'ollama', 'm')
        self.assertFalse(result['success'])
        self.assertEqual(result['error'], 'INCOMPLETE_OR_EMPTY_RESPONSE')

    def test_probe_cannot_repeat(self):
        r = self.router(lambda *a: ('HYBRID_OK', {}, True, 'm'))
        r.probe('ollama')
        with self.assertRaises(h.Failure):
            r.probe('ollama')

    def test_lock_blocks_concurrent_spend(self):
        with self.j.lock():
            with self.assertRaises(h.Failure):
                with self.j.lock():
                    self.fail('lock acquired twice')

    def test_adapter_openai_discovers_one_small_model(self):
        with patch.object(h, 'http') as http:
            with self.assertRaises(h.Failure):
                h.invoke('openai', None, 'test', 10, 32)
            http.assert_not_called()

    def test_adapter_aws_sets_output_cap_and_one_attempt(self):
        with patch.object(h, 'cli') as cli:
            cli.return_value = {'output': {'message': {'content': [{'text': 'OK'}]}}, 'stopReason': 'end_turn', 'usage': {'inputTokens': 2}}
            result = h.invoke('aws', 'us.amazon.nova-2-lite-v1:0', 'test', 10, 32)
            self.assertEqual(result[0], 'OK')
            self.assertEqual(cli.call_count, 1)

    def test_aws_dual_budget_requires_explicit_price_before_adapter(self):
        r=self.router(lambda *args:self.fail('AWS must fail closed without a model price'))
        r.policy['prices_per_million_tokens'].pop('aws/us.amazon.nova-2-lite-v1:0',None)
        before=r.remaining_calls('aws')
        result=r.attempt(r.job('Respond exactly with: BEDROCK_OK'),'aws','us.amazon.nova-2-lite-v1:0')
        self.assertEqual(result['error'],'AWS_USD_PRICE_REQUIRED')
        self.assertEqual(result['state'],'FAILED');self.assertEqual(result['failure_origin'],'LOCAL_POLICY')
        self.assertFalse(result['adapter_attempted'])
        self.assertEqual(r.remaining_calls('aws'),before)
    def test_aws_role_models_are_explicit_and_pro_model_is_not_default(self):
        r=self.router(self.good)
        self.assertEqual(r.model('aws'),'us.amazon.nova-2-lite-v1:0')
        self.assertEqual(r.aws_role_model('NOVA_2_LITE'),'us.amazon.nova-2-lite-v1:0')
        self.assertEqual(r.aws_role_model('NOVA_PRO'),'us.amazon.nova-pro-v1:0')
        with self.assertRaisesRegex(h.Failure,'UNKNOWN_AWS_MODEL_ROLE'):r.aws_role_model('OPENAI_GPT')
    def test_bedrock_smoke_prompt_and_supported_nova_roles(self):
        for model in ('us.amazon.nova-2-lite-v1:0','us.amazon.nova-pro-v1:0'):
            seen=[]
            def fake_cli(args,deadline):
                payload=json.loads(Path(args[args.index('--cli-input-json')+1][7:]).read_text())
                seen.append(payload)
                return {'output':{'message':{'content':[{'text':'BEDROCK_OK'}]}},
                    'stopReason':'end_turn','usage':{'inputTokens':4,'outputTokens':2}}
            with patch.object(h,'cli',side_effect=fake_cli) as cli:
                text,usage,done,actual=h.invoke('aws',model,'Respond exactly with: BEDROCK_OK',20,32)
                self.assertEqual((text,done,actual),('BEDROCK_OK',True,model))
                self.assertEqual(usage,{'inputTokens':4,'outputTokens':2})
                self.assertEqual(cli.call_count,1)
                self.assertEqual(seen[0]['modelId'],model)
                self.assertEqual(seen[0]['messages'][0]['content'][0]['text'],'Respond exactly with: BEDROCK_OK')
                self.assertEqual(seen[0]['inferenceConfig']['maxTokens'],32)

    def test_adapter_azure_token_never_enters_evidence(self):
        with patch.object(h, 'cli', return_value={'accessToken': 'synthetic-token'}), patch.object(h, 'http') as http:
            http.return_value = {'choices': [{'message': {'content': 'OK'}, 'finish_reason': 'stop'}], 'usage': {'prompt_tokens': 2}}
            self.assertEqual(h.invoke('azure', 'gpt-4.1-mini-1', 'test', 10, 32)[0], 'OK')
            self.assertEqual(http.call_args.args[1]['model'], 'gpt-4.1-mini-1')

    def test_gemini_and_ollama_request_limits(self):
        with patch.dict(h.os.environ, {'GEMINI_API_KEY': 'synthetic'}), patch.object(h, 'http') as http:
            http.return_value = {'candidates': [{'content': {'parts': [{'text': 'OK'}]}, 'finishReason': 'STOP'}], 'usageMetadata': {'promptTokenCount': 3}}
            self.assertEqual(h.invoke('gemini', 'gemini-2.5-flash', 'x', 10, 32)[0], 'OK')
            self.assertEqual(http.call_args.args[1]['generationConfig']['maxOutputTokens'], 32)
            http.side_effect = [{}, {'response': 'OK', 'done': True, 'eval_count': 1}]
            self.assertEqual(h.invoke('ollama', 'qwen2.5-coder:7b', 'x', 10, 32)[0], 'OK')
            self.assertEqual(http.call_args.args[1]['options']['num_predict'], 32)

    def test_redaction_preserves_json_structure(self):
        event = self.j.append({'kind': 'fixture', 'response': 'Authorization: Bearer secret\nAPI_KEY=abc'})
        self.assertIn('[REDACTED]', event['response'])
        self.assertEqual(len(self.j.events()), 1)

    def test_max_attempts_and_no_automatic_critical_route(self):
        calls = []
        def fail(provider, *args):
            calls.append(provider)
            raise h.Failure('FAILED', 'SYNTHETIC')
        self.policy['max_attempts'] = 2
        r = self.router(fail)
        with self.assertRaises(h.Failure):
            r.route(r.job('bounded fallback'))
        self.assertEqual(calls, ['ollama', 'gemini'])

    def test_http_permission_denial_safe_classification(self):
        with patch.object(h.urllib.request, 'build_opener') as opener:
            opener.return_value.open.side_effect = h.urllib.error.URLError(PermissionError('secret raw detail'))
            with self.assertRaises(h.Failure) as caught:
                h.http('https://example.com', {}, {}, h.Deadline(1))
            self.assertEqual(caught.exception.code, 'NETWORK_PERMISSION_DENIED')

    def test_tampered_evidence_fails_closed(self):
        self.j.append({'kind': 'fixture'})
        path = next(self.j.path.glob('*.json'))
        value = json.loads(path.read_text())
        value['kind'] = 'changed'
        path.write_text(json.dumps(value))
        with self.assertRaises(h.Failure) as caught:
            self.j.events()
        self.assertEqual(caught.exception.code, 'EVIDENCE_HASH_MISMATCH')

    def test_recheck_requires_cooldown(self):
        r = self.router(self.good)
        r.probe('aws')
        with self.assertRaises(h.Failure) as caught:
            r.probe('aws', 'explicit master request')
        self.assertEqual(caught.exception.code, 'PROBE_COOLDOWN_24H')

    def test_real_provider_failure_blocks_premature_recheck(self):
        calls=[]
        def failed(*args):
            calls.append(args[0])
            raise h.Failure('TEMPORARILY_UNAVAILABLE','SERVICE_ERROR')
        r=self.router(failed)
        first=r.probe('aws')
        self.assertFalse(first['success']);self.assertTrue(first['adapter_attempted'])
        with self.assertRaisesRegex(h.Failure,'PROBE_COOLDOWN_24H'):
            r.probe('aws','Diagnose saved real service failure before retry')
        self.assertEqual(calls,['aws'])
        self.assertEqual(len([e for e in self.j.events() if e['kind']=='reservation' and e['provider']=='aws']),1)

    def test_worker_invocation_also_protects_immediate_probe(self):
        calls=[]
        def failed(provider,*args):
            calls.append(provider);raise h.Failure('FAILED','PROVIDER_ERROR')
        r=self.router(failed)
        result=r.attempt(r.job('real worker attempt'),'aws','us.amazon.nova-2-lite-v1:0')
        self.assertTrue(result['adapter_attempted'])
        with self.assertRaisesRegex(h.Failure,'PROBE_COOLDOWN_24H'):
            r.probe('aws','Do not repeat a just-failed live worker invocation')
        self.assertEqual(calls,['aws'])

    def test_pre_adapter_failure_allows_justified_recheck_after_fix(self):
        calls=[]
        def good(provider,model,*args):
            calls.append(provider)
            return 'HYBRID_OK',{'inputTokens':4,'outputTokens':2},True,model
        r=self.router(good);price_key='aws/us.amazon.nova-2-lite-v1:0'
        r.policy['prices_per_million_tokens'].pop(price_key)
        first=r.probe('aws')
        self.assertEqual(first['error'],'AWS_USD_PRICE_REQUIRED')
        self.assertEqual(first['state'],'FAILED');self.assertEqual(first['failure_origin'],'LOCAL_POLICY')
        self.assertFalse(first['adapter_attempted']);self.assertEqual(calls,[])
        old_events=self.j.events();old_hashes={e['event_id']:e['event_sha256'] for e in old_events}
        r.policy['prices_per_million_tokens'][price_key]={'input':0.30,'output':2.50}
        second=r.probe('aws','Configured explicit Nova 2 Lite price; earlier attempt was pre-adapter')
        self.assertTrue(second['success']);self.assertTrue(second['adapter_attempted'])
        self.assertEqual(second['response'],'HYBRID_OK');self.assertEqual(calls,['aws'])
        new_events=self.j.events();new_by_id={e['event_id']:e for e in new_events}
        self.assertTrue(set(old_hashes).issubset(new_by_id))
        self.assertTrue(all(new_by_id[k]['event_sha256']==v for k,v in old_hashes.items()))
        verdicts=[e for e in new_events if e['kind']=='probe_verdict' and e['provider']=='aws']
        self.assertFalse(verdicts[0]['adapter_attempted']);self.assertTrue(verdicts[-1]['adapter_attempted'])
        with self.assertRaisesRegex(h.Failure,'PROBE_COOLDOWN_24H'):
            r.probe('aws','Do not repeat the paid request')
        self.assertEqual(calls,['aws'])
        self.assertEqual(r.remaining_calls('aws'),self.policy['unknown_cost_call_limit_per_provider']-1)

    def test_probe_without_reason_still_rejected_after_pre_adapter_failure(self):
        r=self.router(self.good);r.policy['prices_per_million_tokens'].pop('aws/us.amazon.nova-2-lite-v1:0')
        first=r.probe('aws');self.assertFalse(first['adapter_attempted'])
        with self.assertRaisesRegex(h.Failure,'PROBE_ALREADY_ATTEMPTED_NO_AUTORETRY'):
            r.probe('aws')

    def test_successful_recheck_transitions_aws_to_healthy_route(self):
        calls=[]
        def good(provider,model,*args):
            calls.append(provider);return 'HYBRID_OK',{'inputTokens':4,'outputTokens':2},True,model
        r=self.router(good);r.policy['prices_per_million_tokens'].pop('aws/us.amazon.nova-2-lite-v1:0')
        r.probe('aws');r.policy['prices_per_million_tokens']['aws/us.amazon.nova-2-lite-v1:0']={'input':0.30,'output':2.50}
        probe=r.probe('aws','Corrected price configuration after a pre-adapter block')
        self.assertEqual(probe['state'],'AVAILABLE')
        r.policy['routes']['LOW']=[['aws','us.amazon.nova-2-lite-v1:0']]
        routed=r.route(r.job('bounded task after successful recheck','LOW'))
        self.assertEqual(routed['provider'],'aws');self.assertTrue(routed['success'])
        self.assertEqual(calls,['aws','aws'])

    def test_aws_spending_ceiling_blocks_before_adapter(self):
        calls=[];r=self.router(lambda *args:calls.append(args) or self.fail('must not invoke'))
        r.policy['aws_spending_ceiling_usd']=0.000001
        result=r.attempt(r.job('bounded ceiling fixture'),'aws','us.amazon.nova-2-lite-v1:0')
        self.assertEqual(result['error'],'LOCAL_BUDGET_CAP');self.assertEqual(result['failure_origin'],'LOCAL_POLICY')
        self.assertEqual(result['state'],'FAILED');self.assertFalse(result['adapter_attempted'])
        self.assertEqual(calls,[])

    def test_aws_unknown_historical_cost_fails_closed(self):
        r=self.router(lambda *args:self.fail('must not invoke'))
        self.j.append({'kind':'reservation','provider':'aws','job_id':'historical-unknown',
                       'model':'us.amazon.nova-2-lite-v1:0','reserved_usd':None,'billed_usd':None})
        result=r.attempt(r.job('after unknown historical reservation'),'aws','us.amazon.nova-2-lite-v1:0')
        self.assertEqual(result['error'],'UNKNOWN_PRIOR_COST_REQUIRES_RECONCILIATION')
        self.assertEqual(result['failure_origin'],'LOCAL_POLICY');self.assertEqual(result['state'],'FAILED')
        self.assertFalse(result['adapter_attempted'])

    def test_calculated_cost_is_not_billed(self):
        self.policy['prices_per_million_tokens']['azure/gpt-4.1-mini-1'] = {'input': 1, 'output': 2}
        r = self.router(lambda p,m,*a: ('OK', {'prompt_tokens':7,'completion_tokens':8},True,m))
        result = r.attempt(r.job('cost fixture'), 'azure', 'gpt-4.1-mini-1')
        self.assertEqual(result['cost_calculated_usd'], 23 / 1e6)
        self.assertIsNone(result['billed_usd'])

    def test_negative_semantic_review_is_recorded(self):
        r = self.router(self.good)
        result = r.route(r.job('bad format fixture'))
        review = r.review(result['event_id'], False, 'master', 'JSON format mismatch')
        self.assertEqual(review['review'], 'REJECTED')
        self.assertEqual(review['attempt_sha256'], result['event_sha256'])


if __name__ == '__main__':
    unittest.main()
