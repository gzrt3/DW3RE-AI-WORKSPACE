#include "fate/waitsema_continuation.hpp"
#include "fate/elf.hpp"
#include "ps2_runtime.h"
#include "runtime/ee_scheduler.h"
#include <array>
#include <bit>
#include <cstring>
#include <fstream>
#include <iostream>
#include <iterator>
#include <memory>
#include <stdexcept>
#include <vector>

extern const uint32_t g_ps2RecompiledFunctionTableBase=0;
extern const uint32_t g_ps2RecompiledFunctionTableEnd=PS2_RAM_SIZE;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount=PS2_RAM_SIZE/4;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[PS2_RAM_SIZE/4]{};

namespace {
constexpr uint32_t Stack=0x70000u,Object=0x74000u,Table=0x78000u,Return=0x12345678u;
void require(bool ok,const char* text) {if(!ok) throw std::runtime_error(text);}
uint64_t reg(const R5900Context& c,unsigned n,unsigned half=0) {
    uint64_t value[2];std::memcpy(value,&c.r[n],16);return value[half];
}
void low(R5900Context& c,unsigned n,uint64_t value) {if(n) std::memcpy(&c.r[n],&value,8);}
void halves(R5900Context& c,unsigned n,uint64_t value,uint64_t high) {
    const uint64_t values[]{value,high};if(n) std::memcpy(&c.r[n],values,16);
}
uint64_t sx(uint32_t value) {return static_cast<uint64_t>(static_cast<int64_t>(std::bit_cast<int32_t>(value)));}
template<class T> T read(const uint8_t* ram,uint32_t address) {T value;std::memcpy(&value,ram+address,sizeof(value));return value;}
template<class T> void write(uint8_t* ram,uint32_t address,T value) {std::memcpy(ram+address,&value,sizeof(value));}
R5900Context fixture(uint8_t* ram,uint32_t pc,uint32_t alias=0u,uint32_t object=Object) {
    std::memset(ram+Stack-0x40u,0x55,0x140u);std::memset(ram+Object,0x66,0x80u);std::memset(ram+Table,0x77,0x80u);
    for(unsigned n=0;n<8;++n) write<uint64_t>(ram,Stack+0x30u+n*16u,n==7?Return:0xabcdef1200000000ull+n);
    write<uint32_t>(ram,object+0x24u,1u);write<uint32_t>(ram,Table,0x512u);
    write<uint32_t>(ram,Table+4u,0x20au);write<uint32_t>(ram,Table+8u,0x20eu);
    write<uint32_t>(ram,0x288d0cu,7u);
    R5900Context c{};
    for(unsigned n=1;n<32;++n) halves(c,n,0x12340000ull+n,0x8877665500000000ull+n);
    low(c,2,1u);low(c,16,(object|alias)-0x6200u);low(c,17,Table|alias);low(c,18,object|alias);
    low(c,19,object|alias);low(c,20,(Table|alias)-0x77c0u);low(c,21,0x290000u|alias);
    low(c,22,(Table|alias)-0x6280u);low(c,29,Stack|alias);low(c,31,Return);
    c.pc=pc;c.hi=3u;c.hi1=5u;c.lo=7u;c.lo1=11u;c.sa=13u;return c;
}

// Test-only instruction decoder for these85 original words. No runtime macros or external callees execute.
struct Original {
    R5900Context c;
    std::vector<uint8_t> ram;
    uint32_t address(uint32_t raw,size_t size) const {
        const uint32_t physical=raw&0x1fffffffu;
        require(physical<PS2_RAM_SIZE&&size<=PS2_RAM_SIZE-physical,"original reference RAM range");
        require((raw&0xe0000000u)==0u||(raw&0xe0000000u)==0x20000000u||
                (raw&0xe0000000u)==0x80000000u||(raw&0xe0000000u)==0xa0000000u,"unsupported reference alias");
        return physical;
    }
    uint32_t word(uint32_t pc) const {return read<uint32_t>(ram.data(),pc);}
    void scalar(uint32_t w) {
        const unsigned op=w>>26u,rs=w>>21u&31u,rt=w>>16u&31u,rd=w>>11u&31u;
        const auto imm=static_cast<int32_t>(std::bit_cast<int16_t>(static_cast<uint16_t>(w)));
        const auto source=reg(c,rs),value=reg(c,rt);
        const auto raw=static_cast<uint32_t>(source)+static_cast<uint32_t>(imm);
        switch(op) {
        case 0: if(w==0u) break;require((w&63u)==0x2du,"reference SPECIAL");low(c,rd,source+value);break;
        case 9: low(c,rt,sx(static_cast<uint32_t>(source)+static_cast<uint32_t>(imm)));break;
        case 10: low(c,rt,std::bit_cast<int64_t>(source)<static_cast<int64_t>(imm)?1u:0u);break;
        case 13: low(c,rt,source|(w&0xffffu));break;
        case 15: low(c,rt,sx((w&0xffffu)<<16u));break;
        case 0x23: low(c,rt,sx(read<uint32_t>(ram.data(),address(raw,4))));break;
        case 0x2b: write<uint32_t>(ram.data(),address(raw,4),static_cast<uint32_t>(value));break;
        case 0x37: low(c,rt,read<uint64_t>(ram.data(),address(raw,8)));break;
        default: throw std::runtime_error("unsupported reference scalar instruction");
        }
    }
    void boundary(bool forceBackwardYield=true) {
        for(unsigned steps=0;steps<300u;++steps) {
            const auto pc=c.pc,w=word(pc);const unsigned op=w>>26u,rs=w>>21u&31u,rt=w>>16u&31u;
            const bool jr=op==0u&&(w&63u)==8u;
            if(op==3u||jr||op==1u||op==4u||op==5u) {
                auto target=pc+8u;bool taken=true,likely=false;
                if(op==3u) {target=((pc+4u)&0xf0000000u)|((w&0x3ffffffu)<<2u);low(c,31,sx(pc+8u));}
                else if(jr) target=static_cast<uint32_t>(reg(c,rs));
                else {
                    if(op==1u) {require(rt==1u||rt==3u,"reference REGIMM");taken=std::bit_cast<int64_t>(reg(c,rs))>=0;likely=rt==3u;}
                    if(op==4u) taken=reg(c,rs)==reg(c,rt);
                    if(op==5u) taken=reg(c,rs)!=reg(c,rt);
                    if(taken) target=pc+4u+static_cast<uint32_t>(static_cast<int32_t>(std::bit_cast<int16_t>(static_cast<uint16_t>(w)))*4);
                }
                if(taken||!likely) {c.pc=pc+4u;c.branch_pc=pc;c.in_delay_slot=true;scalar(word(pc+4u));c.in_delay_slot=false;}
                c.pc=target;
                if(op==3u||jr||(forceBackwardYield&&taken&&target<pc)) return;
            } else {scalar(w);c.pc=pc+4u;}
        }
        throw std::runtime_error("original reference instruction budget");
    }
};
void compare(PS2Runtime& runtime,R5900Context& c,uint8_t* ram,unsigned& count) {
    Original original{c,std::vector<uint8_t>(ram,ram+PS2_RAM_SIZE)};
    runtime.eeScheduler().reset(ram,c);runtime.eeScheduler().requestStop();
    runtime.lookupFunction(c.pc)(ram,&c,&runtime);original.boundary();
    if(c.pc!=original.c.pc||std::memcmp(c.r,original.c.r,sizeof(c.r))!=0||
       std::memcmp(ram,original.ram.data(),PS2_RAM_SIZE)!=0||c.hi!=original.c.hi||c.hi1!=original.c.hi1||
       c.lo!=original.c.lo||c.lo1!=original.c.lo1||c.sa!=original.c.sa||c.in_delay_slot)
        throw std::runtime_error("original opcode boundary differs at case "+std::to_string(count)+" nativePC "+std::to_string(c.pc));
    ++count;
}
void guard_contracts(PS2Runtime& runtime,uint8_t* ram) {
    const auto words=fate::recomp::waitsema_original_words();
    require(words.size()==85u,"original guard range differs");
    for(unsigned n=0;n<words.size();++n) {
        const auto address=fate::recomp::WaitSemaResumeStart+n*4u;const auto old=read<uint32_t>(ram,address);
        write<uint32_t>(ram,address,old^1u);bool rejected=false;
        try {fate::recomp::register_waitsema_continuations(runtime);} catch(const std::runtime_error&) {rejected=true;}
        require(rejected,"changed original word accepted");write<uint32_t>(ram,address,old);
        for(const auto pc:fate::recomp::WaitSemaResumePcs) require(!runtime.hasFunction(pc),"failed guard partially registered source");
    }
    runtime.registerFunction(0x1b10c4u,[](uint8_t*,R5900Context*,PS2Runtime*){});bool conflict=false;
    try {fate::recomp::register_waitsema_continuations(runtime);} catch(const std::runtime_error&) {conflict=true;}
    require(conflict&&!runtime.hasFunction(0x1b1004u),"owner conflict overwritten or partial registration");
    runtime.registerFunction(0x1b10c4u,nullptr);fate::recomp::register_waitsema_continuations(runtime);
    for(uint32_t pc=fate::recomp::WaitSemaResumeStart;pc<fate::recomp::WaitSemaResumeEnd;pc+=4u) {
        bool expected=false;for(const auto owned:fate::recomp::WaitSemaResumePcs) if(pc==owned) expected=true;
        require(runtime.hasFunction(pc)==expected,"registered non-continuation or missing checkpoint PC");
    }
    std::cout<<"PASS 85 original word guards,1 owner conflict and11 exact non-delay continuation PCs\n";
}
void integer_contracts(PS2Runtime& runtime,uint8_t* ram) {
    unsigned count=0;
    for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u})
    for(const auto pc:fate::recomp::WaitSemaResumePcs)
    for(const uint64_t sign:{0ull,1ull,0x80000000ull,0x100000000ull,0xffffffff00000000ull,UINT64_MAX})
    for(const uint32_t state:{0u,1u}) {
        auto c=fixture(ram,pc,alias);write<uint32_t>(ram,Object+0x24u,state);
        if(pc==0x1b1058u) low(c,2,sign);
        if(pc==0x1b10d0u) low(c,16,sign);
        if(pc==0x1b1028u) low(c,2,3u);
        compare(runtime,c,ram,count);
    }
    for(const uint32_t object:{Stack,Stack+0x1cu,Stack+0x24u})
    for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u})
    for(const uint32_t status:{0x209u,0x20au,0x80000000u,0xffffffffu}) {
        auto c=fixture(ram,0x1b10d0u,alias,object);low(c,16,0u);write<uint32_t>(ram,Table+4u,status);
        compare(runtime,c,ram,count);
    }
    for(const uint32_t status:{0x20du,0x20eu,0x80000000u,0xffffffffu}) {
        auto c=fixture(ram,0x1b10d0u);low(c,16,0u);write<uint32_t>(ram,Table+8u,status);compare(runtime,c,ram,count);
    }
    std::cout<<"PASS "<<count<<" original-opcode GPR128/full32MB RAM boundary comparisons across4 aliases, sign64/annul/status/frame paths; external callees not executed\n";
}
void faults(PS2Runtime& runtime,uint8_t* ram) {
    unsigned count=0;
    auto check=[&](R5900Context c,uint32_t pc,uint32_t code,bool bd,unsigned registerIndex) {
        const auto before=c;const auto bytes=std::vector<uint8_t>(ram,ram+PS2_RAM_SIZE);
        runtime.lookupFunction(c.pc)(ram,&c,&runtime);
        require(c.pc==0x80000180u&&c.cop0_epc==pc&&((c.cop0_cause>>2u)&31u)==code&&
                bool(c.cop0_cause>>31u)==bd&&!c.in_delay_slot,"memory exception owner/vector/EPC/BD lost");
        require(reg(c,registerIndex)==reg(before,registerIndex)&&reg(c,registerIndex,1)==reg(before,registerIndex,1)&&
                std::memcmp(ram,bytes.data(),PS2_RAM_SIZE)==0,"faulting access changed target register/RAM");++count;
    };
    for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u}) {
        auto c=fixture(ram,0x1b10d0u,alias);low(c,16,0u);low(c,17,(Table|alias)+1u);check(c,0x1b10d0u,4u,true,2u);
        c=fixture(ram,0x1b10d0u,alias);low(c,16,UINT64_MAX);low(c,17,(Table|alias)+1u);low(c,19,(Object|alias)+1u);
        check(c,0x1b10d8u,5u,false,2u);
        c=fixture(ram,0x1b10c4u,alias);low(c,21,(0x290000u|alias)+1u);check(c,0x1b10c4u,4u,false,4u);
        c=fixture(ram,0x1b10f8u,alias);write<uint32_t>(ram,Object+0x24u,0u);
        low(c,29,(Stack|alias)+1u);check(c,0x1b112cu,4u,false,31u);
        c=fixture(ram,0x1b1058u,alias);low(c,2,1u);low(c,16,(Object|alias)-0x6200u+1u);check(c,0x1b108cu,4u,false,2u);
        c=fixture(ram,0x1b10d0u,alias);low(c,16,UINT64_MAX);low(c,17,(Table|alias)+1u);
        runtime.lookupFunction(c.pc)(ram,&c,&runtime);
        require(c.pc==Return&&!(c.cop0_cause&0x7cu)&&reg(c,2)==sx(0xffffff9bu),"annulled likely executed invalid load");++count;
    }
    std::cout<<"PASS "<<count<<" load/store/likely-delay exception and annul boundaries across4 aliases; BadVAddr not compared\n";
}
void scheduling(PS2Runtime& runtime,uint8_t* ram) {
    auto c=fixture(ram,0x1b1004u);const auto before=c;const auto bytes=std::vector<uint8_t>(ram,ram+PS2_RAM_SIZE);
    runtime.eeScheduler().reset(ram,c);runtime.lookupFunction(c.pc)(ram,&c,&runtime);
    require(c.pc==0x1a7068u&&reg(c,4)==0u&&reg(c,31)==0x1b100cu&&reg(c,4,1)==reg(before,4,1)&&
            std::memcmp(ram,bytes.data(),PS2_RAM_SIZE)==0&&!runtime.hasFunction(0x1a7068u),"JAL boundary fabricated callee execution");
    c=fixture(ram,0x1b1070u);runtime.eeScheduler().reset(ram,c);runtime.eeScheduler().requestStop();
    runtime.lookupFunction(c.pc)(ram,&c,&runtime);require(c.pc==0x1b1070u,"idle loop lost yielded checkpoint");
    c=fixture(ram,0x1b1028u);low(c,2,3u);runtime.eeScheduler().reset(ram,c);runtime.eeScheduler().requestStop();
    runtime.lookupFunction(c.pc)(ram,&c,&runtime);require(c.pc==0x1b1028u&&reg(c,2)==2u,"countdown loop lost decremented yield state");
    c=fixture(ram,0x1b1058u);low(c,2,0u);write<uint32_t>(ram,Object+0x24u,0u);
    runtime.eeScheduler().reset(ram,c);runtime.eeScheduler().requestStop();runtime.lookupFunction(c.pc)(ram,&c,&runtime);
    require(c.pc==0x1b1020u&&reg(c,19)==Object,"poll loop lost delay copy before yield");
    std::cout<<"PASS original JAL/callee boundary and3 owned backward-edge yields; event/IOP timing parity unverified\n";
}
}

int main(int argc,char** argv) {
    try {
        require(argc==2,"usage: waitsema_resume_contract original-XL.ELF");
        std::ifstream file(argv[1],std::ios::binary);require(file.good(),"original ELF unavailable");
        const std::vector<char> bytes{std::istreambuf_iterator<char>(file),{}};
        const auto image=fate::elf::Image::parse(std::as_bytes(std::span(bytes)));
        auto runtime=std::make_unique<PS2Runtime>();require(runtime->memory().initialize(PS2_RAM_SIZE),"memory initialization failed");
        auto* ram=runtime->memory().getRDRAM();image.load_segments(std::as_bytes(std::span(bytes)),{reinterpret_cast<std::byte*>(ram),PS2_RAM_SIZE});
        guard_contracts(*runtime,ram);integer_contracts(*runtime,ram);faults(*runtime,ram);scheduling(*runtime,ram);
        std::cout<<"PASS waitsema continuation contracts; not independent PCSX2/system/gameplay parity\n";
    } catch(const std::exception& error) {std::cerr<<"FAIL "<<error.what()<<'\n';return 1;}
}
