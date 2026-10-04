"""Persistent project DAG supervisor. External barriers block descendants only.

No inference during idle. Same global cloud ledger and Campaign contracts.
Codex is optional capacity, never state authority. No arbitrary worker patches.
"""
import argparse
from contextlib import contextmanager
from concurrent.futures import ThreadPoolExecutor, wait, FIRST_COMPLETED
import copy
import ctypes
from functools import partial
from functools import wraps
import json
import os
from pathlib import Path
import shutil
import signal
import subprocess
import sys
import threading
import time
import uuid

import hybrid_autoloop as a
import hybrid_campaign as c
import hybrid_router as h

DEFAULT = a.DEFAULT/'supervisor'
TERMINAL = {'ACCEPTED', 'REJECTED', 'INTERRUPTED_UNKNOWN'}


def provider_health_state(event):
    if not event:return 'UNKNOWN'
    if event.get('success'):return 'HEALTHY'
    error=event.get('error')
    if error=='MODEL_OR_REQUEST_UNSUPPORTED':return 'MODEL_UNSUPPORTED'
    if error in ('AUTH_OR_PERMISSION','MISSING_ENV_CREDENTIAL','AWS_SESSION_EXPIRED','AWS_ACCESS_DENIED'):return 'AUTH_FAILED'
    if event.get('failure_origin')=='LOCAL_POLICY' or error in (
            'AWS_CALL_COUNT_CAP','AWS_USD_PRICE_REQUIRED','UNKNOWN_PRIOR_COST_REQUIRES_RECONCILIATION','LOCAL_BUDGET_CAP'):
        return 'LOCAL_POLICY_BLOCKED'
    if event.get('state')=='QUOTA_EXHAUSTED' or error=='UNKNOWN_COST_CALL_CAP':return 'BUDGET_EXHAUSTED'
    if event.get('state')=='TEMPORARILY_UNAVAILABLE':return 'COOLDOWN'
    if event.get('state')=='RATE_LIMITED':return 'RATE_LIMITED'
    if event.get('state')=='UNSUPPORTED':return 'MODEL_UNSUPPORTED'
    return 'UNKNOWN'


def serialized(method):
    @wraps(method)
    def wrapped(self,*args,**kwargs):
        with self.mutex:return method(self,*args,**kwargs)
    return wrapped


def process_identity(pid):
    """PID reuse protection; Windows os.kill(pid,0) is deliberately NOT used."""
    if os.name != 'nt':
        try: os.kill(pid, 0); return 'posix-'+str(pid)
        except ProcessLookupError: return None
    from ctypes import wintypes
    kernel = ctypes.WinDLL('kernel32', use_last_error=True)
    kernel.OpenProcess.restype = wintypes.HANDLE
    kernel.OpenProcess.argtypes = [wintypes.DWORD, wintypes.BOOL, wintypes.DWORD]
    kernel.CloseHandle.argtypes = [wintypes.HANDLE]
    handle = kernel.OpenProcess(0x1000, False, pid)
    if not handle:
        if ctypes.get_last_error() == 87: return None
        raise h.Failure('FAILED', 'PROCESS_IDENTITY_NOT_QUERYABLE')
    try:
        code = wintypes.DWORD()
        kernel.GetExitCodeProcess.argtypes = [wintypes.HANDLE, ctypes.POINTER(wintypes.DWORD)]
        if not kernel.GetExitCodeProcess(handle, ctypes.byref(code)):
            raise h.Failure('FAILED', 'PROCESS_EXIT_STATUS_UNKNOWN')
        if code.value != 259: return None
        created, exited, user, system = (wintypes.FILETIME() for _ in range(4))
        kernel.GetProcessTimes.argtypes = [wintypes.HANDLE]+[ctypes.POINTER(wintypes.FILETIME)]*4
        if not kernel.GetProcessTimes(handle, ctypes.byref(created), ctypes.byref(exited), ctypes.byref(user), ctypes.byref(system)):
            raise h.Failure('FAILED', 'PROCESS_CREATION_TIME_UNKNOWN')
        return str((created.dwHighDateTime<<32)|created.dwLowDateTime)
    finally: kernel.CloseHandle(handle)


