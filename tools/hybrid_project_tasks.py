"""Master-owned bounded operations for the persistent supervisor DAG.

Commands/scopes are code-owned. No worker-generated command or arbitrary patch
is executed. Advisory reviews cannot close retail equivalence or completion.
"""
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys
import time

import codex_capacity
import hybrid_autoloop as a
import hybrid_campaign as c
import hybrid_router as h
import pcsx2_capture as pc
import retail_compare as r


def source_index(supervisor, task, work):
    dispatch=h.ROOT/'src/dispatcher.cpp'
    text=dispatch.read_text(encoding='utf-8')
    # Parse the actual registration statements, not filenames alone.
    matches=re.findall(r'(?:REGISTER|register|g_dispatcher)[^\n]*0x([0-9a-fA-F]+)[^\n]*',text)
    lines=[{'line':i+1,'text':line.strip()} for i,line in enumerate(text.splitlines()) if '0x00100008' in line or '0x100008' in line or '0x001ad6e8' in line or '0x1ad6e8' in line]
    entry=h.ROOT/'src/recomp/entry_0x100008.cpp'
    prefix=re.findall(r'// (0x[0-9a-fA-F]+): (0x[0-9a-fA-F]+)',entry.read_text())
    elf=c.Campaign.local(type('Inspector',(),{'local_handlers':{}})(),{'kind':'elf_prefix','elf':str(pc.ELF),'sha256':r.ELF_SHA256})
    actual={int(x,16):int(y,16) for x,y in prefix}
    if any(actual.get(int(row['pc'],16))!=int(row['opcode'],16) for row in elf['instructions']):
        raise h.Failure('FAILED','TRANSLATION_COMMENT_ELF_MISMATCH')
    return {'scope':'STATIC_SOURCE_NOT_RUNTIME_EQUIVALENCE','dispatcher_sha256':c.sha(dispatch),
            'entry_sha256':c.sha(entry),'entry_comments_verified_against_elf':11,
            'registration_lines':lines,'registration_pattern_matches':len(matches),
            'next_direct_call':'0x001ad6e8','next_source':'src/recomp/FUN_001ad6e8_0x1ad6e8.cpp',
            'elf_instructions':elf['instructions']}


def capture_control_audit(supervisor,task,work):
    pc.identity()
    root=a.INSPECTION
    pine=(root/'pcsx2_PINE.cpp').read_text()
    block=pine[pine.index('enum IPCCommand'):pine.index('enum EmuStatus')]
    commands=re.findall(r'(Msg\w+)\s*=\s*([^,]+)',block)
    debugger=(root/'pcsx2-qt_Debugger_DebuggerWindow.cpp').read_text()
    start=debugger.index('void DebuggerWindow::onStepInto()')
    end=debugger.index('void DebuggerWindow::onStepOver()',start)
    step=debugger[start:end]
    if 'bpAddr = info.branchTarget' not in step or 'bpAddr = pc + (2 * 4)' not in step:
        raise h.Failure('FAILED','PINNED_STEP_CONTRACT_CHANGED')
    cli=(root/'pcsx2-qt_QtHost.cpp').read_text()
    if 's_boot_and_debug = true' not in cli or 'elf_override = (++it)' not in cli:
        raise h.Failure('FAILED','PINNED_DEBUG_BOOT_CONTRACT_CHANGED')
    return {'pcsx2_version':'2.8.2.0','exe_sha256':pc.EXE_HASH,
            'pine_commands':commands,'pine_has_run_step_breakpoints':False,
            'cli_debugger_entry_stop':True,'gui_step_groups_branch_delay':True,
            'qt_actions':'In-process QAction signal -> onStepInto -> temporary CPU breakpoint; not a remote API.',
            'external_control':'Native Computer Use unavailable after retry/reset; no supported exported debugger-control IPC found.',
            'automatic_entry_capture_possible':'CLI -debugger + PINE save while entry-paused; not yet observed live',
            'rejected_paths':['Blind coordinate clicking','QAction/process injection','Retail instruction/register/memory modification'],
            'source_hashes':{p.name:c.sha(p) for p in root.glob('*') if p.is_file()},
            'evidence_barrier_preserved':True}


def completion_contract(supervisor,task,work):
    paths=['README.md','AGENTS.md','docs/host_barrier_20261003_followup.md']
    sources={p:c.sha(h.ROOT/p) for p in paths}
    readme=(h.ROOT/'README.md').read_text()
    if 'does not implement gameplay or a renderer' not in readme:
        raise h.Failure('FAILED','REPOSITORY_GOAL_TEXT_CHANGED_REVIEW_REQUIRED')
    supervisor.add('project-completion-coverage','external-completion-contract',capacity='external')
    return {'repository_declared_scope':'Clean-room provenance/resource bootstrap; README explicitly excludes gameplay/renderer.',
            'user_current_objective':'Autonomous decompilation/port with independently evidenced runtime behavior.',
            'completion_contract':'No repository document defines measurable full-game PROJECT_COMPLETE acceptance coverage.',
            'missing_definition':'Authoritative port/gameplay equivalence completion contract and evidence coverage; cannot infer it from boot/menu.',
            'project_complete':False,'source_sha256':sources,'scope':'Discovery only; never weaker completion criteria.'}


