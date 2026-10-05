#include "ps2_runtime.h"
#include "runtime/ee_scheduler.h"
#include <cstring>
#include <iostream>
#include <memory>
#include <stdexcept>

extern const uint32_t g_ps2RecompiledFunctionTableBase=0;
extern const uint32_t g_ps2RecompiledFunctionTableEnd=PS2_RAM_SIZE;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount=PS2_RAM_SIZE/4;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[PS2_RAM_SIZE/4]{};
namespace {
constexpr uint32_t Entry=0x110000u,Caller=0x120000u,Return=Caller+8u;
unsigned calls=0;
void samePcYield(uint8_t* ram,R5900Context* ctx,PS2Runtime*) {
    ++calls;ram[0x80000u]++;ctx->pc=Entry;
}
void explicitReturn(uint8_t*,R5900Context* ctx,PS2Runtime*) {++calls;ctx->pc=Return;}
void exceptionExit(uint8_t*,R5900Context* ctx,PS2Runtime*) {++calls;ctx->pc=0x80000180u;ctx->cop0_cause=16u;}
void require(bool ok,const char* message) {if(!ok) throw std::runtime_error(message);}
}
int main() {
    try {
        auto runtime=std::make_unique<PS2Runtime>();require(runtime->memory().initialize(PS2_RAM_SIZE),"RAM init");
        auto* ram=runtime->memory().getRDRAM();R5900Context c{};
        require(runtime->registerFunction(Entry,samePcYield),"register loop");
        for(const auto kind:{PS2Runtime::GuestBranchKind::DirectCall,PS2Runtime::GuestBranchKind::IndirectCall}) {
            c={};runtime->eeScheduler().reset(ram,c);calls=0;ram[0x80000u]=0;
            require(runtime->replaceFunction(Entry,samePcYield),"replace loop");
            require(!runtime->dispatchGuestBranch(ram,&c,Entry,Caller,Return,kind,"bounded loop")&&
                c.pc==Entry&&calls==1u&&ram[0x80000u]==1u,"same-PC guest yield became a fabricated call return");
            require(runtime->replaceFunction(Entry,explicitReturn),"replace returning callee");calls=0;
            require(runtime->dispatchGuestBranch(ram,&c,Entry,Caller,Return,kind,"explicit return")&&c.pc==Return&&calls==1u,
                "explicit return did not resume its caller");
            require(runtime->replaceFunction(Entry,exceptionExit),"replace faulting callee");calls=0;
            require(!runtime->dispatchGuestBranch(ram,&c,Entry,Caller,Return,kind,"exception")&&
                c.pc==0x80000180u&&c.cop0_cause==16u&&calls==1u,"exception resumed its caller");
            runtime->eeScheduler().requestStop();calls=0;
            require(!runtime->dispatchGuestBranch(ram,&c,Entry,Caller,Return,kind,"pre-call stop")&&c.pc==Entry&&calls==0u,
                "pre-dispatch checkpoint executed a stopped callee");
        }
        std::cout<<"PASS8 direct/indirect guest call yield/return/exception/checkpoint boundaries; synthetic contract only\n";
    } catch(const std::exception& e) {std::cerr<<"FAIL "<<e.what()<<'\n';return 1;}
}
