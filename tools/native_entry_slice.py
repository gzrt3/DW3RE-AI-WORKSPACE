"""Execute a declared slice of original translations through the first syscall wrapper.

No retail state is imported and no missing function is stubbed. The slice is a
fast host diagnostic while the complete corpus builds, not a gameplay target.
"""
import argparse
import json
import os
from pathlib import Path
import re
import subprocess

import host_snapshot as hs
import pcsx2_capture as pc


SOURCES = {
    0x100008: 'entry_0x100008',
    0x100018: 'entry_00100018_0x100018',
    0x1ad6e8: 'FUN_001ad6e8_0x1ad6e8',
    0x1a5438: 'FUN_001a5438_0x1a5438',
    0x1ad4c0: 'FUN_001ad4c0_0x1ad4c0',
    0x1a4820: 'FUN_001a4820_0x1a4820',
    0x1acd20: 'FUN_001acd20_0x1acd20',
    0x1ad5d8: 'FUN_001ad5d8_0x1ad5d8',
    0x1ad6d8: 'FUN_001ad6d8_0x1ad6d8',
    0x1ad590: 'FUN_001ad590_0x1ad590',
    0x1adbb0: 'FUN_001adbb0_0x1adbb0',
    0x1a55f8: 'FUN_001a55f8_0x1a55f8',
    0x1ad790: 'FUN_001ad790_0x1ad790',
    0x1ad7f8: 'FUN_001ad7f8_0x1ad7f8',
    0x1966a0: 'FUN_001966a0_0x1966a0',
    0x1bffe0: 'FUN_001bffe0_0x1bffe0',
    0x17fea0: 'FUN_0017fea0_0x17fea0',
    0x23a770: 'FUN_0023a770_0x23a770',
    0x239928: 'FUN_00239928_0x239928',
    0x239c20: 'FUN_00239c20_0x239c20',
    0x23a7f0: 'FUN_0023a7f0_0x23a7f0',
    0x1a4840: 'FUN_001a4840_0x1a4840',
    0x1a4f20: 'FUN_001a4f20_0x1a4f20',
    0x23c3f8: 'FUN_0023c3f8_0x23c3f8',
    0x2399c8: 'FUN_002399c8_0x2399c8',
    0x239bbc: 'entry_00239bbc_0x239bbc',
    0x239bf0: 'entry_00239bf0_0x239bf0',
    0x239980: 'FUN_00239980_0x239980',
    0x238b00: 'FUN_00238b00_0x238b00',
    0x238df8: 'FUN_00238df8_0x238df8',
    0x238bb0: 'entry_00238bb0_0x238bb0',
}


def command(args, log, timeout):
    # Keep diagnostics even when a process times out; never buffer an unbounded
    # runtime log in the agent's memory.
    with log.open('xb') as stream:
        process = subprocess.Popen(args, stdout=stream, stderr=subprocess.STDOUT,
            creationflags=getattr(subprocess, 'CREATE_NO_WINDOW', 0))
        try:
            code = process.wait(timeout=timeout)
        except BaseException as error:
            tree_cleanup = None
            # Stop owned descendants while their parent still exists. Killing
            # cmake first can orphan MSBuild/Tracker/cl and leave active writers.
            if os.name == 'nt' and process.poll() is None:
                try:
                    cleanup = subprocess.run(
                        ['taskkill', '/PID', str(process.pid), '/T', '/F'],
                        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL,
                        timeout=10, creationflags=subprocess.CREATE_NO_WINDOW)
                    tree_cleanup = cleanup.returncode
                except (OSError, subprocess.TimeoutExpired):
                    tree_cleanup = 'FAILED'
            if process.poll() is None:
                process.kill()
            process.wait(timeout=10)
            pc.write_new(log.with_suffix('.interrupted.json'), {
                'status':'TIMEOUT' if isinstance(error,subprocess.TimeoutExpired) else 'INTERRUPTED',
                'command':args,'timeout_seconds':timeout,'log':str(log),
                'stop_snapshot_available':False,'game_parity':'NOT_ASSESSED',
                'owned_parent_pid':process.pid,'tree_cleanup_result':tree_cleanup})
            raise
    if code:
        raise RuntimeError(f'Command failed ({code}): {log.name}')