@contextmanager
def process_lock(root):
    root = Path(root); root.mkdir(parents=True, exist_ok=True)
    path = root/'supervisor.lock'
    owner = {'pid': os.getpid(), 'process_identity': process_identity(os.getpid()), 'token': uuid.uuid4().hex}
    if path.exists():
        old = c.strict_json(path.read_text())
        if process_identity(old['pid']) == old['process_identity']:
            raise h.Failure('FAILED', 'SUPERVISOR_ALREADY_RUNNING')
        # Verified-dead owner only; archive lock as evidence before removing leaf.
        archive = root/('stale_lock_'+uuid.uuid4().hex+'.json')
        with archive.open('x', encoding='utf-8') as f: json.dump(old, f)
        path.unlink()
    with path.open('x', encoding='utf-8') as f: json.dump(owner, f)
    try: yield owner
    finally:
        if path.exists() and c.strict_json(path.read_text()).get('token') == owner['token']: path.unlink()


def verify_legacy(root=a.DEFAULT):
    """Read-only resume proof: hash chain, state projection and all cycle reports."""
    root = Path(root)
    tail = None; state = None; count = 0
    for line in (root/'journal.jsonl').read_text(encoding='utf-8').splitlines():
        e = c.strict_json(line); checksum = e.pop('sha256')
        if h.digest(e) != checksum or e['previous'] != tail:
            raise h.Failure('FAILED', 'LEGACY_JOURNAL_MISMATCH_LINE_'+str(count+1))
        tail, state, count = checksum, e['state'], count+1
    projection = c.strict_json((root/'state.json').read_text())
    if projection != dict(state, journal_tail=tail):
        raise h.Failure('FAILED', 'LEGACY_STATE_JOURNAL_MISMATCH')
    for cycle in state['cycles']:
        p = Path(cycle['report'])
        actual = c.sha(p)
        if actual != cycle['report_sha256']:
            raise h.Failure('FAILED', 'LEGACY_CYCLE_REPORT_MISMATCH_'+str(cycle['index']))
        report = c.strict_json(p.read_text())
        for task in report['tasks'].values():
            if task.get('artifact') and c.sha(Path(task['artifact']['path'])) != task['artifact']['sha256']:
                raise h.Failure('FAILED', 'LEGACY_TASK_ARTIFACT_MISMATCH')
    # Verify all provider event hashes WITHOUT probing or making a call.
    h.Journal().events()
    return {'root': str(root.resolve()), 'state_sha256': c.sha(root/'state.json'),
            'report_sha256': c.sha(root/'final_report.json'), 'journal_tail': tail,
            'events': count, 'cycles': len(state['cycles']), 'provider_calls_repeated': 0}


