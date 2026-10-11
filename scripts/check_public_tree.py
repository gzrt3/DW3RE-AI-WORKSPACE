"""Reject private dump and translated guest paths using Git metadata only."""
import json
import subprocess
import sys
from pathlib import Path, PurePosixPath

ROOT = Path(__file__).resolve().parents[1]
RECOVERED_BOUNDARIES = {
    'src/boot_syscall_handlers.cpp', 'src/boot_thread_syscalls.cpp',
    'src/boot_continuations.cpp', 'src/dma_init_continuation.cpp',
    'src/graphics_init_continuation.cpp', 'src/irq_return_continuation.cpp',
    'src/pad_boot_continuation.cpp', 'src/sif_irq_continuations.cpp',
    'src/vif_init_continuation.cpp', 'src/waitsema_continuation.cpp',
    'src/native_iop_boot.cpp', 'include/fate/syscall_return_words.hpp',
    'include/fate/verified_return_tail.hpp',
    'tests/integration/boot_continuations_contract.cpp',
}


def forbidden(name):
    path = PurePosixPath(name.lower())
    return (name.lower() in RECOVERED_BOUNDARIES
            or name.lower().startswith(('src/recomp/', 'src/recovered/', 'recomp_out/'))
            or path.suffix in {'.elf', '.iso', '.bin', '.irx', '.bns', '.gs', '.p2s', '.ps2',
                               '.tm2', '.tim2', '.pss', '.hd', '.bd', '.ppm'}
            or name.lower().endswith(('.gs.zst', '.gs.xz'))
            or any(part in {'private_inputs', 'extracted', 'recomp_out'} or part.startswith('.aider') for part in path.parts))


if __name__ == '__main__':
    files = subprocess.check_output(['git', '-C', str(ROOT), 'ls-files', '-z']).decode('utf-8').split('\0')
    files = [name for name in files if name]
    rejected = [name for name in files if forbidden(name)]
    print(json.dumps({'tracked_files': len(files), 'private_paths': len(rejected),
                      'verdict': 'FAIL' if rejected else 'PASS'}))
    sys.exit(1 if rejected else 0)