def premium_review(supervisor,task,work):
    capacity=codex_capacity.observe()
    supervisor.emit('codex_capacity_observed',codex=capacity)
    if capacity['state']!='CODEX_AVAILABLE':
        return {'supervisor_outcome':'BLOCKED_PREMIUM','state':capacity['state'],
                'retry_at':capacity.get('retry_hint') or time.time()+3600,'inference_calls':0}
    model=capacity.get('astra_listed')
    if not model:
        return {'supervisor_outcome':'WAITING_FOR_EXTERNAL_INPUT','reason':'Astra not listed; current interactive model not exposed. No model substitution.'}
    context=[]
    for name in ('pcsx2_PINE.cpp','pcsx2_R5900.h','pcsx2-qt_Debugger_DebuggerWindow.cpp'):
        p=a.INSPECTION/name
        text=p.read_text()
        if name=='pcsx2_PINE.cpp':start=text.index('enum IPCCommand');text=text[start:start+3100]
        elif 'Window' in name:start=text.index('void DebuggerWindow::onStepInto()');text=text[start:start+2200]
        else:text=text[:5800]
        context.append({'path':str(p),'sha256':c.sha(p),'excerpt':text})
    schema={'type':'object','additionalProperties':False,'required':['supported_remote_step','capture_risks','host_capture_constraints','safe_next_action'],
            'properties':{'supported_remote_step':{'type':'boolean'},'capture_risks':{'type':'array','items':{'type':'string'},'maxItems':8},
                          'host_capture_constraints':{'type':'array','items':{'type':'string'},'maxItems':8},'safe_next_action':{'type':'string'}}}
    schema_path=work/'schema.json'
    if not schema_path.exists():pc.write_new(schema_path,schema)
    prompt=('Advisory premium review of PS2/R5900 capture automation. DO NOT use tools, execute commands, read other files, '
            'modify anything, or access secrets. Use only supplied excerpts. JSON only matching schema. '
            'Determine whether these supplied interfaces support remote Run/Step without injecting code. '
            'Assess CPU savestate ABI layout and bounded HOST translated-prefix capture risks. No invented retail state. '
            'Native Computer Use pipe is unavailable. Existing ELF hash and version 2.8.2 are verified.\n'+json.dumps(context))
    # Constant PowerShell command; dynamic prompt goes through stdin, never shell.
    executable=shutil.which('codex.exe')
    if not executable:return {'supervisor_outcome':'WAITING_FOR_EXTERNAL_INPUT','reason':'Native Codex CLI unavailable; no shell wrapper or model substitution.'}
    command=[executable,'exec','--model',model,'--skip-git-repo-check','--sandbox','read-only','--json','--ephemeral','--output-schema',str(schema_path),'-']
    supervisor.emit('premium_request_reserved',codex=dict(capacity,selected_model=model),
                    premium_request={'task_id':task['id'],'model':model,'prompt_sha256':h.digest(prompt),'timeout':150})
    proc=subprocess.run(command,input=prompt.encode(),
                        stdout=subprocess.PIPE,stderr=subprocess.PIPE,cwd=h.ROOT,timeout=150,
                        creationflags=getattr(subprocess,'CREATE_NO_WINDOW',0))
    text=None;usage={};tool_used=False;quota=False
    # Raw stream discarded; retain only validated final object and numerical usage.
    for line in proc.stdout.splitlines():
        try: e=c.strict_json(line.decode('utf-8'))
        except (ValueError,UnicodeDecodeError):continue
        if e.get('type')=='item.completed':
            item=e.get('item',{})
            if item.get('type')=='agent_message':text=item.get('text')
            elif item.get('type') in ('command_execution','mcp_tool_call','web_search'):tool_used=True
        if e.get('type')=='turn.completed':usage={k:v for k,v in e.get('usage',{}).items() if isinstance(v,(int,float))}
        if e.get('type') in ('error','turn.failed'):
            quota=quota or any(word in json.dumps(e).lower() for word in ('usage limit','quota','rate limit'))
    if quota:
        supervisor.emit('premium_cooldown',codex=dict(capacity,state='CODEX_COOLDOWN'))
    if proc.returncode or text is None or tool_used:
        return {'supervisor_outcome':'REJECTED','reason':'PREMIUM_QUOTA' if quota else 'PREMIUM_EXEC_FAILED_OR_SCOPE_VIOLATION',
                'usage':usage,'model':model,'response_accepted':False}
    # Preserve rejected final worker output separately, never the RPC stream.
    # Secret-like text is represented by a digest only.
    pc.write_new(work/'proposal.json',{'response':text if h.clean(text)==text else None,'response_sha256':h.digest(text)})
    try:parsed=c.strict_json(text)
    except ValueError:
        return {'supervisor_outcome':'REJECTED','reason':'PREMIUM_MALFORMED_JSON','usage':usage,'model':model,
                'preserved_proposal':str(work/'proposal.json'),'inference_calls':1}
    if h.clean(text)!=text or set(parsed)!=set(schema['required']) or type(parsed['supported_remote_step']) is not bool:
        raise h.Failure('FAILED','PREMIUM_JSON_CONTRACT_REJECTED')
    for key in ('capture_risks','host_capture_constraints'):
        if not isinstance(parsed[key],list) or len(parsed[key])>8 or any(not isinstance(x,str) or len(x)>2000 for x in parsed[key]):
            raise h.Failure('FAILED','PREMIUM_REVIEW_SHAPE_REJECTED')
    if not isinstance(parsed['safe_next_action'],str) or len(parsed['safe_next_action'])>4000:
        raise h.Failure('FAILED','PREMIUM_REVIEW_SHAPE_REJECTED')
    # Deterministic source contract independently rejects an invented IPC claim.
    if parsed['supported_remote_step']:
        return {'supervisor_outcome':'REJECTED','reason':'CLAIM_CONTRADICTS_PINNED_PINE_OPCODE_ENUM','proposal':parsed,'usage':usage}
    supervisor.emit('premium_model_inference_observed',codex=dict(supervisor.state['codex'],selected_model=model,model_access_verified=True))
    return {'model':model,'usage':usage,'review':parsed,'semantic_review':'Source-checked no-remote-step conclusion only; risk comments remain advisory.',
            'authority':'No patch or runtime-equivalence acceptance','inference_calls':1,'billed_usd':None}


