#include "fate/pad_boot_continuation.hpp"
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
constexpr uint32_t Stack=0x70000u,Return=0x12345678u;
void require(bool ok,const char* text) {if(!ok) throw std::runtime_error(text);}
uint64_t reg(const R5900Context& c,unsigned n,unsigned half=0) {
    uint64_t values[2];std::memcpy(values,&c.r[n],16);return values[half];
}
void low(R5900Context& c,unsigned n,uint64_t value) {if(n) std::memcpy(&c.r[n],&value,8);}
void halves(R5900Context& c,unsigned n,uint64_t value,uint64_t high) {
    const uint64_t values[]{value,high};if(n) std::memcpy(&c.r[n],values,16);
}
uint64_t sx(uint32_t value) {return static_cast<uint64_t>(static_cast<int64_t>(std::bit_cast<int32_t>(value)));}
template<class T> T read(const uint8_t* ram,uint32_t address) {T value;std::memcpy(&value,ram+address,sizeof(value));return value;}
template<class T> void write(uint8_t* ram,uint32_t address,T value) {std::memcpy(ram+address,&value,sizeof(value));}
R5900Context fixture(uint8_t* ram,uint32_t pc,uint32_t alias=0) {
    std::memset(ram+Stack-0x20,0x55,0xc0);std::memset(ram+0x364000,0x66,0x1000);
    std::memset(ram+0x380000,0x77,0x100);
    R5900Context c{};
    for(unsigned n=1;n<32;++n) halves(c,n,0x12340000ull+n,0x8877665500000000ull+n);
    low(c,2,0x364530);low(c,4,16);low(c,5,4);low(c,16,0);low(c,17,0);low(c,18,0);low(c,19,0x364480u|alias);
    low(c,28,0x387900u|alias);low(c,29,Stack|alias);low(c,31,Return);
    for(unsigned n=0;n<4;++n) std::memcpy(ram+Stack+n*16,&c.r[16+n],16);
    write<uint64_t>(ram,Stack+0x40,Return);
    c.pc=pc;c.hi=3;c.hi1=5;c.lo=7;c.lo1=11;c.sa=13;return c;
}

