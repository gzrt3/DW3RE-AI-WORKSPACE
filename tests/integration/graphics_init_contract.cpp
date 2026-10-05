#include "fate/graphics_init_continuation.hpp"
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
void require(bool ok,const char* text) {if(!ok) throw std::runtime_error(text);}
uint64_t reg(const R5900Context& c,unsigned n) {uint64_t v;std::memcpy(&v,&c.r[n],8);return v;}
void low(R5900Context& c,unsigned n,uint64_t v) {if(n) std::memcpy(&c.r[n],&v,8);}
uint64_t sx(uint32_t v) {return static_cast<uint64_t>(static_cast<int64_t>(std::bit_cast<int32_t>(v)));}
template<class T> T read(const uint8_t* p,uint32_t a) {T v;std::memcpy(&v,p+a,sizeof(v));return v;}
template<class T> void write(uint8_t* p,uint32_t a,T v) {std::memcpy(p+a,&v,sizeof(v));}
constexpr uint32_t Return=0x12345678u,Stack=0x70000u,Gp=0x2d8170u;
uint64_t observedVblankTick=0;
constexpr uint32_t IrqHandler=0x123000u,IrqWait=0x123100u,IrqResume=0x123110u,IrqArgument=0x58acf8u;
unsigned irqCalls=0,irqMode=0;
int irqId=0;
uint32_t irqStack=0;
void irq_observer(uint8_t* ram,R5900Context* ctx,PS2Runtime* runtime) {
    ++irqCalls;irqStack=static_cast<uint32_t>(reg(*ctx,29));
    require(reg(*ctx,4)==2u&&reg(*ctx,5)==IrqArgument&&reg(*ctx,28)==Gp,"IRQ callback arguments or GP differ");
    require(runtime->eeScheduler().currentVSyncTick()>0&&irqStack>=16u&&irqStack!=Stack&&irqStack<=PS2_RAM_SIZE,
            "IRQ ran early or reused registering stack");
    write<uint64_t>(ram,irqStack-16u,0xabcdef1234567890ull);
    ctx->pc=0;
}
void irq_wait(uint8_t*,R5900Context* ctx,PS2Runtime* runtime) {
    irqId=static_cast<int>(reg(*ctx,2));
    require(irqId==1&&irqCalls==0u,"registration fabricated completion or callback");
    auto& ee=runtime->eeScheduler();
    ee.setIrqCauseEnabled(false,2u,irqMode!=1u);
    if(irqMode==2u) ee.removeIrqHandler(false,2u,irqId);
    ctx->pc=IrqResume;
    ee.waitVSync(ee.currentVSyncTick(),0);
}
void irq_resume(uint8_t* ram,R5900Context*,PS2Runtime* runtime) {
    require(irqCalls==(irqMode==0u?1u:0u),"IRQ mask/removal/lifecycle differs");
    require(read<uint64_t>(ram,Stack-16u)==0x1122334455667788ull,"IRQ clobbered registering stack");
    runtime->requestStop();
}
void observe_poll_completion(uint8_t*,R5900Context* ctx,PS2Runtime* runtime) {
    observedVblankTick=runtime->eeScheduler().currentVSyncTick();
    require(observedVblankTick>0u&&reg(*ctx,2)==4u&&runtime->memory().read32(0x1000f000u)&4u,
            "original poll returned without a scheduled VBLANK event");
    runtime->requestStop();
}

// Test-only decoder of this selected integer interval; no runtime register macros.
struct Original {
    R5900Context c{};
    std::vector<uint8_t> ram;
    uint64_t csr=0;
    uint32_t word(uint32_t pc) const {return read<uint32_t>(ram.data(),pc);}
    void scalar(uint32_t w) {
        const unsigned op=w>>26u,rs=(w>>21u)&31u,rt=(w>>16u)&31u,rd=(w>>11u)&31u,sa=(w>>6u)&31u;
        const auto imm=static_cast<int32_t>(std::bit_cast<int16_t>(static_cast<uint16_t>(w)));
        const uint32_t rawAddress=static_cast<uint32_t>(reg(c,rs))+static_cast<uint32_t>(imm);
        const uint32_t physical=rawAddress&0x1fffffffu;
        const uint32_t region=rawAddress&0xe0000000u;
        const uint32_t address=physical<PS2_RAM_SIZE&&(region==0x20000000u||region==0x80000000u||region==0xa0000000u)?physical:rawAddress;
        const auto source=reg(c,rs),value=reg(c,rt);
        auto s32=[&](uint32_t v){low(c,rt,sx(v));};
        auto bounded=[&](size_t size){require(address<ram.size()&&size<=ram.size()-address,"reference memory range");};
        switch(op) {
        case 0:
            switch(w&63u) {
            case 0: low(c,rd,sx(static_cast<uint32_t>(value)<<sa));break;
            case 3: low(c,rd,sx(static_cast<uint32_t>(std::bit_cast<int32_t>(static_cast<uint32_t>(value))>>sa)));break;
            case 0x0b: if(value!=0) low(c,rd,source);break;
            case 0x18: {
                const auto product=static_cast<int64_t>(std::bit_cast<int32_t>(static_cast<uint32_t>(source)))*
                    static_cast<int64_t>(std::bit_cast<int32_t>(static_cast<uint32_t>(value)));
                c.lo=sx(static_cast<uint32_t>(product));c.hi=sx(static_cast<uint32_t>(static_cast<uint64_t>(product)>>32u));
                low(c,rd,c.lo);break;
            }
            case 0x23: low(c,rd,sx(static_cast<uint32_t>(source-value)));break;
            case 0x24: low(c,rd,source&value);break;
            case 0x25: low(c,rd,source|value);break;
            case 0x2a: low(c,rd,std::bit_cast<int64_t>(source)<std::bit_cast<int64_t>(value)?1u:0u);break;
            case 0x2d: low(c,rd,source+value);break;
            case 0x3a: low(c,rd,value>>sa);break;
            case 0x3c: low(c,rd,value<<(sa+32u));break;
            case 0x3f: low(c,rd,static_cast<uint64_t>(std::bit_cast<int64_t>(value)>>(sa+32u)));break;
            default: throw std::runtime_error("unsupported reference SPECIAL");
            } break;
        case 9: s32(static_cast<uint32_t>(source)+static_cast<uint32_t>(imm));break;
        case 12: low(c,rt,source&(w&0xffffu));break;
        case 13: low(c,rt,source|(w&0xffffu));break;
        case 15: s32((w&0xffffu)<<16u);break;
        case 0x1e: bounded(16);if(rt) std::memcpy(&c.r[rt],ram.data()+address,16);break;
        case 0x1f: bounded(16);std::memcpy(ram.data()+address,&c.r[rt],16);break;
        case 0x21: bounded(2);low(c,rt,static_cast<uint64_t>(static_cast<int64_t>(read<int16_t>(ram.data(),address))));break;
        case 0x23: bounded(4);s32(read<uint32_t>(ram.data(),address));break;
        case 0x29: bounded(2);write(ram.data(),address,static_cast<uint16_t>(value));break;
        case 0x2b: bounded(4);write(ram.data(),address,static_cast<uint32_t>(value));break;
        case 0x37:
            if(address==0x12001000u) low(c,rt,csr);
            else {bounded(8);low(c,rt,read<uint64_t>(ram.data(),address));} break;
        case 0x3f: bounded(8);write(ram.data(),address,value);break;
        default: throw std::runtime_error("unsupported reference opcode");
        }
    }
    void to_boundary() {
        for(unsigned steps=0;steps<200;++steps) {
            const auto pc=c.pc,w=word(pc);const unsigned op=w>>26u,rs=(w>>21u)&31u,rt=(w>>16u)&31u;
            const bool jr=op==0&&(w&63u)==8u;
            if(op==3||jr||op==4||op==5||op==1) {
                const auto offset=static_cast<int32_t>(std::bit_cast<int16_t>(static_cast<uint16_t>(w)))*4;
                uint32_t target=pc+8u;
                if(op==3) {target=((pc+4u)&0xf0000000u)|((w&0x03ffffffu)<<2u);low(c,31,sx(pc+8u));}
                else if(jr) target=static_cast<uint32_t>(reg(c,rs));
                else {
                    bool taken=false;
                    if(op==4) taken=reg(c,rs)==reg(c,rt);
                    if(op==5) taken=reg(c,rs)!=reg(c,rt);
                    if(op==1) {require(rt==1,"unsupported reference REGIMM");taken=std::bit_cast<int64_t>(reg(c,rs))>=0;}
                    if(taken) target=pc+4u+static_cast<uint32_t>(offset);
                }
                scalar(word(pc+4u));c.pc=target;
                if(op==3||jr) return;
            } else {scalar(w);c.pc=pc+4u;}
        }
        throw std::runtime_error("reference instruction budget exhausted");
    }
};
}