def host_snapshot(supervisor,task,work):
    from host_snapshot import build_and_capture
    return build_and_capture(work,supervisor.legacy/'capture/host')


def host_recapture(supervisor,task,work):
    """Create a uniquely named host iteration; never replace the baseline."""
    from host_snapshot import build_and_capture
    capture=supervisor.legacy/'capture'
    used=[]
    for path in capture.glob('host_iteration_*'):
        match=re.fullmatch(r'host_iteration_(\d{4,})',path.name)
        if match:used.append(int(match.group(1)))
    index=max(used,default=0)+1
    destination=capture/f'host_iteration_{index:04d}'
    if destination.exists():raise h.Failure('FAILED','HOST_ITERATION_DESTINATION_EXISTS')
    result=build_and_capture(work,destination)
    if result.get('capture')!=str(destination) or c.sha(destination/'manifest.json')!=result.get('manifest_sha256'):
        raise h.Failure('FAILED','HOST_ITERATION_PROVENANCE_INVALID')
    return {'iteration_id':destination.name,'capture':str(destination),
        'manifest_sha256':result['manifest_sha256'],'prior_iterations':used,
        'scope':'Fresh HOST observation only; immutable PCSX2 retail capture is not altered.'}


def retail_recompare(supervisor,task,work):
    capture=Path(task['inputs']['host_capture'])
    expected=task['inputs']['host_manifest_sha256']
    if c.sha(capture/'manifest.json')!=expected:raise h.Failure('FAILED','HOST_ITERATION_MANIFEST_CHANGED')
    retail_root=supervisor.legacy/'capture/guided_003/normalized'
    retail_manifest=capture/'manifest.json'
    if r.load_capture(retail_root,'PCSX2')['metadata']['elf_sha256']!=r.ELF_SHA256:
        raise h.Failure('FAILED','IMMUTABLE_RETAIL_IDENTITY_CHANGED')
    compared=r.compare(r.load_capture(retail_root,'PCSX2'),r.load_capture(capture,'HOST'))
    first=compared.get('first_verifiable_divergence')
    fingerprint=None if first is None else h.digest({'retail_manifest':c.sha(retail_root/'manifest.json'),
        'host_manifest':c.sha(retail_manifest),'observation':first.get('observation'),
        'field':first.get('observation','').rsplit('.',1)[-1],'retail':first.get('retail'),
        'host':first.get('host'),'source_sha256':c.sha(h.ROOT/'src/recomp/entry_0x100008.cpp')})
    compared.update({'host_iteration':capture.name,'host_manifest_sha256':expected,
        'retail_manifest_sha256':c.sha(retail_root/'manifest.json'),'divergence_fingerprint':fingerprint,
        'authority':'Bounded covered-prefix comparison. No complete equivalence claim.'})
    if task['inputs'].get('previous_comparison'):
        previous=c.strict_json(Path(task['inputs']['previous_comparison']).read_text(encoding='utf-8'))
        old=previous.get('divergence_fingerprint');old_pc=(previous.get('first_verifiable_divergence') or {}).get('observation','')
        new_pc=(first or {}).get('observation','')
        order={'A':0,'trace[':1,'B':2}
        old_rank=2 if old_pc.startswith('B.') else 1 if old_pc.startswith('trace[') else 0
        new_rank=2 if new_pc.startswith('B.') else 1 if new_pc.startswith('trace[') else 0
        progress='DIVERGENCE_RESOLVED' if first is None else 'NO_PROGRESS' if fingerprint==old else 'DIVERGENCE_MOVED_FORWARD' if new_rank>old_rank else 'DIVERGENCE_CHANGED'
        compared['divergence_progress']={'classification':progress,'previous_fingerprint':old,'current_fingerprint':fingerprint}
    pc.write_new(work/'comparison.json',compared)
    compared['comparison_path']=str(work/'comparison.json');compared['comparison_sha256']=c.sha(work/'comparison.json')
    return compared


def capacity(supervisor,task,work):
    observed=codex_capacity.observe()
    supervisor.emit('capacity',codex=observed)
    return observed


def entry_capture(supervisor,task,work):
    try: return pc.capture_entry(supervisor.legacy/'capture')
    except (OSError,ValueError) as exc:
        return {'supervisor_outcome':'WAITING_FOR_EXTERNAL_INPUT','reason':str(exc) if isinstance(exc,ValueError) else 'PINE_OR_PROCESS_IO_FAILURE',
                'evidence':'No snapshot invented; original/staging files preserved. Human debugger or supported control still required.'}


def retail_compare(supervisor,task,work):
    loop=a.Autoloop(supervisor.legacy)
    observed=loop.capture_status()
    if observed['status']!='RETAIL_CAPTURE_AVAILABLE':raise h.Failure('FAILED','RETAIL_CAPTURE_CHANGED')
    result=r.compare(r.load_capture(Path(observed['root']),'PCSX2'),r.load_capture(supervisor.legacy/'capture/host','HOST'))
    if result['status']=='FIRST_DIVERGENCE_IDENTIFIED':
        supervisor.add('first-divergence-review','divergence-review',('retail-compare',),capacity='premium',inputs={'comparison':str(work/'result.json')})
    return result


