"""Deterministic barrier planner composing Campaign and Router, never LLM authority.

The journal is the authoritative hash-chained state history. Completed campaigns
are reused, not resubmitted. Uncertain worker requests retain Campaign's fail-safe
recovery. Human capture arrival is inspected once per invocation, never polled.
"""
import argparse
import configparser
import copy
from functools import partial
import json
import os
from pathlib import Path
import re
import signal
import shutil
import subprocess
import sys
import time

import hybrid_router as h
import hybrid_campaign as c
import pcsx2_capture as pc
import retail_compare as r

DEFAULT = h.ROOT/'artifacts/hybrid_autoloop_20261003'
INSPECTION = h.ROOT/'artifacts/retail_capture_20261003/inspection'
LOCAL_KINDS = ('capabilities', 'prepare_capture', 'validate_tooling', 'validate_capture', 'compare_capture', 'investigate')
PREFLIGHT_VERSION = 2
INVARIANTS = {'BOOT_CHAIN_STATUS': 'STOPPED_NOT_CLOSED', 'INTERACTIVE_MAIN_LOOP': 'NOT_DEMONSTRATED'}


def project(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    tmp = path.with_suffix('.tmp')
    with tmp.open('w', encoding='utf-8') as f:
        json.dump(value, f, indent=2)
        f.flush()
        os.fsync(f.fileno())
    os.replace(tmp, path)


class Autoloop:
    def __init__(self, output=DEFAULT, router=None, clock=time.monotonic, capture_root=None, handlers=None):
        self.output = Path(output).resolve()
        self.output.mkdir(parents=True, exist_ok=True)
        self.router = router or h.Router(h.Journal(), adapter=partial(h.invoke, json_output=True))
        self.clock = clock
        self.capture = Path(capture_root) if capture_root else self.output/'capture'
        self.handlers = {kind: getattr(self, kind) for kind in LOCAL_KINDS}
        self.handlers.update(handlers or {})
        self.stopping = False
        self.active = None
        self.tail = None
        self.state = dict(version=1, cycles=[], active_cycle=None, barrier='READY_FOR_PCSX2_CAPTURE',
                          status='NEW', reason=None, preparation_complete=False, comparison_fingerprint=None,
                          investigation_fingerprint=None, **INVARIANTS)
        self.journal = self.output/'journal.jsonl'
        if self.journal.exists():
            for line in self.journal.read_text(encoding='utf-8').splitlines():
                event = c.strict_json(line)
                checksum = event.pop('sha256')
                if h.digest(event) != checksum or event['previous'] != self.tail:
                    raise h.Failure('FAILED', 'AUTOLOOP_JOURNAL_INTEGRITY')
                self.tail, self.state = checksum, event['state']
        self.checkpoint()

    def checkpoint(self):
        project(self.output/'state.json', dict(self.state, journal_tail=self.tail))

    def emit(self, kind, **updates):
        candidate = dict(self.state, **updates)
        event = {'kind': kind, 'timestamp_utc': h.now(), 'previous': self.tail, 'state': copy.deepcopy(candidate)}
        serialized = json.dumps(event)
        if h.clean(serialized) != serialized:
            raise h.Failure('FAILED', 'SECRET_LIKE_AUTOLOOP_EVENT')
        checksum = h.digest(event)
        event['sha256'] = checksum
        with self.journal.open('a', encoding='utf-8') as f:
            f.write(json.dumps(event)+'\n')
            f.flush()
            os.fsync(f.fileno())
        self.tail, self.state = checksum, candidate
        self.checkpoint()

    def stop(self, *_):
        self.stopping = True
        if self.active:
            self.active.stopping = True

    def capture_status(self):
        candidates = [self.capture/'normalized', h.ROOT/'artifacts/retail_capture_20261003/normalized']
        candidates += sorted(self.capture.glob('guided_*/normalized'))
        for root in candidates:
            if not (root/'manifest.json').exists():
                continue
            try:
                value = r.load_capture(root, 'PCSX2')
                meta = value['metadata']
                originals = meta.get('originals', [])
                if not originals or any(r.hash_file(Path(x['path'])) != x['sha256'] for x in originals):
                    raise ValueError('hashed original retail evidence required')
                if meta.get('pcsx2_version', '').startswith('SYNTHETIC'):
                    raise ValueError('test fixture is not retail evidence')
                for snapshot in ('A', 'B'):
                    for lo, hi in ((0x100000, 0x100100), (0x2d0580, 0x2d05c0), (0x7ff80, 0x80080)):
                        if not any(label == snapshot and base <= lo and base+size >= hi for label,base,size in value['memory']):
                            raise ValueError('required retail memory coverage absent')
                fingerprint = h.digest({'manifest': r.hash_file(root/'manifest.json'), 'originals': originals})
                return {'status': 'RETAIL_CAPTURE_AVAILABLE', 'root': str(root.resolve()), 'fingerprint': fingerprint}
            except (OSError, ValueError, KeyError, TypeError):
                return {'status': 'INVALID_RETAIL_EVIDENCE', 'root': str(root.resolve())}
        raw = self.capture/'raw'
        if all((raw/f'point_{i:02d}.json').exists() for i in range(11)):
            try:
                pc.normalize(self.capture)
                return self.capture_status()
            except (OSError, ValueError, KeyError, TypeError):
                return {'status': 'INVALID_RETAIL_EVIDENCE', 'root': str(raw)}
        return {'status': 'ABSENT', 'partial_points': len(list(raw.glob('point_*.json'))) if raw.exists() else 0}

    def capabilities(self, task):
        identity = pc.identity()  # A mismatch stops before any retail launch.
        result = subprocess.run([str(pc.EXE), '-help'], capture_output=True, timeout=20)
        help_text = (result.stdout+result.stderr).decode('utf-8', errors='replace')
        help_origin = 'CURRENT_PROCESS_OUTPUT'
        if result.returncode == 0 and not help_text.strip():
            # Qt Windows console help does not always reach Python's pipe.
            # Reuse actual historical CLI output ONLY for the same executable.
            historical = c.strict_json((INSPECTION/'identity.json').read_text())
            if historical['exe_sha256'] != identity['exe_sha256']:
                raise h.Failure('FAILED', 'CLI_HELP_BINARY_IDENTITY_MISMATCH')
            help_text = (INSPECTION/'cli_help.txt').read_text(encoding='utf-8-sig')
            if c.sha(INSPECTION/'cli_help.txt') != '0a388145533ce952254a0f850988c5cbdd66dcf2d7bed937f0c68a0d06a211ec':
                raise h.Failure('FAILED', 'HISTORICAL_CLI_HELP_CHANGED')
            help_origin = 'HISTORICAL_EXECUTED_HELP_SAME_BINARY_SHA256'
        # This Qt build's -help prints its complete help to stderr and exits 1.
        # Validate the actual version/options, not a generic zero-exit rule.
        if result.returncode not in (0, 1) or 'PCSX2 v2.8.2' not in help_text or '-debugger' not in help_text or '-datapath' not in help_text:
            raise h.Failure('FAILED', 'PCSX2_SUPPORTED_CLI_NOT_CONFIRMED')
        pine = (INSPECTION/'pcsx2_PINE.cpp').read_text()
        start, end = pine.index('enum IPCCommand'), pine.index('enum EmuStatus')
        commands = pine[start:end]
        if 'MsgSaveState = 9' not in commands or any(x in commands for x in ('MsgStep', 'MsgRun', 'MsgBreakpoint')):
            raise h.Failure('FAILED', 'PINE_CONTRACT_CHANGED')
        config = (INSPECTION/'pcsx2_Config.h').read_text()
        if 'Deflate = 1' not in config:
            raise h.Failure('FAILED', 'SAVE_COMPRESSION_CONTRACT_CHANGED')
        sources = {p.name: c.sha(p) for p in INSPECTION.glob('*') if p.is_file()}
        return dict(identity, cli=['-datapath', '-debugger', '-elf', '-fastboot'], cli_help_origin=help_origin,
                    current_help_exit=result.returncode, current_help_output_bytes=len(result.stdout+result.stderr),
                    ipc='PINE TCP loopback', ipc_pause_step_breakpoint=False,
                    fields='GPR128, HI/LO + upper HI1/LO1, SA, COP0, branch/delay via pinned savestate layout',
                    intermediate_delay_register_state='ABSENT: GUI Step Into branch includes delay slot',
                    native_gui_helper='UNAVAILABLE: native pipe missing; retries/reset failed',
                    source_hashes=sources, boot_executed=False)

    def prepare_capture(self, task):
        pc.identity()
        for name in ('raw', 'normalized', 'host', 'session'):
            (self.capture/name).mkdir(parents=True, exist_ok=True)
        ini = self.capture/'session/PCSX2/inis/PCSX2.ini'
        bios = Path(r'D:\Juegos\Playstation\Playstation 2\PS2 Tools\PCSX2 1.6.0\bios\scph39001.bin')
        if not bios.is_file() or bios.stat().st_size != 4194304:
            raise h.Failure('FAILED', 'EXISTING_BIOS_REQUIRED')
        isolated_bios = self.capture/'session/PCSX2/bios'
        isolated_bios.mkdir(parents=True, exist_ok=True)
        for source in (bios, bios.with_suffix('.MEC'), bios.with_suffix('.NVM')):
            if source.exists():
                destination = isolated_bios/source.name
                if not destination.exists():
                    with source.open('rb') as src, destination.open('xb') as dst:
                        shutil.copyfileobj(src, dst)
        if c.sha(isolated_bios/bios.name) != c.sha(bios):
            raise h.Failure('FAILED', 'ISOLATED_BIOS_ROM_HASH_CHANGED')
        config = configparser.ConfigParser(interpolation=None, strict=False)
        config.optionxform = str
        if ini.exists():
            config.read(ini, encoding='utf-8')
        else:
            config.read(h.ROOT/'artifacts/retail_capture_20261003/session/PCSX2/inis/PCSX2.ini', encoding='utf-8')
        if not ini.exists() or config.get('Folders', 'Bios', fallback='') != str(isolated_bios):
            settings = {'UI': {'SetupWizardIncomplete': 'false', 'StartPaused': 'false'},
                        'Folders': {'Bios': str(isolated_bios)}, 'Filenames': {'BIOS': bios.name},
                        'EmuCore': {'EnablePINE': 'true', 'PINESlot': '28021', 'EnablePatches': 'false',
                                    'EnableCheats': 'false', 'SaveStateOnShutdown': 'false',
                                    'SavestateCompressionType': '1'},
                        'MemoryCards': {'Slot1_Enable': 'false', 'Slot2_Enable': 'false'}}
            for section, items in settings.items():
                if not config.has_section(section): config.add_section(section)
                for key, value in items.items(): config.set(section, key, value)
            ini.parent.mkdir(parents=True, exist_ok=True)
            if ini.exists():
                archive = self.active.output/'previous_PCSX2.ini'
                with archive.open('x', encoding='utf-8') as f: f.write(ini.read_text(encoding='utf-8'))
            with ini.open('w', encoding='utf-8') as f: config.write(f)
        initialized = subprocess.run([str(pc.EXE), '-datapath', str(self.capture/'session'), '-testconfig'], capture_output=True, timeout=30)
        if initialized.returncode:
            raise h.Failure('FAILED', 'PCSX2_ISOLATED_TESTCONFIG_FAILED')
        verified = configparser.ConfigParser(interpolation=None)
        verified.read(ini, encoding='utf-8')
        if not verified.getboolean('EmuCore', 'EnablePINE') or verified.getint('EmuCore', 'PINESlot') != 28021 or verified.getint('EmuCore', 'SavestateCompressionType') != 1:
            raise h.Failure('FAILED', 'PCSX2_ISOLATED_CONFIG_NOT_RETAINED')
        schema = {'snapshot_A': {'pc': '0x00100008', 'hit': 1, 'timing': 'before LUI'},
                  'snapshot_B': {'pc': '0x00100018', 'hit': 2, 'timing': 'after branch 0x0010002c and delay 0x00100030'},
                  'gpr': {'count': 32, 'halves': ['low64', 'high64'], 'width': '16 hex digits per half'},
                  'special': r.SPECIAL, 'missing': 'null + absent reason, never fabricated zero',
                  'trace_pcs': [f'0x{x:08x}' for x in range(0x100008, 0x100034, 4)],
                  'memory': ['[0x00100000,0x00100100)', '[0x002d0580,0x002d05c0)',
                             '[0x0007ff80,0x00080080)', 'SP +/- 0x80 when translated valid RAM', 'full EE 32 MiB preferred'],
                  'helper_full_ram': True, 'schema_validator': 'tools/retail_compare.py'}
        schema_path = self.capture/'schema.json'
        if not schema_path.exists(): pc.write_new(schema_path, schema)
        procedure = self.procedure()
        procedure_path = self.output/'human_procedure.md'
        if not procedure_path.exists(): procedure_path.write_text(procedure, encoding='utf-8')
        return {'status': 'READY_FOR_PCSX2_CAPTURE', 'config': str(ini), 'config_sha256': c.sha(ini),
                'bios_path': str(isolated_bios/bios.name), 'bios_sha256': c.sha(bios), 'schema_sha256': c.sha(schema_path),
                'testconfig_exit': initialized.returncode, 'preflight_version': PREFLIGHT_VERSION,
                'procedure': str(procedure_path), 'procedure_sha256': c.sha(procedure_path),
                'automatic_breakpoint': '-debugger break on first ELF entry (verify EE PC=0x00100008)',
                'watchpoints': 'none required; no instruction/register/memory modifications',
                'automatic_control': False, 'retail_started': False}

    def procedure(self):
        root_arg = '' if self.capture.resolve() == pc.ROOT.resolve() else ' --root "'+str(self.capture)+'"'
        return ('# Captura única PCSX2 2.8.2.0\n\n'
                'Desde C:\\Fate Soldiers 3, abre dos PowerShell. En la primera ejecuta:\n\n'
                '`python tools/pcsx2_capture.py launch'+root_arg+'`\n\n'
                'Abre exactamente `'+str(pc.EXE)+'`, con datos aislados y ELF `'+str(pc.ELF)+'`. '
                'El comando abre el debugger y pone automáticamente el breakpoint de entrada. '
                'Tiempo máximo 15 minutos; cierra PCSX2 al terminar. No cargues savestates ni cambies registros.\n\n'
                'En la ventana PCSX2 Debugger selecciona CPU EE. Verifica que está pausado en '
                '`0x00100008`, antes del LUI. Si aparece otro PC, NO pulses Run: detente. '
                'En la segunda PowerShell ejecuta `python tools/pcsx2_capture.py record'+root_arg+'`. '
                'Esta es A; guarda automáticamente GPR128, especiales y RAM del savestate, sin copiar valores a mano.\n\n'
                'Con el foco en PCSX2 Debugger, pulsa **F11 (Debug > Step Into)** exactamente una vez '
                'para cada PC siguiente. Comprueba el PC y ejecuta el mismo comando `record` en la segunda '
                'PowerShell ANTES de otro F11:\n\n'
                '`0x0010000c → 0x00100010 → 0x00100014 → 0x00100018 (primera llegada) '
                '→ 0x0010001c → 0x00100020 → 0x00100024 → 0x00100028 → 0x0010002c`.\n\n'
                'La primera llegada a `0x00100018` es point_04, NO B. Desde `0x0010002c`, pulsa '
                'F11 una vez: ejecuta branch y delay slot juntos y debe parar en `0x00100018` por SEGUNDA vez. '
                'Ejecuta `record` de nuevo: point_10 es B. No pulses Run, Pause ni Step Over. '
                'Si cualquier PC difiere, detente y conserva el original; el helper rechaza la secuencia.\n\n'
                'Ejecuta `python tools/pcsx2_capture.py normalize'+root_arg+'`, cierra PCSX2 y ejecuta:\n\n'
                '`python tools/hybrid_autoloop.py --max-cycles 5 --max-tasks-per-cycle 10 --max-cloud-concurrency 2`\n\n'
                'Originales: `'+str(self.capture/'raw')+'`; A/B, traza y hashes normalizados: `'+str(self.capture/'normalized')+'`. '
                'El estado justo entre branch y delay queda explícitamente ausente. '
                'Los offsets del decoder están probados con fixtures y fuente oficial; aún no certificados con un savestate real. '
                'Cualquier fallo de formato detiene la captura, no rellena valores.\n')

    def validate_tooling(self, task):
        logs = []
        for pattern in ('test_pcsx2_capture.py', 'test_retail_compare.py', 'test_hybrid_autoloop.py'):
            result = subprocess.run([sys.executable, '-m', 'unittest', 'discover', '-s', 'tests', '-p', pattern, '-v'],
                                    cwd=h.ROOT, capture_output=True, timeout=120)
            text = (result.stdout+result.stderr).decode('utf-8', errors='replace')
            if h.clean(text) != text: raise h.Failure('FAILED', 'TEST_LOG_SECRET_REJECTED')
            path = self.active.output/(pattern+'.log')
            if not path.exists(): path.write_text(text, encoding='utf-8')
            if result.returncode: raise h.Failure('FAILED', 'DETERMINISTIC_TOOL_TESTS_FAILED')
            logs.append({'path': str(path), 'sha256': c.sha(path)})
        return {'tests': logs, 'validator': 'local unittest, mocked cloud; no C++ changes'}

    def validate_capture(self, task):
        retail = r.load_capture(Path(task['root']), 'PCSX2')
        return {'status': 'RETAIL_CAPTURE_AVAILABLE', 'trace_rows': len(retail['trace']),
                'manifest_sha256': c.sha(Path(task['root'])/'manifest.json'),
                'scope': 'observed fields only; no complete equivalence'}

    def compare_capture(self, task):
        host = Path(task['host'])
        if not (host/'manifest.json').exists():
            return {'status': 'HOST_CAPTURE_REQUIRED', 'reason': 'No normalized host capture at equivalent points; historical contract probes are not interchangeable.',
                    'command': f'python tools/retail_compare.py --retail "{task["root"]}" --host "{host}" --output "{self.active.output / "comparison.json"}"'}
        result = r.compare(r.load_capture(Path(task['root']), 'PCSX2'), r.load_capture(host, 'HOST'))
        return result

    def investigate(self, task):
        comparison = c.strict_json(Path(task['comparison']).read_text())
        divergence = comparison['first_verifiable_divergence']
        if not divergence: raise h.Failure('FAILED', 'NO_VERIFIABLE_DIVERGENCE_TO_INVESTIGATE')
        # Local evidence warrants an investigation, not an invented implementation.
        # No scope-validated patch exists in this capture campaign. Do not autoapply
        # model text to C++ or broaden a patch merely to advance boot.
        sources = {}
        for name in ('src/main.cpp', 'src/elf.cpp', 'src/dispatcher.cpp', 'src/recomp/entry_0x100008.cpp', 'src/boot_chain_probe.cpp'):
            path = h.ROOT/name
            if path.exists():
                lines = path.read_text(encoding='utf-8').splitlines()
                needles = ('00100008', '00100018', '0010002c', 'stack', 'sp_value', 'gp_value', 'PT_LOAD', 'branch_pc', 'in_delay_slot')
                excerpts = [{'line': i+1, 'text': line} for i,line in enumerate(lines) if any(x in line for x in needles)][:24]
                sources[name] = {'sha256': c.sha(path), 'related_source_observations': excerpts}
        return {'status': 'SAFETY_EVIDENCE_BARRIER', 'first_divergence': divergence, 'source_inspection': sources,
                'reason': 'Evidence located; responsible subsystem and a scope-validated correction are not established. No code patch applied.',
                'next_required': 'Concrete source/trace attribution and a bounded patch with independent deterministic validation.'}

    def worker(self, tid, instruction, expected, sources=(), providers=None):
        return {'id': tid, 'kind': 'worker', 'providers': providers or ['ollama'], 'tier': 'LOCAL',
                'instruction': instruction, 'expected': expected, 'sources': list(sources),
                'timeout': 60, 'max_output': 192, 'repair_once': True}

    def plan(self):
        pc.identity()
        arrival = self.capture_status()
        self.emit('evidence_inspected', capture_observation=arrival)
        if arrival['status'] == 'INVALID_RETAIL_EVIDENCE':
            return None, 'SAFETY_EVIDENCE_BARRIER', 'Retail evidence incomplete, changed or missing hashed originals.'
        if arrival['status'] == 'RETAIL_CAPTURE_AVAILABLE':
            self.emit('barrier', barrier='RETAIL_CAPTURE_AVAILABLE')
            fingerprint = arrival['fingerprint']
            host_manifest = self.capture/'host/manifest.json'
            fingerprint = h.digest([fingerprint, c.sha(host_manifest) if host_manifest.exists() else None])
            if self.state['comparison_fingerprint'] != fingerprint:
                return {'phase': 'compare', 'fingerprint': fingerprint, 'tasks': [
                    {'id': 'validate-retail', 'kind': 'validate_capture', 'root': arrival['root']},
                    {'id': 'compare-prefix', 'kind': 'compare_capture', 'root': arrival['root'], 'host': str(self.capture/'host'), 'depends': ['validate-retail']}]}, None, None
            comparison = self.state.get('comparison', {})
            if comparison.get('status') == 'FIRST_DIVERGENCE_IDENTIFIED':
                self.emit('barrier', barrier='FIRST_DIVERGENCE_IDENTIFIED')
                if self.state['investigation_fingerprint'] != fingerprint:
                    path = self.state['comparison_artifact']
                    source = {'path': str(Path(path).relative_to(h.ROOT)), 'sha256': c.sha(Path(path)), 'lines': [1, len(Path(path).read_text().splitlines())]}
                    expected = {'requires_source_attribution': True, 'runtime_equivalence_demonstrated': False}
                    return {'phase': 'investigate', 'fingerprint': fingerprint, 'tasks': [
                        self.worker('review-divergence', 'Review the first divergence. Return exactly two booleans: requires_source_attribution and runtime_equivalence_demonstrated.', expected, [source], ['ollama', 'azure', 'gemini', 'aws']),
                        {'id': 'bounded-attribution-gate', 'kind': 'investigate', 'comparison': path},
                        {'id': 'validate-investigation-tooling', 'kind': 'validate_tooling'}]}, None, None
                return None, 'SAFETY_EVIDENCE_BARRIER', comparison.get('reason', 'No independently justified patch; attribution needed.')
            if comparison.get('status') == 'HOST_CAPTURE_REQUIRED':
                self.emit('barrier', barrier='HOST_CAPTURE_REQUIRED')
                return None, 'SAFETY_EVIDENCE_BARRIER', comparison['reason']
            return None, 'NO_USEFUL_WORK', 'Observed prefix compared; later independent retail trace required to investigate beyond it.'
        if self.state['preparation_complete'] and self.state.get('preflight_version') == PREFLIGHT_VERSION:
            self.emit('barrier', barrier='WAITING_FOR_HUMAN_EVIDENCE')
            return None, 'WAITING_FOR_HUMAN_EVIDENCE', 'Supported CLI/PINE cannot step/run/set debugger breakpoints; native GUI helper unavailable. No retail capture yet.'
        prior = h.ROOT/'artifacts/hybrid_campaign_20261003/preparation/checkpoint.json'
        sources = []
        if prior.exists():
            self.emit('prior_checkpoint', prior_checkpoint={'path': str(prior), 'sha256': c.sha(prior),
                       'status': c.strict_json(prior.read_text())['status'], 'rerun': False})
        spec = h.ROOT/'docs/host_barrier_20261003.md'
        if spec.exists():
            sources = [{'path': str(spec.relative_to(h.ROOT)), 'sha256': c.sha(spec),
                        'lines': [118, min(146, len(spec.read_text(encoding='utf-8').splitlines()))]}]
        expected = {'snapshot_A_pc': '0x00100008', 'snapshot_B_pc': '0x00100018', 'snapshot_B_hit': 2}
        tasks = [
            {'id': 'retail-identity', 'kind': 'inventory', 'files': [{'path': str(pc.ELF), 'sha256': r.ELF_SHA256}, {'path': str(pc.EXE), 'sha256': pc.EXE_HASH}]},
            {'id': 'elf-prefix', 'kind': 'elf_prefix', 'elf': str(pc.ELF), 'sha256': r.ELF_SHA256, 'depends': ['retail-identity']},
            {'id': 'supported-interfaces', 'kind': 'capabilities', 'depends': ['retail-identity']},
            {'id': 'prepare-capture', 'kind': 'prepare_capture', 'depends': ['supported-interfaces', 'elf-prefix']},
            self.worker('capture-point-review', 'Extract capture point requirements. Return only snapshot_A_pc, snapshot_B_pc (8-digit 0x strings) and snapshot_B_hit (integer). Second loop arrival is required.', expected, sources),
            {'id': 'validate-capture-tooling', 'kind': 'validate_tooling', 'depends': ['prepare-capture']}]
        # A tooling correction must not resubmit completed worker calls. Retain
        # the original semantic review and verify cached artifact integrity.
        for cycle in reversed(self.state['cycles']):
            if cycle['phase'] != 'prepare': continue
            old = c.strict_json(Path(cycle['report']).read_text())
            if c.sha(Path(cycle['report'])) != cycle['report_sha256']:
                raise h.Failure('FAILED', 'COMPLETED_CYCLE_REPORT_CHANGED')
            for i, task in enumerate(tasks):
                st = old['tasks'].get(task['id'], {})
                if st.get('status') != 'ACCEPTED' or task['id'] not in ('retail-identity', 'elf-prefix', 'capture-point-review'): continue
                artifact = st['artifact']
                if c.sha(Path(artifact['path'])) != artifact['sha256']:
                    raise h.Failure('FAILED', 'CACHED_TASK_ARTIFACT_CHANGED')
                value = c.strict_json(Path(artifact['path']).read_text())
                tasks[i] = {'id': task['id'], 'kind': 'capture_plan', 'depends': task.get('depends', []),
                            'plan': {'cached_original': artifact, 'cached_attempt_id': st.get('attempt_id'),
                                     'value': value, 'validator': 'master/hash-checked-previous-acceptance'}}
            break
        # Diversity is useful when funded; never require four providers or grant
        # budget because a process restarted. Local preparation remains possible.
        funded = [p for p in ('azure', 'gemini', 'aws') if self.router.remaining_calls(p)]
        if funded:
            reviewer = self.worker('independent-point-review', 'Independently verify candidate capture PCs and hit count. Return only the same three fields.', expected, sources, funded)
            reviewer.update(review_of='capture-point-review', depends=['capture-point-review'])
            tasks.append(reviewer)
        return {'phase': 'prepare', 'tasks': tasks}, None, None

    def complete_cycle(self, spec, campaign, report):
        rows = self.state['cycles'] + [{'index': spec['index'], 'phase': spec['phase'], 'report': str(campaign.output/'final_report.json'),
                                     'report_sha256': c.sha(campaign.output/'final_report.json'), 'status': report['status']}]
        updates = {'cycles': rows, 'active_cycle': None}
        if spec['phase'] == 'prepare':
            required = ('retail-identity', 'elf-prefix', 'supported-interfaces', 'prepare-capture', 'validate-capture-tooling')
            updates['preparation_complete'] = all(report['tasks'][x]['status'] == 'ACCEPTED' for x in required)
            updates['preflight_version'] = PREFLIGHT_VERSION
        elif spec['phase'] == 'compare':
            state = report['tasks']['compare-prefix']
            if state['status'] == 'ACCEPTED':
                updates.update(comparison_fingerprint=spec['fingerprint'], comparison=c.strict_json(Path(state['artifact']['path']).read_text()),
                               comparison_artifact=state['artifact']['path'])
        elif spec['phase'] == 'investigate':
            updates['investigation_fingerprint'] = spec['fingerprint']
        self.emit('cycle_completed', **updates)

    def run(self, max_cycles=5, max_tasks=10, cloud_concurrency=2, max_seconds=600):
        if not 1 <= max_cycles <= 100 or not 1 <= max_tasks <= 100 or not 1 <= cloud_concurrency <= 2 or not 1 <= max_seconds <= 86400:
            raise h.Failure('FAILED', 'INVALID_AUTOLOOP_BOUND')
        deadline = self.clock()+max_seconds
        completed = 0
        reason = None
        status = 'RUNNING'
        while completed < max_cycles:
            if self.stopping or self.clock() >= deadline:
                status, reason = ('INTERRUPTED', 'Ctrl+C: no new work; bounded submitted requests drained.') if self.stopping else ('TIME_LIMIT', 'Invocation wall time reached.')
                break
            spec = self.state['active_cycle']
            if spec is None:
                plan, status, reason = self.plan()
                if plan is None: break
                index = len(self.state['cycles'])+1
                directory = self.output/'cycles'/f'{index:04d}'
                directory.mkdir(parents=True, exist_ok=True)
                manifest = {'id': 'autoloop-'+str(index)+'-'+plan['phase'], 'tasks': plan.pop('tasks')}
                pc.write_new(directory/'manifest.json', manifest)
                spec = dict(plan, index=index, manifest=str(directory/'manifest.json'), manifest_sha256=c.sha(directory/'manifest.json'))
                self.emit('cycle_started', active_cycle=spec, status='RUNNING')
            path = Path(spec['manifest'])
            if c.sha(path) != spec['manifest_sha256']:
                raise h.Failure('FAILED', 'AUTOLOOP_MANIFEST_CHANGED')
            manifest = c.load_manifest(path, LOCAL_KINDS)
            # Bind concurrency once per cycle; restart must use identical bounds.
            policy = copy.deepcopy(self.router.policy)
            policy['pool']['cloud_concurrency'] = cloud_concurrency
            cycle_router = h.Router(self.router.journal, policy, self.router.adapter)
            campaign = c.Campaign(manifest, path.parent, cycle_router, local_handlers=self.handlers,
                                  stop_check=lambda: self.stopping or self.clock() >= deadline)
            self.active = campaign
            inherited = self.state.get('provider_circuits', {})
            if not campaign.state['circuits']:
                for p, value in inherited.items():
                    if value.get('state') == 'BUDGET_BLOCKED' and self.router.remaining_calls(p): continue
                    campaign.emit({'kind': 'circuit', 'provider': p, 'value': value})
            with self.router.journal.lock():
                report = campaign.run(max_tasks, max_iterations=100)
            self.emit('campaign_checkpoint', provider_circuits=report['circuits'])
            self.active = None
            statuses = [s['status'] for s in report['tasks'].values()]
            if not all(s in c.TERMINAL for s in statuses):
                status, reason = ('INTERRUPTED', 'Ctrl+C checkpoint preserved.') if self.stopping else ('BOUNDED_PAUSE', 'Task/time/circuit bound; active campaign resumes without completed calls.')
                break
            self.complete_cycle(spec, campaign, report)
            completed += 1
            if spec['phase'] == 'prepare' and not self.state['preparation_complete']:
                status, reason = 'SAFETY_EVIDENCE_BARRIER', 'Capture preparation failed deterministic validation; inspect cycle task error codes.'
                break
            if any(s['status'] != 'ACCEPTED' for s in report['tasks'].values()) and all(self.router.remaining_calls(p) == 0 for p in ('gemini', 'azure', 'aws')):
                # Required local checks can still transition to a human barrier.
                if not self.state['preparation_complete']:
                    status, reason = 'PROVIDER_BUDGET_EXHAUSTED', 'Cloud caps exhausted and current task has no validated local result.'
                    break
        else:
            status, reason = 'MAX_CYCLES', 'Invocation cycle limit reached; next invocation re-evaluates evidence.'
        self.emit('stopped', status=status, reason=reason)
        return self.report(completed)

    def report(self, completed_this_run=0):
        providers, cloud_calls, total_tasks, cached_tasks = {}, 0, 0, 0
        for cycle in self.state['cycles']:
            report = c.strict_json(Path(cycle['report']).read_text())
            if c.sha(Path(cycle['report'])) != cycle['report_sha256']:
                raise h.Failure('FAILED', 'COMPLETED_CYCLE_REPORT_CHANGED')
            manifest = c.strict_json((Path(cycle['report']).parent/'manifest.json').read_text())
            cache_ids = {t['id'] for t in manifest['tasks'] if t.get('plan', {}).get('cached_original')}
            total_tasks += sum(s['status'] == 'ACCEPTED' and tid not in cache_ids for tid,s in report['tasks'].items())
            cached_tasks += sum(s['status'] == 'ACCEPTED' and tid in cache_ids for tid,s in report['tasks'].items())
            for p, row in report['providers'].items():
                if not row['live_calls']: continue
                value = providers.setdefault(p, {'calls': 0, 'tasks': [], 'usage': [], 'model': row['model']})
                value['calls'] += row['live_calls']
                value['tasks'] += [str(cycle['index'])+':'+x for x in row['accepted_tasks']]
                value['usage'] += row['usage_observed']
                if p != 'ollama': cloud_calls += row['live_calls']
        result = dict(self.state, AUTLOOP_STATUS=self.state['status'], CURRENT_BARRIER=self.state['barrier'],
                      CYCLES_COMPLETED=len(self.state['cycles']), cycles_completed_this_run=completed_this_run,
                      TASKS_COMPLETED=total_tasks, PROVIDERS_USED=providers, CLOUD_CALLS=cloud_calls,
                      cached_tasks_reused=cached_tasks,
                      CURRENT_CHECKPOINT=str(self.output/'state.json'), WHY_IT_STOPPED=self.state['reason'],
                      EXACT_RESUME_COMMAND='python tools/hybrid_autoloop.py --max-cycles 5 --max-tasks-per-cycle 10 --max-cloud-concurrency 2',
                      cloud_remaining={p: self.router.remaining_calls(p) for p in ('gemini', 'azure', 'aws')},
                      calculated_usd=None, billed_usd=None,
                      cost_scope='Observed usage only; shared lifetime reservations + explicit additive human grants, no automatic reset.',
                      human_procedure=str(self.output/'human_procedure.md'))
        result['provider_pool'] = {p: {'model': self.router.model(p),
                                  'status': 'BUDGET_BLOCKED' if p != 'ollama' and not self.router.remaining_calls(p) else
                                            'AVAILABLE_AFTER_LIVE_ACCEPTANCE' if p in providers and providers[p]['tasks'] else 'NOT_RECERTIFIED',
                                  'calls_this_autoloop': providers.get(p, {}).get('calls', 0)} for p in c.ACTIVE}
        changed = ['tools/hybrid_autoloop.py', 'tools/pcsx2_capture.py', 'tools/hybrid_campaign.py', 'tools/hybrid_router.py',
                   'tests/test_hybrid_autoloop.py', 'tests/test_pcsx2_capture.py', 'AGENTS.md', 'docs/hybrid_autoloop_20261003.md']
        result['files_changed_sha256'] = {name: c.sha(h.ROOT/name) for name in changed if (h.ROOT/name).exists()}
        result['validation_logs'] = []
        for path in sorted(self.output.glob('tests*.log')):
            body = path.read_text(encoding='utf-8-sig')
            count = re.search(r'Ran (\d+) tests', body)
            result['validation_logs'].append({'path': str(path), 'sha256': c.sha(path),
                                             'tests': int(count[1]) if count else None, 'passed': bool(count and re.search(r'\nOK\s*$', body))})
        result['retail_identity'] = {'elf': str(pc.ELF), 'sha256': r.ELF_SHA256, 'exe': str(pc.EXE),
                                    'exe_sha256': pc.EXE_HASH, 'version': '2.8.2.0'}
        latest = {'tests_hybrid_final.log', 'tests_capture_final.log', 'tests_retail_final.log'}
        rows = [x for x in result['validation_logs'] if Path(x['path']).name in latest]
        result['validation_summary'] = {'tests': sum(x['tests'] or 0 for x in rows),
                                        'passed': len(rows) == 3 and all(x['passed'] for x in rows),
                                        'scope': 'Mock cloud unit tests + capture/comparison fixtures; no real retail capture'}
        audit = self.output/'resume_audit.json'
        if audit.exists(): result['resume_audit'] = {'path': str(audit), 'sha256': c.sha(audit), 'result': c.strict_json(audit.read_text())}
        result['limitations'] = ['No real PCSX2 capture acquired; native desktop helper unavailable.',
                                'Decoder verified with pinned source and synthetic tests; actual savestate certification pending.',
                                'Nova/Gemini one-shot repair tested with mocks, not cloud-recertified: shared caps exhausted.',
                                'New valid retail capture automatically triggers validation and comparison if a normalized HOST capture is present.',
                                'A missing current host capture or unattributed divergence stops at an explicit evidence barrier; no speculative C++ auto-fix.',
                                'No complete runtime equivalence or menu/main loop claim.']
        project(self.output/'final_report.json', result)
        return result


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--output', type=Path, default=DEFAULT)
    p.add_argument('--max-cycles', type=int, default=5)
    p.add_argument('--max-tasks-per-cycle', type=int, default=10)
    p.add_argument('--max-cloud-concurrency', type=int, default=2)
    p.add_argument('--max-seconds', type=int, default=600)
    p.add_argument('--authorize-cloud-window', help='HUMAN ONLY: unique additive grant id; same id is idempotent')
    p.add_argument('--window-providers', nargs='+', choices=('gemini', 'azure', 'aws'), default=['gemini', 'azure', 'aws'])
    p.add_argument('--window-calls-per-provider', type=int, default=2)
    a = p.parse_args()
    journal = h.Journal()
    try:
        router = h.Router(journal, adapter=partial(h.invoke, json_output=True))
        if a.authorize_cloud_window:
            with journal.lock(): router.authorize_window(a.authorize_cloud_window, a.window_providers, a.window_calls_per_provider)
        # Separate top lock prevents two planners/capture normalizers racing.
        with h.Journal(a.output/'lock').lock():
            loop = Autoloop(a.output, router)
            previous = signal.signal(signal.SIGINT, loop.stop)
            try: result = loop.run(a.max_cycles, a.max_tasks_per_cycle, a.max_cloud_concurrency, a.max_seconds)
            finally: signal.signal(signal.SIGINT, previous)
        print(json.dumps({k: result[k] for k in ('AUTLOOP_STATUS', 'CURRENT_BARRIER', 'CYCLES_COMPLETED', 'TASKS_COMPLETED', 'CLOUD_CALLS', 'CURRENT_CHECKPOINT', 'WHY_IT_STOPPED')}))
        return 0
    except (h.Failure, OSError, ValueError, KeyError, TypeError, subprocess.SubprocessError) as exc:
        print(json.dumps({'AUTLOOP_STATUS': 'SAFETY_EVIDENCE_BARRIER', 'error': exc.code if isinstance(exc, h.Failure) else type(exc).__name__}))
        return 1


if __name__ == '__main__': sys.exit(main())