int main(int argc,char** argv) {
    try {
        require(argc==2,"usage: graphics_init_contract original-XL.ELF");
        std::ifstream stream(argv[1],std::ios::binary);require(stream.good(),"original ELF unavailable");
        const std::vector<char> file{std::istreambuf_iterator<char>(stream),{}};
        const auto bytes=std::as_bytes(std::span(file));const auto elf=fate::elf::Image::parse(bytes);
        auto rt=std::make_unique<PS2Runtime>();require(rt->memory().initialize(PS2_RAM_SIZE)&&rt->syncCoreSubsystems(),"runtime initialization");
        auto* ram=rt->memory().getRDRAM();elf.load_segments(bytes,std::as_writable_bytes(std::span(ram,PS2_RAM_SIZE)));
        R5900Context c{};
        for(const auto exception:{EXCEPTION_TLB_REFILL,EXCEPTION_ADDRESS_ERROR_LOAD,EXCEPTION_ADDRESS_ERROR_STORE})
        for(const bool boot:{false,true}) for(const bool delay:{false,true}) {
            c={};c.pc=0x123404u;c.branch_pc=0x123400u;c.in_delay_slot=delay;c.cop0_status=boot?0x00400000u:0u;
            low(c,2,0xabcdef0123456789ull);const auto before=c;
            rt->SignalException(&c,exception);
            const bool tlb=exception==EXCEPTION_TLB_REFILL;
            const uint32_t expected=boot?(tlb?0xbfc00200u:0xbfc00380u):(tlb?0x80000000u:0x80000180u);
            require(c.pc==expected&&c.cop0_epc==(delay?before.branch_pc:before.pc)&&
                    ((c.cop0_cause>>2u)&31u)==static_cast<uint32_t>(exception)&&
                    (c.cop0_cause>>31u)==static_cast<uint32_t>(delay)&&c.cop0_status==(before.cop0_status|2u)&&
                    !c.in_delay_slot&&std::memcmp(c.r,before.r,sizeof(c.r))==0,
                    "EE level-1 general/TLB vector, BEV or delay state differs from reference");
        }
        std::cout<<"PASS 12 EE level-1 general/TLB exception vectors with BEV and delay state\n";
        rt->Store32(ram,&c,0x1000f000u,4u);
        require(rt->Load32(ram,&c,0x1000f000u)==0u,"INTC acknowledgement fabricated a VBLANK event");
        rt->memory().gs_regs.csr.store(0x1234567800002000ull);
        require(rt->Load64(ram,&c,0x12001000u)==0x1234567800002000ull,"Load64 lost original GS CSR read");
        for(const uint32_t alias:{0u,0x80000000u,0xa0000000u}) {
            constexpr uint64_t value=0x01020304abcdef98ull;
            rt->Store64(ram,&c,0x12000080u|alias,value);
            require(rt->memory().gs_regs.display1==value&&rt->Load64(ram,&c,0x12000080u|alias)==value,"GS 64-bit store/read or alias lost");
            rt->memory().gs_regs.display1=0;
        }
        for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u}) {
            rt->Store64(ram,&c,Stack|alias,0x1234567887654321ull);
            require(read<uint64_t>(ram,Stack)==0x1234567887654321ull&&rt->Load64(ram,&c,Stack|alias)==0x1234567887654321ull,"64-bit RAM alias lost");
            write<uint64_t>(ram,Stack,0);
        }
        for(const uint32_t address:{0x70003ff8u,0xf0003ff8u,0x11000ff8u,0x91008ff8u,0xb100fff8u}) {
            rt->Store64(ram,&c,address,0x9988776655443322ull);
            require(rt->memory().read64(address)==0x9988776655443322ull&&rt->Load64(ram,&c,address)==0x9988776655443322ull,"64-bit scratchpad or VU ownership lost");
        }
        for(const bool load:{false,true}) {
            c={};c.pc=0x1803b8u;c.branch_pc=0x1803b4u;c.in_delay_slot=true;
            const auto before=read<uint64_t>(ram,Stack);
            if(load) (void)rt->Load64(ram,&c,Stack+1u);else rt->Store64(ram,&c,Stack+1u,0xabcdef);
            require(((c.cop0_cause>>2u)&31u)==(load?4u:5u)&&c.cop0_epc==0x1803b4u&&(c.cop0_cause>>31u)&&read<uint64_t>(ram,Stack)==before,"64-bit alignment exception state differs");
        }
        std::cout<<"PASS 15 64-bit memory routing and exception cases\n";
        const std::array<uint32_t,4> vifPacket{0x01000606u,0u,0u,0u};
        rt->memory().processVIF1Data(reinterpret_cast<const uint8_t*>(vifPacket.data()),sizeof(vifPacket));
        for(const uint32_t alias:{0u,0x80000000u,0xa0000000u})
            require(rt->Load64(ram,&c,0x10003c40u|alias)==0x606u,"64-bit IO read used stale VIF shadow");
        std::cout<<"PASS 3 live VIF register read64 aliases\n";
        const auto opcode=read<uint32_t>(ram,0x180384u);write(ram,0x180384u,opcode^1u);
        bool rejected=false;try {fate::recomp::register_graphics_init_continuations(*rt);} catch(const std::runtime_error&) {rejected=true;}
        require(rejected&&!rt->hasFunction(0x180384u),"mismatched graphics words registered");
        write(ram,0x180384u,opcode);
        const auto crt_opcode=read<uint32_t>(ram,0x1a4420u);write(ram,0x1a4420u,crt_opcode^1u);
        rejected=false;try {fate::recomp::register_graphics_init_continuations(*rt);} catch(const std::runtime_error&) {rejected=true;}
        require(rejected&&!rt->hasFunction(0x180384u)&&!rt->hasFunction(0x1a4420u),"mismatched CRT wrapper words registered");
        write(ram,0x1a4420u,crt_opcode);
        const std::array<uint32_t,4> intcWords{0x24030010u,0x0000000cu,0x03e00008u,0u};
        require(std::memcmp(ram+0x1a4500u,intcWords.data(),sizeof(intcWords))==0,"original AddIntcHandler words differ");
        for(unsigned word=0;word<4;++word) {
            const uint32_t pc=0x1a4500u+4u*word;
            write(ram,pc,intcWords[word]^1u);rejected=false;
            try {fate::recomp::register_graphics_init_continuations(*rt);} catch(const std::runtime_error&) {rejected=true;}
            require(rejected&&!rt->hasFunction(0x180384u)&&!rt->hasFunction(0x1a4500u),"mismatched INTC wrapper registered partially");
            write(ram,pc,intcWords[word]);
        }
        for(const uint32_t occupied:{0x1a4500u,0x1a4508u}) {
            const auto previousSlot=g_ps2RecompiledFunctionTable[occupied/4u];
            auto conflict=std::make_unique<PS2Runtime>();
            require(conflict->memory().initialize(PS2_RAM_SIZE)&&conflict->syncCoreSubsystems(),"conflict runtime init");
            std::memcpy(conflict->memory().getRDRAM(),ram,PS2_RAM_SIZE);
            require(conflict->registerFunction(occupied,irq_observer),"conflict fixture init");
            rejected=false;try {fate::recomp::register_graphics_init_continuations(*conflict);} catch(const std::runtime_error&) {rejected=true;}
            require(rejected&&!conflict->hasFunction(0x180384u)&&conflict->lookupFunction(occupied)==irq_observer,
                    "INTC conflict modified existing owner or partially registered");
            g_ps2RecompiledFunctionTable[occupied/4u]=previousSlot;
        }
        for(uint32_t pc=0x198918u;pc<0x198998u;pc+=4u) {
            const auto originalWord=read<uint32_t>(ram,pc);write(ram,pc,originalWord^1u);rejected=false;
            try {fate::recomp::register_graphics_init_continuations(*rt);} catch(const std::runtime_error&) {rejected=true;}
            require(rejected&&!rt->hasFunction(0x198918u)&&!rt->hasFunction(0x180384u),"buffer tail word guard registered partially");
            write(ram,pc,originalWord);
        }
        for(const uint32_t pc:{0x198c7cu,0x198c80u}) {
            const auto originalWord=read<uint32_t>(ram,pc);write(ram,pc,originalWord^1u);rejected=false;
            try {fate::recomp::register_graphics_init_continuations(*rt);} catch(const std::runtime_error&) {rejected=true;}
            require(rejected&&!rt->hasFunction(0x198c7cu)&&!rt->hasFunction(0x180384u),"packet return word guard registered partially");
            write(ram,pc,originalWord);
        }
        for(uint32_t pc=0x19a510u;pc<0x19a5c4u;pc+=4u) {
            const auto originalWord=read<uint32_t>(ram,pc);write(ram,pc,originalWord^1u);rejected=false;
            try {fate::recomp::register_graphics_init_continuations(*rt);} catch(const std::runtime_error&) {rejected=true;}
            require(rejected&&!rt->hasFunction(0x19a510u)&&!rt->hasFunction(0x180384u),"configuration tail word guard registered partially");
            write(ram,pc,originalWord);
        }
        for(const uint32_t pc:{0x1b8040u,0x1b8044u}) {
            const auto originalWord=read<uint32_t>(ram,pc);write(ram,pc,originalWord^1u);rejected=false;
            try {fate::recomp::register_graphics_init_continuations(*rt);} catch(const std::runtime_error&) {rejected=true;}
            require(rejected&&!rt->hasFunction(0x1b8040u)&&!rt->hasFunction(0x180384u),"store return word guard registered partially");
            write(ram,pc,originalWord);
        }
        {
            constexpr uint32_t occupied=0x1b8040u;
            const auto previousSlot=g_ps2RecompiledFunctionTable[occupied/4u];
            auto conflict=std::make_unique<PS2Runtime>();
            require(conflict->memory().initialize(PS2_RAM_SIZE)&&conflict->syncCoreSubsystems(),"store conflict runtime init");
            std::memcpy(conflict->memory().getRDRAM(),ram,PS2_RAM_SIZE);
            require(conflict->registerFunction(occupied,irq_observer),"store conflict fixture init");rejected=false;
            try {fate::recomp::register_graphics_init_continuations(*conflict);} catch(const std::runtime_error&) {rejected=true;}
            require(rejected&&!conflict->hasFunction(0x180384u)&&conflict->lookupFunction(occupied)==irq_observer,
                    "store conflict changed owner or registered partially");
            g_ps2RecompiledFunctionTable[occupied/4u]=previousSlot;
        }
        {
            constexpr uint32_t occupied=0x19a510u;
            const auto previousSlot=g_ps2RecompiledFunctionTable[occupied/4u];
            auto conflict=std::make_unique<PS2Runtime>();
            require(conflict->memory().initialize(PS2_RAM_SIZE)&&conflict->syncCoreSubsystems(),"configuration conflict runtime init");
            std::memcpy(conflict->memory().getRDRAM(),ram,PS2_RAM_SIZE);
            require(conflict->registerFunction(occupied,irq_observer),"configuration conflict fixture init");rejected=false;
            try {fate::recomp::register_graphics_init_continuations(*conflict);} catch(const std::runtime_error&) {rejected=true;}
            require(rejected&&!conflict->hasFunction(0x180384u)&&conflict->lookupFunction(occupied)==irq_observer,
                    "configuration conflict changed owner or registered partially");
            g_ps2RecompiledFunctionTable[occupied/4u]=previousSlot;
        }
        {
            constexpr uint32_t occupied=0x198c7cu;
            const auto previousSlot=g_ps2RecompiledFunctionTable[occupied/4u];
            auto conflict=std::make_unique<PS2Runtime>();
            require(conflict->memory().initialize(PS2_RAM_SIZE)&&conflict->syncCoreSubsystems(),"packet conflict runtime init");
            std::memcpy(conflict->memory().getRDRAM(),ram,PS2_RAM_SIZE);
            require(conflict->registerFunction(occupied,irq_observer),"packet conflict fixture init");rejected=false;
            try {fate::recomp::register_graphics_init_continuations(*conflict);} catch(const std::runtime_error&) {rejected=true;}
            require(rejected&&!conflict->hasFunction(0x180384u)&&conflict->lookupFunction(occupied)==irq_observer,
                    "packet conflict changed owner or registered partially");
            g_ps2RecompiledFunctionTable[occupied/4u]=previousSlot;
        }
        {
            constexpr uint32_t occupied=0x198918u;
            const auto previousSlot=g_ps2RecompiledFunctionTable[occupied/4u];
            auto conflict=std::make_unique<PS2Runtime>();
            require(conflict->memory().initialize(PS2_RAM_SIZE)&&conflict->syncCoreSubsystems(),"buffer conflict runtime init");
            std::memcpy(conflict->memory().getRDRAM(),ram,PS2_RAM_SIZE);
            require(conflict->registerFunction(occupied,irq_observer),"buffer conflict fixture init");rejected=false;
            try {fate::recomp::register_graphics_init_continuations(*conflict);} catch(const std::runtime_error&) {rejected=true;}
            require(rejected&&!conflict->hasFunction(0x180384u)&&conflict->lookupFunction(occupied)==irq_observer,
                    "buffer conflict changed owner or registered partially");
            g_ps2RecompiledFunctionTable[occupied/4u]=previousSlot;
        }
        const auto existing_poll=observe_poll_completion;
        require(rt->registerFunction(0x1a4cf0u,existing_poll),"existing poll fixture registration failed");
        for(const uint32_t pc:{0x1b7f84u,0x1b7f88u}) {
            const auto originalWord=read<uint32_t>(ram,pc);write(ram,pc,originalWord^1u);rejected=false;
            try {fate::recomp::register_graphics_init_continuations(*rt);} catch(const std::runtime_error&) {rejected=true;}
            require(rejected&&!rt->hasFunction(0x1b7f84u)&&!rt->hasFunction(0x180384u),"color return word guard registered partially");
            write(ram,pc,originalWord);
        }
        {
            constexpr uint32_t occupied=0x1b7f84u;
            const auto previousSlot=g_ps2RecompiledFunctionTable[occupied/4u];
            auto conflict=std::make_unique<PS2Runtime>();
            require(conflict->memory().initialize(PS2_RAM_SIZE)&&conflict->syncCoreSubsystems(),"color conflict runtime init");
            std::memcpy(conflict->memory().getRDRAM(),ram,PS2_RAM_SIZE);
            require(conflict->registerFunction(occupied,irq_observer),"color conflict fixture init");rejected=false;
            try {fate::recomp::register_graphics_init_continuations(*conflict);} catch(const std::runtime_error&) {rejected=true;}
            require(rejected&&!conflict->hasFunction(0x180384u)&&conflict->lookupFunction(occupied)==irq_observer,
                    "color conflict changed owner or registered partially");
            g_ps2RecompiledFunctionTable[occupied/4u]=previousSlot;
        }
        fate::recomp::register_graphics_init_continuations(*rt);
        unsigned colorCases=0;
        for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u})
        for(const uint64_t value:{0ull,0x3f80000080000000ull,0xfedcba9876543210ull})
        for(const uint64_t target:{uint64_t(Return),0x1234567812345678ull}) {
            c={};for(unsigned n=1;n<32;++n) {const uint64_t lanes[]{0xabcdef0000000000ull+n,0x9876543200000000ull+n};std::memcpy(&c.r[n],lanes,16);}
            low(c,28,0x5678000000000000ull|(Gp|alias));low(c,3,value);low(c,31,target);c.pc=0x1b7f84u;
            write<uint64_t>(ram,Gp-0x77f0u,~value);
            Original original;original.c=c;original.ram.assign(ram,ram+PS2_RAM_SIZE);
            rt->lookupFunction(c.pc)(ram,&c,rt.get());original.to_boundary();
            require(c.pc==Return&&c.pc==original.c.pc&&c.branch_pc==0x1b7f84u&&!c.in_delay_slot&&
                    std::memcmp(c.r,original.c.r,sizeof(c.r))==0&&std::memcmp(ram,original.ram.data(),PS2_RAM_SIZE)==0,
                    "color return SD lost low64, GP alias, upper lanes, full RAM or captured target");
            ++colorCases;
        }
        for(const uint32_t address:{0u,0x70003ff8u,0xf0003ff8u,0x11000ff8u,0x91008ff8u,0xb100fff8u,0x12000080u,0x92000080u,0xb2000080u}) {
            c={};low(c,28,address+0x77f0u);low(c,3,0x1234567887654321ull);low(c,31,Return);c.pc=0x1b7f84u;
            const auto before=c;
            rt->lookupFunction(c.pc)(ram,&c,rt.get());
            require(c.pc==Return&&!c.in_delay_slot&&std::memcmp(c.r,before.r,sizeof(c.r))==0&&
                    rt->memory().read64(address)==0x1234567887654321ull,"color SD address wrap or memory owner differs");
        }
        for(const bool boot:{false,true}) for(uint32_t offset=1;offset<8;++offset) {
            c={};low(c,28,Gp+offset);low(c,3,0xfedcba9876543210ull);low(c,31,Return);c.pc=0x1b7f84u;
            c.cop0_status=boot?0x00400000u:0u;const auto before=c;
            const std::vector<uint8_t> beforeRam(ram,ram+PS2_RAM_SIZE);
            rt->lookupFunction(c.pc)(ram,&c,rt.get());
            require(c.pc==(boot?0xbfc00380u:0x80000180u)&&c.cop0_epc==0x1b7f84u&&
                    c.cop0_badvaddr==Gp+offset-0x77f0u&&((c.cop0_cause>>2u)&31u)==5u&&
                    (c.cop0_cause>>31u)==1u&&!c.in_delay_slot&&std::memcmp(c.r,before.r,sizeof(c.r))==0&&
                    std::memcmp(ram,beforeRam.data(),PS2_RAM_SIZE)==0,"color SD fault did not preserve delay-slot exception state");
        }
        std::cout<<"PASS 2 color word guards, 1 owner conflict, "<<colorCases<<" original-opcode GPR128/RAM comparisons, 9 memory/wrap owners and 14 delay faults\n";
        require(rt->lookupFunction(0x1a4cf0u)==existing_poll,"existing poll owner was replaced");
        require(rt->registerFunction(0x1a4cf0u,rt->lookupFunction(0x1a4cc0u)),"isolated original poll registration failed");
        std::cout<<"PASS existing VBLANK poll mapping retained during registration\n";
        unsigned storeCases=0;
        for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u})
        for(const uint32_t address:{Stack,PS2_RAM_SIZE-4u})
        for(const uint64_t target:{0x1804a4ull,0xabcdef0080001000ull,0ull})
        for(const uint64_t value:{0x12345678abcdef01ull,0xffffffffffffffffull}) {
            c={};for(unsigned n=1;n<32;++n) {const uint64_t lanes[]{0x11220000ull+n,0x99880000ull+n};std::memcpy(&c.r[n],lanes,16);}
            c.pc=0x1b8040u;c.hi=7;c.lo=11;c.hi1=13;c.lo1=17;
            low(c,4,0x1234567800000000ull|((address|alias)-0x40u));low(c,3,value);low(c,31,target);
            Original original;original.c=c;original.ram.assign(ram,ram+PS2_RAM_SIZE);
            rt->lookupFunction(c.pc)(ram,&c,rt.get());original.to_boundary();
            require(c.pc==static_cast<uint32_t>(target)&&c.pc==original.c.pc&&c.branch_pc==0x1b8040u&&!c.in_delay_slot&&
                    std::memcmp(c.r,original.c.r,sizeof(c.r))==0&&c.hi==7&&c.lo==11&&c.hi1==13&&c.lo1==17&&
                    std::memcmp(ram,original.ram.data(),PS2_RAM_SIZE)==0&&read<uint32_t>(ram,address)==static_cast<uint32_t>(value),
                    "store return RAM alias, low32 widths, GPR128 or captured JR target differs");
            ++storeCases;
        }
        c={};c.pc=0x1b8040u;low(c,4,0xffffffc0u);low(c,3,0x12345678u);low(c,31,Return);
        const auto wrapBefore=c;rt->lookupFunction(c.pc)(ram,&c,rt.get());
        require(c.pc==Return&&read<uint32_t>(ram,0)==0x12345678u&&std::memcmp(c.r,wrapBefore.r,sizeof(c.r))==0,
                "store effective address did not wrap at 32 bits");
        unsigned ownerCases=0;
        for(const uint32_t address:{0x70003ffcu,0xf0003ffcu,0x11000ffcu,0x91004ffcu,0xb100bffcu,0x1100fffcu}) {
            c={};c.pc=0x1b8040u;low(c,4,address-0x40u);low(c,3,0x12345678abcdef01ull);low(c,31,Return);
            const auto before=c;const std::vector<uint8_t> ramBefore(ram,ram+PS2_RAM_SIZE);
            rt->lookupFunction(c.pc)(ram,&c,rt.get());
            require(c.pc==Return&&!c.in_delay_slot&&c.branch_pc==0x1b8040u&&rt->memory().read32(address)==0xabcdef01u&&
                    std::memcmp(c.r,before.r,sizeof(c.r))==0&&std::memcmp(ram,ramBefore.data(),PS2_RAM_SIZE)==0,
                    "store return lost scratchpad/VU ownership or changed RAM/registers");++ownerCases;
        }
        for(const uint32_t alias:{0u,0x80000000u,0xa0000000u}) {
            c={};c.pc=0x1b8040u;low(c,4,(0x12000080u|alias)-0x40u);low(c,3,0xabcdef01u);low(c,31,Return);
            rt->memory().gs_regs.display1=0x1122334455667788ull;
            const auto before=c;rt->lookupFunction(c.pc)(ram,&c,rt.get());
            require(c.pc==Return&&rt->memory().gs_regs.display1==0x11223344abcdef01ull&&std::memcmp(c.r,before.r,sizeof(c.r))==0,
                    "store return bypassed GS register owner");++ownerCases;
            require(rt->Load32(ram,&c,0x12000080u|alias)==0xabcdef01u&&rt->Load32(ram,&c,0x12000084u|alias)==0x11223344u,
                    "GS read32 aliases lost dword selection");
            rt->Store32(ram,&c,0x12000084u|alias,0x87654321u);
            require(rt->memory().gs_regs.display1==0x87654321abcdef01ull,"GS high dword store clobbered low dword");
            rt->memory().gs_regs.csr.store(0x1122334400000003ull);
            rt->Store32(ram,&c,0x12001000u|alias,1u);
            require(rt->memory().gs_regs.csr.load()==0x1122334400000002ull&&rt->Load32(ram,&c,0x12001000u|alias)==2u&&
                    rt->Load32(ram,&c,0x12001004u|alias)==0x11223344u,"GS CSR alias acknowledgement or halves differ");
            rt->memory().raiseIntcInterrupt(2u);c.pc=0x1b8040u;low(c,4,(0x1000f000u|alias)-0x40u);low(c,3,4u);
            rt->lookupFunction(c.pc)(ram,&c,rt.get());
            require(c.pc==Return&&rt->memory().read32(0x1000f000u)==0u,"store return bypassed INTC acknowledgement");++ownerCases;
        }
        unsigned faultCases=0;
        for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u})
        for(const uint32_t residue:{1u,2u,3u}) for(const bool boot:{false,true}) {
            c={};c.pc=0x1b8040u;c.cop0_status=boot?0x00400000u:0u;c.cop0_cause=0x100u;
            low(c,4,(Stack|alias)+residue-0x40u);low(c,3,0xabcdef01u);low(c,31,Return);
            const auto before=c;const std::vector<uint8_t> ramBefore(ram,ram+PS2_RAM_SIZE);
            rt->lookupFunction(c.pc)(ram,&c,rt.get());
            require(c.pc==(boot?0xbfc00380u:0x80000180u)&&c.cop0_epc==0x1b8040u&&c.branch_pc==0x1b8040u&&!c.in_delay_slot&&
                    c.cop0_cause==0x80000114u&&c.cop0_status==(before.cop0_status|2u)&&
                    std::memcmp(c.r,before.r,sizeof(c.r))==0&&std::memcmp(ram,ramBefore.data(),PS2_RAM_SIZE)==0,
                    "faulting SW delay slot lost exception vector, EPC, BD, EXL or preserved state");++faultCases;
        }
        std::cout<<"PASS 2 store return word guards, 1 owner conflict, "<<storeCases<<" original-opcode RAM comparisons, 1 address wrap, "
                 <<ownerCases<<" memory owner cases, 3 GS dword/CSR alias groups and "<<faultCases<<" delay-slot fault cases; not independent PCSX2 lockstep\n";
        unsigned configurationCases=0;
        for(const uint64_t value:{0x8cull,0ull,0xffffffffffffffffull,0x80000000ull,0x7fffffffull,0x1234567800000001ull})
        for(const uint64_t mode:{0ull,1ull,0x100000001ull,0xffffull,0xabcd0000beef0000ull,0x100000000ull,
                                0xabcd0001fedc0001ull,0x200000001ull,0x8000ull})
        for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u}) {
            constexpr uint32_t packet=0x52000u;
            c={};for(unsigned n=1;n<32;++n) {const uint64_t lanes[]{0x11220000ull+n,0x99880000ull+n};std::memcpy(&c.r[n],lanes,16);}
            c.pc=0x19a510u;c.hi=7;c.lo=11;c.hi1=13;c.lo1=17;
            low(c,2,value);low(c,18,packet|alias);low(c,29,Stack|alias);low(c,31,0x19a510u);
            std::memset(ram+Stack,0xa7,0xd0);std::memset(ram+packet,0x5c,0x100);
            write(ram,Stack+0x20u,0x2857b0u|alias);write(ram,0x2857b0u,mode);
            for(unsigned n=0;n<8;++n) write(ram,Stack+0x30u+n*0x10u,0xabcdef0100000000ull+n);
            write<uint64_t>(ram,Stack+0xb0u,0x123456789abcdef0ull);write<uint64_t>(ram,Stack+0xc0u,0xabcdef0012345678ull);
            write<uint64_t>(ram,packet+0x38u,0x0123456789abcdefull);
            write<uint64_t>(ram,packet+0x60u,0xfedcba9876543210ull);
            write<uint64_t>(ram,packet+0xe0u,0x987654321abcdef0ull);
            Original original;original.c=c;original.ram.assign(ram,ram+PS2_RAM_SIZE);
            rt->lookupFunction(c.pc)(ram,&c,rt.get());original.to_boundary();
            require(c.pc==Return&&c.pc==original.c.pc&&c.branch_pc==0x19a5bcu&&!c.in_delay_slot&&
                    reg(c,29)==sx((Stack|alias)+0xd0u)&&std::memcmp(c.r,original.c.r,sizeof(c.r))==0&&
                    c.hi==7&&c.lo==11&&c.hi1==13&&c.lo1==17&&
                    std::memcmp(ram,original.ram.data(),PS2_RAM_SIZE)==0,
                    "configuration tail original GPR128, packet fields, branch delay, frame or memory differs");
            ++configurationCases;
        }
        std::cout<<"PASS 45 configuration opcode guards, 1 owner conflict and "<<configurationCases<<" original-opcode configuration comparisons; not independent PCSX2 lockstep\n";
        for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u}) {
            constexpr uint32_t packet=Stack+0x88u;
            constexpr uint64_t saved=0xabcdef0012345678ull,reloaded=0xabcdef0012345644ull;
            c={};for(unsigned n=1;n<32;++n) {const uint64_t lanes[]{0x11220000ull+n,0x9988776655443300ull+n};std::memcpy(&c.r[n],lanes,16);}
            c.pc=0x19a510u;c.hi=7;c.lo=11;c.hi1=13;c.lo1=17;
            low(c,2,0x88u);low(c,18,packet|alias);low(c,29,Stack|alias);low(c,31,0x19a510u);
            std::memset(ram+Stack,0xa7,0x200);
            write(ram,Stack+0x20u,0x2857b0u|alias);write<uint64_t>(ram,0x2857b0u,0);
            for(unsigned n=0;n<8;++n) write(ram,Stack+0x30u+n*0x10u,0xabcdef0100000000ull+n);
            write<uint64_t>(ram,Stack+0xb0u,0x123456789abcdef0ull);write(ram,Stack+0xc0u,saved);
            write<uint64_t>(ram,packet+0x60u,0xfedcba9876543210ull);
            write<uint64_t>(ram,packet+0xe0u,0x987654321abcdef0ull);
            Original original;original.c=c;original.ram.assign(ram,ram+PS2_RAM_SIZE);
            rt->lookupFunction(c.pc)(ram,&c,rt.get());original.to_boundary();
            require(c.pc==static_cast<uint32_t>(reloaded)&&c.pc==original.c.pc&&
                    reg(c,31)==reloaded&&read<uint64_t>(ram,Stack+0xc0u)==reloaded&&
                    c.branch_pc==0x19a5bcu&&!c.in_delay_slot&&reg(c,29)==sx((Stack|alias)+0xd0u)&&
                    std::memcmp(c.r,original.c.r,sizeof(c.r))==0&&
                    c.hi==7&&c.lo==11&&c.hi1==13&&c.lo1==17&&
                    std::memcmp(ram,original.ram.data(),PS2_RAM_SIZE)==0,
                    "configuration packet/frame alias did not reload saved RA after SD or preserve complete state");
            for(unsigned n=1;n<32;++n)
                require(read<uint64_t>(reinterpret_cast<const uint8_t*>(c.r),16u*n+8u)==0x9988776655443300ull+n,
                        "configuration packet/frame alias changed upper64");
        }
        std::cout<<"PASS 4 configuration packet/saved-RA overlap aliases with post-SD reload and upper64 preservation\n";
        for(const uint64_t saved:{static_cast<uint64_t>(Return),0xabcdef0012345678ull,0xffffffff80001000ull,0ull}) {
            c={};for(unsigned n=1;n<32;++n) {const uint64_t lanes[]{0x11220000ull+n,0x99880000ull+n};std::memcpy(&c.r[n],lanes,16);}
            low(c,31,saved);low(c,29,Stack);c.pc=0x198c7cu;c.hi=7;c.lo=11;
            Original original;original.c=c;original.ram.assign(ram,ram+PS2_RAM_SIZE);
            rt->lookupFunction(c.pc)(ram,&c,rt.get());original.to_boundary();
            require(c.pc==static_cast<uint32_t>(saved)&&c.pc==original.c.pc&&c.branch_pc==0x198c7cu&&!c.in_delay_slot&&
                    reg(c,2)==6&&std::memcmp(c.r,original.c.r,sizeof(c.r))==0&&c.hi==7&&c.lo==11&&
                    std::memcmp(ram,original.ram.data(),PS2_RAM_SIZE)==0,"packet return PC, delay slot, GPR128 or memory differs");
        }
        std::cout<<"PASS 2 packet return opcode guards, 1 owner conflict and 4 original-opcode return comparisons\n";
        unsigned bufferCases=0;
        const std::array<std::array<int32_t,2>,6> bufferDimensions{{{640,224},{641,225},{0,0},{-64,-32},{-128,-128},{32767,-32768}}};
        for(const auto dimensions:bufferDimensions) for(const uint64_t format:{0ull,2ull})
        for(const uint64_t mode:{0ull,1ull,0xabcd0000beef0001ull,0x0000000100000001ull})
        for(const uint64_t condition:{0ull,1ull,0x100000000ull})
        for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u}) {
            c={};for(unsigned n=1;n<32;++n) {const uint64_t lanes[]{0x11220000ull+n,0x99880000ull+n};std::memcpy(&c.r[n],lanes,16);}
            c.pc=0x198918u;c.hi=0x1122334455667788ull;c.lo=0x8877665544332211ull;c.hi1=7;c.lo1=11;
            low(c,2,condition);low(c,3,sx(static_cast<uint32_t>(dimensions[0])+63u));low(c,4,UINT64_MAX);
            low(c,5,0x2857b0u|alias);low(c,16,sx(static_cast<uint32_t>(dimensions[0])+126u));
            low(c,17,format);low(c,18,sx(static_cast<uint32_t>(dimensions[1])));low(c,29,Stack|alias);
            write(ram,0x2857b0u,mode);write<uint64_t>(ram,Stack,0x123456789abcdef0ull);
            write<uint64_t>(ram,Stack+16u,0xfedcba9876543210ull);write<uint64_t>(ram,Stack+32u,0x1234000056780000ull);
            write<uint64_t>(ram,Stack+48u,0xabcdef0012345678ull);
            Original original;original.c=c;original.ram.assign(ram,ram+PS2_RAM_SIZE);
            rt->lookupFunction(c.pc)(ram,&c,rt.get());original.to_boundary();
            if(std::memcmp(c.r,original.c.r,sizeof(c.r))!=0) {
                for(unsigned n=0;n<32;++n) if(std::memcmp(&c.r[n],&original.c.r[n],16)!=0)
                    std::cerr<<"Buffer tail register mismatch case="<<bufferCases<<" register="<<n<<'\n';
            }
            require(c.pc==Return&&c.pc==original.c.pc&&c.branch_pc==0x198990u&&!c.in_delay_slot&&
                    reg(c,29)==sx((Stack|alias)+0x40u)&&std::memcmp(c.r,original.c.r,sizeof(c.r))==0&&
                    c.hi==original.c.hi&&c.lo==original.c.lo&&c.hi1==7&&c.lo1==11&&
                    std::memcmp(ram,original.ram.data(),PS2_RAM_SIZE)==0,
                    "original buffer tail GPR128, HI/LO, branch delay, saved frame or RAM differs");
            ++bufferCases;
        }
        std::cout<<"PASS 32 buffer opcode guards, 1 owner conflict and "<<bufferCases<<" original-opcode buffer tail comparisons; not independent PCSX2 lockstep\n";
        int priorId=0;
        c={};rt->eeScheduler().reset(ram,c);
        for(unsigned call=0;call<2;++call) {
            for(unsigned n=1;n<32;++n) {const uint64_t lanes[]{0x11220000ull+n,0x99880000ull+n};std::memcpy(&c.r[n],lanes,16);}
            low(c,4,2);low(c,5,IrqHandler);low(c,6,0xffffffffu);low(c,7,IrqArgument);low(c,28,Gp);low(c,29,Stack);
            low(c,31,0xabcdef0012345678ull);c.pc=0x1a4500u;auto before=c;
            rt->lookupFunction(c.pc)(ram,&c,rt.get());
            const int id=static_cast<int>(reg(c,2));
            require(id>priorId&&c.pc==Return&&c.branch_pc==0x1a4508u&&!c.in_delay_slot,"INTC id or original JR differs");
            priorId=id;low(before,3,16);
            for(unsigned n=0;n<32;++n) if(n!=2u)
                require(std::memcmp(&c.r[n],&before.r[n],16)==0,"INTC wrapper modified argument or upper lane");
            c.pc=0x1a4508u;low(c,2,0xabcdefu);low(c,3,0x123456u);before=c;
            rt->lookupFunction(c.pc)(ram,&c,rt.get());
            require(c.pc==Return&&std::memcmp(c.r,before.r,sizeof(c.r))==0,"INTC return tail repeated syscall");
        }
        require(priorId==2,"INTC return tail created an extra handler");
        require(rt->registerFunction(IrqHandler,irq_observer)&&rt->registerFunction(IrqWait,irq_wait)&&
                rt->registerFunction(IrqResume,irq_resume),"IRQ fixture registration failed");
        for(irqMode=0;irqMode<3;++irqMode) {
            c={};low(c,4,2);low(c,5,IrqHandler);low(c,6,0xffffffffu);low(c,7,IrqArgument);low(c,28,Gp);low(c,29,Stack);
            low(c,31,IrqWait);c.pc=0x1a4500u;irqCalls=0;irqStack=0;
            write<uint64_t>(ram,Stack-16u,0x1122334455667788ull);
            irqId=0;rt->eeScheduler().reset(ram,c);rt->eeScheduler().run();
            require(irqId>0,"INTC registration did not return an owned handler id");
            require(rt->eeScheduler().currentVSyncTick()>0,"IRQ lifecycle never processed scheduled VBLANK");
        }
        std::cout<<"PASS 4 INTC opcode guards, 2 owner conflicts, 2 wrapper registrations/returns and 3 scheduled IRQ lifecycle cases; original kernel clobbers/order unverified\n";
        for(const uint64_t pmode:{0ull,1ull,2ull,0x1234567800000000ull}) {
            c={};for(unsigned n=1;n<32;++n) {const uint64_t lanes[]{0x11220000ull+n,0x99880000ull+n};std::memcpy(&c.r[n],lanes,16);}
            low(c,4,1);low(c,5,2);low(c,6,1);low(c,31,Return);c.pc=0x1a4420u;
            auto expected=c;low(expected,3,2);low(expected,2,0);
            rt->memory().gs_regs.pmode=pmode;rt->memory().gs_regs.smode2=0;
            const std::vector<uint8_t> before(ram,ram+PS2_RAM_SIZE);
            rt->lookupFunction(c.pc)(ram,&c,rt.get());
            if(std::memcmp(c.r,expected.r,sizeof(c.r))!=0) {
                for(unsigned n=0;n<32;++n) if(std::memcmp(&c.r[n],&expected.r[n],16)!=0)
                    std::cerr<<"CRT register mismatch "<<n<<" actual="<<reg(c,n)<<" expected="<<reg(expected,n)<<'\n';
            }
            require(c.pc==Return&&c.branch_pc==0x1a4428u&&!c.in_delay_slot&&std::memcmp(c.r,expected.r,sizeof(c.r))==0,
                    "CRT wrapper numeric dispatch, upper lanes or JR delay differs");
            require(rt->memory().gs_regs.pmode==pmode&&rt->memory().gs_regs.smode2==3u&&std::memcmp(ram,before.data(),PS2_RAM_SIZE)==0,
                    "CRT HLE enabled output or modified guest RAM");
            c.pc=0x1a4428u;low(c,2,0xabcdefull);low(c,3,0x112233ull);
            rt->memory().gs_regs.smode2=0x55u;rt->lookupFunction(c.pc)(ram,&c,rt.get());
            require(c.pc==Return&&reg(c,2)==0xabcdefull&&reg(c,3)==0x112233ull&&rt->memory().gs_regs.smode2==0x55u,
                    "CRT return tail repeated syscall");
        }
        std::cout<<"PASS 4 original CRT wrapper dispatch/return cases and PMODE preservation; kernel clobbers and video timing remain unverified\n";
        for(const uint64_t base:{0x280000ull,0x80000000ull,0xfffffffeull,0x12345678280000ull}) {
            c={};low(c,2,base);low(c,31,Return);c.pc=0x19852cu;
            rt->lookupFunction(c.pc)(ram,&c,rt.get());
            require(reg(c,2)==sx(static_cast<uint32_t>(base)+0x57b0u)&&c.pc==Return&&
                    c.branch_pc==0x19852cu&&!c.in_delay_slot,"original GParam return width/delay differs");
        }
        std::cout<<"PASS 4 original GParam return cases\n";
        unsigned tailBoundaries=0;
        for(const uint64_t saved:{static_cast<uint64_t>(Return),0xabcdef0012345678ull})
        for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u}) {
            c={};for(unsigned n=1;n<32;++n) {const uint64_t lanes[]{0x11220000ull+n,0x99880000ull+n};std::memcpy(&c.r[n],lanes,16);}
            low(c,29,Stack|alias);write(ram,Stack,saved);c.pc=0x234444u;
            Original original;original.c=c;original.ram.assign(ram,ram+PS2_RAM_SIZE);
            rt->lookupFunction(c.pc)(ram,&c,rt.get());original.to_boundary();
            require(c.pc==0x199f50u&&reg(c,4)==0x2343b8u&&reg(c,31)==0x234450u&&
                    std::memcmp(c.r,original.c.r,sizeof(c.r))==0&&std::memcmp(ram,original.ram.data(),PS2_RAM_SIZE)==0,
                    "graphics allocator callback ABI or delay differs");++tailBoundaries;
            c.pc=0x234450u;low(c,2,0xffffffffffffffffull);auto expected=c;
            low(expected,2,0);low(expected,31,saved);low(expected,29,sx((Stack|alias)+16u));
            rt->lookupFunction(c.pc)(ram,&c,rt.get());
            require(c.pc==static_cast<uint32_t>(saved)&&c.branch_pc==0x234458u&&!c.in_delay_slot&&
                    std::memcmp(c.r,expected.r,sizeof(c.r))==0&&std::memcmp(ram,original.ram.data(),PS2_RAM_SIZE)==0,
                    "graphics allocator saved RA, SP alias or upper lanes differ");++tailBoundaries;
        }
        std::cout<<"PASS 8 graphics allocator tail scenarios / "<<tailBoundaries<<" ABI boundaries; external callback not executed\n";
        unsigned scenarios=0,boundaries=0;
        const std::array<int32_t,7> dimensions{640,641,-3,-4,0,INT32_MAX,INT32_MIN};
        for(const uint64_t flag:{0ull,1ull,0x100000000ull}) for(const uint32_t field:{0u,1u}) for(const int32_t width:dimensions) {
            const int32_t height=width==640?224:width;
            c={};for(unsigned n=1;n<32;++n) {const uint64_t lanes[]{0x11220000ull+n,0x99880000ull+n};std::memcpy(&c.r[n],lanes,16);}
            low(c,4,flag);low(c,5,static_cast<uint64_t>(static_cast<int64_t>(width)));low(c,6,static_cast<uint64_t>(static_cast<int64_t>(height)));
            low(c,7,0x1234);low(c,8,field?1u:0xffffu);low(c,28,Gp);low(c,29,Stack);low(c,31,Return);
            std::memset(ram+Stack,0x55,0x80);write(ram,Stack+0x50u,reg(c,31));
            std::memcpy(ram+Stack+0x40u,&c.r[20],16);std::memcpy(ram+Stack+0x30u,&c.r[19],16);
            low(c,20,flag);c.pc=0x180384u;
            write(ram,Gp-0x7850u,0x203694e0u);
            Original original;original.c=c;original.ram.assign(ram,ram+PS2_RAM_SIZE);original.csr=static_cast<uint64_t>(field)<<13u;
            rt->memory().gs_regs.csr.store(original.csr);
            unsigned calls=0;
            while(c.pc!=Return&&calls<12u) {
                const auto fn=rt->lookupFunction(c.pc);require(fn!=nullptr,"graphics resume is missing");
                fn(ram,&c,rt.get());original.to_boundary();
                if(c.pc!=original.c.pc||std::memcmp(c.r,original.c.r,sizeof(c.r))!=0||std::memcmp(ram,original.ram.data(),PS2_RAM_SIZE)!=0)
                    throw std::runtime_error("original opcode replay diverged at boundary "+std::to_string(boundaries));
                require(!c.in_delay_slot,"caller left delay state active");++boundaries;
                if(c.pc==Return) break;
                const auto callee=c.pc,ret=static_cast<uint32_t>(reg(c,31));
                const uint64_t result=callee==0x198528u?0x2857b0u:field;
                // External calls are observed, then resumed by the caller-only harness.
                low(c,2,result);low(original.c,2,result);c.pc=ret;original.c.pc=ret;++calls;
            }
            require(c.pc==Return&&reg(c,29)==Stack+0x60u,"graphics caller failed to restore its frame");++scenarios;
        }
        std::cout<<"PASS "<<scenarios<<" caller-only original-opcode scenarios and "<<boundaries<<" full GPR128/RAM boundary comparisons; not independent PCSX2 lockstep\n";
        for(uint32_t cause=0;cause<15u;++cause) {
            rt->Store32(ram,&c,0x1000f000u,0xffffffffu);
            rt->memory().raiseIntcInterrupt(cause);
            for(const uint32_t alias:{0u,0x80000000u,0xa0000000u})
                require(rt->Load32(ram,&c,0x1000f000u|alias)==(1u<<cause),"INTC event latch or alias differs");
            rt->Store32(ram,&c,0xb000f000u,0u);
            require(rt->Load32(ram,&c,0x1000f000u)==(1u<<cause),"zero acknowledgement cleared IRQ");
            rt->Store32(ram,&c,0x9000f000u,1u<<cause);
            require(rt->Load32(ram,&c,0x1000f000u)==0u,"IRQ acknowledgement failed to clear");
        }
        auto& ee=rt->eeScheduler();c={};c.pc=0x1a4cc0u;low(c,29,Stack);low(c,31,Return);write(ram,Stack,static_cast<uint64_t>(Return));
        ee.reset(ram,c);ee.setIrqCauseEnabled(false,2u,false);ee.dispatchIrq(false,2u);
        require(rt->Load32(ram,&c,0x1000f000u)==4u,"masked IRQ was not latched");
        rt->lookupFunction(c.pc)(ram,&c,rt.get());
        require(c.pc==0x1a4cf0u&&rt->Load32(ram,&c,0x1000f000u)==0u&&ee.currentVSyncTick()==0u,
                "original acknowledgement/poll escaped before processing VBLANK");
        require(rt->registerFunction(0x1ad460u,observe_poll_completion),"test observer registration failed");
        ee.reset(ram,c);ee.setIrqCauseEnabled(false,2u,false);ee.run();
        require(observedVblankTick>0u,"scheduled VBLANK was never observed");
        rt->Store32(ram,&c,0x1000f000u,4u);
        require((rt->Load32(ram,&c,0x1000f000u)&4u)==0u,"scheduled VBLANK acknowledgement failed");
        std::cout<<"PASS 15 INTC latch/ack cases, masked event, no-event poll and original poll released by native scheduled VBLANK tick="<<observedVblankTick<<" (stopped at next DI call)\n";
    } catch(const std::exception& error) {std::cerr<<"FAIL "<<error.what()<<'\n';return 1;}
}