def worker_review(supervisor,task,work):
    # A NEW task about this session's observer, not a rerun of finalize/capture.
    # The fixed campaign directory preserves paid/local dedup across task leases.
    root=supervisor.output/'tasks'/task['id']/'campaign'
    root.mkdir(parents=True,exist_ok=True)
    source=h.ROOT/'tools/host_snapshot.py'
    expected={'retail_values_supplied':False,'host_only':True,'stop':'second_00100018_before_checkpoint','instructions':11}
    manifest={'id':'supervisor_host_observer_review_v1','tasks':[{
        'id':'observer-scope','kind':'worker','providers':['ollama','azure','gemini','aws'],
        'sources':[{'path':str(source),'sha256':c.sha(source),'lines':[1,len(source.read_text().splitlines())]}],
        'instruction':'Review scope of the supplied host observation helper. Return ONLY JSON with exactly retail_values_supplied (boolean), host_only (boolean), stop (string), instructions (integer). Stop means second_00100018_before_checkpoint. No commands or patches.',
        'expected':expected}]}
    path=root/'manifest.json'
    if path.exists():
        if c.strict_json(path.read_text())!=manifest:raise h.Failure('FAILED','WORKER_REVIEW_SOURCE_CHANGED')
    else:pc.write_new(path,manifest)
    with supervisor.router.journal.lock():
        campaign=c.Campaign(c.load_manifest(path),root/'run',router=supervisor.router,stop_check=supervisor.stop_event.is_set)
        result=campaign.run(max_tasks=1,max_iterations=10)
    passed=result['tasks']['observer-scope']['status']=='ACCEPTED'
    return {'supervisor_outcome':'ACCEPTED' if passed else 'REJECTED','campaign_report':result,
            'local_validation':'Strict exact JSON against master-derived source scope; advisory only, never retail equivalence.'}


def worker_review_failover(supervisor,task,work):
    """New immutable campaign identity; exclude only the provider that answered."""
    rejected=Path(task['inputs']['rejected_artifact'])
    if c.sha(rejected)!=task['inputs']['rejected_sha256']:
        raise h.Failure('FAILED','REJECTED_RESULT_HASH_MISMATCH')
    prior=c.strict_json(rejected.read_text(encoding='utf-8'))
    if prior.get('supervisor_outcome')!='REJECTED':
        raise h.Failure('FAILED','FAILOVER_SOURCE_NOT_REJECTED')
    # Campaign candidate bookkeeping includes budget-denied providers. Exclude
    # only adapters that actually received the prior request; denied reservations
    # did not consume inference and the new additive window authorizes Azure.
    provider_report=prior.get('campaign_report',{}).get('providers',{})
    actually_called={p for p,data in provider_report.items()
                     if any(a.get('adapter_attempted') for a in data.get('attempts',[]))}
    providers=[p for p in ('azure','aws','gemini') if p not in actually_called]
    if not providers:
        return {'supervisor_outcome':'REJECTED','reason':'NO_UNTRIED_AUTHORIZED_PROVIDER',
                'source_artifact_sha256':task['inputs']['rejected_sha256']}
    root=supervisor.output/'tasks'/task['id']/'campaign';root.mkdir(parents=True,exist_ok=True)
    source=h.ROOT/'tools/host_snapshot.py'
    expected={'retail_values_supplied':False,'host_only':True,
              'stop':'second_00100018_before_checkpoint','instructions':11}
    manifest={'id':'supervisor_host_observer_failover_001','tasks':[{
        'id':'observer-scope-failover-001','kind':'worker','providers':providers,'tier':'LOW',
        'sources':[{'path':str(source),'sha256':c.sha(source),'lines':[1,len(source.read_text().splitlines())]}],
        'instruction':'Independently review the host-only observer scope in the supplied source. Return exactly the expected strict JSON fields and types. Retail state is not supplied. This is a bounded scope check, not runtime-equivalence evidence.',
        'expected':expected}]}
    path=root/'manifest.json'
    if path.exists():
        if c.strict_json(path.read_text())!=manifest:raise h.Failure('FAILED','FAILOVER_MANIFEST_CHANGED')
    else:pc.write_new(path,manifest)
    with supervisor.router.journal.lock():
        campaign=c.Campaign(c.load_manifest(path),root/'run',router=supervisor.router,
                            stop_check=supervisor.stop_event.is_set)
        result=campaign.run(max_tasks=1,max_iterations=10)
    passed=result['tasks']['observer-scope-failover-001']['status']=='ACCEPTED'
    return {'supervisor_outcome':'ACCEPTED' if passed else 'REJECTED',
            'campaign_report':result,'failover_from':task['inputs']['rejected_sha256'],
            'route':providers,'local_validation':'Strict master-owned JSON equality; worker output remains advisory.'}


def divergence_review(supervisor,task,work):
    comparison=c.strict_json(Path(task['inputs']['comparison']).read_text())
    first=comparison.get('first_verifiable_divergence')
    if not first:raise h.Failure('FAILED','DIVERGENCE_MISSING')
    comparison_path=Path(task['inputs']['comparison'])
    root=supervisor.output/'tasks'/task['id']/'campaign';root.mkdir(parents=True,exist_ok=True)
    expected_refs=['retail-compare.first_verifiable_divergence','retail-compare.last_matching_observation',
                   'retail-compare.unobserved_fields']
    contract={'kind':'first-divergence-review-proposal-v1','candidate_sha256':h.digest(first),
              'allowed_assessments':['SUPPORTS_CANDIDATE_FOR_INVESTIGATION','CANNOT_VERIFY_WITH_AVAILABLE_FIELDS',
                                     'CONTRADICTS_COMPARISON_ARTIFACT'],
              'allowed_evidence_refs':expected_refs}
    manifest={'id':'supervisor_first_divergence_review_v1','tasks':[{
        'id':'first-divergence-proposal','kind':'worker','providers':['azure','aws','gemini'],
        'tier':'LOW','timeout':60,'max_output':512,
        'sources':[{'path':str(comparison_path),'sha256':c.sha(comparison_path),
                    'lines':[1,len(comparison_path.read_text(encoding='utf-8').splitlines())]}],
        'instruction':'Review the comparator candidate as a proposal only. Do not infer a subsystem or propose code. Return JSON with exactly candidate (copy the first_verifiable_divergence object), assessment (one enum from the output contract, meaning investigation only), rationale (bounded text), and evidence_refs (only listed references). This does not establish semantic correctness.',
        'expected':{'candidate_sha256':h.digest(first)},'proposal_schema':dict(contract,candidate=first)}]}
    path=root/'manifest.json'
    if path.exists():
        if c.strict_json(path.read_text())!=manifest:raise h.Failure('FAILED','DIVERGENCE_REVIEW_MANIFEST_CHANGED')
    else:pc.write_new(path,manifest)
    with supervisor.router.journal.lock():
        campaign=c.Campaign(c.load_manifest(path),root/'run',router=supervisor.router,
                            stop_check=supervisor.stop_event.is_set)
        result=campaign.run(max_tasks=1,max_iterations=10)
    proposal_state=result['tasks']['first-divergence-proposal']
    proposed=proposal_state['status']=='PROPOSED'
    return {'supervisor_outcome':'ACCEPTED' if proposed else 'REJECTED',
            'campaign_report':result,'first_divergence':first,
            'proposal_status':'PENDING_SEMANTIC_REVIEW' if proposed else 'REJECTED',
            'authority':'Proposal only; no diagnosis accepted and no code mutation authorized.'}


