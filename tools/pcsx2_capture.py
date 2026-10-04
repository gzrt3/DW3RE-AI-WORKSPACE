"""Read-only PINE capture at HUMAN-paused EE PCs; no Run/Step/write/load commands.

Savestates are copied to exclusive original files before decoding. Decoder is
specific to the pinned PCSX2 2.8.2 Windows layout, not a generic save converter.
An intermediate delay-slot register state is unavailable with GUI Step Into.
"""
import argparse
import configparser
import json
from pathlib import Path
import shutil
import socket
import struct
import subprocess
import sys
import time
import queue
import threading
import uuid
import zipfile

import hybrid_router as h
import retail_compare as r

EXE = Path(r'D:\Juegos\Playstation\Playstation 2\PS2 Tools\PCXS2 V2.3\pcsx2-qt.exe')
EXE_HASH = '982c7c62600a999cf15a25c18349426166c785e7867b2fcc5018d733245b71a3'
ELF = Path(r'C:\DW3\sources\dumps\dw3xl_ps2\SLUS_206.17')
ROOT = h.ROOT/'artifacts/hybrid_autoloop_20261003/capture'
PCS = list(range(0x100008, 0x100030, 4)) + [0x100018]


def write_new(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open('x', encoding='utf-8') as f:
        json.dump(value, f, indent=2)


def identity():
    if r.hash_file(ELF) != r.ELF_SHA256:
        raise ValueError('RETAIL_ELF_HASH_MISMATCH')
    if r.hash_file(EXE) != EXE_HASH:
        raise ValueError('PCSX2_BUILD_CHANGED')
    return {'elf': str(ELF), 'elf_sha256': r.ELF_SHA256, 'exe': str(EXE),
            'exe_sha256': EXE_HASH, 'pcsx2_version': '2.8.2.0',
            'boot_method': 'isolated -debugger -fastboot -elf; first entry stop; human EE Step Into'}


def rpc(command, port=28021):
    # The only allowed operations are Status, Version and SaveState.
    if command not in (b'\x0f', b'\x08', b'\x09\x00'):
        raise ValueError('PINE_OPERATION_FORBIDDEN')
    def read(s, size):
        data = bytearray()
        while len(data) < size:
            part = s.recv(size-len(data))
            if not part:
                raise ValueError('PINE_TRUNCATED_REPLY')
            data.extend(part)
        return bytes(data)
    with socket.create_connection(('127.0.0.1', port), timeout=5) as s:
        s.sendall(struct.pack('<I', len(command)+4)+command)
        length = struct.unpack('<I', read(s, 4))[0]
        if not 5 <= length <= 65536:
            raise ValueError('PINE_REPLY_LIMIT')
        body = read(s, length-4)
        if body[0] != 0:
            raise ValueError('PINE_COMMAND_FAILED')
        return body[1:]


def paused():
    if struct.unpack('<I', rpc(b'\x0f'))[0] != 1:
        raise ValueError('EMULATOR_MUST_BE_PAUSED')


def decode(path):
    with zipfile.ZipFile(path) as z:
        names = z.namelist()
        if len(set(names)) != len(names):
            raise ValueError('DUPLICATE_SAVE_ENTRIES')
        def entry(name, limit):
            info = z.getinfo(name)
            if info.file_size > limit:
                raise ValueError('SAVE_ENTRY_TOO_LARGE')
            return z.read(name)
        version = entry('PCSX2 Savestate Version.id', 256)
        if b'2.8.2' not in version[4:]:
            raise ValueError('UNSUPPORTED_SAVE_BUILD')
        raw = entry('PCSX2 Internal Structures.dat', 16*1024*1024)
        ram = entry('eeMemory.bin', 0x2000000)
        if len(ram) != 0x2000000:
            raise ValueError('EE_RAM_SIZE_MISMATCH')
    tag = b'cpuRegs'+bytes(25)
    if raw.count(tag) != 1:
        raise ValueError('CPU_REGISTER_TAG_NOT_UNIQUE')
    base = raw.index(tag)+32
    if len(raw) < base+1104:
        raise ValueError('TRUNCATED_CPU_REGISTERS')
    u32 = lambda off: struct.unpack_from('<I', raw, base+off)[0]
    u64 = lambda off: f'0x{struct.unpack_from("<Q", raw, base+off)[0]:016x}'
    regs = {'gpr': [{'low64': u64(i*16), 'high64': u64(i*16+8)} for i in range(32)],
            'HI': u64(512), 'HI1': u64(520), 'LO': u64(528), 'LO1': u64(536),
            'SA': f'0x{u32(672):08x}', 'pc': f'0x{u32(680):08x}',
            'Status': f'0x{u32(544+12*4):08x}', 'Cause': f'0x{u32(544+13*4):08x}',
            'EPC': f'0x{u32(544+14*4):08x}', 'branch': None,
            'delay_slot': bool(u32(676)) if u32(676) in (0, 1) else None,
            'native_state': {'pcsx2_branch_raw': u32(1100), 'pcsx2_IsDelaySlot_raw': u32(676)},
            'absent': {'branch': 'Internal PCSX2 branch flag retained in native_state; no cross-host canonical pending-branch contract established.'}}
    if regs['delay_slot'] is None:
        regs['absent']['delay_slot'] = 'PCSX2 IsDelaySlot value outside boolean contract; raw retained.'
    r.registers(regs)
    return regs, ram


def observation(root, original, regs, index, timing):
    """Persist rejected observations too; absence of execution is never a step."""
    expected = f'0x{PCS[index]:08x}'
    previous = None
    if index:
        previous = json.loads((root/'raw'/f'point_{index-1:02d}.json').read_text())['pc']
    result = dict(index=index, EXPECTED_PC=expected, OBSERVED_PC=regs['pc'],
                  pre_step_pc=previous, post_step_pc=regs['pc'],
                  savestate=original.name, sha256=r.hash_file(original),
                  timestamp_utc=h.now(), timing=timing,
                  status='PC_MATCH' if regs['pc']==expected else 'REJECTED',
                  reason=None if regs['pc']==expected else
                  ('NO_PC_PROGRESS_OBSERVED' if regs['pc']==previous else 'UNEXPECTED_EE_PC'),
                  debugger_cpu_selection=None, debugger_ui_pc=None,
                  absent={'debugger_cpu_selection':'No validated UI observation',
                          'debugger_ui_pc':'PINE has no debugger register query; PC decoded from savestate'})
    write_new(root/'observations'/f'point_{index:02d}.json',result)
    print(json.dumps(result),flush=True)
    if result['status']=='REJECTED':
        raise ValueError('WRONG_EE_PC_ORIGINAL_PRESERVED')
    return result


def record(root=ROOT, session=None):
    meta = identity()
    root = Path(root)
    if (root/'closed_automatic_session.json').exists():
        raise ValueError('AUTOMATIC_A_BOOT_ENDED_USE_SEPARATE_GUIDED_SESSION')
    rows = sorted((root/'raw').glob('point_*.json'))
    if len(rows) >= len(PCS):
        raise ValueError('CAPTURE_ALREADY_COMPLETE')
    for i, p in enumerate(rows):
        old = json.loads(p.read_text())
        if old['index'] != i or r.hash_file(root/'raw'/old['savestate']) != old['sha256']:
            raise ValueError('PRIOR_ORIGINAL_CHANGED')
    timing={'started_utc':h.now(), 'started_monotonic_ns':time.monotonic_ns()}
    paused()
    version = rpc(b'\x08')
    if b'2.8.2' not in version:
        raise ValueError('PINE_BUILD_MISMATCH')
    saves = root/'session/PCSX2/sstates'
    before = {p: (p.stat().st_mtime_ns, p.stat().st_size) for p in saves.glob('*.p2s')}
    timing['save_requested_utc']=h.now()
    rpc(b'\x09\x00')
    timing['save_ack_monotonic_ns']=time.monotonic_ns()
    deadline = time.monotonic()+30
    candidate = None
    while time.monotonic() < deadline:
        changed = [p for p in saves.glob('*.p2s') if (p.stat().st_mtime_ns, p.stat().st_size) != before.get(p)]
        if len(changed) == 1:
            try:
                decode(changed[0])
                candidate = changed[0]
                break
            except (ValueError, OSError, zipfile.BadZipFile):
                pass  # Asynchronous ZIP save still in progress; bounded wait.
        time.sleep(.2)
    if candidate is None:
        raise ValueError('SAVE_TIMEOUT_OR_UNSUPPORTED_ARCHIVE')
    paused()
    original = root/'raw'/f'point_{len(rows):02d}.p2s'
    original.parent.mkdir(parents=True, exist_ok=True)
    with candidate.open('rb') as src, original.open('xb') as dst:
        shutil.copyfileobj(src, dst)
    regs, ram = decode(original)
    timing['saved_paused_observation_utc']=h.now()
    timing['saved_paused_monotonic_ns']=time.monotonic_ns()
    observation(root,original,regs,len(rows),timing)
    # Verify the loaded code prefix against the exact ELF, not just a filename.
    import hybrid_campaign as c
    task = {'kind': 'elf_prefix', 'elf': str(ELF), 'sha256': r.ELF_SHA256}
    inspector = object.__new__(c.Campaign)
    inspector.local_handlers = {}
    prefix = inspector.local(task)['instructions']
    for word in prefix:
        pc = int(word['pc'], 16)
        if f'0x{struct.unpack_from("<I", ram, pc)[0]:08x}' != word['opcode']:
            raise ValueError('LOADED_CODE_DOES_NOT_MATCH_ELF')
    data = dict(meta, index=len(rows), pc=regs['pc'], timestamp_utc=h.now(),
                savestate=original.name, sha256=r.hash_file(original), paused=True,
                observation_sha256=r.hash_file(root/'observations'/f'point_{len(rows):02d}.json'))
    if session is not None:
        data['capture_session']=session
        data['boot_method']='isolated -debugger -fastboot -elf; automatic A; observed paused EE PCs after requested debugger steps; UI action not independently observed'
        launch=json.loads((root/'launch.json').read_text())
        if launch['session']!=session:raise ValueError('GUIDED_LAUNCH_SESSION_MISMATCH')
        data['launch_record_sha256']=r.hash_file(root/'launch.json')
        data['configuration_before_boot_sha256']=launch['configuration_before_boot_sha256']
    write_new(root/'raw'/f'point_{len(rows):02d}.json', data)
    print(json.dumps({'recorded_pc': regs['pc'], 'point': len(rows), 'next_pc':
                     f'0x{PCS[len(rows)+1]:08x}' if len(rows)+1 < len(PCS) else None}))


def normalize(root=ROOT):
    root = Path(root)
    points = []
    originals = []
    sessions=set()
    for i, pc in enumerate(PCS):
        p = root/'raw'/f'point_{i:02d}.json'
        meta = json.loads(p.read_text())
        original = r.child(root/'raw', meta['savestate'])
        if meta['index'] != i or meta['pc'] != f'0x{pc:08x}' or r.hash_file(original) != meta['sha256']:
            raise ValueError('ORIGINAL_IDENTITY_OR_ORDER_MISMATCH')
        if meta['elf_sha256'] != r.ELF_SHA256 or meta['exe_sha256'] != EXE_HASH or not meta['paused']:
            raise ValueError('CAPTURE_PROVENANCE_MISMATCH')
        sessions.add(meta.get('capture_session'))
        regs, ram = decode(original)
        if regs['pc'] != meta['pc']:
            raise ValueError('RAW_PC_MISMATCH')
        points.append((regs, ram))
        originals += [{'path': str(original.resolve()), 'sha256': meta['sha256']},
                      {'path': str(p.resolve()), 'sha256': r.hash_file(p)}]
        if 'observation_sha256' in meta:
            observed=root/'observations'/f'point_{i:02d}.json'
            if r.hash_file(observed)!=meta['observation_sha256']:
                raise ValueError('OBSERVATION_CHANGED')
            originals.append({'path':str(observed.resolve()),'sha256':meta['observation_sha256']})
    if len(sessions)!=1:raise ValueError('MIXED_CAPTURE_SESSIONS_FORBIDDEN')
    if next(iter(sessions)) is not None:
        launch=root/'launch.json'
        if meta.get('launch_record_sha256')!=r.hash_file(launch):raise ValueError('GUIDED_LAUNCH_RECORD_CHANGED')
        originals.append({'path':str(launch.resolve()),'sha256':r.hash_file(launch)})
    out = root/'normalized'
    for transition in sorted((root/'transitions').glob('*.log')):
        originals.append({'path':str(transition.resolve()),'sha256':r.hash_file(transition)})
    if (out/'manifest.json').exists():
        r.load_capture(out, 'PCSX2')
        return out
    if out.exists() and any(out.iterdir()):
        raise ValueError('PARTIAL_NORMALIZATION_REQUIRES_MASTER_REVIEW')
    out.mkdir(parents=True, exist_ok=True)
    files, memory = {}, []
    for label, index, hit in [('A', 0, 1), ('B', 10, 2)]:
        regs, ram = points[index]
        write_new(out/f'snapshot_{label}/registers.json', dict(regs, hit=hit))
        path = out/f'snapshot_{label}/memory_full_ee.bin'
        with path.open('xb') as f:
            f.write(ram)
        memory.append({'snapshot': label, 'base': 0, 'length': len(ram), 'file': str(path.relative_to(out)).replace('\\', '/')})
    trace = []
    for i in range(11):
        pc = 0x100008+i*4
        branch = i == 9
        delay = i == 10
        regs, ram = points[min(i, 9)]
        trace.append({'pc': f'0x{pc:08x}', 'opcode': f'0x{struct.unpack_from("<I", ram, pc)[0]:08x}',
                      'before': None if delay else regs,
                      'after': None if branch else points[10 if delay else i+1][0],
                      'branch_taken': points[10][0]['pc'] == '0x00100018' if branch else None,
                      'delay_slot': delay,
                      'observation': 'GUI ordered Step Into pauses; branch and delay execute together. '
                                     'Delay before/branch after absent; opcodes read from saved EE RAM.'})
    with (out/'trace.jsonl').open('x', encoding='utf-8') as f:
        f.write('\n'.join(json.dumps(t) for t in trace)+'\n')
    for p in out.rglob('*'):
        if p.is_file():
            files[p.relative_to(out).as_posix()] = r.hash_file(p)
    write_new(out/'manifest.json', dict(meta, origin='PCSX2', files=files, memory=memory,
                                      originals=originals, trace_scope='Observed GUI pauses; intermediate delay-slot state absent'))
    r.load_capture(out, 'PCSX2')
    return out


def absolute_root(root):
    root=Path(root)
    return (root if root.is_absolute() else h.ROOT/root).resolve()


def launch_plan(root):
    requested=str(Path(root)/'session')
    root=absolute_root(root)
    # This build appends PCSX2 to CustomDataPath: retain session as the CLI
    # parent, with configuration in session/PCSX2 (not PCSX2/PCSX2).
    datapath=(root/'session').resolve()
    (datapath/'PCSX2').mkdir(parents=True,exist_ok=True)
    exe=EXE.resolve();elf=ELF.resolve()
    return {'requested_datapath':requested,'resolved_datapath':str(datapath),
            'effective_data_directory':str(datapath/'PCSX2'),
            'pcsx2_executable':str(exe),'cwd':str(exe.parent),
            'full_argv':[str(exe),'-datapath',str(datapath),'-debugger',
                         '-fastboot','-nofullscreen','-elf',str(elf)]}


def start_owned(root,plan,metadata,**kwargs):
    if (root/'launch.json').exists():
        raise ValueError('GUIDED_PARTIAL_OR_COMPLETE_CAPTURE_PRESERVED_USE_NEW_ROOT')
    try:
        proc=subprocess.Popen(plan['full_argv'],cwd=plan['cwd'],**kwargs)
    except OSError:
        write_new(root/'launch.json',dict(metadata,**plan,startup_error='PCSX2_PROCESS_CREATION_FAILED'))
        raise ValueError('PCSX2_PROCESS_CREATION_FAILED') from None
    write_new(root/'launch.json',dict(metadata,**plan,created_process_pid=proc.pid,timestamp_utc=h.now()))
    return proc


def wait_entry(proc,deadline):
    vm_seen=False
    while time.monotonic()<deadline:
        if proc.poll() is not None:raise ValueError('PCSX2_STARTUP_PROCESS_EXITED_BEFORE_ENTRY')
        try:
            paused()
            if proc.poll() is not None:raise ValueError('PCSX2_STARTUP_PROCESS_EXITED_BEFORE_ENTRY')
            return
        except (ConnectionRefusedError,socket.timeout):time.sleep(.5)
        except ValueError as exc:
            if str(exc)=='EMULATOR_MUST_BE_PAUSED':vm_seen=True;time.sleep(.5)
            else:raise
    if proc.poll() is not None:raise ValueError('PCSX2_STARTUP_PROCESS_EXITED_BEFORE_ENTRY')
    raise ValueError('ENTRY_BREAKPOINT_OR_PINE_TIMEOUT' if vm_seen else 'PCSX2_STARTUP_OR_INITIALIZATION_TIMEOUT')


def launch(root=ROOT, seconds=900):
    identity()
    plan=launch_plan(root)
    root = absolute_root(root)
    config = root/'session/PCSX2/inis/PCSX2.ini'
    if not config.is_file():
        raise ValueError('ISOLATED_CONFIGURATION_NOT_PREPARED')
    # No shell, no model output, and a finite run. This command is for the human
    # who can operate the debugger; autoloop never launches retail unattended.
    proc=start_owned(root,plan,identity())
    try:
        proc.wait(timeout=seconds)
    except subprocess.TimeoutExpired:
        proc.terminate()
        proc.wait(timeout=10)
    except KeyboardInterrupt:
        proc.terminate()
        proc.wait(timeout=10)


def capture_entry(root=ROOT, seconds=70):
    """CLI entry breakpoint + PINE only. Never steps retail or controls a GUI."""
    meta = identity()
    requested_root=root
    root = absolute_root(root)
    point = root/'raw/point_00.json'
    if point.exists():
        old = json.loads(point.read_text())
        original = r.child(root/'raw', old['savestate'])
        if old['sha256'] != r.hash_file(original) or decode(original)[0]['pc'] != '0x00100008':
            raise ValueError('EXISTING_ENTRY_CAPTURE_INVALID')
        return {'snapshot_A': str(point), 'original_sha256': old['sha256'], 'reused': True}
    # A different PINE owner must never be mistaken for our isolated process.
    try:
        with socket.create_connection(('127.0.0.1',28021),timeout=.5):
            raise ValueError('PINE_PORT_ALREADY_OWNED_NO_ATTACH')
    except (ConnectionRefusedError, socket.timeout): pass
    if not (root/'session/PCSX2/inis/PCSX2.ini').exists():
        raise ValueError('ISOLATED_CONFIGURATION_NOT_PREPARED')
    startup = None
    if sys.platform == 'win32':
        startup = subprocess.STARTUPINFO()
        startup.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        startup.wShowWindow = 0  # background entry capture, no GUI interaction
    proc=start_owned(root,launch_plan(requested_root),meta,stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL,startupinfo=startup)
    deadline = time.monotonic()+seconds
    try:
        wait_entry(proc,deadline)
        record(root)
        actual=json.loads(point.read_text())
        regs,ram=decode(root/'raw'/actual['savestate'])
        write_new(root/'closed_automatic_session.json',{'created_process_pid':proc.pid,'snapshot_A_sha256':actual['sha256'],
                          'scope':'Only A captured; process ends on return; do not merge another boot into this series.'})
        return dict(meta,snapshot_A=str(point),original_sha256=actual['sha256'],
                            registers=regs,ram_bytes=len(ram),created_process_pid=proc.pid,
                            snapshot_B='ABSENT',trace='ABSENT',scope='Real retail A only; no equivalence claim')
    finally:
        if proc.poll() is None:
            proc.terminate()
            proc.wait(timeout=10)


GUIDED=ROOT/'guided_001'


def prepare_guided(root=GUIDED):
    """Fork ONLY known isolated configuration/BIOS. Original A stays separate."""
    identity()
    root=absolute_root(root)
    config=root/'session/PCSX2/inis/PCSX2.ini'
    if config.exists():return root
    source=ROOT/'session/PCSX2'
    config.parent.mkdir(parents=True,exist_ok=True)
    shutil.copytree(source/'bios',root/'session/PCSX2/bios')
    value=configparser.ConfigParser(interpolation=None);value.optionxform=str
    value.read(source/'inis/PCSX2.ini',encoding='utf-8')
    value['Folders']['Bios']=str((root/'session/PCSX2/bios').resolve())
    with config.open('x',encoding='utf-8') as f:value.write(f)
    return root


def confirmation(seconds):
    answers=queue.Queue()
    thread=threading.Thread(target=lambda:answers.put(sys.stdin.readline()),daemon=True);thread.start()
    try:
        answer=answers.get(timeout=seconds)
    except queue.Empty:raise ValueError('HUMAN_CONFIRMATION_TIMEOUT') from None
    if answer!='\n':raise ValueError('CONFIRMATION_REQUIRES_ENTER_ONLY')


def pause_edge(text):
    """A log edge is a trigger only, never proof of a correct EE instruction."""
    events=[line for line in text.splitlines() if '(VMManager) Resuming...' in line or '(VMManager) Pausing...' in line]
    if (len(events)>2 or (events and '(VMManager) Resuming...' not in events[0])
            or (len(events)==2 and '(VMManager) Pausing...' not in events[1])):
        raise ValueError('AMBIGUOUS_VM_TRANSITIONS_OR_EXTRA_STEP')
    return len(events)==2 and '(VMManager) Pausing...' in events[1]


def wait_step(log, offset, deadline, proc):
    while time.monotonic()<deadline:
        if proc.poll() is not None:raise ValueError('OWNED_PCSX2_EXITED')
        if log.stat().st_size<offset:raise ValueError('VM_LOG_TRUNCATED')
        with log.open('rb') as f:
            f.seek(offset);data=f.read()
        if pause_edge(data.decode('utf-8',errors='replace')):
            paused()
            return data
        time.sleep(.2)
    raise ValueError('NO_COMPLETED_VM_STEP_OBSERVED_TIMEOUT')


def guided(root=GUIDED,seconds=900,watch=False):
    """One human command; automatic A/export, bounded explicit F11 confirmations.

    No blind clicks or writes. Every saved PC is independently decoded and ELF
    bytes checked. A from a terminated earlier boot is NEVER reused for this B.
    """
    requested_root=root
    root=absolute_root(root)
    if (root/'launch.json').exists() or any((root/'raw').glob('*')):raise ValueError('GUIDED_PARTIAL_OR_COMPLETE_CAPTURE_PRESERVED_USE_NEW_ROOT')
    root=prepare_guided(root)
    try:
        with socket.create_connection(('127.0.0.1',28021),timeout=.5):raise ValueError('PINE_PORT_ALREADY_OWNED_NO_ATTACH')
    except (ConnectionRefusedError,socket.timeout):pass
    session=uuid.uuid4().hex
    config_sha256=r.hash_file(root/'session/PCSX2/inis/PCSX2.ini')
    proc=start_owned(root,launch_plan(requested_root),dict(identity(),session=session,
              configuration_before_boot_sha256=config_sha256,serial_as_filename=ELF.name,region='Not independently verified'))
    deadline=time.monotonic()+seconds
    try:
        entry_deadline=min(deadline,time.monotonic()+70)
        wait_entry(proc,entry_deadline)
        record(root,session)
        log=root/'session/PCSX2/logs/emulog.txt'
        offset=log.stat().st_size if watch else None
        for i,address in enumerate(PCS[1:],1):
            if proc.poll() is not None:raise ValueError('OWNED_PCSX2_EXITED')
            if watch:
                print(f'READY: select EE/R5900 debugger, Step Into ONCE. EXPECTED_PC=0x{address:08x}. Keep debugger focused; NO console Enter. Wait for export beep before another step.',flush=True)
                try:
                    edge=wait_step(log,offset,deadline,proc)
                except ValueError as exc:
                    # Preserve actual PC even when the UI action never reached the VM.
                    write_new(root/'transitions'/f'point_{i:02d}_rejected.json',
                              {'reason':str(exc),'timestamp_utc':h.now(),'log_offset':offset,
                               'log_sha256':r.hash_file(log),'EXPECTED_PC':f'0x{address:08x}'})
                    record(root,session)
                    raise
                path=root/'transitions'/f'point_{i:02d}.log'
                path.parent.mkdir(parents=True,exist_ok=True)
                with path.open('xb') as f:f.write(edge)
            else:
                print(f'EE debugger: Step Into ONCE. EXPECTED_PC=0x{address:08x}; then Enter HERE. Point {i}.',flush=True)
                confirmation(max(.1,deadline-time.monotonic()))
            record(root,session)
            if watch:
                with log.open('rb') as f:
                    f.seek(offset);edge_after=f.read()
                if not pause_edge(edge_after.decode('utf-8',errors='replace')):
                    raise ValueError('AMBIGUOUS_VM_TRANSITIONS_DURING_EXPORT')
                offset+=len(edge_after)
                if sys.platform=='win32':
                    import winsound
                    winsound.MessageBeep()
        out=normalize(root)
        print(json.dumps({'status':'RETAIL_CAPTURE_AVAILABLE','normalized':str(out)}),flush=True)
    finally:
        if proc.poll() is None:proc.terminate();proc.wait(timeout=10)


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('action', choices=('launch', 'record', 'normalize', 'capture-entry','guided','guided-watch','prepare-guided'))
    p.add_argument('--root', type=Path)
    a = p.parse_args()
    try:
        root=a.root or (GUIDED if a.action in ('guided','guided-watch','prepare-guided') else ROOT)
        if a.action == 'launch': launch(root)
        elif a.action == 'record': record(root)
        elif a.action == 'capture-entry': print(json.dumps(capture_entry(root)))
        elif a.action=='guided':guided(root)
        elif a.action=='guided-watch':guided(root,watch=True)
        elif a.action=='prepare-guided':print(str(prepare_guided(root)))
        else: print(str(normalize(root)))
        return 0
    except (OSError, ValueError, KeyError, struct.error, zipfile.BadZipFile, RuntimeError) as exc:
        # Controlled diagnostic types; never raw CLI stderr or credentials.
        print(json.dumps({'status': 'CAPTURE_REJECTED', 'error_type': type(exc).__name__,
                          'code': str(exc) if isinstance(exc, ValueError) else 'CAPTURE_IO_OR_ARCHIVE_FAILURE'}))
        return 1


if __name__ == '__main__': sys.exit(main())
