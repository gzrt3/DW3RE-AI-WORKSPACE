#include "fate/irq_return_continuation.hpp"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include <array>
#include <cstring>
#include <stdexcept>

namespace {
constexpr std::array<uint32_t,7> words{
    0x42000038u,0xdfb00000u,0xdfb10008u,0xdfb20010u,
    0xdfbf0018u,0x03e00008u,0x27bd0020u};

// XL234400 follows the interrupt-handler chain's SYNC. EI is permitted by
// EDI, EXL, ERL or kernel mode; pending IRQ delivery remains scheduler-owned.
void irq_return(uint8_t* ram,R5900Context* ctx,PS2Runtime* runtime) {
    if(ctx->pc!=0x234400u) throw std::runtime_error("Unknown original IRQ return entry");
    const auto status=ctx->cop0_status;
    if((status&0x20006u)!=0u || (status&0x18u)==0u) ctx->cop0_status|=0x10000u;
    constexpr std::array<unsigned,4> registers{16u,17u,18u,31u};
    for(unsigned i=0;i<registers.size();++i) {
        ctx->pc=0x234404u+i*4u;
        const auto value=runtime->Load64(ram,ctx,ADD32(GPR_U32(ctx,29),i*8u));
        if(ctx->pc!=0x234404u+i*4u) return;
        SET_GPR_U64(ctx,registers[i],value);
    }
    const auto target=GPR_U32(ctx,31);
    ctx->pc=0x234418u;ctx->branch_pc=0x234414u;ctx->in_delay_slot=true;
    const auto sp=static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x20u))));
    std::memcpy(&ctx->r[29],&sp,sizeof(sp));
    ctx->in_delay_slot=false;ctx->pc=target;
}
}

std::span<const uint32_t> fate::recomp::irq_return_original_words() noexcept {return words;}
void fate::recomp::register_irq_return_continuation(PS2Runtime& runtime) {
    const auto* ram=runtime.memory().getRDRAM();
    if(!ram || std::memcmp(ram+0x234400u,words.data(),sizeof(words))!=0)
        throw std::runtime_error("IRQ return words differ from original XL ELF");
    if(runtime.hasFunction(0x234400u)) throw std::runtime_error("IRQ return mapping conflict");
    if(!runtime.registerFunction(0x234400u,irq_return))
        throw std::runtime_error("IRQ return registration failed");
}