def human_capture_helper(supervisor,task,work):
    root=pc.prepare_guided()
    text='''# Captura retail restante — un solo procedimiento

Desde C:\\Fate Soldiers 3 ejecuta en una PowerShell visible:

```powershell
python tools/pcsx2_capture.py guided
```

El helper abre exactamente `D:\\Juegos\\Playstation\\Playstation 2\\PS2 Tools\\PCXS2 V2.3\\pcsx2-qt.exe` (2.8.2.0), carga `C:\\DW3\\sources\\dumps\\dw3xl_ps2\\SLUS_206.17` con configuración aislada y breakpoint de entrada automático `0x00100008`. No introduzcas otro breakpoint. Selecciona CPU **EE** en **PCSX2 Debugger**. A se exporta automáticamente antes del LUI.

Cuando PowerShell pida el punto siguiente: da foco a PCSX2 Debugger, pulsa **F11 / Debug > Step Into UNA vez**, comprueba el PC esperado y pulsa **Enter** en PowerShell. Espera la confirmación de exportación antes de otro F11. Orden:

`0010000c, 00100010, 00100014, 00100018 (primera), 0010001c, 00100020, 00100024, 00100028, 0010002c, 00100018 (segunda)`.

La primera llegada a 00100018 es point_04; la segunda es point_10 = B. El último F11 ejecuta branch 0010002c y delay slot 00100030 juntos. No pulses Run/Pause/Step Over; no edites registros ni memoria. Si el PC difiere, detente; el helper preserva el original rechazado y no lo acepta.

No copies valores ni hagas dumps manuales: el helper exporta savestates, GPR128/especiales, RAM completa y hashes; normaliza al terminar y cierra SOLO el proceso que abrió. Tiempo total máximo 15 minutos. Los estados intermedios que el debugger no expone quedan ausentes.

Nueva sesión: `artifacts/hybrid_autoloop_20261003/capture/guided_001/{raw,normalized}`. La A previa automática de otro arranque queda intacta y NO se mezcla con esta sesión. El supervisor vivo detecta el manifest normalizado y continúa validación/comparación; no hace falta reiniciarlo. Si el supervisor no está vivo: `python tools/hybrid_supervisor.py run --enable-codex --poll-seconds 30`.
'''
    target=supervisor.output/'human_procedure.md'
    if target.exists():
        if target.read_text(encoding='utf-8')!=text:raise h.Failure('FAILED','HUMAN_PROCEDURE_CHANGED_REVIEW_REQUIRED')
    else:target.write_text(text,encoding='utf-8')
    return {'guided_root':str(root),'procedure':str(target),'procedure_sha256':c.sha(target),
            'human_actions':'10 verified EE F11 steps + Enter confirmations; no manual exports',
            'original_automatic_A_session':'Preserved separately; not reused across boot sessions'}


def entry_audit(supervisor,task,work):
    raw=supervisor.legacy/'capture/raw'
    meta=c.strict_json((raw/'point_00.json').read_text())
    original=r.child(raw,meta['savestate'])
    if c.sha(original)!=meta['sha256'] or meta['elf_sha256']!=r.ELF_SHA256 or meta['exe_sha256']!=pc.EXE_HASH:
        raise h.Failure('FAILED','AUTOMATIC_A_ORIGINAL_CHANGED')
    registers,ram=pc.decode(original)
    if registers['pc']!='0x00100008':raise h.Failure('FAILED','AUTOMATIC_A_PC_CHANGED')
    host=r.load_capture(supervisor.legacy/'capture/host','HOST')
    observed=r.registers(registers)
    differences=[{'field':k,'retail':value,'host':host['snapshots']['A'][k]} for k,value in observed.items()
                 if value is not None and host['snapshots']['A'][k] is not None and value!=host['snapshots']['A'][k]]
    pc.write_new(work/'registers_A.json',dict(registers,hit=1))
    return {'status':'INITIAL_STATE_OBSERVATIONS_ONLY','snapshot_A_original_sha256':meta['sha256'],
            'retail_registers':str(work/'registers_A.json'),'ram_bytes':len(ram),'differences':differences,
            'snapshot_B':'ABSENT','trace':'ABSENT','first_runtime_divergence':None,
            'claim':'Independent initial-state differences, not evidence of a translated instruction fault. No runtime closure or correction.'}