// Test-only decoder reads the original ELF words; external callees are never executed by this oracle.
struct Original {
    R5900Context c;
    std::vector<uint8_t> ram;
    uint32_t address(uint32_t raw,size_t size) const {
        const uint32_t physical=raw&0x1fffffffu;
        require(physical<PS2_RAM_SIZE&&size<=PS2_RAM_SIZE-physical,"reference RAM range");
        require((raw&0xe0000000u)==0u||(raw&0xe0000000u)==0x20000000u||
                (raw&0xe0000000u)==0x80000000u||(raw&0xe0000000u)==0xa0000000u,"reference alias");
        return physical;
    }
    uint32_t word(uint32_t pc) const {return read<uint32_t>(ram.data(),pc);}
    void scalar(uint32_t w) {
        const unsigned op=w>>26,rs=w>>21&31,rt=w>>16&31,rd=w>>11&31,sa=w>>6&31;
        const auto imm=static_cast<int32_t>(std::bit_cast<int16_t>(static_cast<uint16_t>(w)));
        const auto source=reg(c,rs),value=reg(c,rt);
        const auto raw=static_cast<uint32_t>(source)+static_cast<uint32_t>(imm);
        switch(op) {
        case 0:
            switch(w&63u) {
            case 0: low(c,rd,sx(static_cast<uint32_t>(value)<<sa));break;
            case 3: low(c,rd,sx(static_cast<uint32_t>(std::bit_cast<int32_t>(static_cast<uint32_t>(value))>>sa)));break;
            case 0x21: low(c,rd,sx(static_cast<uint32_t>(source+value)));break;
            case 0x25: low(c,rd,source|value);break;
            case 0x2d: low(c,rd,source+value);break;
            default: throw std::runtime_error("reference SPECIAL");
            } break;
        case 9: low(c,rt,sx(static_cast<uint32_t>(source)+static_cast<uint32_t>(imm)));break;
        case 10: low(c,rt,std::bit_cast<int64_t>(source)<static_cast<int64_t>(imm)?1u:0u);break;
        case 11: low(c,rt,source<static_cast<uint64_t>(static_cast<int64_t>(imm))?1u:0u);break;
        case 12: low(c,rt,source&(w&0xffffu));break;
        case 13: low(c,rt,source|(w&0xffffu));break;
        case 15: low(c,rt,sx((w&0xffffu)<<16u));break;
        case 0x1e: if(rt) std::memcpy(&c.r[rt],ram.data()+address(raw&~15u,16),16);break;
        case 0x1f: std::memcpy(ram.data()+address(raw&~15u,16),&c.r[rt],16);break;
        case 0x23: low(c,rt,sx(read<uint32_t>(ram.data(),address(raw,4))));break;
        case 0x2b: write<uint32_t>(ram.data(),address(raw,4),static_cast<uint32_t>(value));break;
        case 0x37: low(c,rt,read<uint64_t>(ram.data(),address(raw,8)));break;
        default: throw std::runtime_error("reference scalar opcode");
        }
    }
    void boundary() {
        for(unsigned steps=0;steps<300;++steps) {
            const auto pc=c.pc,w=word(pc);const unsigned op=w>>26,rs=w>>21&31,rt=w>>16&31;
            const bool jr=op==0&&(w&63u)==8;
            const bool bgezl=op==1&&rt==3;
            if(op==3||jr||op==4||op==5||bgezl) {
                auto target=pc+8;bool taken=true;
                if(op==3) {target=((pc+4)&0xf0000000u)|((w&0x3ffffffu)<<2);low(c,31,sx(pc+8));}
                else if(jr) target=static_cast<uint32_t>(reg(c,rs));
                else {
                    taken=bgezl?std::bit_cast<int64_t>(reg(c,rs))>=0:
                        op==4?reg(c,rs)==reg(c,rt):reg(c,rs)!=reg(c,rt);
                    if(taken) target=pc+4+static_cast<uint32_t>(static_cast<int32_t>(std::bit_cast<int16_t>(static_cast<uint16_t>(w)))*4);
                }
                if(!bgezl||taken) {
                    c.pc=pc+4;c.branch_pc=pc;c.in_delay_slot=true;scalar(word(pc+4));c.in_delay_slot=false;
                }
                c.pc=target;
                if(op==3||jr||(taken&&target<pc)) return;
            } else {scalar(w);c.pc=pc+4;}
        }
        throw std::runtime_error("reference instruction budget");
    }
};
void compare(PS2Runtime& runtime,R5900Context& c,uint8_t* ram,unsigned& count) {
    const auto entry=c.pc;Original original{c,std::vector<uint8_t>(ram,ram+PS2_RAM_SIZE)};
    runtime.eeScheduler().reset(ram,c);runtime.eeScheduler().requestStop();
    require(runtime.hasFunction(entry),"missing owned continuation");
    runtime.lookupFunction(entry)(ram,&c,&runtime);original.boundary();
    if(c.pc!=original.c.pc||std::memcmp(c.r,original.c.r,sizeof(c.r))||
       std::memcmp(ram,original.ram.data(),PS2_RAM_SIZE)||c.hi!=original.c.hi||c.hi1!=original.c.hi1||
       c.lo!=original.c.lo||c.lo1!=original.c.lo1||c.sa!=original.c.sa||c.in_delay_slot)
        throw std::runtime_error("original boundary mismatch entry "+std::to_string(entry)+" case "+std::to_string(count)+" nativePC "+std::to_string(c.pc)+" expectedPC "+std::to_string(original.c.pc));
    ++count;
}
void guards(PS2Runtime& runtime,uint8_t* ram) {
    const auto words=fate::recomp::pad_boot_original_words();require(words.size()==116,"original range");
    for(unsigned n=0;n<words.size();++n) {
        const auto at=fate::recomp::PadBootStart+n*4;const auto old=read<uint32_t>(ram,at);write(ram,at,old^1u);bool rejected=false;
        try {fate::recomp::register_pad_boot_continuations(runtime);} catch(const std::runtime_error&) {rejected=true;}
        require(rejected,"changed original accepted");write(ram,at,old);
        for(const auto pc:fate::recomp::PadBootPcs) require(!runtime.hasFunction(pc),"partial registration after guard");
    }
    runtime.registerFunction(0x170c28,[](uint8_t*,R5900Context*,PS2Runtime*){});bool rejected=false;
    try {fate::recomp::register_pad_boot_continuations(runtime);} catch(const std::runtime_error&) {rejected=true;}
    require(rejected&&!runtime.hasFunction(0x170b24),"mapping conflict or partial registration");
    runtime.registerFunction(0x170c28,nullptr);fate::recomp::register_pad_boot_continuations(runtime);
    std::cout<<"PASS 116 original word guards and1 owner conflict\n";
}
void boundaries(PS2Runtime& runtime,uint8_t* ram) {
    unsigned count=0;
    for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u})
    for(const auto pc:fate::recomp::PadBootPcs)
    for(const uint64_t value:{0ull,1ull,59ull,60ull,0x100000001ull,UINT64_MAX}) {
        auto c=fixture(ram,pc,alias);low(c,18,value);
        if(pc!=0x170b24) low(c,2,value);
        if(pc==0x170ca4) low(c,17,0x80000001ull<<16);
        if(pc==0x170c6c) low(c,18,0);
        compare(runtime,c,ram,count);
    }
    std::cout<<"PASS "<<count<<" original GPR128/full32MB RAM boundary comparisons across4 aliases and retry/sign cases\n";
}
void paths(PS2Runtime& runtime,uint8_t* ram) {
    unsigned count=0;
    std::vector<std::pair<unsigned,unsigned>> scenarios;
    for(const unsigned init:{0u,2u,59u,60u,61u})
        for(const unsigned open:{0u,2u,60u}) scenarios.emplace_back(init,open);
    scenarios.emplace_back(0u,61u);
    for(const auto& [initReady,openReady]:scenarios) {
        auto c=fixture(ram,0x170b24);const auto before=c;
        unsigned initial=0,resetA=0,resetB=0,configure=0,modes=0;
        std::array<unsigned,2> opened{};
        for(unsigned steps=0;c.pc!=Return&&steps<1200;++steps) {
            if(runtime.hasFunction(c.pc)) {compare(runtime,c,ram,count);continue;}
            const auto target=c.pc;uint32_t result=0;
            switch(target) {
            case 0x1adda0: result=initial++>=initReady?1u:0u;break;
            case 0x199068: require(reg(c,4)==0,"wait argument");break;
            case 0x1711e0: require(reg(c,4)==0x364530u+resetA*0x22u,"first reset stride");++resetA;break;
            case 0x171130: require(reg(c,4)==0x364100u+resetB*0x1c0u,"second reset stride");++resetB;break;
            case 0x170d00: require(reg(c,4)==16&&reg(c,5)==4&&reg(c,31)==0x170bec,"external JAL ABI");++configure;break;
            case 0x1ae000:
                require(reg(c,4)<2&&reg(c,5)==0&&reg(c,6)==0x364100u+reg(c,4)*0x1c0u,"port open arguments");
                { const auto port=static_cast<unsigned>(reg(c,4));
                  const auto ready=openReady==61u?(port==0u?0u:60u):openReady;
                  result=opened[port]++>=ready?1u:0u; } break;
            case 0x1ae7b0:
                require(reg(c,4)==modes/2&&reg(c,5)==0&&reg(c,6)==modes%2+1&&reg(c,7)==0,"mode query arguments");
                result=0x8100u+modes++;break;
            default: throw std::runtime_error("unexpected external target "+std::to_string(target));
            }
            // Fixture responses exercise the caller; they do not certify the external PAD or wait services.
            low(c,2,sx(result));c.pc=static_cast<uint32_t>(reg(c,31));
        }
        require(c.pc==Return&&reg(c,29)==Stack+0x50,"caller did not restore return/stack");
        for(unsigned n=16;n<20;++n) require(std::memcmp(&c.r[n],&before.r[n],16)==0,"callee-saved GPR128 lost");
        if(initReady>=60) require(resetA==0&&opened[0]==0&&opened[1]==0&&modes==0&&reg(c,2)==0,"init timeout did not terminate");
        else {
            require(resetA==2&&resetB==2&&configure==1,"reset/configure call counts");
            require((openReady>=60&&modes==0&&reg(c,2)==0)||(openReady<60&&modes==4&&reg(c,2)==1),"port timeout or success path");
            if(openReady<60) require(opened[0]==openReady+1&&opened[1]==openReady+1,"per-port retry counter not reset");
            if(openReady==61) require(opened[0]==1&&opened[1]==61,"second-port timeout not exercised");
        }
    }
    std::cout<<"PASS 16 caller paths, "<<count<<" compared boundaries; retry/timeout on each port, external dispatch and GPR128 restore\n";
}
void quadword_alignment(PS2Runtime& runtime,uint8_t* ram) {
    unsigned count=0;
    for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u})
    for(unsigned offset=0;offset<16;++offset) {
        auto c=fixture(ram,0x170b24,alias);low(c,29,(Stack|alias)+offset);compare(runtime,c,ram,count);
        c=fixture(ram,0x170cdc,alias);low(c,29,(Stack|alias)+offset);compare(runtime,c,ram,count);
    }
    std::cout<<"PASS "<<count<<" SQ/LQ align-down comparisons across4 aliases, including nonzero low4 bits\n";
}
void overlapping_memory(PS2Runtime& runtime,uint8_t* ram) {
    unsigned count=0;
    for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u})
    for(const uint32_t offset:{0u,8u,0x38u}) {
        auto c=fixture(ram,0x170b24,alias);low(c,28,((Stack+offset)|alias)+0x78c8u);compare(runtime,c,ram,count);
        c=fixture(ram,0x170ca4,alias);low(c,19,(Stack+offset)|alias);low(c,16,1);compare(runtime,c,ram,count);
    }
    std::cout<<"PASS "<<count<<" GP/structure aliases of saved registers and RA; original store/load ordering retained\n";
}
void faults(PS2Runtime& runtime,uint8_t* ram) {
    unsigned count=0;
    for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u}) {
        auto c=fixture(ram,0x170cd8,alias);low(c,29,(Stack|alias)+1);const auto before=c;
        const std::vector<uint8_t> bytes(ram,ram+PS2_RAM_SIZE);
        runtime.lookupFunction(c.pc)(ram,&c,&runtime);
        require(c.pc==0x80000180u&&c.cop0_epc==0x170cd8&&((c.cop0_cause>>2)&31)==4&&!(c.cop0_cause>>31),"LD exception owner");
        require(c.cop0_badvaddr==((Stack|alias)+0x41),"LD BadVAddr lost");
        require(!std::memcmp(ram,bytes.data(),PS2_RAM_SIZE)&&!std::memcmp(c.r,before.r,sizeof(c.r)),"LD fault side effects");++count;
        c=fixture(ram,0x170b60,alias);low(c,29,(Stack|alias)+1);low(c,18,60);low(c,2,0);
        runtime.lookupFunction(c.pc)(ram,&c,&runtime);
        require(c.pc==0x80000180u&&c.cop0_epc==0x170b84&&((c.cop0_cause>>2)&31)==4&&(c.cop0_cause>>31)&&
                c.cop0_badvaddr==((Stack|alias)+0x41)&&reg(c,31)==Return,"delay-slot LD fault lost EPC/BD/BadVAddr/RA");++count;
        c=fixture(ram,0x170ca4,alias);low(c,19,(Stack|alias)+1);
        runtime.lookupFunction(c.pc)(ram,&c,&runtime);
        require(c.pc==0x80000180u&&c.cop0_epc==0x170cac&&((c.cop0_cause>>2)&31)==5&&!(c.cop0_cause>>31)&&
                c.cop0_badvaddr==((Stack|alias)+9),"SW BadVAddr lost");++count;
        c=fixture(ram,0x170b24,alias);runtime.Load32(ram,&c,(Stack|alias)+1);
        require(c.pc==0x80000180u&&((c.cop0_cause>>2)&31)==4&&c.cop0_badvaddr==((Stack|alias)+1),"Load32 API BadVAddr lost");++count;
    }
    std::cout<<"PASS "<<count<<" LD/SW and Load32 API faults including delay-slot EPC/BD/BadVAddr and load destination preservation\n";
}
R5900Context init_fixture(uint8_t* ram,uint32_t pc,uint32_t alias=0) {
    auto c=fixture(ram,pc,alias);
    std::memset(ram+0x74000,0,0x100);
    low(c,16,0x74000u|alias);low(c,17,0x74000u|alias);low(c,18,0);
    if(pc==0x1addd0||pc==0x1addd8) low(c,17,(0x74000u|alias)-0x5c80);
    for(unsigned n=0;n<3;++n) write<uint64_t>(ram,Stack+n*16,reg(c,16+n));
    write<uint64_t>(ram,Stack+0x30,Return);write<uint32_t>(ram,0x287214,0);
    return c;
}
void init_contracts(PS2Runtime& runtime,uint8_t* ram) {
    const auto words=fate::recomp::pad_init_original_words();require(words.size()==68,"init original range");
    for(unsigned n=0;n<words.size();++n) {
        const auto at=fate::recomp::PadInitStart+n*4;const auto old=read<uint32_t>(ram,at);write(ram,at,old^1u);bool rejected=false;
        try {fate::recomp::register_pad_init_continuations(runtime);} catch(const std::runtime_error&) {rejected=true;}
        require(rejected,"changed init word accepted");write(ram,at,old);
        for(const auto pc:fate::recomp::PadInitPcs) require(!runtime.hasFunction(pc),"partial init registration");
    }
    runtime.registerFunction(0x1ade60,[](uint8_t*,R5900Context*,PS2Runtime*){});bool rejected=false;
    try {fate::recomp::register_pad_init_continuations(runtime);} catch(const std::runtime_error&) {rejected=true;}
    require(rejected&&!runtime.hasFunction(0x1ade0c),"init mapping conflict");
    runtime.registerFunction(0x1ade60,nullptr);fate::recomp::register_pad_init_continuations(runtime);
    unsigned count=0;
    for(const auto pc:fate::recomp::PadInitPcs)
    for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u})
    for(const uint64_t value:{0ull,1ull,0x400ull,0x401ull,0x300ull,0x80000000ull,0x100000401ull})
    for(const uint32_t server:{0u,1u}) {
        auto c=init_fixture(ram,pc,alias);low(c,2,value);
        write(ram,0x74024,server);write(ram,0x7404c,server);write(ram,0x287214,server);
        compare(runtime,c,ram,count);
    }
    std::cout<<"PASS 68 init word guards,1 owner conflict and "<<count<<" init GPR128/full32MB RAM boundaries\n";
    unsigned calls=0;
    for(const uint32_t version:{0x400u,0x401u,0x300u,0x80000000u})
    for(const uint32_t debug:{0u,1u}) {
        auto c=init_fixture(ram,0x1ade0c);const auto before=c;
        write(ram,0x74024,1u);write(ram,0x287214,debug);unsigned binds=0,prints=0,initializes=0;
        for(unsigned step=0;c.pc!=Return&&step<30;++step) {
            if(runtime.hasFunction(c.pc)) {compare(runtime,c,ram,calls);continue;}
            uint32_t result=0;
            switch(c.pc) {
            case 0x1a76d8:
                require(reg(c,4)==0x74028&&reg(c,5)==sx(0x80000101u)&&reg(c,6)==0,"second PAD BindRpc ABI");
                write(ram,0x7404c,1u);++binds;break;
            case 0x1aef50: result=version;break;
            case 0x23b8b8: require(reg(c,4)==(prints==0?0x2ca840u:0x2ca868u),"version warning format");++prints;break;
            case 0x1adee0: require(reg(c,4)==0&&reg(c,31)==0x1adec8,"init call continuation ABI");result=7;++initializes;break;
            default: throw std::runtime_error("unexpected init callee");
            }
            low(c,2,sx(result));c.pc=static_cast<uint32_t>(reg(c,31));
        }
        const bool compatible=(version>>8)==4;
        require(c.pc==Return&&reg(c,29)==Stack+0x40&&binds==1,"init return/bind/stack");
        require(prints==(compatible?0u:debug*2u)&&initializes==(compatible?1u:0u)&&reg(c,2)==(compatible?7u:0u),"version path or fabricated init return");
        for(unsigned n=16;n<19;++n) require(!std::memcmp(&c.r[n],&before.r[n],16),"init saved register width");
    }
    for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u}) {
        auto c=init_fixture(ram,0x1ade0c,alias);low(c,16,(0x74000u|alias)+1);const auto before=c;
        runtime.lookupFunction(c.pc)(ram,&c,&runtime);
        require(c.pc==0x80000180u&&c.cop0_epc==0x1ade0c&&c.cop0_badvaddr==((0x74000u|alias)+0x25)&&
                ((c.cop0_cause>>2)&31)==4&&!std::memcmp(&c.r[3],&before.r[3],16),"init LW fault state");
    }
    std::cout<<"PASS 8 init/version caller paths ("<<calls<<" boundaries),4 original LW faults; external services are fixtures\n";
}
R5900Context version_fixture(uint8_t* ram,uint32_t pc,uint32_t alias=0) {
    auto c=fixture(ram,pc,alias);
    low(c,16,0x74000u|alias);
    write<uint64_t>(ram,Stack+0x20,Return);
    write<uint64_t>(ram,Stack+0x10,0x8765432101234567ull);
    return c;
}
void version_contracts(PS2Runtime& runtime,uint8_t* ram) {
    const auto words=fate::recomp::pad_version_original_words();require(words.size()==7,"version range");
    for(unsigned n=0;n<words.size();++n) {
        const auto at=fate::recomp::PadVersionStart+n*4,old=read<uint32_t>(ram,at);write(ram,at,old^1u);
        bool rejected=false;
        try {fate::recomp::register_pad_version_continuations(runtime);} catch(const std::runtime_error&) {rejected=true;}
        require(rejected,"changed version word accepted");write(ram,at,old);
        for(const auto pc:fate::recomp::PadVersionPcs) require(!runtime.hasFunction(pc),"partial version registration");
    }
    runtime.registerFunction(0x1aefa4,[](uint8_t*,R5900Context*,PS2Runtime*){});bool rejected=false;
    try {fate::recomp::register_pad_version_continuations(runtime);} catch(const std::runtime_error&) {rejected=true;}
    require(rejected&&!runtime.hasFunction(0x1aef98),"version mapping conflict");
    runtime.registerFunction(0x1aefa4,nullptr);fate::recomp::register_pad_version_continuations(runtime);
    unsigned count=0,annuls=0,faultCount=0;
    for(const auto pc:fate::recomp::PadVersionPcs)
    for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u})
    for(const uint64_t result:{0ull,1ull,0x80000000ull,0x100000000ull,0xffffffff00000000ull,0x8000000000000001ull,UINT64_MAX})
    for(const uint32_t version:{0u,0x403u,0x80000000u,0xffffffffu}) {
        auto c=version_fixture(ram,pc,alias);low(c,2,result);write(ram,0x7400c,version);
        compare(runtime,c,ram,count);
    }
    for(const uint32_t alias:{0u,0x20000000u,0x80000000u,0xa0000000u}) {
        auto skipped=version_fixture(ram,0x1aef98,alias);low(skipped,16,0x02000000u|alias);low(skipped,2,UINT64_MAX);
        compare(runtime,skipped,ram,annuls);
        for(const uint32_t buffer:{0x74001u,0x74002u}) {
            auto c=version_fixture(ram,0x1aef98,alias);low(c,16,buffer|alias);low(c,2,UINT64_MAX);
            compare(runtime,c,ram,annuls);require(reg(c,2)==0&&c.pc==Return,"negative RPC did not annul LW");
            c=version_fixture(ram,0x1aef98,alias);low(c,16,buffer|alias);low(c,2,0x80000000ull);const auto before=c;
            const std::vector<uint8_t> bytes(ram,ram+PS2_RAM_SIZE);
            runtime.lookupFunction(c.pc)(ram,&c,&runtime);
            require(c.pc==0x80000180u&&c.cop0_epc==0x1aef98&&((c.cop0_cause>>2)&31)==4&&(c.cop0_cause>>31)&&
                    c.cop0_badvaddr==((buffer|alias)+12),"version LW delay EPC/BD/BadVAddr");
            require(!std::memcmp(c.r,before.r,sizeof(c.r))&&!std::memcmp(ram,bytes.data(),PS2_RAM_SIZE),"version LW fault mutated registers/RAM");
            ++faultCount;
        }
        for(const auto pc:{0x1aefa4u,0x1aefa8u}) {
            auto c=version_fixture(ram,pc,alias);low(c,29,(Stack|alias)+1);const auto before=c;
            runtime.lookupFunction(c.pc)(ram,&c,&runtime);
            require(c.pc==0x80000180u&&c.cop0_epc==pc&&((c.cop0_cause>>2)&31)==4&&!(c.cop0_cause>>31)&&
                    c.cop0_badvaddr==((Stack|alias)+1+(pc==0x1aefa4?32u:16u))&&
                    !std::memcmp(c.r,before.r,sizeof(c.r)),"version LD fault restored register or lost exception state");
            ++faultCount;
        }
    }
    std::cout<<"PASS 7 version word guards,1 owner conflict,"<<count<<" GPR128/RAM comparisons,"<<annuls<<" annuls,"<<faultCount<<" load faults\n";
}
}
int main(int argc,char** argv) {
    try {
        require(argc==2,"usage: pad_boot_contract original-XL.ELF");
        std::ifstream file(argv[1],std::ios::binary);require(file.good(),"original ELF unavailable");
        const std::vector<char> bytes{std::istreambuf_iterator<char>(file),{}};
        const auto image=fate::elf::Image::parse(std::as_bytes(std::span(bytes)));
        auto runtime=std::make_unique<PS2Runtime>();require(runtime->memory().initialize(PS2_RAM_SIZE),"RAM initialization");
        auto* ram=runtime->memory().getRDRAM();image.load_segments(std::as_bytes(std::span(bytes)),{reinterpret_cast<std::byte*>(ram),PS2_RAM_SIZE});
        guards(*runtime,ram);faults(*runtime,ram);quadword_alignment(*runtime,ram);overlapping_memory(*runtime,ram);boundaries(*runtime,ram);paths(*runtime,ram);init_contracts(*runtime,ram);
        version_contracts(*runtime,ram);
        std::cout<<"PASS pad boot continuation contracts; no independent PCSX2/PAD timing or gameplay parity claim\n";
    } catch(const std::exception& e) {std::cerr<<"FAIL "<<e.what()<<'\n';return 1;}
}
