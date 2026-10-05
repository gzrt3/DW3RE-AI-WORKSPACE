"""Bounded native-process observation; never a gameplay or parity verifier.

Runs an existing executable without a shell, in a new working directory. Raw
stdout/stderr and input identities are preserved even when launching fails or
the process times out. Only the Popen-owned process is terminated on timeout.
The asset directory is passed through read-only by the current native VFS; this
runner does not sandbox arbitrary executables or prove every asset unchanged.
"""
from __future__ import annotations

import argparse
from datetime import datetime, timezone
import hashlib
import json
import math
import os
from pathlib import Path
import shutil
import subprocess
import sys
import time


ROOT = Path(__file__).resolve().parents[1]
CONFIG_SUFFIXES = {'.ini', '.toml', '.cfg', '.conf', '.config', '.json'}
SOURCE_NAMES = (
    'CMakeLists.txt', 'CMakePresets.json', 'cmake/ExistingRuntime.cmake',
    'src/main.cpp', 'src/elf.cpp', 'src/dispatcher.cpp', 'src/unsupported_hle.cpp',
    'src/audio/spu_bridge.cpp', 'src/sdl_window.cpp', 'src/gs_wrapper.cpp',
    'src/patch_engine.cpp', 'src/recomp/entry_0x100008.cpp',
    'src/recomp/FUN_001ad6e8_0x1ad6e8.cpp',
    'src/boot_continuations.cpp', 'include/fate/boot_continuations.hpp',
    'src/recovered/cdvd_command_001b0308.inc', 'tools/recover_continuation.py',
    'src/recovered/string_tail_0023cb40.inc',
    'src/recovered/cache_tail_001a7014.inc',
    'src/boot_syscall_handlers.cpp',
    'src/boot_thread_syscalls.cpp',
    'src/native_iop_boot.cpp', 'include/fate/native_iop_boot.hpp',
    'include/fate/native_iop_manifest.hpp',
    'src/generated_resume_catalog.cpp', 'include/fate/resume_catalog.hpp',
    'include/fate/verified_return_tail.hpp', 'tools/generate_resume_catalog.py',
    'include/fate/syscall_return_words.hpp',
    'src/vfs/vfs_hook.cpp', 'src/input/pad_bridge.cpp',
    'include/fate/guest_float_environment.hpp', 'include/fate/dispatcher.hpp',
    'tools/PS2Recomp/ps2xRuntime/include/ps2_runtime.h',
    'tools/PS2Recomp/ps2xRuntime/include/runtime/ee_scheduler.h',
    'tools/PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp',
    'tools/PS2Recomp/ps2xRuntime/src/lib/Kernel/Syscalls/System.cpp',
    'tools/PS2Recomp/ps2xIOP/src/emulator/imports/iop_ioman.h',
    'tools/PS2Recomp/ps2xIOP/src/emulator/imports/iop_ioman.cpp',
    'tools/PS2Recomp/ps2xIOP/src/emulator/iop_emulator.cpp',
    'tools/PS2Recomp/ps2xIOP/src/emulator/services/iop_rpc.h',
)


def utc_now():
    return datetime.now(timezone.utc).isoformat()


def hash_file(path):
    digest = hashlib.sha256()
    with Path(path).open('rb') as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b''):
            digest.update(block)
    return digest.hexdigest()


def identity(path):
    """Reject a file changing while its identity is being collected."""
    path = Path(path).resolve(strict=True)
    before = path.stat()
    digest = hash_file(path)
    after = path.stat()
    if (before.st_size, before.st_mtime_ns) != (after.st_size, after.st_mtime_ns):
        raise ValueError(f'input changed while hashing: {path}')
    return {'path': str(path), 'size_bytes': after.st_size, 'sha256': digest}


def write_json(path, value):
    with Path(path).open('x', encoding='utf-8', newline='\n') as stream:
        json.dump(value, stream, indent=2, allow_nan=False)
        stream.write('\n')


def timeout_value(value):
    try:
        result = float(value)
    except (TypeError, ValueError) as error:
        raise argparse.ArgumentTypeError('timeout must be 1..300 seconds') from error
    if not math.isfinite(result) or not 1 <= result <= 300:
        raise argparse.ArgumentTypeError('timeout must be 1..300 seconds')
    return result


def native_command(exe, dump_root, elf):
    return [str(exe), str(dump_root), str(elf)]


