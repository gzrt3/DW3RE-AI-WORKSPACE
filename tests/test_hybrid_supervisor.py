"""Synthetic temporary state only. No provider, emulator, or quota requests."""
import copy
import json
from pathlib import Path
import sys
import tempfile
from types import SimpleNamespace
import unittest
from unittest.mock import patch

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
import hybrid_supervisor as s
import hybrid_router as h
import hybrid_campaign as c
import host_snapshot as host
import codex_capacity as quota
import pcsx2_capture as pc


class SupervisorTests(unittest.TestCase):
    def setUp(self):
        self.tmp=tempfile.TemporaryDirectory();self.addCleanup(self.tmp.cleanup)
        self.root=Path(self.tmp.name)
        self.verify=patch.object(s,'verify_legacy',return_value={'verified':'SYNTHETIC'});self.verify.start();self.addCleanup(self.verify.stop)
    def supervisor(self,handlers=None):return s.Supervisor(self.root/'supervisor',handlers,legacy_root=self.root/'legacy',min_free_bytes=0)
    def test_local_aws_spending_guard_is_not_reported_as_provider_quota(self):
        self.assertEqual(s.provider_health_state({'provider':'aws','success':False,'state':'FAILED',
            'error':'AWS_USD_PRICE_REQUIRED','adapter_attempted':False}), 'LOCAL_POLICY_BLOCKED')
        self.assertEqual(s.provider_health_state({'provider':'aws','success':False,'state':'QUOTA_EXHAUSTED',
            'error':'BILLING_OR_QUOTA','adapter_attempted':True}), 'BUDGET_EXHAUSTED')
    def test_fresh_import_and_hash_chain(self):
        obj=self.supervisor();self.assertEqual(obj.state['source_legacy'],{'verified':'SYNTHETIC'})
        self.assertEqual(self.supervisor().tail,obj.tail)
    def test_completed_work_never_repeated(self):
        calls=[];handlers={'op':lambda *_: calls.append(1) or {'ok':True}}
        obj=self.supervisor(handlers);obj.add('x','op');obj.execute('x')
        other=self.supervisor(handlers);other.recalculate()
        self.assertEqual(other.state['tasks']['x']['status'],'ACCEPTED');self.assertEqual(calls,[1])
    def test_human_gate_blocks_only_descendants(self):
        obj=self.supervisor();obj.add('retail','gate',capacity='external');obj.add('comparison','op',('retail',));obj.add('independent','op')
        obj.recalculate();self.assertEqual(obj.state['tasks']['independent']['status'],'READY')
        self.assertEqual(obj.state['tasks']['comparison']['status'],'BLOCKED_DEPENDENCY')
    def test_new_evidence_wakes_comparison(self):
        obj=self.supervisor();obj.add('retail-capture','gate',capacity='external');obj.add('compare','op',('retail-capture',));obj.recalculate()
        fake=SimpleNamespace(capture_status=lambda:{'status':'RETAIL_CAPTURE_AVAILABLE','fingerprint':'test-only','root':'fixture'})
        with patch.object(s.a,'Autoloop',return_value=fake):obj.refresh_external()
        self.assertEqual(obj.state['tasks']['compare']['status'],'READY')
    def test_invalid_retail_cannot_open_gate(self):
        obj=self.supervisor();obj.add('retail-capture','gate',capacity='external')
        with patch.object(s.a,'Autoloop',return_value=SimpleNamespace(capture_status=lambda:{'status':'INVALID_RETAIL_EVIDENCE'})):obj.refresh_external()
        self.assertNotEqual(obj.state['tasks']['retail-capture']['status'],'ACCEPTED')
    def test_keyboard_interrupt_checkpoint(self):
        def operation(*_):raise KeyboardInterrupt()
        obj=self.supervisor({'op':operation});obj.add('x','op');obj.execute('x')
        self.assertTrue(obj.stop_event.is_set());self.assertEqual(self.supervisor().state['tasks']['x']['status'],'READY')
    def test_uncertain_premium_not_resubmitted(self):
        obj=self.supervisor();obj.add('x','op',capacity='premium');obj.update('x',status='RUNNING')
        resumed=self.supervisor();resumed.recalculate();self.assertEqual(resumed.state['tasks']['x']['status'],'INTERRUPTED_UNKNOWN')
    def test_deterministic_crash_recovered(self):
        obj=self.supervisor();obj.add('x','op');obj.update('x',status='RUNNING')
        self.assertEqual(self.supervisor().state['tasks']['x']['status'],'READY')
    def test_artifact_tampering_fails_closed(self):
        obj=self.supervisor({'op':lambda *_:{'ok':True}});obj.add('x','op');obj.execute('x')
        Path(obj.state['tasks']['x']['artifact']['path']).write_text('{}')
        with self.assertRaisesRegex(h.Failure,'SUPERVISOR_TASK_ARTIFACT_CHANGED'):self.supervisor()
    def test_journal_tampering_fails_closed(self):
        self.supervisor();path=next((self.root/'supervisor').glob('journal_*.jsonl'))
        entry=json.loads(path.read_text());entry['kind']='tampered';path.write_text(json.dumps(entry)+'\n')
        with self.assertRaises(h.Failure):self.supervisor()
    def test_projection_tampering_fails_closed(self):
        obj=self.supervisor();path=obj.output/'state.json';data=json.loads(path.read_text());data['project_complete']=True;path.write_text(json.dumps(data))
        with self.assertRaisesRegex(h.Failure,'PROJECTION'):self.supervisor()
    def test_idle_polls_do_not_make_inference(self):
        obj=self.supervisor()
        with patch.object(obj,'seed'),patch.object(obj,'refresh_external'),patch.object(obj,'report',return_value={}),patch.object(obj.stop_event,'wait',side_effect=lambda *_:obj.stop_event.set()) as wait:
            obj.run(poll_seconds=30)
        wait.assert_called_once_with(30);self.assertEqual(obj.state['status'],'STOPPED_CHECKPOINTED')
    def test_bounded_operation_limit(self):
        obj=self.supervisor({'op':lambda *_:{'ok':True}});obj.add('x','op');obj.add('y','op')
        with patch.object(obj,'seed'),patch.object(obj,'refresh_external'),patch.object(obj,'report',return_value={}):obj.run(max_operations=1)
        self.assertEqual(obj.counts()['ACCEPTED'],1);self.assertEqual(obj.state['status'],'PAUSED_OPERATION_LIMIT')
    def test_provider_failure_does_not_stop_independent_work(self):
        def failure(*_):raise h.Failure('FAILED','PROVIDER_FAILED')
        obj=self.supervisor({'fail':failure,'good':lambda *_:{'ok':True}});obj.add('bad','fail',capacity='pool');obj.add('good','good')
        obj.execute('bad');obj.execute('good');self.assertEqual(obj.state['tasks']['good']['status'],'ACCEPTED')

    def test_rejected_worker_gets_new_external_failover_and_keeps_evidence(self):
        obj=self.supervisor();obj.add('host-snapshot','noop');obj.update('host-snapshot',status='ACCEPTED')
        artifact=self.root/'rejected.json';artifact.write_text(json.dumps({'supervisor_outcome':'REJECTED'}))
        digest=c.sha(artifact)
        obj.add('host-observer-worker-review','noop',('host-snapshot',),capacity='pool')
        obj.update('host-observer-worker-review',status='REJECTED',artifact={'path':str(artifact),'sha256':digest})
        obj.seed()
        failover=obj.state['tasks']['host-observer-worker-review-failover-001']
        self.assertEqual(failover['status'],'READY')
        self.assertEqual(failover['capacity'],'pool')
        self.assertNotEqual(failover['id'],'host-observer-worker-review')
        self.assertEqual(c.sha(artifact),digest)
        router=h.Router(h.Journal())
        remaining={p:router.remaining_calls(p) for p in ('azure','aws','gemini')}
        obj.seed()
        self.assertEqual({p:router.remaining_calls(p) for p in remaining},remaining)

    def test_premium_divergence_is_routed_to_pool_without_completion_cycle(self):
        obj=self.supervisor();obj.add('retail-compare','noop');obj.update('retail-compare',status='ACCEPTED')
        obj.add('first-divergence-review','noop',('retail-compare',),capacity='premium')
        obj.add('project-completion-coverage','noop',capacity='external')
        obj.seed()
        self.assertEqual(obj.state['tasks']['first-divergence-review']['capacity'],'pool')
        self.assertEqual(obj.state['tasks']['first-divergence-review']['status'],'READY')
        self.assertEqual(obj.state['tasks']['first-divergence-review']['depends'],['retail-compare'])
        self.assertNotIn('project-completion-coverage',obj.state['tasks']['first-divergence-review']['depends'])
        self.assertEqual(obj.state['tasks']['project-completion-coverage']['depends'],[])

    def test_report_keep_running_command_matches_reserved_mode(self):
        obj=self.supervisor();obj.emit('fixture',codex={'state':'PREMIUM_RESERVED'},enable_codex=False)
        obj.add('external','external',capacity='external');obj.recalculate()
        report=obj.report()
        self.assertEqual(report['EXACT_KEEP_RUNNING_COMMAND'],
                         'python tools/hybrid_supervisor.py run --codex-mode PREMIUM_RESERVED --poll-seconds 30')
    def test_zero_ready_without_classified_barrier_fails_closed(self):
        obj=self.supervisor()
        with self.assertRaisesRegex(h.Failure,'NO_READY_TASKS_NO_CLASSIFIED_BARRIER'):obj.report()
        self.assertTrue((obj.output/'orchestration_bug.json').is_file())
    def test_pending_semantic_proposal_requires_consumer(self):
        obj=self.supervisor();obj.add('first-divergence-review','op')
        path=obj.output/'pending.json';path.write_text(json.dumps({'proposal_status':'PENDING_SEMANTIC_REVIEW'}))
        obj.update('first-divergence-review',status='ACCEPTED',artifact={'path':str(path),'sha256':c.sha(path)})
        with self.assertRaisesRegex(h.Failure,'PENDING_PROPOSAL_NO_CONSUMER'):obj.report()
    def test_accepted_recovery_consumer_satisfies_pending_proposal_invariant(self):
        obj=self.supervisor();obj.add('first-divergence-review','op')
        path=obj.output/'pending.json';path.write_text(json.dumps({'proposal_status':'PENDING_SEMANTIC_REVIEW'}))
        obj.update('first-divergence-review',status='ACCEPTED',artifact={'path':str(path),'sha256':c.sha(path)})
        obj.add('first-divergence-proposal-consumer','pending-divergence-consumer',('first-divergence-review',))
        obj.update('first-divergence-proposal-consumer',status='REJECTED',error='prior failure')
        obj.add('first-divergence-proposal-consumer-recovery-001','pending-divergence-consumer',('first-divergence-review',))
        obj.update('first-divergence-proposal-consumer-recovery-001',status='ACCEPTED')
        obj.add('external','external',capacity='external');obj.recalculate()
        report=obj.report()
        self.assertEqual(report['PENDING_PROPOSALS'],['first-divergence-review'])
    def test_seed_migrates_audit_dependency_to_accepted_recovery_consumer(self):
        obj=self.supervisor();proposal=obj.output/'proposal.json';proposal.write_text('{}')
        obj.add('first-divergence-review','op');obj.update('first-divergence-review',status='ACCEPTED',artifact={'path':str(proposal),'sha256':c.sha(proposal)})
        obj.add('first-divergence-proposal-consumer','pending-divergence-consumer',('first-divergence-review',))
        obj.update('first-divergence-proposal-consumer',status='REJECTED',error='KeyError')
        obj.add('first-divergence-proposal-consumer-recovery-001','pending-divergence-consumer',('first-divergence-review',))
        obj.update('first-divergence-proposal-consumer-recovery-001',status='ACCEPTED')
        obj.add('entry-state-audit','entry-state-audit',('first-divergence-proposal-consumer','retail-capture','host-snapshot','entry-A-audit'))
        obj.update('entry-state-audit',status='BLOCKED_DEPENDENCY')
        obj.seed()
        self.assertIn('first-divergence-proposal-consumer-recovery-001',obj.state['tasks']['entry-state-audit']['depends'])
        self.assertNotIn('first-divergence-proposal-consumer',obj.state['tasks']['entry-state-audit']['depends'])
        self.assertEqual(obj.state['tasks']['entry-state-contract-followup']['depends'],['entry-state-audit'])
    def test_proposal_consumer_opens_evidence_successor_without_patch_authority(self):
        from hybrid_project_tasks import entry_state_proposal_consumer
        obj=self.supervisor({'entry-state-proposal-consumer':entry_state_proposal_consumer});audit_dir=obj.output/'tasks/entry-state-audit/attempt_001';audit_dir.mkdir(parents=True)
        evidence=audit_dir/'entry_state_A.json';evidence.write_text('{}')
        obj.add('entry-state-audit','noop');obj.update('entry-state-audit',status='ACCEPTED',artifact={'path':str(evidence),'sha256':c.sha(evidence)})
        proposal=obj.output/'proposal.json'
        proposal.write_text(json.dumps({'candidate':{'observation':'A.LO','retail':'0x000000000000003c','host':'0x0000000000000000','capture_point':'before first instruction'},
            'assessment':'CANNOT_VERIFY_WITH_AVAILABLE_FIELDS','rationale':'Capture occurs before the first ELF instruction; causal contract is not present.',
            'evidence_refs':['field_differences','capture_point']}))
        obj.add('entry-state-proposal-consumer','entry-state-proposal-consumer',inputs={'proposal':str(proposal),'proposal_sha256':c.sha(proposal)})
        obj.execute('entry-state-proposal-consumer')
        result=json.loads(Path(obj.state['tasks']['entry-state-proposal-consumer']['artifact']['path']).read_text())
        self.assertEqual(result['decision'],'ACCEPTED_FOR_DIAGNOSIS');self.assertFalse(result['patch_authority'])
        self.assertIn('entry-state-contract-followup',obj.state['tasks'])
    def test_host_recapture_uses_never_reused_iteration_id(self):
        from hybrid_project_tasks import host_recapture
        obj=self.supervisor();capture=obj.legacy/'capture';capture.mkdir(parents=True)
        (capture/'host_iteration_0001').mkdir();(capture/'host_iteration_0003').mkdir()
        def fake_build(_work,destination):
            destination.mkdir();(destination/'manifest.json').write_text('{"fixture":true}')
            return {'capture':str(destination),'manifest_sha256':c.sha(destination/'manifest.json')}
        work=obj.output/'work';work.mkdir()
        with patch.object(host,'build_and_capture',side_effect=fake_build):
            result=host_recapture(obj,{'id':'host-recapture'},work)
        self.assertEqual(result['iteration_id'],'host_iteration_0004')
        self.assertTrue((capture/'host_iteration_0001').is_dir())
        self.assertTrue((capture/'host_iteration_0003').is_dir())
    def test_malformed_worker_rejected(self):
        self.assertFalse(c.semantic('```json\n{"ok":true}\n```',{'ok':True})[0])
    def test_cooldown_and_premium_unavailability(self):
        obj=self.supervisor();obj.add('x','op',capacity='premium');obj.recalculate();self.assertEqual(obj.state['tasks']['x']['status'],'BLOCKED_PREMIUM')
        obj.emit('fixture',codex={'state':'CODEX_AVAILABLE'},enable_codex=True);obj.update('x',retry_at=obj.clock()+100);obj.recalculate()
        self.assertEqual(obj.state['tasks']['x']['status'],'COOLDOWN')
    def test_disk_guard_no_operation(self):
        obj=self.supervisor({'op':lambda *_:self.fail('ran')});obj.add('x','op');obj.min_free_bytes=2**80
        self.assertFalse(obj.execute('x'));self.assertEqual(obj.state['status'],'PAUSED_DISK_SPACE')
    def test_live_lock_rejected(self):
        with s.process_lock(self.root/'lock'):
            with self.assertRaisesRegex(h.Failure,'ALREADY_RUNNING'):
                with s.process_lock(self.root/'lock'):pass
    def test_no_cloud_budget_reset(self):
        policy=copy.deepcopy(json.loads(h.POLICY.read_text()))
        policy['prices_per_million_tokens']['aws/us.amazon.nova-2-lite-v1:0']={'input':0,'output':0}
        router=h.Router(h.Journal(self.root/'ledger'),policy)
        for i in range(2):router.reserve(str(i),'aws',router.model('aws'),'x',32)
        self.supervisor();self.supervisor()
        self.assertEqual(h.Router(h.Journal(self.root/'ledger'),policy).remaining_calls('aws'),0)
    def test_secret_like_result_rejected(self):
        obj=self.supervisor();obj.add('x','op')
        with self.assertRaises(h.Failure):obj.artifact('x',{'Authorization':'Bearer fixture-sensitive-value'})
    def test_projection_unknown_tail_rejected(self):
        obj=self.supervisor();path=obj.output/'state.json';data=json.loads(path.read_text());data['journal_tail']='0'*64;path.write_text(json.dumps(data))
        with self.assertRaisesRegex(h.Failure,'PROJECTION'):self.supervisor()
    def test_stale_valid_projection_crash_recovery(self):
        obj=self.supervisor();path=obj.output/'state.json';old=path.read_text();obj.add('x','op');path.write_text(old)
        self.assertIn('x',self.supervisor().state['tasks'])
    def test_parallel_independent_operations_journal_safe(self):
        import threading
        barrier=threading.Barrier(2)
        def op(*_):barrier.wait(timeout=3);return {'ok':True}
        obj=self.supervisor({'op':op});obj.add('one','op');obj.add('two','op')
        with patch.object(obj,'seed'),patch.object(obj,'refresh_external'),patch.object(obj,'report',return_value={}):obj.run(max_operations=2)
        self.assertEqual(self.supervisor().counts()['ACCEPTED'],2)
    def test_premium_and_pool_uncertain_requeue_denied(self):
        obj=self.supervisor();obj.add('x','op',capacity='premium');obj.update('x',status='REJECTED')
        with self.assertRaises(h.Failure):obj.requeue_deterministic('x','do not repeat inference')
    def test_old_accepted_capture_change_fails_closed(self):
        obj=self.supervisor();obj.add('retail-capture','gate',capacity='external')
        first={'status':'RETAIL_CAPTURE_AVAILABLE','fingerprint':'original','root':'fixture'}
        with patch.object(s.a,'Autoloop',return_value=SimpleNamespace(capture_status=lambda:first)):obj.refresh_external()
        obj.emit('fixture',watch_signature=None)
        with patch.object(s.a,'Autoloop',return_value=SimpleNamespace(capture_status=lambda:{'status':'ABSENT'})):
            with self.assertRaisesRegex(h.Failure,'RETAIL_CHANGED'):obj.refresh_external()


