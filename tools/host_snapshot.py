"""Isolated observation build of the actual translated entry, with owning runtime.

Never changes game sources. Stops by observer exception at B, before scheduler
checkpoint. This is bounded HOST diagnostic evidence, not a gameplay executable.
"""
import json
from pathlib import Path
import re
import shutil
import subprocess

import hybrid_router as h
import hybrid_campaign as c
import pcsx2_capture as pc
import retail_compare as r


def instrument(text):
    result = '#include "observer.hpp"\n'+text
    for addr in range(0x100008,0x100030,4):
        pattern = r'(// 0x'+format(addr,'x')+r':[^\n]*\n\s*ctx->pc = 0x[0-9a-fA-F]+u;)'
        result,count = re.subn(pattern,r'\1\n    observe(rdram, *ctx);',result,count=1)
        if count != 1: raise ValueError('ENTRY_OBSERVER_SHAPE_CHANGED')
    marker='// 0x100030:'
    if result.count(marker)!=1 or result.count('if (runtime->eeCheckpointDue())')!=1:
        raise ValueError('ENTRY_DELAY_OR_CHECKPOINT_CHANGED')
    result=result.replace(marker,'observe(rdram, *ctx);\n        '+marker,1)
    result=result.replace('if (runtime->eeCheckpointDue())','observe(rdram, *ctx);\n            if (runtime->eeCheckpointDue())',1)
    # If a changed condition takes the fallthrough, fail BEFORE instruction 12.
    result=result.replace('ctx->pc = 0x100034u;','ctx->pc = 0x100034u;\n    observe(rdram, *ctx);',1)
    return result


CPP = r'''
#include "observer.hpp"
#include "fate/elf.hpp"
#include "fate/trace_state.hpp"
#include "fate/guest_float_environment.hpp"
#include "runtime/ee_scheduler.h"
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <memory>
#include <sstream>
#include <vector>
// Diagnostic catalog: only the observed entry is registered; all other PCs are
// unresolved, never stubbed. No dispatcher or syscall is reached before stop.
void entry_0x100008(uint8_t*, R5900Context*, PS2Runtime*);
extern const uint32_t g_ps2RecompiledFunctionTableBase = 0;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = PS2_RAM_SIZE;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = PS2_RAM_SIZE/4;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[PS2_RAM_SIZE/4]{};
struct CaptureDone {};
static std::filesystem::path output;
static unsigned points=0;
static std::string hex(uint64_t value, unsigned width) {
    std::ostringstream s; s << "0x" << std::hex << std::setfill('0') << std::setw(static_cast<int>(width)) << value; return s.str();
}
void observe(uint8_t* ram, const R5900Context& ctx) {
    const uint32_t expected=points<11 ? 0x100008u+points*4u : 0x100018u;
    if (points>11 || ctx.pc!=expected) throw std::runtime_error("Unexpected observation PC/order");
    std::ofstream f(output/("point_"+std::to_string(points)+".json"));
    f << "{\"pc\":\"" << hex(ctx.pc,8) << "\",\"gpr\":[";
    for(unsigned i=0;i<32;i++) { uint64_t words[2]; std::memcpy(words,&ctx.r[i],sizeof(words));
        if(i)f<<',';
        f<<"{\"low64\":\""<<hex(words[0],16)<<"\",\"high64\":\""<<hex(words[1],16)<<"\"}";
    }
    f << "]";
    const char* names[]={"HI","LO","HI1","LO1","SA","Status","Cause","EPC"};
    const uint64_t values[]={ctx.hi,ctx.lo,ctx.hi1,ctx.lo1,ctx.sa,ctx.cop0_status,ctx.cop0_cause,ctx.cop0_epc};
    for(unsigned i=0;i<8;i++)f<<",\""<<names[i]<<"\":\""<<hex(values[i],i<4?16:8)<<"\"";
    fate::trace::write_extended_state(f, ctx);
    f<<",\"branch\":null,\"delay_slot\":"<<(ctx.in_delay_slot?"true":"false")
     <<",\"absent\":{\"branch\":\"HOST branch_pc is a source address, not comparable PCSX2 pending-branch state\"},\"native_branch_pc\":\""<<hex(ctx.branch_pc,8)<<"\"}";
    if(!f)throw std::runtime_error("Register evidence write failed");
    f.close();
    if(points==0 || points==11) {
        std::ofstream memory(output/(points==0?"memory_A.bin":"memory_B.bin"),std::ios::binary);
        memory.write(reinterpret_cast<const char*>(ram),PS2_RAM_SIZE);
        if(!memory)throw std::runtime_error("RAM evidence write failed");
    }
    points++;
    if(points==12)throw CaptureDone{};
}
int main(int argc,char** argv) {
    try {
        if(argc!=3)throw std::runtime_error("ELF and exclusive output directory required");
        output=argv[2]; if(!std::filesystem::create_directory(output))throw std::runtime_error("Output exists");
        auto runtime=std::make_unique<PS2Runtime>();
        if(!runtime->memory().initialize(PS2_RAM_SIZE)||!runtime->syncCoreSubsystems())throw std::runtime_error("Runtime initialization failed");
        auto* ram=runtime->memory().getRDRAM();
        std::ifstream elf(argv[1],std::ios::binary|std::ios::ate);
        if(!elf)throw std::runtime_error("ELF missing");
        const auto length=elf.tellg(); if(length<=0)throw std::runtime_error("ELF empty");
        std::vector<std::byte> bytes(static_cast<size_t>(length));elf.seekg(0);
        elf.read(reinterpret_cast<char*>(bytes.data()),length);if(!elf)throw std::runtime_error("ELF read failed");
        const auto image=fate::elf::Image::parse(bytes);
        image.load_segments(bytes,{reinterpret_cast<std::byte*>(ram),PS2_RAM_SIZE});
        auto& ctx=runtime->cpu();
        const uint64_t sp[2]{0x80000,0},gp[2]{0,0};
        std::memcpy(&ctx.r[29],sp,sizeof(sp));std::memcpy(&ctx.r[28],gp,sizeof(gp));
        ctx.pc=image.entry_point();runtime->eeScheduler().reset(ram,ctx);
        g_ps2RecompiledFunctionTable[ctx.pc/4]=entry_0x100008;
        const fate::GuestFloatEnvironment guest_float_environment;
        try {entry_0x100008(ram,&ctx,runtime.get());}
        catch(const CaptureDone&) {return points==12?0:2;}
        throw std::runtime_error("Entry returned without bounded capture stop");
    } catch(const std::exception&) {return 1;}
}
'''