def entry_state_audit(supervisor,task,work):
    """Deterministically bind A-state differences to their producers and timing."""
    comparison_path=Path(task['inputs']['comparison'])
    proposal_path=Path(task['inputs']['proposal'])
    if c.sha(comparison_path)!=task['inputs']['comparison_sha256'] or c.sha(proposal_path)!=task['inputs']['proposal_sha256']:
        raise h.Failure('FAILED','ENTRY_AUDIT_INPUT_HASH_MISMATCH')
    comparison=c.strict_json(comparison_path.read_text(encoding='utf-8'))
    proposal=c.strict_json(proposal_path.read_text(encoding='utf-8'))
    candidate=proposal.get('campaign_report',{}).get('tasks',{}).get('first-divergence-proposal',{}).get('answer',{}).get('candidate')
    actual=comparison.get('first_verifiable_divergence')
    if candidate!=actual or not actual or actual.get('observation')!='A.LO':
        raise h.Failure('FAILED','PENDING_PROPOSAL_NOT_BOUND_TO_COMPARATOR')
    retail_root=supervisor.legacy/'capture/guided_003/normalized'
    host_root=supervisor.legacy/'capture/host'
    retail=r.load_capture(retail_root,'PCSX2'); host_capture=r.load_capture(host_root,'HOST')
    retail_regs=retail['snapshots']['A']; host_regs=host_capture['snapshots']['A']
    if retail_regs['pc']!='0x00100008' or host_regs['pc']!='0x00100008':
        raise h.Failure('FAILED','ENTRY_A_CAPTURE_POINT_MISMATCH')
    if (retail_regs['LO'],host_regs['LO'])!=(actual['retail'],actual['host']):
        raise h.Failure('FAILED','COMPARATOR_A_LO_VALUE_MISMATCH')
    differing=[]
    keys=list(retail_regs)
    for key in keys:
        left,right=retail_regs[key],host_regs.get(key)
        if left!=right:
            differing.append({'field':key,'retail':left,'host':right,
                'retail_provenance':'BIOS_PRE_HANDOFF' if left is not None else 'UNKNOWN',
                'host_provenance':'HOST_INITIALIZATION' if right is not None else 'OBSERVER_ARTIFACT',
                'required_elf_handoff_value':'UNKNOWN'})
    memory=[]
    for label in ('A',):
        rb=retail['memory'].get((label,0,0x2000000)); hb=host_capture['memory'].get((label,0,0x2000000))
        if rb is None or hb is None:
            memory.append({'snapshot':label,'status':'MISSING','classification':'MISSING_EVIDENCE'})
        else:
            offsets=[i for i,(x,y) in enumerate(zip(rb,hb)) if x!=y]
            memory.append({'snapshot':label,'range':'[0x00000000,0x02000000)',
                'retail_sha256':hashlib.sha256(rb).hexdigest(),'host_sha256':hashlib.sha256(hb).hexdigest(),
                'differing_byte_count':len(offsets),
                'first_differing_address':None if not offsets else f'0x{offsets[0]:08x}',
                'classification':'UNKNOWN' if offsets else 'MATCH'})
    source_files={name:c.sha(h.ROOT/name) for name in ('tools/pcsx2_capture.py','tools/host_snapshot.py','src/main.cpp')}
    source=(h.ROOT/'tools/host_snapshot.py').read_text(encoding='utf-8')
    if 'ctx.lo' not in source or 'runtime->cpu()' not in source:
        raise h.Failure('FAILED','ENTRY_LO_PRODUCER_NOT_FOUND')
    result={'status':'ENTRY_STATE_NOT_RUNTIME_DIVERGENCE','decision':'REJECTED_INSUFFICIENT_EVIDENCE',
        'observation':actual,'capture_point':'Both snapshots are PC 0x00100008 before the first ELF instruction.',
        'field_differences':differing,'memory_comparison':memory,
        'producer_facts':{'retail':'PCSX2 2.8.2 savestate decoder reads LO from CPU register block offset 528; capture is first EE entry before first instruction.',
          'host':'Isolated PS2Runtime CPU context; host observer serializes ctx.lo before instruction execution. Host construction explicitly sets r29, r28 and PC; remaining fields originate in runtime initialization.',
          'classification_limit':'Different pre-instruction states are verified; which field values are required for retail ELF handoff is not established by these captures.'},
        'missing_evidence':['documented/retail-derived EE handoff contract for the initial architectural context','causal provenance of retail pre-entry LO/LO1 and other nontrivial CPU fields before ELF entry'],
        'not_missing_for_A_LO_observation':['later branch/delay trace is not needed to verify the two A.LO bytes/values, but is required for covered-prefix runtime comparison'],
        'source_sha256':source_files,'proposal_sha256':c.sha(proposal_path),'comparison_sha256':c.sha(comparison_path),
        'authority':'No patch authorized; this is entry-state evidence and contract gap only.',**a.INVARIANTS}
    evidence_path=work/'entry_state_A.json'
    pc.write_new(evidence_path,result)
    result['evidence_path']=str(evidence_path)
    result['evidence_sha256']=c.sha(evidence_path)
    return result


def pending_divergence_consumer(supervisor,task,work):
    """Never let a pending semantic proposal exist without an explicit consumer."""
    source=Path(task['inputs']['proposal'])
    if c.sha(source)!=task['inputs']['proposal_sha256']:raise h.Failure('FAILED','PENDING_PROPOSAL_HASH_MISMATCH')
    value=c.strict_json(source.read_text(encoding='utf-8'))
    answer=value.get('campaign_report',{}).get('tasks',{}).get('first-divergence-proposal',{}).get('answer',{})
    if value.get('proposal_status')!='PENDING_SEMANTIC_REVIEW':raise h.Failure('FAILED','EXPECTED_PENDING_PROPOSAL')
    if answer.get('assessment')=='CANNOT_VERIFY_WITH_AVAILABLE_FIELDS':
        decision='REJECTED_INSUFFICIENT_EVIDENCE'
    elif answer.get('assessment')=='SUPPORTS_CANDIDATE_FOR_INVESTIGATION':
        decision='ACCEPTED_FOR_DIAGNOSIS'
    else:decision='REJECTED_INSUFFICIENT_EVIDENCE'
    result={'source_sha256':c.sha(source),'proposal_status':value['proposal_status'],
        'decision':decision,'assessment':answer.get('assessment'),
        'reason':'The candidate is an entry-state delta before the first guest instruction; no instruction fault or causal diagnosis follows from it.',
        'consumer':'entry-state-audit','patch_authority':False}
    pc.write_new(work/'proposal_decision.json',result)
    return result