class Supervisor:
    def __init__(self, output=DEFAULT, handlers=None, clock=time.time, legacy_root=a.DEFAULT, min_free_bytes=512*1024*1024):
        self.output = Path(output).resolve(); self.output.mkdir(parents=True, exist_ok=True)
        self.clock, self.min_free_bytes = clock, min_free_bytes
        self.legacy = Path(legacy_root).resolve()
        self.stop_event = threading.Event()
        self.mutex=threading.RLock()
        self.tail = None; self.segment = 0
        valid_projections={}
        self.state = {'version': 1, 'tasks': {}, 'status': 'NEW', 'project_complete': False,
                      'codex': {'state': 'CODEX_UNKNOWN', 'session_model': 'NOT_EXPOSED','observed_at':self.clock()},
                      'project_status': 'IN_PROGRESS', 'source_legacy': None,
                      'watch_signature': None, 'events': 0, **a.INVARIANTS}
        for path in sorted(self.output.glob('journal_*.jsonl')):
            self.segment = max(self.segment, int(path.stem.split('_')[1]))
            for line in path.read_text(encoding='utf-8').splitlines():
                event = c.strict_json(line); checksum = event.pop('sha256')
                if h.digest(event) != checksum or event['previous'] != self.tail:
                    raise h.Failure('FAILED', 'SUPERVISOR_JOURNAL_INTEGRITY_'+path.name)
                self.tail, self.state = checksum, event['state']
                valid_projections[checksum]=h.digest(dict(self.state,journal_tail=checksum))
        self.handlers = handlers or {}
        self.router=h.Router(h.Journal(),adapter=partial(h.invoke,json_output=True))
        legacy_verified=verify_legacy(self.legacy)
        projection = self.output/'state.json'
        if self.tail and projection.exists():
            saved=c.strict_json(projection.read_text())
            # An older intact projection after journal fsync is recoverable.
            if h.digest(saved)!=valid_projections.get(saved.get('journal_tail')):
                raise h.Failure('FAILED','SUPERVISOR_STATE_PROJECTION_MISMATCH')
        if not self.state['source_legacy']:
            self.emit('legacy_import_verified', source_legacy=legacy_verified)
        for tid, task in list(self.state['tasks'].items()):
            artifact = task.get('artifact')
            if artifact and c.sha(Path(artifact['path'])) != artifact['sha256']:
                raise h.Failure('FAILED', 'SUPERVISOR_TASK_ARTIFACT_CHANGED_'+tid)
            if task['status'] == 'RUNNING':
                # Campaign recovers its own durable attempts. Premium outcomes
                # without durable final output are uncertain: never resubmit.
                self.update(tid, status='INTERRUPTED_UNKNOWN' if task['capacity']=='premium' else 'READY',
                            error='LEASE_OWNER_EXITED', lease=None)
        self.checkpoint()

    @serialized
    def checkpoint(self):
        a.project(self.output/'state.json', dict(self.state, journal_tail=self.tail))

    @serialized
    def emit(self, kind, **updates):
        candidate = dict(self.state, **updates)
        candidate['events'] += 1
        value = {'kind': kind, 'timestamp_utc': h.now(), 'previous': self.tail, 'state': candidate}
        if h.clean(json.dumps(value)) != json.dumps(value): raise h.Failure('FAILED', 'SECRET_LIKE_SUPERVISOR_EVENT')
        checksum = h.digest(value); value['sha256'] = checksum
        path = self.output/f'journal_{self.segment:06d}.jsonl'
        if path.exists() and path.stat().st_size >= 1024*1024:
            self.segment += 1; path = self.output/f'journal_{self.segment:06d}.jsonl'
        with path.open('a', encoding='utf-8') as f:
            f.write(json.dumps(value)+'\n'); f.flush(); os.fsync(f.fileno())
        self.state, self.tail = candidate, checksum
        self.checkpoint()

    @serialized
    def add(self, tid, operation, depends=(), capacity='deterministic', inputs=None):
        if tid in self.state['tasks']: return
        tasks = copy.deepcopy(self.state['tasks'])
        tasks[tid] = {'id': tid, 'operation': operation, 'depends': list(depends), 'capacity': capacity,
                      'inputs': inputs or {}, 'status': 'READY', 'attempts': 0, 'lease': None}
        self.emit('task_created', tasks=tasks)

    @serialized
    def update(self, tid, **updates):
        tasks = copy.deepcopy(self.state['tasks']); tasks[tid].update(updates)
        self.emit('task_checkpoint', tasks=tasks)

    @serialized
    def artifact(self, tid, data):
        directory = self.output/'tasks'/tid/('attempt_'+str(self.state['tasks'][tid]['attempts']).zfill(3)); directory.mkdir(parents=True, exist_ok=True)
        path = directory/'result.json'
        body = json.dumps(data, indent=2, sort_keys=True)
        if h.clean(body) != body: raise h.Failure('FAILED', 'SECRET_LIKE_RESULT')
        if path.exists():
            if path.read_text(encoding='utf-8') != body: raise h.Failure('FAILED', 'RESULT_ALREADY_EXISTS_OTHER_CONTENT')
        else:
            with path.open('x', encoding='utf-8') as f: f.write(body); f.flush(); os.fsync(f.fileno())
        return {'path': str(path), 'sha256': c.sha(path)}

    @serialized
    def signature(self):
        # Only stat EXPECTED evidence/ledger/inbox. No file hashing or API work
        # during idle; sparse polling is deliberately cheap.
        paths = [self.legacy/'capture/normalized', self.legacy/'capture/raw', self.legacy/'capture/host',
                 h.ROOT/'artifacts/retail_capture_20261003/normalized', h.EVIDENCE, self.output/'inbox']
        paths += list((self.legacy/'capture').glob('guided_*/normalized'))
        rows = []
        for root in paths:
            if root.exists():
                for path in sorted(root.iterdir()):
                    s = path.stat(); rows.append((str(path), s.st_size, s.st_mtime_ns))
        return h.digest(rows)

    @serialized
    def recalculate(self):
        tasks = self.state['tasks']
        for tid, task in list(tasks.items()):
            if task['status'] in TERMINAL or task['status'] == 'RUNNING': continue
            deps = [tasks[x]['status'] for x in task['depends']]
            if any(x != 'ACCEPTED' for x in deps):
                status = 'BLOCKED_DEPENDENCY'
            elif task['capacity'] == 'external': status = 'WAITING_FOR_EXTERNAL_INPUT'
            elif task['capacity'] == 'premium' and (self.state['codex']['state'] != 'CODEX_AVAILABLE' or not self.state.get('enable_codex')): status = 'BLOCKED_PREMIUM'
            elif task.get('retry_at', 0) > self.clock(): status = 'COOLDOWN'
            else: status = 'READY'
            if task['status'] != status: self.update(tid, status=status)

    @serialized
    def seed(self):
        for tid in ('source-index', 'capture-control-audit', 'host-snapshot', 'completion-contract', 'codex-capacity', 'entry-capture'):
            self.add(tid, tid)
        self.add('capture-premium-review', 'premium-review', capacity='premium')
        self.add('host-observer-worker-review','worker-review',('host-snapshot',),capacity='pool')
        rejected=self.state['tasks'].get('host-observer-worker-review',{})
        failover_id='host-observer-worker-review-failover-001'
        if rejected.get('status')=='REJECTED' and failover_id not in self.state['tasks']:
            artifact=rejected.get('artifact') or {}
            self.add(failover_id,'worker-review-failover',('host-snapshot',),capacity='pool',
                     inputs={'rejected_artifact':artifact.get('path'),'rejected_sha256':artifact.get('sha256')})
        # Comparison deterministically found a candidate. Codex reservation must
        # not keep its independent external proposal task blocked.
        divergence=self.state['tasks'].get('first-divergence-review',{})
        if divergence and divergence.get('capacity')=='premium' and divergence.get('attempts',0)==0:
            self.update('first-divergence-review',capacity='pool',status='READY',error=None)
        review=self.state['tasks'].get('first-divergence-review',{})
        if review.get('status')=='ACCEPTED' and review.get('artifact'):
            artifact=review['artifact']
            consumer_id='first-divergence-proposal-consumer'
            old=self.state['tasks'].get(consumer_id,{})
            if old.get('status')=='REJECTED' and old.get('error')=='KeyError':
                consumer_id='first-divergence-proposal-consumer-recovery-001'
            self.add(consumer_id,'pending-divergence-consumer',
                ('first-divergence-review',),inputs={'proposal_task_artifact':artifact['path'],
                    'proposal':artifact['path'],'proposal_sha256':artifact['sha256'],
                    'supersedes_rejected_task':old.get('id') if consumer_id.endswith('recovery-001') else None})
            compared=self.state['tasks'].get('retail-compare',{}).get('artifact',{})
            self.add('entry-state-audit','entry-state-audit',
                (consumer_id,'retail-capture','host-snapshot','entry-A-audit'),
                inputs={'comparison':compared.get('path',''),'comparison_sha256':compared.get('sha256'),
                    'proposal':artifact['path'],'proposal_sha256':artifact['sha256']})
            audit=self.state['tasks']['entry-state-audit']
            if consumer_id not in audit.get('depends',[]) and audit.get('status')=='BLOCKED_DEPENDENCY':
                # Repair only this known scheduler edge after a preserved
                # rejected consumer has an accepted recovery task. Keep the
                # original task and evidence unchanged.
                deps=[consumer_id if dep=='first-divergence-proposal-consumer' else dep
                      for dep in audit.get('depends',[])]
                self.update('entry-state-audit',depends=deps,error=None)
            self.add('entry-state-diagnosis','entry-state-diagnosis',('entry-state-audit',),capacity='pool')
            self.add('entry-state-contract-followup','entry-state-contract-followup',('entry-state-audit',),
                inputs={'audit_task':'entry-state-audit'},capacity='deterministic')
        self.add('human-capture-helper','human-capture-helper')
        self.add('entry-A-audit','entry-A-audit',('host-snapshot','entry-capture'))
        self.add('address-index','address-index')
        self.add('retail-capture', 'retail-gate', capacity='external')
        self.add('retail-compare', 'retail-compare', ('retail-capture', 'host-snapshot'))
        self.recalculate()

    @serialized
    def refresh_external(self):
        signature = self.signature()
        if signature == self.state['watch_signature']: return False
        host=self.state['tasks'].get('host-snapshot',{})
        if host.get('status')=='ACCEPTED':
            receipt=c.strict_json(Path(host['artifact']['path']).read_text())
            path=Path(receipt['capture'])/'manifest.json'
            if c.sha(path)!=receipt.get('manifest_sha256',receipt.get('sha256')):
                raise h.Failure('FAILED','PREVIOUSLY_ACCEPTED_HOST_CHANGED_FAIL_CLOSED')
        # Import legacy planner for validated evidence detection, not its global
        # stop policy. No completed campaign is run again here.
        loop = a.Autoloop(self.legacy)
        observed = loop.capture_status()
        prior=self.state['tasks'].get('retail-capture',{})
        if prior.get('status')=='ACCEPTED':
            accepted=c.strict_json(Path(prior['artifact']['path']).read_text())
            if observed.get('fingerprint')!=accepted.get('fingerprint'):
                raise h.Failure('FAILED','PREVIOUSLY_ACCEPTED_RETAIL_CHANGED_FAIL_CLOSED')
        if observed['status'] == 'RETAIL_CAPTURE_AVAILABLE':
            task = self.state['tasks'].get('retail-capture')
            if task and task['status'] != 'ACCEPTED':
                self.update('retail-capture', status='ACCEPTED', artifact=self.artifact('retail-capture', observed))
        elif observed['status'] == 'INVALID_RETAIL_EVIDENCE':
            self.emit('evidence_rejected', external_error='INVALID_RETAIL_EVIDENCE_OR_PROVENANCE')
        self.emit('filesystem_changed', watch_signature=signature, retail_observation=observed)
        self.recalculate()
        return True

    @serialized
    def refresh_capacity_due(self):
        # Quota queries have no inference. Only retry blocked premium capacity,
        # never run a periodic paid probe or infer from an expired hint.
        if not self.state.get('enable_codex'): return
        if not any(t['status']=='BLOCKED_PREMIUM' for t in self.state['tasks'].values()): return
        quota=self.state['codex']
        due=quota.get('next_observation_at',quota.get('observed_at',self.clock())+3600)
        if self.clock()<due:return
        import codex_capacity
        observed=codex_capacity.observe()
        observed['next_observation_at']=max(self.clock()+3600,observed.get('retry_hint') or 0)
        self.emit('capacity_reobserved_without_inference',codex=observed)
        self.recalculate()

    @serialized
    def requeue_deterministic(self,tid,reason):
        task=self.state['tasks'][tid]
        if task['status']!='REJECTED' or task['capacity']!='deterministic' or not reason:
            raise h.Failure('FAILED','REQUEUE_REQUIRES_REJECTED_DETERMINISTIC_TASK_AND_REASON')
        self.emit('master_tooling_retry_authorized',retry_authorization={'task':tid,'reason':reason,'previous_attempts':task['attempts']})
        self.update(tid,status='READY',error=None)
        self.recalculate()

    def execute(self, tid):
        task = self.state['tasks'][tid]
        if shutil.disk_usage(self.output).free < self.min_free_bytes:
            self.emit('disk_guard', status='PAUSED_DISK_SPACE'); return False
        lease = {'id': uuid.uuid4().hex, 'pid': os.getpid(), 'process_identity':process_identity(os.getpid()), 'expires_at': self.clock()+600}
        self.update(tid, status='RUNNING', attempts=task['attempts']+1, lease=lease)
        work = self.output/'tasks'/tid/('attempt_'+str(task['attempts']+1).zfill(3)); work.mkdir(parents=True, exist_ok=True)
        try:
            handler = self.handlers.get(task['operation'])
            if handler is None: raise h.Failure('FAILED', 'NO_REGISTERED_OPERATION')
            value = handler(self, task, work)
            # Handler contract distinguishes observed success, rejection and
            # genuine external block. A model response alone is never ACCEPTED.
            outcome = value.get('supervisor_outcome', 'ACCEPTED')
            if outcome not in ('ACCEPTED', 'REJECTED', 'WAITING_FOR_EXTERNAL_INPUT', 'BLOCKED_PREMIUM', 'COOLDOWN'):
                raise h.Failure('FAILED', 'INVALID_OPERATION_OUTCOME')
            artifact = self.artifact(tid, value)
            updates = {'capacity':'external'} if outcome=='WAITING_FOR_EXTERNAL_INPUT' else {}
            self.update(tid, status=outcome, artifact=artifact, lease=None, retry_at=value.get('retry_at', 0), **updates)
        except KeyboardInterrupt:
            self.stop_event.set()
            self.update(tid,status='INTERRUPTED_UNKNOWN' if task['capacity'] in ('premium','pool') else 'READY',lease=None,error='INTERRUPTED')
        except (h.Failure, OSError, ValueError, KeyError, TypeError, subprocess.SubprocessError) as exc:
            self.update(tid, status='INTERRUPTED_UNKNOWN' if task['capacity']=='premium' else 'REJECTED', lease=None,
                        error=exc.code if isinstance(exc,h.Failure) else type(exc).__name__)
        self.recalculate()
        return True

    @serialized
    def counts(self):
        tasks = self.state['tasks'].values()
        return {name: sum(t['status']==name for t in tasks) for name in ('READY','RUNNING','ACCEPTED')}

    @serialized
    def report(self):
        router = self.router
        counts = self.counts()
        blocked = [t['id'] for t in self.state['tasks'].values() if t['status'] not in ('READY','RUNNING','ACCEPTED','REJECTED')]
        barriers=[t['id'] for t in self.state['tasks'].values() if t['status'] in ('WAITING_FOR_EXTERNAL_INPUT','BLOCKED_PREMIUM','INTERRUPTED_UNKNOWN')]
        pending=[]
        for source,consumer_op in (('first-divergence-review','pending-divergence-consumer'),
                                   ('entry-state-diagnosis','entry-state-proposal-consumer')):
            t=self.state['tasks'].get(source,{})
            if not t.get('artifact'):continue
            payload=c.strict_json(Path(t['artifact']['path']).read_text(encoding='utf-8'))
            if payload.get('proposal_status')=='PENDING_SEMANTIC_REVIEW':
                consumers=[candidate for candidate in self.state['tasks'].values()
                           if candidate.get('operation')==consumer_op and source in candidate.get('depends',[])]
                if not any(candidate['status'] in ('READY','RUNNING','ACCEPTED','WAITING_FOR_EXTERNAL_INPUT','BLOCKED_DEPENDENCY')
                           for candidate in consumers):
                    raise h.Failure('FAILED','ORCHESTRATION_BUG_PENDING_PROPOSAL_NO_CONSUMER_'+source)
                pending.append(source)
        idle_class=None
        if not counts['READY'] and not counts['RUNNING'] and not self.state.get('project_complete',False):
            external=[t['id'] for t in self.state['tasks'].values() if t['status']=='WAITING_FOR_EXTERNAL_INPUT']
            rejected=[t['id'] for t in self.state['tasks'].values() if t['status']=='REJECTED']
            if external:idle_class='REAL_EXTERNAL_BARRIER'
            elif rejected:idle_class='PREMIUM_REQUIRED' if self.state['codex']['state']=='PREMIUM_RESERVED' else 'ORCHESTRATION_BUG'
            else:idle_class='ORCHESTRATION_BUG'
            if idle_class=='ORCHESTRATION_BUG':
                diagnostic=self.output/'orchestration_bug.json'
                if not diagnostic.exists():
                    with diagnostic.open('x',encoding='utf-8') as f:
                        json.dump({'classification':idle_class,'ready':0,'running':0,
                            'rejected':rejected,'tasks':{k:v['status'] for k,v in self.state['tasks'].items()},
                            'BOOT_CHAIN_STATUS':'STOPPED_NOT_CLOSED'},f,indent=2)
                raise h.Failure('FAILED','ORCHESTRATION_BUG_NO_READY_TASKS_NO_CLASSIFIED_BARRIER')
            if self.state.get('idle_classification')!=idle_class:
                self.emit('idle_classified',idle_classification=idle_class)
        latest={}
        for event in h.Journal().events():
            if event.get('kind')=='attempt':latest[event['provider']]=event
        health={}
        for provider in ('ollama','gemini','azure','aws'):
            event=latest.get(provider)
            state=provider_health_state(event)
            health[provider]={'state':state,'last_attempt_id':event.get('event_id') if event else None,
                'last_error':event.get('error') if event else None,
                'failure_origin':event.get('failure_origin') if event else None,
                'model':event.get('model') if event else None}
        health['aws']['service_access_reported']='AVAILABLE_BY_USER_VERIFICATION'
        health['aws']['local_cli_session']='NOT_INFERRED_FROM_INFERENCE_EVENT'
        observations=sorted((self.output/'provider_observations').glob('provider_health_*.json'))
        if observations:
            observation=observations[-1]
            evidence=c.strict_json(observation.read_text(encoding='utf-8'))
            health['aws']['local_execution_state']=evidence['local_cli_preflight']['result']
            health['aws']['local_execution_evidence_sha256']=c.sha(observation)
            health['aws']['router_error_cause']='UNKNOWN_FROM_PRESERVED_EVENT'
        result = {'SUPERVISOR_STATUS': self.state['status'], 'PROJECT_STATUS': self.state['project_status'],
                  'CODEX_STATE': self.state['codex']['state'], 'CODEX_MODEL': self.state['codex'].get('selected_model') or 'NOT_EXPOSED',
                  'CURRENT_BARRIERS': barriers, 'READY_TASKS': counts['READY'], 'RUNNING_TASKS': counts['RUNNING'],
                  'BLOCKED_TASKS': len(blocked), 'PROVIDERS': router.policy['models'],
                  'REJECTED_TASKS':[t['id'] for t in self.state['tasks'].values() if t['status']=='REJECTED'],
                  'CLOUD_BUDGET': {p: router.remaining_calls(p) for p in ('aws','azure','gemini')},
                  'LAST_VALIDATED_PROGRESS': [t['id'] for t in self.state['tasks'].values() if t['status']=='ACCEPTED'],
                  'CURRENT_CHECKPOINT': str(self.output/'state.json'), 'SUPERVISOR_PID': os.getpid(),
                  'PROCESS_IDENTITY': process_identity(os.getpid()),
                  'PROJECT_COMPLETE': False, 'heartbeat_utc': h.now(),
                  'IDLE_CLASSIFICATION':idle_class,'PENDING_PROPOSALS':pending,
                  'PROVIDER_HEALTH':health,
                  'EXACT_KEEP_RUNNING_COMMAND': ('python tools/hybrid_supervisor.py run --codex-mode PREMIUM_RESERVED --poll-seconds 30'
                      if self.state['codex']['state']=='PREMIUM_RESERVED' else
                      'python tools/hybrid_supervisor.py run --enable-codex --poll-seconds 30'),
                  **a.INVARIANTS}
        a.project(self.output/'final_report.json', result)
        return result

    def run(self, max_operations=None, max_seconds=None, poll_seconds=30, enable_codex=False, max_parallel=2, codex_mode='PREMIUM_RESERVED'):
        if not 5 <= poll_seconds <= 3600: raise h.Failure('FAILED', 'INVALID_POLL_INTERVAL')
        if not 1<=max_parallel<=2 or (max_operations is not None and max_operations<1) or (max_seconds is not None and max_seconds<1):
            raise h.Failure('FAILED','INVALID_SUPERVISOR_BOUND')
        if codex_mode not in ('PREMIUM_RESERVED','CODEX_AVAILABLE'):
            raise h.Failure('FAILED','INVALID_CODEX_MODE')
        enable_codex=enable_codex and codex_mode=='CODEX_AVAILABLE'
        codex=dict(self.state['codex'])
        if codex_mode=='PREMIUM_RESERVED':
            codex['previous_capacity_state']=codex.get('state')
            codex['state']='PREMIUM_RESERVED'
        self.emit('settings', enable_codex=enable_codex, codex_mode=codex_mode,codex=codex)
        self.seed()
        started = self.clock(); started_ns=time.time_ns(); operations = 0
        self.emit('started', status='RUNNING', pid=os.getpid(), process_identity=process_identity(os.getpid()))
        futures={};bounded=False
        with ThreadPoolExecutor(max_workers=max_parallel) as executor:
            while True:
                stop_path=self.output/'stop.json'
                if stop_path.exists() and stop_path.stat().st_mtime_ns>started_ns:self.stop_event.set()
                if max_seconds is not None and self.clock()-started>=max_seconds:bounded=True
                if not self.stop_event.is_set() and not bounded:
                    self.refresh_external();self.refresh_capacity_due()
                    ready=[t for t in self.state['tasks'].values() if t['status']=='READY' and t['id'] not in futures.values()
                           and (t['capacity']!='premium' or enable_codex)]
                    for task in ready:
                        if len(futures)>=max_parallel:break
                        if max_operations is not None and operations>=max_operations:bounded=True;break
                        # One pool campaign and one premium request at a time;
                        # cloud concurrency remains owned by the existing pool.
                        active=[self.state['tasks'][tid]['capacity'] for tid in futures.values()]
                        if task['capacity'] in ('pool','premium') and task['capacity'] in active:continue
                        futures[executor.submit(self.execute,task['id'])]=task['id'];operations+=1
                if futures:
                    done,_=wait(futures,timeout=1,return_when=FIRST_COMPLETED)
                    for future in done:
                        futures.pop(future)
                        if not future.result():
                            bounded=True;self.report();continue
                        self.emit('progress',status='RUNNING');self.report()
                    continue  # Drain bounded operations on stop, checkpoint all.
                if self.stop_event.is_set() or bounded:break
                self.emit('idle',status='IDLE_WAITING_FOR_EXTERNAL_INPUT') if self.state['status']!='IDLE_WAITING_FOR_EXTERNAL_INPUT' else None
                self.report()
                if max_operations is not None:break
                self.stop_event.wait(poll_seconds)  # Zero LLM work; interruptible.
        if self.stop_event.is_set(): self.emit('stopped', status='STOPPED_CHECKPOINTED')
        elif self.state['status']=='RUNNING': self.emit('bounded_stop', status='PAUSED_OPERATION_LIMIT')
        return self.report()


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('action',choices=('run','status','stop','retry-tooling','authorize-budget'))
    p.add_argument('--output',type=Path,default=DEFAULT)
    p.add_argument('--enable-codex',action='store_true')
    p.add_argument('--codex-mode',choices=('PREMIUM_RESERVED','CODEX_AVAILABLE'),default='PREMIUM_RESERVED',help='Premium inference disabled by default; explicit emergency opt-in requires --enable-codex too')
    p.add_argument('--poll-seconds',type=int,default=30)
    p.add_argument('--max-operations',type=int)
    p.add_argument('--max-seconds',type=int)
    p.add_argument('--task')
    p.add_argument('--reason')
    p.add_argument('--window-id',help='HUMAN ONLY: unique additive budget-window identifier')
    p.add_argument('--window-providers',nargs='+',choices=('azure','gemini','aws'),default=['azure','gemini','aws'])
    p.add_argument('--window-calls-per-provider',type=int,default=2)
    args=p.parse_args()
    try:
        if args.action=='status':
            report=c.strict_json((args.output/'final_report.json').read_text())
            report['PROCESS_ALIVE']=process_identity(report['SUPERVISOR_PID']) == report.get('PROCESS_IDENTITY')
            print(json.dumps(report,indent=2));return 0
        if args.action=='stop':
            a.project(args.output/'stop.json',{'requested_at':h.now()});return 0
        if args.action=='authorize-budget':
            if not args.window_id:raise h.Failure('FAILED','EXPLICIT_HUMAN_WINDOW_ID_REQUIRED')
            router=h.Router(h.Journal())
            with router.journal.lock():grant=router.authorize_window(args.window_id,args.window_providers,args.window_calls_per_provider)
            print(json.dumps({'status':'EXPLICIT_ADDITIVE_WINDOW_RECORDED','grant':grant}));return 0
        from hybrid_project_tasks import HANDLERS
        with process_lock(args.output):
            supervisor=Supervisor(args.output,HANDLERS)
            if args.action=='retry-tooling':
                supervisor.requeue_deterministic(args.task,args.reason)
                print(json.dumps(supervisor.report()));return 0
            previous=signal.signal(signal.SIGINT,lambda *_:supervisor.stop_event.set())
            try: result=supervisor.run(args.max_operations,args.max_seconds,args.poll_seconds,args.enable_codex,codex_mode=args.codex_mode)
            finally: signal.signal(signal.SIGINT,previous)
        print(json.dumps(result));return 0
    except (h.Failure,OSError,ValueError,KeyError,TypeError) as exc:
        print(json.dumps({'SUPERVISOR_STATUS':'FAILED_CLOSED','error':exc.code if isinstance(exc,h.Failure) else type(exc).__name__}));return 1


if __name__=='__main__':sys.exit(main())