class CaptureToolingTests(unittest.TestCase):
    def test_observers_preserve_instruction_text(self):
        original=(h.ROOT/'src/recomp/entry_0x100008.cpp').read_text()
        actual=host.instrument(original)
        self.assertEqual(actual.count('observe(rdram, *ctx);'),13)
        removed=actual.replace('#include "observer.hpp"\n','').replace('    observe(rdram, *ctx);\n','').replace('        observe(rdram, *ctx);\n','')
        # Whitespace can differ at insertion boundaries; every original line
        # remains in order with no guest operation rewritten or removed.
        self.assertEqual(''.join(removed.split()),''.join(original.split()))
    def test_entry_shape_drift_rejected(self):
        with self.assertRaises(ValueError):host.instrument('not an entry')
    def test_quota_sanitization_no_credentials(self):
        value=quota.sanitize({'email':'NEVER_STORE','rateLimits':{'primary':{'usedPercent':100,'resetsAt':1000}}},{'data':[{'model':'gpt-6-astra'}]})
        self.assertEqual(value['state'],'CODEX_COOLDOWN');self.assertNotIn('NEVER_STORE',json.dumps(value))
        self.assertEqual(value['astra_listed'],'gpt-6-astra');self.assertEqual(value['inference_calls'],0)
    def test_quota_unknown_is_not_available(self):self.assertEqual(quota.sanitize({}, {})['state'],'CODEX_UNKNOWN')
    def test_capture_refuses_existing_pine_owner(self):
        fake=SimpleNamespace(__enter__=lambda *_:None,__exit__=lambda *_:None)
        from unittest.mock import MagicMock
        with tempfile.TemporaryDirectory() as tmp,patch.object(pc,'identity',return_value={}),patch.object(pc.socket,'create_connection',return_value=MagicMock()),patch.object(pc.subprocess,'Popen') as launch:
            with self.assertRaisesRegex(ValueError,'PORT_ALREADY_OWNED'):pc.capture_entry(Path(tmp))
            launch.assert_not_called()
    def test_closed_automatic_capture_cannot_merge_boots(self):
        with tempfile.TemporaryDirectory() as tmp,patch.object(pc,'identity',return_value={}):
            root=Path(tmp);(root/'closed_automatic_session.json').write_text('{}')
            with self.assertRaisesRegex(ValueError,'BOOT_ENDED'):pc.record(root)
    def test_guided_nonenter_or_eof_rejected(self):
        import io
        with patch.object(pc.sys,'stdin',io.StringIO('Run\n')):
            with self.assertRaisesRegex(ValueError,'ENTER_ONLY'):pc.confirmation(1)
    def test_mixed_capture_sessions_rejected(self):
        # No large synthetic RAM needed: decoder/identity stub only tests the
        # provenance gate; never creates a purported real normalized capture.
        with tempfile.TemporaryDirectory() as tmp,patch.object(pc,'decode',return_value=({'pc':'unused'},b'')):
            root=Path(tmp);(root/'raw').mkdir()
            for i,addr in enumerate(pc.PCS):
                original=root/'raw'/f'p{i}.p2s';original.write_bytes(b'SYNTHETIC')
                pc.write_new(root/'raw'/f'point_{i:02d}.json',{'index':i,'pc':f'0x{addr:08x}','savestate':original.name,'sha256':c.sha(original),
                    'elf_sha256':pc.r.ELF_SHA256,'exe_sha256':pc.EXE_HASH,'paused':True,'capture_session':'one' if i==0 else 'two'})
            def decode(path):return {'pc':f'0x{pc.PCS[int(path.stem[1:])]:08x}'},b''
            with patch.object(pc,'decode',side_effect=decode):
                with self.assertRaisesRegex(ValueError,'MIXED_CAPTURE'):pc.normalize(root)


if __name__=='__main__':unittest.main()
