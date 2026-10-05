#include "fate/dma_init_continuation.hpp"
#include "fate/vif_init_continuation.hpp"
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
void require(bool ok,const char* message) { if(!ok) throw std::runtime_error(message); }
void setreg(R5900Context& c,unsigned n,uint64_t lo,uint64_t hi=0) {
    const uint64_t value[]{lo,hi};std::memcpy(&c.r[n],value,sizeof(value));
}
uint64_t reg(const R5900Context& c,unsigned n,unsigned half=0) {
    uint64_t value[2];std::memcpy(value,&c.r[n],sizeof(value));return value[half];
}
uint32_t word(const uint8_t* ram,uint32_t a) {uint32_t v;std::memcpy(&v,ram+a,4);return v;}
void word(uint8_t* ram,uint32_t a,uint32_t v) {std::memcpy(ram+a,&v,4);}
constexpr uint32_t Return=0x12345678u, Stack=0x60000u;
void run(PS2Runtime& rt,R5900Context& ctx) {
    for(unsigned n=0;n<1000u && ctx.pc!=Return;++n) {
        const auto f=rt.lookupFunction(ctx.pc);
        require(f!=nullptr,"original continuation missing");
        f(rt.memory().getRDRAM(),&ctx,&rt);
    }
    require(ctx.pc==Return,"original routine failed to return within the budget");
}
uint64_t sx32(uint32_t value) {
    return static_cast<uint64_t>(static_cast<int64_t>(std::bit_cast<int32_t>(value)));
}
void low(R5900Context& c,unsigned n,uint64_t value) {if(n) std::memcpy(&c.r[n],&value,8);}
struct SubmitReference {
    R5900Context c;
    std::vector<uint8_t> ram;
    template<class T> T read(uint32_t raw) const {
        const auto address=raw&0x1fffffffu;
        require(address<PS2_RAM_SIZE&&sizeof(T)<=PS2_RAM_SIZE-address,"submit reference read range");
        T value;std::memcpy(&value,ram.data()+address,sizeof(value));return value;
    }
    void store(uint32_t raw,uint32_t value) {
        const auto address=raw&0x1fffffffu;require(address<PS2_RAM_SIZE&&4u<=PS2_RAM_SIZE-address,"submit reference write range");
        std::memcpy(ram.data()+address,&value,4);
    }
    // Integer-only interpreter of the15 verified words, independent of runtime macros/MMIO.
    void execute() {
        for(unsigned steps=0;steps<20;++steps) {
            const auto pc=c.pc,w=read<uint32_t>(pc);const unsigned op=w>>26u,rs=w>>21u&31u,rt=w>>16u&31u,rd=w>>11u&31u;
            const auto imm=static_cast<int32_t>(std::bit_cast<int16_t>(static_cast<uint16_t>(w)));
            const auto address=static_cast<uint32_t>(reg(c,rs))+static_cast<uint32_t>(imm);
            if(op==0x15u) {
                require(w==0x54620001u,"reference BNEL word differs");
                if(reg(c,rs)!=reg(c,rt)) store(static_cast<uint32_t>(reg(c,16))+48u,static_cast<uint32_t>(reg(c,19)));
                c.pc=pc+8u;continue;
            }
            if(op==0&&(w&63u)==8u) {
                const auto target=static_cast<uint32_t>(reg(c,rs));
                low(c,29,sx32(static_cast<uint32_t>(reg(c,29))+80u));c.pc=target;return;
            }
            switch(op) {
            case 0x23u: low(c,rt,sx32(read<uint32_t>(address)));break;
            case 0x2bu: store(address,static_cast<uint32_t>(reg(c,rt)));break;
            case 0x37u: low(c,rt,read<uint64_t>(address));break;
            case 9u: low(c,rt,sx32(static_cast<uint32_t>(reg(c,rs))+static_cast<uint32_t>(imm)));break;
            case 13u: low(c,rt,reg(c,rs)|(w&0xffffu));break;
            case 0u: require((w&63u)==0x24u,"reference SPECIAL differs");low(c,rd,reg(c,rs)&reg(c,rt));break;
            default: throw std::runtime_error("unexpected submit reference instruction");
            }
            c.pc=pc+4u;
        }
        throw std::runtime_error("submit reference budget");
    }
};
void submit_contracts(PS2Runtime& rt,uint8_t* ram) {
    unsigned comparisons=0;
    const std::array<uint32_t,6> objects{0x70000u,Stack,Stack+0x10u,Stack+0x20u,Stack-0x10u,Stack+0x30u};
    const std::array<std::array<uint64_t,2>,4> branches{{{0u,0u},{0u,1ull<<32u},{UINT64_MAX,UINT64_MAX},{UINT64_MAX,0u}}};
    for(const auto object:objects) for(const auto branch:branches)
    for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u})
    for(const uint32_t initial:{0x0cu,0x8000800cu}) {
        std::memset(ram+Stack-0x20u,0x55,0xb0u);std::memset(ram+0x70000u,0x66,0x60u);
        const std::array<uint64_t,5> saved{0xaaaabbbbccccddddull,0x0102030405060708ull,0x1122334455667788ull,0xfedcba9876543210ull,Return};
        for(unsigned n=0;n<saved.size();++n) std::memcpy(ram+Stack+n*16u,&saved[n],8);
        word(ram,object,initial);word(ram,object+0x20u,0xdeadbeefu);word(ram,object+0x30u,0x87654321u);
        R5900Context c;for(unsigned n=1;n<32;++n) setreg(c,n,0x11110000ull+n,0x88880000ull+n);
        setreg(c,2,branch[0],0x88880002ull);setreg(c,3,branch[1],0x88880003ull);
        setreg(c,16,object|alias,0x88880010ull);setreg(c,19,0xabcdefff07500340ull,0x88880013ull);
        setreg(c,29,Stack|alias,0x8888001dull);c.pc=0x19aa4cu;c.hi=7;c.lo=11;c.hi1=13;c.lo1=17;
        SubmitReference original{c,std::vector<uint8_t>(ram,ram+PS2_RAM_SIZE)};
        rt.lookupFunction(c.pc)(ram,&c,&rt);original.execute();
        require(c.pc==original.c.pc&&std::memcmp(c.r,original.c.r,sizeof(c.r))==0&&
                std::memcmp(ram,original.ram.data(),PS2_RAM_SIZE)==0&&c.hi==7&&c.lo==11&&c.hi1==13&&c.lo1==17&&
                c.branch_pc==0x19aa80u&&!c.in_delay_slot,"submit original-opcode GPR128/RAM/frame alias or overlap differs");
        ++comparisons;
    }
    std::cout<<"PASS "<<comparisons<<" original-opcode submit GPR128/32MB RAM comparisons, including low64 BNEL and frame/write overlaps; not independent PCSX2 parity\n";
    unsigned vectorDifferences=0;
    auto checkVector=[&](const R5900Context& context) {
        if(context.pc!=0x80000180u) {
            ++vectorDifferences;std::cerr<<"FAIL EE general exception vector actual=0x"<<std::hex<<context.pc<<" expected=0x80000180 EPC=0x"<<context.cop0_epc<<std::dec<<'\n';
        }
    };
    R5900Context c;setreg(c,2,0);setreg(c,3,1);setreg(c,16,0x70001u);setreg(c,19,0x12345678);
    setreg(c,29,Stack);c.pc=0x19aa4cu;const auto before=c;const auto memoryBefore=std::vector<uint8_t>(ram,ram+PS2_RAM_SIZE);
    rt.lookupFunction(c.pc)(ram,&c,&rt);
    require(c.cop0_epc==0x19aa4cu&&((c.cop0_cause>>2u)&31u)==5u&&(c.cop0_cause>>31u)&&
            !c.in_delay_slot&&std::memcmp(c.r,before.r,sizeof(c.r))==0&&std::memcmp(ram,memoryBefore.data(),PS2_RAM_SIZE)==0,
            "taken submit BNEL delay store exception was lost");
    checkVector(c);
    c=before;low(c,3,0);c.pc=0x19aa4cu;const auto annulBefore=c;rt.lookupFunction(c.pc)(ram,&c,&rt);
    require(c.cop0_epc==0x19aa54u&&((c.cop0_cause>>2u)&31u)==4u&&!(c.cop0_cause>>31u)&&
            std::memcmp(c.r,annulBefore.r,sizeof(c.r))==0&&std::memcmp(ram,memoryBefore.data(),PS2_RAM_SIZE)==0,
            "annulled BNEL executed invalid delay store instead of following LW");
    checkVector(c);
    for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u}) {
        c={};setreg(c,2,0);setreg(c,3,0);setreg(c,16,0x70000u);setreg(c,29,(Stack|alias)+1u);
        word(ram,0x70000u,0x0cu);word(ram,0x70020u,0x55u);word(ram,0x70030u,0x88u);c.pc=0x19aa4cu;
        rt.lookupFunction(c.pc)(ram,&c,&rt);
        require(c.cop0_epc==0x19aa64u&&((c.cop0_cause>>2u)&31u)==4u&&!(c.cop0_cause>>31u)&&
                word(ram,0x70020u)==0&&word(ram,0x70000u)==0x0cu&&word(ram,0x70030u)==0x88u,
                "submit unaligned saved RA continued into DMA start");
        checkVector(c);
    }
    std::cout<<"PASS 6 submit delay/annul/alignment exception register/memory boundaries; EE vector mismatches="<<vectorDifferences<<'\n';
    auto& memory=rt.memory();memory.setGifArbiter(nullptr);
    rt.eeScheduler().reset(ram,c);
    constexpr uint32_t Channel=0x1000a000u,Packet=0x75000u;
    const std::array<uint8_t,32> payload{0x11,0x23,0x35,0x47,0x59,0x6b,0x7d,0x8f,0x91,0xa3,0xb5,0xc7,0xd9,0xeb,0xfd,0x0f,
                                         0xfe,0xdc,0xba,0x98,0x76,0x54,0x32,0x10,0x12,0x34,0x56,0x78,0x9a,0xbc,0xde,0xf0};
    unsigned dmaCases=0;
    for(const uint32_t alias:{0u,0x80000000u,0xa0000000u}) for(const bool enabled:{false,true}) {
        const uint64_t tag=0x70000002ull;std::memcpy(ram+Packet,&tag,8);std::memset(ram+Packet+8u,0,8);
        std::memcpy(ram+Packet+16u,payload.data(),payload.size());
        memory.writeIORegister(0x1000e000u,enabled?1u:0u);memory.writeIORegister(Channel,0x0cu);
        memory.writeIORegister(Channel+0x10u,0u);
        memory.writeIORegister(Channel+0x20u,0xdeadbeefu);memory.writeIORegister(Channel+0x30u,0x87654320u);
        const auto stat=memory.readIORegister(0x1000e010u);memory.writeIORegister(0x1000e010u,stat&0xffffu);
        const auto starts=memory.m_dmaStartCount.load();unsigned callbacks=0;std::vector<uint8_t> received;
        memory.setGifPacketCallback([&](const uint8_t* data,uint32_t size) {
            ++callbacks;received.assign(data,data+size);
            require(memory.readIORegister(Channel+0x20u)==0&&(memory.readIORegister(Channel)&0x100u),
                    "DMA consumed data before QWC clear/start ordering");
        });
        for(unsigned n=0;n<5;++n) {const uint64_t saved=n==4?Return:0x55550000ull+n;std::memcpy(ram+Stack+n*16u,&saved,8);}
        c={};for(unsigned n=1;n<32;++n) setreg(c,n,0x33330000ull+n,0x77770000ull+n);
        low(c,2,UINT64_MAX);low(c,3,0);low(c,16,Channel|alias);low(c,19,0x1234567800000000ull|Packet);low(c,29,Stack);c.pc=0x19aa4cu;
        rt.lookupFunction(c.pc)(ram,&c,&rt);
        std::cout<<"GIF fixture alias=0x"<<std::hex<<alias<<" enabled="<<enabled<<" pc="<<c.pc<<" SP="<<reg(c,29)
                 <<" TADR="<<memory.readIORegister(Channel+0x30u)<<" QWC="<<memory.readIORegister(Channel+0x20u)
                 <<" starts="<<memory.m_dmaStartCount.load()-starts<<" CHCR="<<memory.readIORegister(Channel)
                 <<" D_STAT="<<memory.readIORegister(0x1000e010u)<<" callbacks="<<callbacks<<std::dec<<'\n';
        require(c.pc==Return&&reg(c,29)==Stack+0x50u&&!c.in_delay_slot&&memory.readIORegister(Channel+0x30u)==Packet&&
                memory.readIORegister(Channel+0x20u)==0&&memory.m_dmaStartCount.load()==starts+(enabled?1u:0u),
                "submit GIF register owner/start/frame differs");
        require(callbacks==(enabled?1u:0u)&&received==(enabled?std::vector<uint8_t>(payload.begin(),payload.end()):std::vector<uint8_t>{}),
                "submit GIF chain payload did not reach actual memory callback owner");
        require((memory.readIORegister(Channel)&0x100u)==(enabled?0u:0x100u)&&
                (memory.readIORegister(0x1000e010u)&4u)==(enabled?4u:0u),"GIF completion was fabricated for disabled DMA or missing after transfer");
        require(memory.readIORegister(Channel+0x10u)==(enabled?Packet+48u:0u)&&
                (memory.readIORegister(0x10003020u)&0x1f000000u)==0u,"GIF consumed END payload lost MADR or retained drained FIFO count");
        for(unsigned n=1;n<32;++n) require(reg(c,n,1)==0x77770000ull+n,"submit GIF scalar clobbered upper64");
        ++dmaCases;
    }
    memory.setGifPacketCallback({});
    std::cout<<"PASS "<<dmaCases<<" actual GIF DMA chain owner cases across3 MMIO aliases, enabled/disabled, payload/order and completion; timing/GS rendering unverified\n";
    memory.setGifArbiter(&rt.gifArbiter());
    unsigned fifoPackets=0;
    rt.gifArbiter().setProcessPacketFn([&](const uint8_t* data,uint32_t size) {
        ++fifoPackets;require(size==payload.size()&&std::memcmp(data,payload.data(),payload.size())==0,"maskedGIF payload changed");
    });
    const std::array<uint32_t,1> maskCommand{0x06008000u},unmaskCommand{0x06000000u};
    memory.processVIF1Data(reinterpret_cast<const uint8_t*>(maskCommand.data()),4u);
    require(memory.isPath3Masked(),"maskedGIF fixture command failed");
    memory.m_ioRegisters[Channel]=0u;memory.m_ioRegisters[Channel+0x10u]=0u;
    memory.m_ioRegisters[Channel+0x20u]=0u;memory.m_ioRegisters[Channel+0x30u]=Packet;
    memory.m_ioRegisters[0x1000e000u]=1u;memory.m_ioRegisters[0x10003020u]=0u;
    memory.write32(Channel,0x105u);
    require(fifoPackets==0u&&(memory.read32(0x10003020u)&0x1f000000u)==0x02000000u,
            "maskedGIF discarded actual pendingFIFO count or consumed packets");
    memory.advanceEeTimers(10000u);
    require(fifoPackets==0u&&(memory.read32(0x10003020u)&0x1f000000u)==0x02000000u,
            "EE timer fabricated maskedGIF FIFO drain");
    memory.processVIF1Data(reinterpret_cast<const uint8_t*>(unmaskCommand.data()),4u);
    require(!memory.isPath3Masked()&&fifoPackets==1u&&(memory.read32(0x10003020u)&0x1f000000u)==0u&&rt.gifArbiter().empty(),
            "unmaskedGIF actualFIFO drain retained FQC or dropped packet");
    std::cout<<"PASS maskedGIF queue keepsFQC across timer advances, then actual unmask drain clearsFQC\n";
    require(vectorDifferences==0,"EE exception-vector mismatch remains open");
}
}