def command(args, log, timeout):
    proc=subprocess.run(args,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,timeout=timeout,
                        creationflags=getattr(subprocess,'CREATE_NO_WINDOW',0))
    with log.open('x',encoding='utf-8') as f:f.write(h.clean(proc.stdout.decode('utf-8',errors='replace')))
    if proc.returncode:raise h.Failure('FAILED','HOST_DIAGNOSTIC_COMMAND_FAILED_'+log.name)


def normalize(raw,out,metadata):
    points=[c.strict_json((raw/f'point_{i}.json').read_text()) for i in range(12)]
    for i,p in enumerate(points):
        if p['pc']!=f'0x{0x100008+i*4 if i<11 else 0x100018:08x}':raise ValueError('HOST_TRACE_ORDER')
        r.registers(p)
    out.mkdir(parents=True,exist_ok=True)
    memory=[]
    for label,index,hit in [('A',0,1),('B',11,2)]:
        pc.write_new(out/f'snapshot_{label}/registers.json',dict(points[index],hit=hit))
        target=out/f'snapshot_{label}/memory_full_ee.bin'
        with target.open('xb') as f:f.write((raw/f'memory_{label}.bin').read_bytes())
        if target.stat().st_size!=0x2000000:raise ValueError('HOST_RAM_LENGTH')
        memory.append({'snapshot':label,'base':0,'length':0x2000000,'file':target.relative_to(out).as_posix()})
    import struct
    ram=(raw/'memory_A.bin').read_bytes()
    trace=[]
    for i in range(11):
        address=0x100008+i*4
        trace.append({'pc':f'0x{address:08x}','opcode':f'0x{struct.unpack_from("<I",ram,address)[0]:08x}',
                      'before':points[i],'after':points[i+1],'branch_taken':True if i==9 else None,'delay_slot':i==10,
                      'scope':'Observed instrumented original translation; branch after is before delay instruction, not an extra executed instruction.'})
    with (out/'trace.jsonl').open('x') as f:f.write('\n'.join(json.dumps(x) for x in trace)+'\n')
    files={p.relative_to(out).as_posix():c.sha(p) for p in out.rglob('*') if p.is_file()}
    originals=[{'path':str(p.resolve()),'sha256':c.sha(p)} for p in raw.iterdir() if p.is_file()]
    pc.write_new(out/'manifest.json',dict(metadata,origin='HOST',elf_sha256=r.ELF_SHA256,files=files,memory=memory,originals=originals))
    r.load_capture(out,'HOST')