def run_process(command, cwd, output, timeout):
    """Capture a real process without pipes, so output cannot fill a pipe buffer."""
    started = utc_now()
    clock = time.monotonic()
    result = {
        'command': list(command), 'cwd': str(cwd), 'started_utc': started,
        'timeout_seconds': timeout, 'status': 'LAUNCH_FAILED', 'pid': None,
        'exit_code': None, 'timed_out': False, 'termination_requested': False,
        'scope': 'Process observation only; no boot, rendering, or parity claim.',
    }
    options = dict(stdin=subprocess.DEVNULL, shell=False, close_fds=True)
    if os.name == 'nt':
        startup = subprocess.STARTUPINFO()
        startup.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        startup.wShowWindow = subprocess.SW_HIDE
        options.update(startupinfo=startup, creationflags=subprocess.CREATE_NO_WINDOW)

    process = None
    # Exclusive raw files retain invalid UTF-8, crashes and partial timeout output.
    with (output/'stdout.bin').open('xb') as stdout, (output/'stderr.bin').open('xb') as stderr:
        try:
            process = subprocess.Popen(command, cwd=cwd, stdout=stdout, stderr=stderr, **options)
            result['pid'] = process.pid
            try:
                result['exit_code'] = process.wait(timeout=timeout)
                result['status'] = 'PROCESS_EXITED' if process.returncode == 0 else 'PROCESS_FAILED'
            except subprocess.TimeoutExpired:
                result.update(status='TIMEOUT', timed_out=True)
            except KeyboardInterrupt:
                result['status'] = 'INTERRUPTED'
            finally:
                if process.poll() is None:
                    result['termination_requested'] = True
                    # On Windows Popen.kill uses its original process handle,
                    # never a name lookup, taskkill, shell or enumerated PID.
                    process.kill()
                    process.wait(timeout=10)
                result['exit_code'] = process.returncode
        except (OSError, subprocess.TimeoutExpired) as error:
            result['status'] = 'LAUNCH_FAILED' if process is None else 'PROCESS_CONTROL_FAILED'
            result['error'] = {'type': type(error).__name__, 'message': str(error)}
            if process is not None:
                result['exit_code'] = process.poll()

    result.update(finished_utc=utc_now(), duration_seconds=time.monotonic()-clock)
    result['logs'] = {name: identity(output/name) for name in ('stdout.bin', 'stderr.bin')}
    return result


def source_identities():
    # These sources are a contemporaneous fingerprint, not proof the EXE was
    # built from them. The EXE hash, build log and build provenance bind that.
    paths = [ROOT/name for name in SOURCE_NAMES]
    paths.append(Path(__file__).resolve())
    return [identity(path) for path in paths if path.is_file()]