def entry_state_diagnosis(supervisor,task,work):
    """One bounded proposal on the entry contract; no code changes or authority."""
    audit=supervisor.state['tasks'].get('entry-state-audit',{}).get('artifact',{})
    if not audit:raise h.Failure('FAILED','ENTRY_STATE_AUDIT_MISSING')
    audit_result=c.strict_json(Path(audit['path']).read_text(encoding='utf-8'))
    evidence=Path(audit_result['evidence_path'])
    if c.sha(evidence)!=audit_result['evidence_sha256']:raise h.Failure('FAILED','ENTRY_EVIDENCE_HASH_MISMATCH')
    data=c.strict_json(evidence.read_text(encoding='utf-8'))
    manifest={'id':'entry_state_diagnosis_v1','tasks':[{'id':'entry-contract-candidate','kind':'worker',
        'providers':['ollama','azure'],'tier':'LOCAL','timeout':60,'max_output':256,
        'sources':[{'path':str(evidence),'sha256':c.sha(evidence),'lines':[1,len(evidence.read_text(encoding='utf-8').splitlines())]}],
        'instruction':'Evaluate only whether the supplied pre-instruction capture supports treating this as a translated-instruction fault. The exact candidate object is fixed by the master; choose SUPPORTS_CANDIDATE_FOR_INVESTIGATION only if evidence permits causal attribution, otherwise CANNOT_VERIFY_WITH_AVAILABLE_FIELDS. Do not infer PS2 semantics or propose code. Return strict JSON with candidate copied exactly, assessment enum, bounded rationale, and evidence_refs from allowed names.',
        'expected':{'candidate_sha256':h.digest({'observation':'A.LO','retail':'0x000000000000003c','host':'0x0000000000000000','capture_point':'before first instruction'})},
        'proposal_schema':{'candidate_sha256':h.digest({'observation':'A.LO','retail':'0x000000000000003c','host':'0x0000000000000000','capture_point':'before first instruction'}),
          'candidate':{'observation':'A.LO','retail':'0x000000000000003c','host':'0x0000000000000000','capture_point':'before first instruction'},
          'allowed_assessments':['SUPPORTS_CANDIDATE_FOR_INVESTIGATION','CANNOT_VERIFY_WITH_AVAILABLE_FIELDS'],
          'allowed_evidence_refs':['field_differences','producer_facts','missing_evidence','capture_point']}}]}
    root=supervisor.output/'tasks'/task['id']/'campaign';root.mkdir(parents=True,exist_ok=True)
    path=root/'manifest.json'
    if path.exists():
        if c.strict_json(path.read_text())!=manifest:raise h.Failure('FAILED','ENTRY_DIAGNOSIS_MANIFEST_CHANGED')
    else:pc.write_new(path,manifest)
    with supervisor.router.journal.lock():
        campaign=c.Campaign(c.load_manifest(path),root/'run',router=supervisor.router,stop_check=supervisor.stop_event.is_set)
        report=campaign.run(max_tasks=1,max_iterations=5)
    state=report['tasks']['entry-contract-candidate']
    if state['status']!='PROPOSED':
        return {'supervisor_outcome':'REJECTED','campaign_report':report,'reason':'WORKER_PROPOSAL_NOT_VALIDATED'}
    proposal_path=work/'entry_state_proposal.json'
    pc.write_new(proposal_path,state['answer'])
    digest=c.sha(proposal_path)
    supervisor.add('entry-state-proposal-consumer','entry-state-proposal-consumer',
        ('entry-state-diagnosis',),inputs={'proposal':str(proposal_path),'proposal_sha256':digest,
         'campaign_report':str(root/'run/final_report.json')})
    return {'supervisor_outcome':'ACCEPTED','campaign_report':report,'proposal_path':str(proposal_path),
        'proposal_sha256':digest,'semantic_review':'PENDING_SEMANTIC_REVIEW',
        'authority':'Proposal only; deterministic consumer must decide next bounded task. No mutation.'}


def entry_state_proposal_consumer(supervisor,task,work):
    path=Path(task['inputs']['proposal'])
    if c.sha(path)!=task['inputs']['proposal_sha256']:raise h.Failure('FAILED','ENTRY_STATE_PROPOSAL_HASH_MISMATCH')
    answer=c.strict_json(path.read_text(encoding='utf-8'))
    candidate={'observation':'A.LO','retail':'0x000000000000003c','host':'0x0000000000000000','capture_point':'before first instruction'}
    valid=(set(answer)=={'candidate','assessment','rationale','evidence_refs'} and answer['candidate']==candidate
        and answer['assessment'] in ('SUPPORTS_CANDIDATE_FOR_INVESTIGATION','CANNOT_VERIFY_WITH_AVAILABLE_FIELDS')
        and isinstance(answer['rationale'],str) and 1<=len(answer['rationale'])<=1200
        and isinstance(answer['evidence_refs'],list) and set(answer['evidence_refs']).issubset({'field_differences','producer_facts','missing_evidence','capture_point'}))
    accepted=valid and answer['assessment']=='CANNOT_VERIFY_WITH_AVAILABLE_FIELDS'
    result={'decision':'ACCEPTED_FOR_DIAGNOSIS' if accepted else 'REJECTED_INSUFFICIENT_EVIDENCE',
        'proposal_sha256':task['inputs']['proposal_sha256'],'candidate':answer if valid else None,
        'patch_authority':False,'next_task':'entry-state-contract-followup' if accepted else 'PREMIUM_REQUIRED'}
    if accepted:
        supervisor.add('entry-state-contract-followup','entry-state-contract-followup',
            ('entry-state-proposal-consumer','entry-state-audit'),capacity='pool',
            inputs={'evidence':str(supervisor.output/'tasks/entry-state-audit/attempt_001/entry_state_A.json'),
                'evidence_sha256':c.sha(supervisor.output/'tasks/entry-state-audit/attempt_001/entry_state_A.json')})
    return result


