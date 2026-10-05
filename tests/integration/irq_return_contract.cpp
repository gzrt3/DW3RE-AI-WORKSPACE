#include "fate/irq_return_continuation.hpp"
#include "fate/elf.hpp"
#include "ps2_runtime.h"
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
void require(bool value,const char* message) {if(!value) throw std::runtime_error(message);}
uint64_t low(const R5900Context& c,unsigned n) {uint64_t v;std::memcpy(&v,&c.r[n],8);return v;}
void set(R5900Context& c,unsigned n,uint64_t v) {std::memcpy(&c.r[n],&v,8);}
uint64_t sx(uint32_t v) {return static_cast<uint64_t>(static_cast<int64_t>(std::bit_cast<int32_t>(v)));}
R5900Context fixture(uint32_t sp,uint32_t status) {
    R5900Context c{};
    for(unsigned n=1;n<32;++n) {
        const uint64_t lanes[]{0x123456789abcdef0ull+n,0xfedcba9876543210ull+n};
        std::memcpy(&c.r[n],lanes,16);
    }
    set(c,29,sx(sp));c.pc=0x234400u;c.cop0_status=status;return c;
}
// Decode the seven verified original words; do not call the runtime macros.
void original(R5900Context& c,const uint8_t* ram) {
    while(c.pc>=0x234400u&&c.pc<=0x234410u) {
        uint32_t word;std::memcpy(&word,ram+c.pc,4);
        if(word==0x42000038u) {
            const bool edi=(c.cop0_status>>17u)&1u,exl=(c.cop0_status>>1u)&1u,erl=(c.cop0_status>>2u)&1u;
            const auto ksu=(c.cop0_status>>3u)&3u;
            if(edi||exl||erl||ksu==0u) c.cop0_status|=1u<<16u;
        } else {
            require(word>>26u==0x37u,"unexpected original LD");
            const auto rs=word>>21u&31u,rt=word>>16u&31u;
            const auto address=static_cast<uint32_t>(low(c,rs))+static_cast<uint32_t>(static_cast<int32_t>(static_cast<int16_t>(word)));
            uint64_t value;std::memcpy(&value,ram+(address&0x1fffffffu),8);set(c,rt,value);
        }
        c.pc+=4u;
    }
    uint32_t jr,delay;std::memcpy(&jr,ram+c.pc,4);std::memcpy(&delay,ram+c.pc+4u,4);
    require(jr==0x03e00008u&&delay==0x27bd0020u,"unexpected original return");
    c.branch_pc=c.pc;c.pc=static_cast<uint32_t>(low(c,31));set(c,29,sx(static_cast<uint32_t>(low(c,29))+0x20u));
}
}
int main(int argc,char** argv) {
    try {
        require(argc==2,"usage: irq_return_contract original-XL.ELF");
        std::ifstream stream(argv[1],std::ios::binary);require(stream.good(),"missing original ELF");
        const std::vector<char> bytes{std::istreambuf_iterator<char>(stream),{}};
        const auto image=fate::elf::Image::parse(std::as_bytes(std::span(bytes)));
        auto runtime=std::make_unique<PS2Runtime>();require(runtime->memory().initialize(PS2_RAM_SIZE),"RAM init failed");
        auto* ram=runtime->memory().getRDRAM();image.load_segments(std::as_bytes(std::span(bytes)),{reinterpret_cast<std::byte*>(ram),PS2_RAM_SIZE});
        const auto words=fate::recomp::irq_return_original_words();
        require(std::memcmp(ram+0x234400u,words.data(),words.size_bytes())==0,"original opcode mismatch");
        for(unsigned i=0;i<words.size();++i) {
            ram[0x234400u+4u*i]^=1;bool rejected=false;
            try {fate::recomp::register_irq_return_continuation(*runtime);} catch(const std::runtime_error&) {rejected=true;}
            ram[0x234400u+4u*i]^=1;
            require(rejected&&!runtime->hasFunction(0x234400u),"word guard mutated registration");
        }
        fate::recomp::register_irq_return_continuation(*runtime);const auto handler=runtime->lookupFunction(0x234400u);
        bool rejected=false;
        try {fate::recomp::register_irq_return_continuation(*runtime);} catch(const std::runtime_error&) {rejected=true;}
        require(rejected&&handler==runtime->lookupFunction(0x234400u),"owner conflict lost handler");
        const std::array<uint64_t,4> saved{0xabcdefab12345678ull,0xdeadbeef87654321ull,UINT64_MAX,0xabcdef0010012340ull};
        std::memcpy(ram+0x70000u,saved.data(),sizeof(saved));
        const std::vector<uint8_t> beforeRam(ram,ram+PS2_RAM_SIZE);
        unsigned comparisons=0,faults=0;
        for(const auto alias:{0u,0x20000000u,0x80000000u,0xa0000000u}) {
            for(unsigned bits=0;bits<128;++bits) {
                const uint32_t status=0x40000001u|(bits&15u)<<1u|(bits&16u)<<12u|(bits&32u)<<12u|(bits&64u)<<16u;
                auto c=fixture(alias|0x70000u,status),expected=c;original(expected,ram);
                handler(ram,&c,runtime.get());
                require(std::memcmp(c.r,expected.r,sizeof(c.r))==0&&c.pc==expected.pc&&c.branch_pc==expected.branch_pc&&
                    !c.in_delay_slot&&c.cop0_status==expected.cop0_status,"IRQ return differs from original words");
                require(std::memcmp(ram,beforeRam.data(),PS2_RAM_SIZE)==0,"IRQ return changed RAM");++comparisons;
            }
            auto c=fixture(alias|0x70001u,0x40000000u),before=c;handler(ram,&c,runtime.get());
            require(c.pc==0x80000180u&&c.cop0_epc==0x234404u&&((c.cop0_cause>>2u)&31u)==4u&&
                (c.cop0_cause>>31u)==0u&&!c.in_delay_slot&&std::memcmp(c.r,before.r,sizeof(c.r))==0,
                "faulting LD overwrote register or lost exception");++faults;
        }
        std::cout<<"PASS "<<comparisons<<" original-opcode IRQ return comparisons (GPR128, status, PC, RAM), "<<faults
            <<" alignment exceptions,7 opcode guards,1 owner conflict; IRQ timing and PCSX2 parity unverified\n";
    } catch(const std::exception& error) {std::cerr<<"FAIL "<<error.what()<<'\n';return 1;}
}