def run(exe, dump_root, elf, output, timeout=30, iop_root=None):
    timeout = timeout_value(timeout)
    exe = Path(exe).resolve(strict=True)
    dump_root = Path(dump_root).resolve(strict=True)
    elf = Path(elf).resolve(strict=True)
    output = Path(output).resolve()
    if not exe.is_file() or not elf.is_file() or not dump_root.is_dir():
        raise ValueError('exe and elf must be files; dump-root must be a directory')
    iop_files = []
    if iop_root is not None:
        iop_root = Path(iop_root).resolve(strict=True)
        if not iop_root.is_dir():
            raise ValueError('iop-root must be a directory')
        for path in sorted(iop_root.rglob('*')):
            if path.is_symlink() or path.is_junction():
                raise ValueError('IOP staging rejects links and junctions')
            if path.is_file():
                if path.suffix.lower() not in ('.irx', '.json'):
                    raise ValueError('IOP staging accepts only IRX and provenance JSON')
                iop_files.append((path, identity(path)))
        if sum(item['size_bytes'] for _, item in iop_files) > 64 * 1024 * 1024:
            raise ValueError('IOP staging exceeds 64 MB limit')
    # Never create evidence/logs inside either original inputs or the build's
    # executable directory. resolve also catches existing symlink/junction paths.
    if output.is_relative_to(dump_root) or output.is_relative_to(exe.parent) or output.is_relative_to(elf.parent):
        raise ValueError('output must be outside the executable and original input directories')
    if iop_root is not None and output.is_relative_to(iop_root):
        raise ValueError('output must be outside original IOP inputs')
    output.mkdir(parents=True, exist_ok=False)
    cwd = output/'run'
    cwd.mkdir()
    staged_iop = []
    for path, original in iop_files:
        target = cwd/'data/iop'/path.relative_to(iop_root)
        target.parent.mkdir(parents=True, exist_ok=True)
        with path.open('rb') as source, target.open('xb') as destination:
            shutil.copyfileobj(source, destination)
        copied = identity(target)
        if copied['sha256'] != original['sha256']:
            raise ValueError('IOP module changed during staging')
        staged_iop.append(copied)

    configs = sorted((path for path in exe.parent.iterdir()
                      if path.is_file() and path.suffix.lower() in CONFIG_SUFFIXES), key=lambda p: p.name.lower())
    dlls = sorted((path for path in exe.parent.iterdir()
                   if path.is_file() and path.suffix.lower() == '.dll'), key=lambda p: p.name.lower())
    inputs = [identity(exe), identity(elf)] + [identity(path) for path in dlls + configs]
    original_iop = [item for _, item in iop_files]
    for path in configs:
        # Let relative configuration lookup read an independent copy. The
        # native process can write its own cwd without editing these originals.
        with path.open('rb') as source, (cwd/path.name).open('xb') as target:
            shutil.copyfileobj(source, target)
    config_copies = [identity(cwd/path.name) for path in configs]
    for original, copied in zip(inputs[2+len(dlls):], config_copies):
        if original['sha256'] != copied['sha256']:
            raise ValueError('configuration changed during staging')

    provenance = {
        'schema_version': 1, 'created_utc': utc_now(),
        'command': native_command(exe, dump_root, elf), 'cwd': str(cwd),
        'dump_root': str(dump_root), 'timeout_seconds': timeout,
        'exe': inputs[0], 'elf': inputs[1], 'adjacent_dlls': inputs[2:2+len(dlls)],
        'adjacent_configuration': inputs[2+len(dlls):], 'staged_configuration': config_copies,
        'original_iop': original_iop, 'staged_iop': staged_iop,
        'source_files': source_identities(),
        'source_scope': 'Selected current native/runtime sources; source-to-binary correspondence is not established by this probe.',
        'dependency_scope': 'Adjacent DLL/config hashes only; this is not a loaded-module inventory or system-DLL attestation.',
        'asset_scope': 'ELF hashed before/after; other dump assets are not hashed or copied. Current VFS opens these read-only.',
        'environment_scope': 'Inherited environment; not recorded because it may contain credentials.',
    }
    write_json(output/'launch.json', provenance)
    result = run_process(provenance['command'], cwd, output, timeout)
    # Changes never turn a process exit into a success claim. Preserve initial
    # hashes, including when a file was deleted or became unreadable at runtime.
    post_inputs, changed = [], []
    for original in inputs + original_iop:
        try:
            current = identity(original['path'])
            if current['sha256'] != original['sha256']:
                changed.append(original['path'])
            post_inputs.append(current)
        except (OSError, ValueError) as error:
            changed.append(original['path'])
            post_inputs.append({'path': original['path'], 'error': str(error)})
    result.update(schema_version=1, launch_sha256=hash_file(output/'launch.json'),
                  inputs_after=post_inputs, changed_inputs=changed,
                  input_integrity='CHANGED' if changed else 'MATCH',
                  game_parity='NOT_ASSESSED', boot_verified=False)
    write_json(output/'result.json', result)
    return result


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--exe', required=True, type=Path)
    parser.add_argument('--dump-root', required=True, type=Path)
    parser.add_argument('--elf', required=True, type=Path)
    parser.add_argument('--output', required=True, type=Path)
    parser.add_argument('--timeout', type=timeout_value, default=30)
    parser.add_argument('--iop-root', type=Path, help='Copy IRX/provenance files to isolated run/data/iop')
    args = parser.parse_args(argv)
    try:
        result = run(args.exe, args.dump_root, args.elf, args.output, args.timeout, args.iop_root)
    except (OSError, ValueError, argparse.ArgumentTypeError) as error:
        print(f'PROBE_SETUP_FAILED: {error}', file=sys.stderr)
        return 2
    print(json.dumps({'status': result['status'], 'exit_code': result['exit_code'],
                      'input_integrity': result['input_integrity'],
                      'result': str(args.output.resolve()/'result.json'),
                      'boot_verified': False}))
    return 0 if result['status'] == 'PROCESS_EXITED' and not result['changed_inputs'] else 1


if __name__ == '__main__':
    raise SystemExit(main())