def cmake_source():
    root=h.ROOT.as_posix(); runtime=root+'/tools/PS2Recomp'
    return f'''cmake_minimum_required(VERSION 3.24)
project(host_observation LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
add_executable(host_observation main.cpp entry.cpp "{root}/src/elf.cpp" "{root}/src/unsupported_hle.cpp")
target_include_directories(host_observation PRIVATE "{root}/include")
target_include_directories(host_observation SYSTEM PRIVATE "{root}/src/recomp" "{runtime}/ps2xRuntime/include" "{runtime}/ps2xIOP/include" "{runtime}/ps2xRuntime/src/lib/Kernel")
target_compile_options(host_observation PRIVATE /W4 /WX /permissive- /EHsc /utf-8 /external:W0 /wd4324)
# Constant register-index macros in the generated translation produce C4127;
# match the existing corpus exception ONLY on that original translated source.
set_source_files_properties(entry.cpp PROPERTIES COMPILE_OPTIONS "/wd4127")
set(CMAKE_CURRENT_SOURCE_DIR "{root}")
include("{root}/cmake/ExistingRuntime.cmake")
fate_link_existing_runtime(host_observation)
add_executable(fate_trace_contract "{root}/tests/integration/trace_state_contract.cpp")
add_library(fate_main_compile OBJECT "{root}/src/main.cpp")
get_target_property(observation_includes host_observation INCLUDE_DIRECTORIES)
foreach(target fate_trace_contract fate_main_compile)
    target_include_directories(${{target}} SYSTEM PRIVATE ${{observation_includes}})
    target_compile_options(${{target}} PRIVATE /W4 /WX /permissive- /EHsc /utf-8 /external:W0 /wd4324)
endforeach()
'''


def validate_host_initialization():
    main=(h.ROOT/'src/main.cpp').read_text()
    for required in ('PS2Runtime','INITIAL_SP = 0x00080000','initial_gp_words[2]{0u, 0u}','runtime->eeScheduler().reset(rdram, ctx)'):
        if required not in main:raise ValueError('CURRENT_HOST_INITIALIZATION_CHANGED')


def build_and_capture(work,destination):
    destination=Path(destination)
    if (destination/'manifest.json').exists():
        r.load_capture(destination,'HOST');return {'reused':True,'capture':str(destination),'sha256':c.sha(destination/'manifest.json')}
    pc.identity()
    validate_host_initialization()
    source=h.ROOT/'src/recomp/entry_0x100008.cpp'
    generated=work/'build_source';generated.mkdir()
    (generated/'entry.cpp').write_text(instrument(source.read_text()),encoding='utf-8')
    (generated/'observer.hpp').write_text('#pragma once\n#include "ps2_runtime.h"\nvoid observe(uint8_t*, const R5900Context&);\n')
    (generated/'main.cpp').write_text(CPP,encoding='utf-8')
    (generated/'CMakeLists.txt').write_text(cmake_source())
    build=work/'build'
    command(['cmake','-S',str(generated),'-B',str(build),'-A','x64'],work/'configure.log',60)
    normalized=[]
    for config in ('Debug','Release'):
        command(['cmake','--build',str(build),'--config',config,'--parallel','2'],work/f'build_{config}.log',120)
        command([str(build/config/'fate_trace_contract.exe')],work/f'trace_contract_{config}.log',15)
        raw=work/('raw_'+config)
        command([str(build/config/'host_observation.exe'),str(pc.ELF),str(raw)],work/f'run_{config}.log',30)
        out=work/('normalized_'+config)
        normalize(raw,out,{'host_configuration':config,'entry_source_sha256':c.sha(source),'main_source_sha256':c.sha(h.ROOT/'src/main.cpp'),
                  'runtime_constructed':True,'observer_stop':'SECOND_PC_00100018_BEFORE_CHECKPOINT',
                  'scope':'Actual translated instructions and owning PS2Runtime initialization; scoped diagnostic excludes VFS/pad/complete dispatch catalog.'})
        normalized.append(out)
    comparison=r.compare(r.load_capture(normalized[0],'HOST'),r.load_capture(normalized[1],'HOST'))
    if comparison['status']!='NO_DIVERGENCE_IN_OBSERVED_FIELDS':raise ValueError('HOST_DEBUG_RELEASE_OBSERVATION_DIVERGED')
    if destination.exists() and any(destination.iterdir()):raise ValueError('HOST_DESTINATION_NOT_EMPTY')
    if destination.exists():destination.rmdir()  # verified empty directory only
    shutil.copytree(normalized[0],destination)
    return {'capture':str(destination),'manifest_sha256':c.sha(destination/'manifest.json'),'configurations':['Debug','Release'],
            'debug_release_comparison':comparison,'instructions':11,'ram_bytes_per_snapshot':0x2000000,
            'scope':'HOST diagnostic only; retail comparison and full runtime equivalence still pending'}