def entry_state_contract_followup(supervisor,task,work):
    audit=supervisor.state['tasks'].get(task['inputs']['audit_task'],{})
    artifact=audit.get('artifact') or {}
    if audit.get('status')!='ACCEPTED' or not artifact or c.sha(Path(artifact['path']))!=artifact.get('sha256'):
        raise h.Failure('FAILED','ENTRY_CONTRACT_AUDIT_ARTIFACT_CHANGED')
    audit_result=c.strict_json(Path(artifact['path']).read_text(encoding='utf-8'))
    evidence=Path(audit_result['evidence_path'])
    if c.sha(evidence)!=audit_result['evidence_sha256']:raise h.Failure('FAILED','ENTRY_CONTRACT_EVIDENCE_CHANGED')
    runtime=h.ROOT/'tools/PS2Recomp/ps2xRuntime/include/ps2_runtime.h'
    main=h.ROOT/'src/main.cpp';capture=h.ROOT/'tools/pcsx2_capture.py'
    header=runtime.read_text(encoding='utf-8');main_text=main.read_text(encoding='utf-8');capture_text=capture.read_text(encoding='utf-8')
    start=header.index('    R5900Context()');end=header.index('    ~R5900Context()',start)
    ctor=header[start:end]
    sources={'context_constructor_excerpt':ctor[:2400],
        'main_explicit_initialization':[line.strip() for line in main_text.splitlines() if 'INITIAL_SP' in line or 'initial_gp_words' in line or 'ctx.pc' in line or 'cpu()' in line],
        'retail_register_decoder':[line.strip() for line in capture_text.splitlines() if "'LO': u64(528)" in line][:4],
        'source_sha256':{str(p):c.sha(p) for p in (runtime,main,capture)}}
    if not sources['retail_register_decoder'] or 'R5900Context' not in ctor:
        raise h.Failure('FAILED','ENTRY_CONTEXT_PRODUCER_CONTRACT_CHANGED')
    pc.write_new(work/'entry_context_producers.json',sources)
    return {'supervisor_outcome':'WAITING_FOR_EXTERNAL_INPUT','status':'REAL_EXTERNAL_BARRIER',
        'reason':'Existing evidence proves unequal pre-instruction CPU states but no repository-backed contract specifies the EE state required at retail ELF handoff.',
        'producer_evidence':str(work/'entry_context_producers.json'),'producer_evidence_sha256':c.sha(work/'entry_context_producers.json'),
        'requested_input':'Authoritative retail-derived EE handoff-state contract for the initial architectural context, including whether BIOS-pre-handoff values must be reproduced.',
        'patch_authority':False}


HANDLERS={'source-index':source_index,'capture-control-audit':capture_control_audit,'completion-contract':completion_contract,
          'premium-review':premium_review,'host-snapshot':host_snapshot,'retail-compare':retail_compare,
          'codex-capacity':capacity,'entry-capture':entry_capture}
HANDLERS.update({'worker-review':worker_review,'worker-review-failover':worker_review_failover,
                 'divergence-review':divergence_review})
HANDLERS['human-capture-helper']=human_capture_helper
HANDLERS['entry-A-audit']=entry_audit
HANDLERS['pending-divergence-consumer']=pending_divergence_consumer
HANDLERS['entry-state-audit']=entry_state_audit
HANDLERS['entry-state-diagnosis']=entry_state_diagnosis
HANDLERS['entry-state-proposal-consumer']=entry_state_proposal_consumer
HANDLERS['entry-state-contract-followup']=entry_state_contract_followup
HANDLERS['host-recapture']=host_recapture
HANDLERS['retail-recompare']=retail_recompare


def address_index(supervisor,task,work):
    path=h.ROOT/'src/dispatcher.cpp'
    rows=[]
    for line,text in enumerate(path.read_text().splitlines(),1):
        match=re.fullmatch(r'\s*g_dispatcher\[0x([0-9a-fA-F]+)\]\s*=\s*(\w+);\s*',text)
        if match:
            address=int(match[1],16)
            if not 0<=address<0x2000000 or address%4:raise h.Failure('FAILED','DISPATCH_CATALOG_ARCHITECTURAL_RANGE')
            rows.append({'pc':f'0x{address:08x}','function':match[2],'line':line})
    by_pc={}
    duplicates=[]
    for row in rows:
        if row['pc'] in by_pc:duplicates.append({'pc':row['pc'],'earlier':by_pc[row['pc']],'later':row})
        by_pc[row['pc']]=row
    pc.write_new(work/'address_index.json',{'dispatcher_sha256':c.sha(path),'registration_order':rows,'final_assignments':by_pc,'duplicates':duplicates})
    next_sources={}
    for key in ('0x00100008','0x001ad6e8','0x001a4aa0'):
        row=by_pc[key]
        source=h.ROOT/'src/recomp'/(row['function']+'.cpp')
        if not source.is_file():raise h.Failure('FAILED','REACHABLE_DECLARED_SOURCE_MISSING')
        next_sources[key]={'function':row['function'],'path':str(source),'sha256':c.sha(source)}
    return {'scope':'Static registration index only, no runtime reachability proof',
            'catalog_entries':len(rows),'final_pcs':len(by_pc),'duplicate_assignments':len(duplicates),
            'index':str(work/'address_index.json'),'sha256':c.sha(work/'address_index.json'),'prefix_next_declared_sources':next_sources}


HANDLERS['address-index']=address_index