int main(int argc,char** argv) {
    try {
        require(argc==2,"usage: dma_init_contract original-XL.ELF");
        std::ifstream stream(argv[1],std::ios::binary);
        require(stream.good(),"original ELF unavailable");
        const std::vector<char> file{std::istreambuf_iterator<char>(stream),{}};
        const auto bytes=std::as_bytes(std::span(file));
        const auto elf=fate::elf::Image::parse(bytes);
        auto rt=std::make_unique<PS2Runtime>();
        require(rt->memory().initialize(PS2_RAM_SIZE) && rt->syncCoreSubsystems(),"runtime initialization");
        auto* ram=rt->memory().getRDRAM();
        elf.load_segments(bytes,std::as_writable_bytes(std::span(ram,PS2_RAM_SIZE)));
        const auto original=word(ram,0x19a6c4u);
        word(ram,0x19a6c4u,original^1u);
        bool rejected=false;
        try {fate::recomp::register_dma_init_continuations(*rt);} catch(const std::runtime_error&) {rejected=true;}
        require(rejected&&!rt->hasFunction(0x19a628u)&&!rt->hasFunction(0x19a6c4u),"mismatched opcode registered a continuation");
        word(ram,0x19a6c4u,original);
        for(uint32_t pc=0x19aa4cu;pc<0x19aa88u;pc+=4u) {
            const auto opcode=word(ram,pc);word(ram,pc,opcode^1u);rejected=false;
            try {fate::recomp::register_dma_init_continuations(*rt);} catch(const std::runtime_error&) {rejected=true;}
            require(rejected&&!rt->hasFunction(0x19aa4cu)&&!rt->hasFunction(0x19a6c4u),"submit opcode guard registered partially");
            word(ram,pc,opcode);
        }
        {
            auto conflict=std::make_unique<PS2Runtime>();require(conflict->memory().initialize(PS2_RAM_SIZE)&&conflict->syncCoreSubsystems(),"submit conflict runtime init");
            std::memcpy(conflict->memory().getRDRAM(),ram,PS2_RAM_SIZE);
            auto dummy=+[](uint8_t*,R5900Context*,PS2Runtime*){};
            require(conflict->registerFunction(0x19aa4cu,dummy),"submit conflict setup");rejected=false;
            try {fate::recomp::register_dma_init_continuations(*conflict);} catch(const std::runtime_error&) {rejected=true;}
            require(rejected&&conflict->lookupFunction(0x19aa4cu)==dummy&&!conflict->hasFunction(0x19a6c4u),"submit owner conflict replaced mapping");
            g_ps2RecompiledFunctionTable[0x19aa4cu/4u]=nullptr;
        }
        fate::recomp::register_dma_init_continuations(*rt);
        const auto registered=rt->lookupFunction(0x19a6c4u);
        rejected=false;
        try {fate::recomp::register_dma_init_continuations(*rt);} catch(const std::runtime_error&) {rejected=true;}
        require(rejected&&rt->lookupFunction(0x19a6c4u)==registered,"conflicting registration replaced existing code");
        require(!rt->hasFunction(0x19aa40u)&&!rt->hasFunction(0x19aa50u)&&!rt->hasFunction(0x19aa54u)&&!rt->hasFunction(0x19aa84u),
                "submit mapped prefix or unsafe interior resume");
        std::cout<<"PASS 15 submit opcode guards and1 owner conflict; only19AA4C registered\n";
        submit_contracts(*rt,ram);
        unsigned cases=2;
        R5900Context ctx{};
        for(uint32_t channel=0;channel<10u;++channel) {
            ctx={};setreg(ctx,2,0xeeee,0x2222);setreg(ctx,3,0x2857f0u+4u*channel,0x3333);setreg(ctx,31,Return,0x3131);
            ctx.pc=0x19a678u;run(*rt,ctx);
            require(reg(ctx,2)==word(ram,0x2857f0u+4u*channel)&&reg(ctx,2,1)==0x2222&&reg(ctx,3,1)==0x3333&&
                    ctx.branch_pc==0x19a678u&&!ctx.in_delay_slot,"original DMA channel pointer or return ABI differs");
        }
        ctx={};setreg(ctx,2,0xeeee,0x2222);setreg(ctx,31,Return);ctx.pc=0x19a680u;run(*rt,ctx);
        require(reg(ctx,2)==0&&reg(ctx,2,1)==0x2222&&ctx.branch_pc==0x19a680u,"invalid DMA channel return differs");
        word(ram,Stack,0x80000001u);ctx={};setreg(ctx,3,Stack);setreg(ctx,31,Return);ctx.pc=0x19a678u;run(*rt,ctx);
        require(reg(ctx,2)==0xffffffff80000001ull,"DMA channel LW did not sign-extend low64");
        std::cout<<"PASS 12 original DMA channel return cases\n";
        for(unsigned pattern=0;pattern<3;++pattern) for(uint32_t enabled=0;enabled<2;++enabled) for(uint32_t mode=0;mode<2;++mode) {
            std::array<uint32_t,10> active{};
            for(uint32_t n=0;n<10u;++n) {
                active[n]=pattern==0 ? 0u : pattern==1 ? 1u : n%2u;
                word(ram,0x285830u+n*4u,active[n]);
                const auto channel=word(ram,0x2857f0u+n*4u);
                for(const auto offset:{0x80u,0u,0x30u,0x10u,0x50u,0x40u}) rt->Store32(ram,&ctx,channel+offset,0x55u);
            }
            rt->Store32(ram,&ctx,0x1000e000u,0x1000u|enabled);
            const auto stat=rt->Load32(ram,&ctx,0x1000e010u);
            rt->Store32(ram,&ctx,0x1000e010u,(stat&0x3ff0000u)^0x3ff0000u);
            std::memset(ram+Stack,0xab,0x60u);
            const std::array<uint64_t,3> saved{0x3333444455556666ull,0x1111222233334444ull,Return};
            for(unsigned n=0;n<3;++n) std::memcpy(ram+Stack+0x20u+n*16u,&saved[n],8);
            ctx={};for(unsigned n=1;n<32;++n) setreg(ctx,n,0x9090909090909090ull,0x100u+n);
            setreg(ctx,2,active[0],0x102);setreg(ctx,3,0x2857f0,0x103);setreg(ctx,4,9,0x104);
            setreg(ctx,6,0x285830,0x106);setreg(ctx,16,mode,0x110);setreg(ctx,17,enabled,0x111);setreg(ctx,29,Stack,0x11d);
            ctx.pc=0x19a6c4;run(*rt,ctx);
            for(uint32_t n=0;n<10u;++n) {
                const auto channel=word(ram,0x2857f0u+n*4u);
                for(const auto offset:{0x80u,0u,0x30u,0x10u,0x50u,0x40u})
                    require(rt->Load32(ram,&ctx,channel+offset)==(active[n]?0u:0x55u),"selected/skipped DMA register differs");
            }
            require(rt->Load32(ram,&ctx,0x1000e000u)==(0x1000u|enabled|mode),"DMA enable state differs");
            require((rt->Load32(ram,&ctx,0x1000e010u)&0x3ff0000u)==0xe00000u,"DMA status mask toggle differs");
            require(reg(ctx,2)==enabled&&reg(ctx,16)==saved[0]&&reg(ctx,17)==saved[1]&&reg(ctx,31)==Return&&reg(ctx,29)==Stack+0x50u,"original return/frame state differs");
            for(unsigned n=1;n<32;++n) require(reg(ctx,n,1)==0x100u+n,"upper GPR lane changed");
            for(unsigned n=0;n<20;++n) require(ram[Stack+n]==0&&ram[0x285888u+n]==0,"DMA configuration not cleared/copied");
            require(ram[Stack+20u]==0xab&&!ctx.in_delay_slot&&ctx.branch_pc==0x19a75cu,"frame boundary or JR delay state differs");
            ++cases;
        }
        for(const uint32_t count:{0u,1u,20u}) {
            std::memset(ram+Stack,0xcd,32);ctx={};setreg(ctx,4,Stack,0x444);setreg(ctx,5,count,0x555);setreg(ctx,31,Return,0xaaa);
            ctx.pc=0x19a628;run(*rt,ctx);
            for(uint32_t n=0;n<count;++n) require(ram[Stack+n]==0,"clear helper omitted a byte");
            require(ram[Stack+count]==0xcd&&reg(ctx,4)==Stack+count&&reg(ctx,4,1)==0x444&&reg(ctx,5,1)==0x555&&reg(ctx,31,1)==0xaaa,"clear helper count or ABI changed");
            require(reg(ctx,2)==UINT64_MAX&&ctx.branch_pc==0x19a654u&&!ctx.in_delay_slot,"clear helper return differs");
            ++cases;
        }
        for(unsigned invalid=0;invalid<4;++invalid) {
            std::memset(ram+Stack,0,20);ram[Stack+invalid]=10;
            std::memset(ram+0x285888u,0xcd,20);
            rt->Store32(ram,&ctx,0x1000e000u,0x1001);
            ctx={};setreg(ctx,4,Stack);setreg(ctx,31,Return);ctx.pc=0x19a778;run(*rt,ctx);
            require(reg(ctx,2)==static_cast<uint64_t>(-static_cast<int64_t>(invalid+1u)),"DMA setter invalid-field error differs");
            require(rt->Load32(ram,&ctx,0x1000e000u)==0x1001u&&ram[0x285888u]==0xcd,"invalid DMA setting mutated state");
            ++cases;
        }
        for(const uint64_t live:{0ull,0x100000000ull}) {
            for(uint32_t n=0;n<10;++n) word(ram,0x285830u+n*4u,0u);
            const auto channel=word(ram,0x2857f0u);
            for(const auto offset:{0x80u,0u,0x30u,0x10u,0x50u,0x40u}) rt->Store32(ram,&ctx,channel+offset,0x55u);
            const uint64_t ret=Return;std::memcpy(ram+Stack+0x40u,&ret,8);
            ctx={};setreg(ctx,2,live,0xaabb);setreg(ctx,3,0x2857f0);setreg(ctx,4,9);
            setreg(ctx,6,0x285830);setreg(ctx,29,Stack);ctx.pc=0x19a6c4;run(*rt,ctx);
            for(const auto offset:{0x80u,0u,0x30u,0x10u,0x50u,0x40u})
                require(rt->Load32(ram,&ctx,channel+offset)==(live?0u:0x55u),"BEQL lost live low64 comparison or annulled pointer delay");
            require(reg(ctx,2,1)==0xaabb,"BEQL return clobbered upper lane");++cases;
        }
        unsigned combinations=0;
        for(uint8_t a=0;a<10;++a) for(uint8_t b=0;b<10;++b) for(uint8_t c=0;c<10;++c) for(uint8_t d=0;d<7;++d) {
            const uint32_t input=Stack+static_cast<uint32_t>(combinations%2u)*4u;
            const std::array<uint32_t,5> packed{
                static_cast<uint32_t>(a)|(static_cast<uint32_t>(b)<<8u)|(static_cast<uint32_t>(c)<<16u)|(static_cast<uint32_t>(d)<<24u),
                0x89abcdefu,0xFEDCBA98u,0x12345678u,0x87654321u};
            std::memcpy(ram+input,packed.data(),sizeof(packed));ram[0x28589cu]=0xee;
            constexpr uint32_t initial=0x543213ffu;
            rt->Store32(ram,&ctx,0x1000e000u,initial);
            uint32_t expected=(initial&~0x30u)|(static_cast<uint32_t>(ram[0x285858u+a])<<4u);
            expected=(expected&~0xc0u)|(static_cast<uint32_t>(ram[0x285868u+b])<<6u);
            expected=(expected&~0xcu)|(static_cast<uint32_t>(ram[0x285878u+c])<<2u);
            expected=d ? ((expected|2u)&~0x300u)|((static_cast<uint32_t>(d)-1u)<<8u) : expected&~2u;
            ctx={};setreg(ctx,4,input);setreg(ctx,31,Return);ctx.pc=0x19a778;run(*rt,ctx);
            require(reg(ctx,2)==0&&rt->Load32(ram,&ctx,0x1000e000u)==expected,"accepted DMA control fields differ");
            require(rt->Load32(ram,&ctx,0x1000e020u)==0xcdef89abu&&
                    rt->Load32(ram,&ctx,0x1000e030u)==0xFEDCBA98u&&
                    rt->Load32(ram,&ctx,0x1000e050u)==0x12345678u&&
                    rt->Load32(ram,&ctx,0x1000e040u)==0x87654321u,"accepted DMA parameter registers differ");
            require(std::memcmp(ram+0x285888u,packed.data(),sizeof(packed))==0&&ram[0x28589cu]==0xee,"LDL/LDR/SDL/SDR parameter copy or boundary differs");
            ++combinations;
        }
        std::cout<<"PASS "<<cases<<" DMA initialization contracts and "<<combinations
                 <<" parameter combinations using original ELF and native MMIO; not independent PCSX2 parity\n";
        const auto vifOriginal=word(ram,0x198580u);
        word(ram,0x198580u,vifOriginal^1u);rejected=false;
        try {fate::recomp::register_vif_init_continuation(*rt);} catch(const std::runtime_error&) {rejected=true;}
        require(rejected&&!rt->hasFunction(0x198580u),"mismatched VIF opcode registered");
        word(ram,0x198580u,vifOriginal);
        fate::recomp::register_vif_init_continuation(*rt);
        rejected=false;
        try {fate::recomp::register_vif_init_continuation(*rt);} catch(const std::runtime_error&) {rejected=true;}
        require(rejected,"duplicate VIF registration accepted");
        for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u}) {
            const auto quad=_mm_set_epi64x(0x1234567812345678ll,0x7654321076543210ll);
            rt->Store128(ram,&ctx,Stack|alias,quad);
            require(std::memcmp(ram+Stack,&quad,16)==0,"Store128 lost RAM alias write");
            std::memset(ram+Stack,0xcc,16);
        }
        const auto quad=_mm_set_epi64x(0x1234567812345678ll,0x7654321076543210ll);
        for(const uint32_t alias:{0x70000000u,0xf0000000u}) {
            rt->Store128(ram,&ctx,alias+0x3ff0u,quad);
            require(std::memcmp(rt->memory().getScratchpad()+0x3ff0u,&quad,16)==0,"Store128 scratchpad boundary or alias lost");
            std::memset(rt->memory().getScratchpad()+0x3ff0u,0,16);
        }
        struct VuRange {uint32_t base,size;uint8_t* data;};
        const std::array<VuRange,4> vuRanges{{
            {PS2_VU0_CODE_BASE,PS2_VU0_CODE_SIZE,rt->memory().getVU0Code()},
            {PS2_VU0_DATA_BASE,PS2_VU0_DATA_SIZE,rt->memory().getVU0Data()},
            {PS2_VU1_CODE_BASE,PS2_VU1_CODE_SIZE,rt->memory().getVU1Code()},
            {PS2_VU1_DATA_BASE,PS2_VU1_DATA_SIZE,rt->memory().getVU1Data()}}};
        for(const auto& range:vuRanges) for(const uint32_t alias:{0u,0x80000000u,0xa0000000u}) {
            const auto g0=rt->memory().getVU0CodeGeneration(),g1=rt->memory().getVU1CodeGeneration();
            rt->Store128(ram,&ctx,(range.base|alias)+range.size-16u,quad);
            require(std::memcmp(range.data+range.size-16u,&quad,16)==0,"Store128 VU boundary or alias lost");
            require(rt->memory().getVU0CodeGeneration()==g0+(range.base==PS2_VU0_CODE_BASE?1u:0u)&&
                    rt->memory().getVU1CodeGeneration()==g1+(range.base==PS2_VU1_CODE_BASE?1u:0u),"VU instruction-cache invalidation ownership differs");
            std::memset(range.data+range.size-16u,0,16);
        }
        for(const bool delay:{false,true}) {
            ctx={};ctx.pc=0x19858cu;ctx.branch_pc=0x198588u;ctx.in_delay_slot=delay;
            std::memset(ram+Stack,0x55,32);
            rt->Store128(ram,&ctx,Stack+1u,quad);
            require(((ctx.cop0_cause>>2u)&31u)==5u&&ctx.cop0_epc==(delay?0x198588u:0x19858cu)&&
                    ((ctx.cop0_cause>>31u)!=0u)==delay,"unaligned Store128 exception or delay attribution lost");
            for(unsigned n=0;n<32;++n) require(ram[Stack+n]==0x55,"unaligned Store128 changed memory");
        }
        std::cout<<"PASS 20 Store128 routing/exception cases (RAM4, scratchpad2, VU12, alignment2)\n";
        for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u}) {
            ctx={};setreg(ctx,5,0x2857c0u|alias,0x505);setreg(ctx,6,0x10005000,0x606);
            setreg(ctx,7,1,0x707);setreg(ctx,31,Return,0x3131);setreg(ctx,3,0,0x303);
            rt->Store32(ram,&ctx,0x10003c10u,1);
            rt->Store32(ram,&ctx,0x10003000u,0);
            ctx.pc=0x198580;run(*rt,ctx);
            std::cout<<"VIF source alias 0x"<<std::hex<<alias<<" CYCLE owner=0x"<<rt->memory().vif1_regs.cycle
                     <<" read=0x"<<rt->Load32(ram,&ctx,0x10003c40u)<<" CODE owner=0x"<<rt->memory().vif1_regs.code
                     <<" read=0x"<<rt->Load32(ram,&ctx,0x10003c80u)<<std::dec<<'\n';
            require(rt->memory().vif1_regs.cycle==0x0404u&&rt->memory().vif1_regs.code==0x04000000u,"original VIF packets did not reach the owning interpreter");
            require(rt->Load32(ram,&ctx,0x10003c40u)==0x0404u,"Store128 dropped original VIF1 STCYCL packet");
            require(rt->Load32(ram,&ctx,0x10003c80u)==0x04000000u,"second VIF1 packet or command ordering lost");
            require(rt->Load32(ram,&ctx,0x10003000u)==1u,"original GIF_CTRL return-delay write lost");
            require(std::memcmp(&ctx.r[4],ram+0x2857c0u,16)==0&&std::memcmp(&ctx.r[2],ram+0x2857d0u,16)==0,"VIF LQ lost full128-bit payload");
            require(reg(ctx,5)==(0x2857c0u|alias)&&reg(ctx,5,1)==0x505&&reg(ctx,6,1)==0x606&&reg(ctx,3,1)==0x303&&reg(ctx,31,1)==0x3131,"VIF continuation damaged untouched register lanes");
            require(ctx.branch_pc==0x198598u&&!ctx.in_delay_slot,"VIF return delay state differs");
        }
        std::cout<<"PASS Store128 aliases and original VIF packets across four source aliases\n";
        for(const uint32_t alias:{0u,0x80000000u,0xa0000000u}) {
            rt->Store32(ram,&ctx,0x10003c10u|alias,1);
            for(uint32_t n=0;n<8;++n) {
                const auto address=(0x10003d00u+n*16u)|alias;
                rt->Store32(ram,&ctx,address,0xdead0000u+n);
                require(rt->Load32(ram,&ctx,address)==0xdead0000u+n,"VIF row/col CPU write-read lost");
            }
            const std::array<uint32_t,16> commands{
                0x30000000u,1,2,3,4,0x31000000u,5,6,7,8,
                0x01001234u,0x05000002u,0x03000056u,0x02000078u,0x0400009au,0x870000bcu};
            rt->memory().processVIF1Data(reinterpret_cast<const uint8_t*>(commands.data()),static_cast<uint32_t>(sizeof(commands)));
            for(uint32_t n=0;n<8;++n)
                require(rt->Load32(ram,&ctx,(0x10003d00u+n*16u)|alias)==n+1u,"VIF commands left stale CPU row/col state");
            require(rt->Load32(ram,&ctx,0x10003c30u|alias)==0xbcu&&
                    rt->Load32(ram,&ctx,0x10003c40u|alias)==0x1234u&&
                    rt->Load32(ram,&ctx,0x10003c50u|alias)==2u&&
                    rt->Load32(ram,&ctx,0x10003c80u|alias)==0x870000bcu&&
                    rt->Load32(ram,&ctx,0x10003c90u|alias)==0x9au&&
                    rt->Load32(ram,&ctx,0x10003ca0u|alias)==0x56u&&
                    rt->Load32(ram,&ctx,0x10003cb0u|alias)==0x78u&&
                    rt->Load32(ram,&ctx,0x10003cc0u|alias)==0x56u,"VIF command register reads lost live state");
            require((rt->Load32(ram,&ctx,0x10003c00u|alias)&0x840u)==0x840u,"VIF MARK/IRQ state missing");
            rt->Store32(ram,&ctx,0x10003c10u|alias,1);
            require(rt->Load32(ram,&ctx,0x10003c40u|alias)==0&&rt->Load32(ram,&ctx,0x10003c80u|alias)==0&&
                    rt->Load32(ram,&ctx,0x10003d00u|alias)==0,"VIF reset retained stale registers");
        }
        std::cout<<"PASS VIF CPU/command/reset register coherence across three MMIO aliases\n";
    } catch(const std::exception& error) {std::cerr<<"FAIL "<<error.what()<<'\n';return 1;}
}
