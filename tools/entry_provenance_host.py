"""Bounded observation of original translated entry through its first syscalls.

An isolated diagnostic, not a full scheduler/renderer equivalence claim. Never
seeds host registers or memory from a retail snapshot.
"""
import argparse
from pathlib import Path
import re
import host_snapshot as hs
import pcsx2_capture as pc


def run(work, first_call=False):
    work = Path(work).resolve()
    pc.identity()
    hs.validate_host_initialization()
    work.mkdir(parents=True, exist_ok=False)
    source = hs.h.ROOT/'src/recomp/entry_0x100008.cpp'
    entry = '#include "observer.hpp"\n' + source.read_text()
    landmarks = [0x100008, 0x100064, 0x100068, 0x100080, 0x100084]
    for address in landmarks:
        pattern = r'(// 0x'+format(address,'x')+r':[^\n]*\n\s*ctx->pc = 0x[0-9a-fA-F]+u;)'
        entry, n = re.subn(pattern, r'\1\n    observe(rdram, *ctx);', entry, count=1)
        if n != 1:
            raise ValueError('OBSERVATION_SITE_CHANGED')
    if first_call:
        marker = 'ctx->pc = 0x1AD6E8u;'
        if entry.count(marker) != 1:
            raise ValueError('FIRST_CALL_OBSERVATION_SITE_CHANGED')
        entry = entry.replace(marker, marker + '\n    observe(rdram, *ctx);')
        landmarks.append(0x1ad6e8)
    count = len(landmarks)
    cpp = hs.CPP.replace(
        'const uint32_t expected=points<11 ? 0x100008u+points*4u : 0x100018u;',
        'const uint32_t pcs[]{'+','.join(hex(x) for x in landmarks)+'};\n'
        f'    if(points>={count})throw std::runtime_error("Observation overflow");\n'
        '    const uint32_t expected=pcs[points];')
    cpp = cpp.replace('points>11', f'points>={count}').replace('if(points==0 || points==11)', 'if(true)')
    cpp = cpp.replace('(points==0?"memory_A.bin":"memory_B.bin")', '("memory_"+std::to_string(points)+".bin")')
    cpp = cpp.replace('points==12', f'points=={count}')
    cpp = cpp.replace('try {entry_0x100008(ram,&ctx,runtime.get());}',
        'try { for(unsigned resumes=0;resumes<2000000;resumes++) {\n'
        '            entry_0x100008(ram,&ctx,runtime.get());\n'
        '            if(ctx.pc!=0x100018u)throw std::runtime_error("Unexpected yield");\n'
        '        } }')
    src = work/'source';src.mkdir()
    (src/'entry.cpp').write_text(entry)
    (src/'main.cpp').write_text(cpp)
    (src/'observer.hpp').write_text('#pragma once\n#include "ps2_runtime.h"\nvoid observe(uint8_t*, const R5900Context&);\n')
    (src/'CMakeLists.txt').write_text(hs.cmake_source())
    pc.write_new(work/'provenance.json', dict(entry_sha256=hs.c.sha(source),
        elf_sha256=pc.r.ELF_SHA256,
        host_main_sha256=hs.c.sha(hs.h.ROOT/'src/main.cpp'),
        landmarks=[hex(x) for x in landmarks],
        initialization='Same runtime construction, ELF load, SP/GP and scheduler reset as prior host observer; no retail state imported',
        scope='Diagnostic repeated calls after original checkpoint returns; stops before first non-entry game call',
        sources={p.name:hs.c.sha(p) for p in src.iterdir()},
        trace_header_sha256=hs.c.sha(hs.h.ROOT/'include/fate/trace_state.hpp')))
    hs.command(['cmake','-S',str(src),'-B',str(work/'build'),'-A','x64'],work/'configure.log',90)
    for config in ('Debug','Release'):
        hs.command(['cmake','--build',str(work/'build'),'--config',config,'--parallel','4'],work/f'build_{config}.log',180)
        hs.command([str(work/'build'/config/'fate_trace_contract.exe')],work/f'trace_contract_{config}.log',15)
        hs.command([str(work/'build'/config/'host_observation.exe'),str(pc.ELF),str(work/f'raw_{config}')],work/f'run_{config}.log',60)
    pc.write_new(work/'result.json', dict(status='CAPTURED',
        files={p.relative_to(work).as_posix():hs.c.sha(p) for config in ('Debug','Release') for p in (work/f'raw_{config}').iterdir()},
        BOOT_CHAIN_STATUS='STOPPED_NOT_CLOSED',INTERACTIVE_MAIN_LOOP='NOT_DEMONSTRATED'))


if __name__ == '__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('work',type=Path)
    parser.add_argument('--first-call',action='store_true',help='Observe the first call target, then stop before dispatch.')
    args=parser.parse_args()
    run(args.work, first_call=args.first_call)
