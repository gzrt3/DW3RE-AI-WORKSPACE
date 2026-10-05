#include "ps2_runtime.h"
#include "ps2_stubs.h"
#include "runtime/ee_scheduler.h"
#include <array>
#include <cstring>
#include <iostream>
#include <memory>
#include <stdexcept>

extern const uint32_t g_ps2RecompiledFunctionTableBase=0;
extern const uint32_t g_ps2RecompiledFunctionTableEnd=PS2_RAM_SIZE;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount=PS2_RAM_SIZE/4;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[PS2_RAM_SIZE/4]{};
namespace {
constexpr uint32_t Entry=0x110000u, Verify=Entry+4u, Incoming=Entry+8u, Outgoing=Entry+12u;
unsigned incoming=0,outgoing=0;
bool enabled=true,valid=true;
int sema=-1;
uint32_t reg(const R5900Context& c,unsigned n) {uint32_t v;std::memcpy(&v,&c.r[n],4);return v;}
void low(R5900Context& c,unsigned n,uint32_t v) {const uint64_t value=v;std::memcpy(&c.r[n],&value,8);}
void require(bool ok,const char* message) {if(!ok) throw std::runtime_error(message);}
void onIncoming(uint8_t*,R5900Context* c,PS2Runtime* r) {
    ++incoming;r->eeScheduler().signalSemaphore(sema,true);c->pc=reg(*c,31);
}
void onOutgoing(uint8_t*,R5900Context* c,PS2Runtime*) {++outgoing;c->pc=reg(*c,31);}
void submit(uint8_t* ram,R5900Context* c,PS2Runtime* r) {
    const std::array<uint32_t,4> descriptor{0x80000u,valid?0x40000u:0x200000u,16u,0u};
    std::memcpy(ram+0x70000u,descriptor.data(),sizeof(descriptor));
    for(unsigned i=0;i<16u;++i)ram[0x80000u+i]=static_cast<uint8_t>(i+1u);
    low(*c,4,0x70000u);low(*c,5,1u);
    ps2_stubs::sceSifSetDma(ram,c,r);
    require((reg(*c,2)!=0u)==valid,"DMA submission result differs");c->pc=Verify;
}
void verify(uint8_t* ram,R5900Context* c,PS2Runtime* r) {
    require(incoming==0u,"EE-to-IOP DMA replayed SIF0 receive handler and an old RPC END");
    require(outgoing==(valid&&enabled?1u:0u),"SIF1 completion count or mask differs");
    require(r->eeScheduler().semaphore(sema)->count==0,"outgoing DMA signaled unrelated reply semaphore");
    if(valid) {
        std::array<uint8_t,16> copied{};
        require(r->readIopMemory(0x40000u,copied.data(),copied.size())&&
                std::memcmp(copied.data(),ram+0x80000u,16u)==0,"IOP payload differs");
    }
    c->pc=0;r->eeScheduler().requestStop();
}
}
int main() {
    try {
        auto r=std::make_unique<PS2Runtime>();require(r->memory().initialize(PS2_RAM_SIZE),"RAM initialization");
        auto* ram=r->memory().getRDRAM();
        require(r->registerFunction(Entry,submit)&&r->registerFunction(Verify,verify)&&
                r->registerFunction(Incoming,onIncoming)&&r->registerFunction(Outgoing,onOutgoing),"owners");
        for(const bool enable:{false,true}) for(const bool accepted:{false,true}) {
            enabled=enable;valid=accepted;incoming=outgoing=0;R5900Context c{};c.pc=Entry;
            r->eeScheduler().reset(ram,c);sema=r->eeScheduler().createSemaphore(0,1,0,0);
            r->eeScheduler().addIrqHandler(true,5u,Incoming,false,0,0,0);
            r->eeScheduler().addIrqHandler(true,6u,Outgoing,false,0,0,0);
            r->eeScheduler().setIrqCauseEnabled(true,5u,true);
            r->eeScheduler().setIrqCauseEnabled(true,6u,enabled);
            r->eeScheduler().run();
        }
        std::cout<<"PASS4 SIF DMA direction/mask/rejected-transfer contracts, payload and stale-reply semaphore preserved; synthetic only\n";
    } catch(const std::exception& e) {std::cerr<<"FAIL "<<e.what()<<'\n';return 1;}
}