def run(output, continuations=False, scheduler=False):
    output = Path(output).resolve()
    pc.identity()
    hs.validate_host_initialization()
    output.mkdir(parents=True, exist_ok=False)
    src = output/'source'
    src.mkdir()
    source_paths = [hs.h.ROOT/'src/recomp'/f'{name}.cpp' for name in SOURCES.values()]
    catalog_text = (hs.h.ROOT/'src/dispatcher.cpp').read_text()
    for address, name in SOURCES.items():
        if f'g_dispatcher[0x{address:x}] = {name};' not in catalog_text:
            raise ValueError('SLICE_NOT_IN_CURRENT_CATALOG')
    cpp = hs.CPP
    declarations = '\n'.join(f'void {name}(uint8_t*, R5900Context*, PS2Runtime*);' for name in SOURCES.values())
    cpp = cpp.replace('struct CaptureDone {};', declarations+'\nstruct CaptureDone {};')
    cpp = cpp.replace('const uint32_t expected=points<11 ? 0x100008u+points*4u : 0x100018u;', '')
    cpp = cpp.replace('if (points>11 || ctx.pc!=expected) throw std::runtime_error("Unexpected observation PC/order");', '')
    cpp = cpp.replace('if(points==0 || points==11)', 'if(true)')
    cpp = cpp.replace('if(points==12)throw CaptureDone{};', '')
    register = '\n'.join(f'g_ps2RecompiledFunctionTable[0x{address:x}u/4]={name};' for address, name in SOURCES.items())
    cpp = cpp.replace('g_ps2RecompiledFunctionTable[ctx.pc/4]=entry_0x100008;', register)
    if continuations:
        source_paths.append(hs.h.ROOT/'src/boot_continuations.cpp')
        source_paths.append(hs.h.ROOT/'src/boot_syscall_handlers.cpp')
        source_paths.append(hs.h.ROOT/'src/boot_thread_syscalls.cpp')
        cpp = '#include "fate/boot_continuations.hpp"\n'+cpp
        cpp = cpp.replace(register, register+'\nfate::recomp::register_boot_continuations(*runtime);')
    original = '''try {entry_0x100008(ram,&ctx,runtime.get());}
        catch(const CaptureDone&) {return points==12?0:2;}
        throw std::runtime_error("Entry returned without bounded capture stop");'''
    replacement = '''const char* reason="DISPATCH_LIMIT";
        try {
            for(unsigned count=0;count<2000000;count++) {
                if(ctx.pc==0) {reason="GUEST_PC_ZERO";break;}
                if(!runtime->hasFunction(ctx.pc)) {reason="UNMAPPED_SLICE_PC";break;}
                auto fn=runtime->lookupFunction(ctx.pc);
                fn(ram,&ctx,runtime.get());
                if(runtime->isStopRequested()) {reason="RUNTIME_STOP";break;}
            }
        } catch(const std::exception&) {reason="RUNTIME_EXCEPTION";}
        observe(ram,ctx);
        std::ofstream result(output/"stop.json");
        result<<"{\\"status\\":\\""<<reason<<"\\",\\"pc\\":\\""<<hex(ctx.pc,8)<<"\\"}";
        if(!result)throw std::runtime_error("Stop evidence write failed");
        return 0;'''
    if original not in cpp:
        raise ValueError('OBSERVER_TEMPLATE_CHANGED')
    cpp = cpp.replace(original, replacement)
    # Flush stage/dispatch markers so a killed diagnostic still locates its
    # last completed operation. Historical generated captures stay immutable.
    cpp = '#include <iostream>\n'+cpp
    cpp = cpp.replace('try {\n        if(argc!=3)', 'std::cerr << std::unitbuf;\n    try {\n        std::cerr << "[STAGE] arguments\\n";\n        if(argc!=3)')
    for marker, statement in (
        ('construct', 'auto runtime=std::make_unique<PS2Runtime>();'),
        ('memory_and_sync', 'if(!runtime->memory().initialize'),
        ('elf_read', 'std::ifstream elf('),
        ('elf_load', 'const auto image=fate::elf::Image::parse(bytes);'),
        ('scheduler_reset', 'ctx.pc=image.entry_point();'),
        ('registration', 'g_ps2RecompiledFunctionTable[0x100008u/4]'),
        ('dispatch', 'const fate::GuestFloatEnvironment guest_float_environment;'),
        ('snapshot', 'observe(ram,ctx);'),
    ):
        cpp = cpp.replace(statement, f'std::cerr << "[STAGE] {marker}\\n";\n        '+statement, 1)
    cpp = cpp.replace('auto fn=runtime->lookupFunction(ctx.pc);',
        'if(count<100)std::cerr << "[DISPATCH] " << count << " " << hex(ctx.pc,8) << "\\n";\n                auto fn=runtime->lookupFunction(ctx.pc);')
    cpp = cpp.replace('} catch(const std::exception&) {return 1;}',
        '} catch(const std::exception& error) {std::cerr << "[ERROR] " << error.what() << "\\n";return 1;}')
    if scheduler:
        cpp = '#include <thread>\n#include <atomic>\n'+cpp
        begin = cpp.index('        const char* reason="DISPATCH_LIMIT";')
        end = cpp.index('        std::cerr << "[STAGE] snapshot', begin)
        cpp = cpp[:begin]+'''        const char* reason="SCHEDULER_STOP";
        runtime->setMissingFunctionPolicy(PS2Runtime::MissingFunctionPolicy::Stop);
        std::atomic<bool> timed_out{false};
        std::jthread watchdog([&](std::stop_token token) {
            for(unsigned count=0;count<200 && !token.stop_requested();++count)
                std::this_thread::sleep_for(std::chrono::milliseconds(50));
            if(!token.stop_requested()) {
                timed_out.store(true);
                std::cerr << "[WATCHDOG] execution budget exhausted\\n";
                runtime->requestStop();
            }
        });
        try {runtime->eeScheduler().run();}
        catch(const std::exception& error) {
            reason="RUNTIME_EXCEPTION";
            std::cerr << "[ERROR] " << error.what() << "\\n";
        }
        watchdog.request_stop();watchdog.join();
        if(timed_out.load())reason="EXECUTION_TIMEOUT";
        if(ctx.pc && !runtime->hasFunction(ctx.pc))reason="UNMAPPED_SLICE_PC";
''' + cpp[end:]
    (src/'main.cpp').write_text(cpp, encoding='utf-8')
    (src/'observer.hpp').write_text('#pragma once\n#include "ps2_runtime.h"\nvoid observe(uint8_t*, const R5900Context&);\n')
    cmake = hs.cmake_source()
    all_sources = ' '.join('"'+p.as_posix()+'"' for p in source_paths)
    cmake = cmake.replace('main.cpp entry.cpp', 'main.cpp '+all_sources)
    cmake = cmake.replace('set_source_files_properties(entry.cpp PROPERTIES COMPILE_OPTIONS "/wd4127")',
        'set_source_files_properties('+all_sources+' PROPERTIES COMPILE_OPTIONS "/wd4100;/wd4102;/wd4127;/wd4310;/wd4702")')
    if continuations:
        cmake += f'''
add_executable(boot_continuations_contract "{hs.h.ROOT.as_posix()}/tests/integration/boot_continuations_contract.cpp" {all_sources})
target_include_directories(boot_continuations_contract SYSTEM PRIVATE ${{observation_includes}})
target_compile_options(boot_continuations_contract PRIVATE /W4 /WX /permissive- /EHsc /utf-8 /external:W0 /wd4324)
fate_link_existing_runtime(boot_continuations_contract)
'''
    (src/'CMakeLists.txt').write_text(cmake, encoding='utf-8')
    pc.write_new(output/'provenance.json', {
        'elf_sha256':pc.r.ELF_SHA256,
        'sources':{str(p):hs.c.sha(p) for p in source_paths},
        'dispatcher_sha256':hs.c.sha(hs.h.ROOT/'src/dispatcher.cpp'),
        'boot_continuations_installed':continuations,
        'execution_driver':'EeScheduler::run' if scheduler else 'manual_dispatch',
        'scope':'Original source subset; same core initialization, VFS/pad excluded. Missing slice PC is not automatically missing in full catalog.',
        'game_parity':'NOT_COMPLETE'})
    command(['cmake','-S',str(src),'-B',str(output/'build'),'-A','x64'],output/'configure.log',90)
    stops = {}
    for config in ('Debug','Release'):
        targets=['host_observation']+(['boot_continuations_contract'] if continuations else [])
        command(['cmake','--build',str(output/'build'),'--target',*targets,'--config',config,'--parallel','2'],output/f'build_{config}.log',180)
        if continuations:
            command([str(output/'build'/config/'boot_continuations_contract.exe')],output/f'contract_{config}.log',30)
        raw=output/f'raw_{config}'
        command([str(output/'build'/config/'host_observation.exe'),str(pc.ELF),str(raw)],output/f'run_{config}.log',60)
        stop=json.loads((raw/'stop.json').read_text())
        addr=int(stop['pc'],16)
        stop['pc_registered_in_full_catalog']=bool(re.search(r'g_dispatcher\[0x0*'+f'{addr:x}'+r'\]',catalog_text,re.IGNORECASE))
        stop['files']={p.name:hs.c.sha(p) for p in raw.iterdir()}
        stops[config]=stop
    pc.write_new(output/'summary.json',stops)
    print(json.dumps(stops,indent=2))


if __name__ == '__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output',type=Path,required=True)
    parser.add_argument('--boot-continuations',action='store_true')
    parser.add_argument('--scheduler',action='store_true')
    args=parser.parse_args()
    run(args.output,args.boot_continuations,args.scheduler)
