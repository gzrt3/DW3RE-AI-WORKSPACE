#include "fate/dma_init_continuation.hpp"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"

#include <array>
#include <cstring>
#include <stdexcept>

namespace {
#include "recovered/dma_init_0019a6c0.inc"
#include "recovered/dma_submit_tail_0019aa4c.inc"

// Original XL ELF d26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731.
constexpr std::array<uint32_t,13> clear_words{
    0x10a0000au,0x24a2ffffu,0x2403ffffu,0u,0xa0800000u,0x2442ffffu,
    0x24840001u,0u,0u,0x1443fffau,0u,0x03e00008u,0u};

void original_dma_clear(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    if(ctx->pc == 0x19a628u) {
        const bool empty = GPR_U64(ctx,5) == GPR_U64(ctx,0);
        ctx->pc=0x19a62cu;ctx->branch_pc=0x19a628u;ctx->in_delay_slot=true;
        SET_GPR_S32(ctx,2,static_cast<int32_t>(ADD32(GPR_U32(ctx,5),UINT32_MAX)));
        ctx->in_delay_slot=false;
        if(empty) ctx->pc=0x19a654u;
        else {
            ctx->pc=0x19a630u;SET_GPR_S32(ctx,3,-1);
            ctx->pc=0x19a638u;
        }
    }
    if(ctx->pc == 0x19a638u) {
        WRITE8(GPR_U32(ctx,4),static_cast<uint8_t>(GPR_U32(ctx,0)));
        ctx->pc=0x19a63cu;
        SET_GPR_S32(ctx,2,static_cast<int32_t>(ADD32(GPR_U32(ctx,2),UINT32_MAX)));
        ctx->pc=0x19a640u;
        SET_GPR_S32(ctx,4,static_cast<int32_t>(ADD32(GPR_U32(ctx,4),1u)));
        const bool more=GPR_U64(ctx,2)!=GPR_U64(ctx,3);
        ctx->pc=0x19a650u;ctx->branch_pc=0x19a64cu;ctx->in_delay_slot=true;
        ctx->in_delay_slot=false;
        ctx->pc=more?0x19a638u:0x19a654u;
        if(more) return;
    }
    if(ctx->pc != 0x19a654u) throw std::runtime_error("Unknown original DMA clear PC");
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x19a658u;ctx->branch_pc=0x19a654u;ctx->in_delay_slot=true;
    ctx->in_delay_slot=false;ctx->pc=target;
}

constexpr std::array<uint32_t,5> dma_resumes{0x19a6c0u,0x19a6c4u,0x19a724u,0x19a72cu,0x19a778u};
constexpr std::array<uint32_t,2> clear_resumes{0x19a628u,0x19a638u};
constexpr std::array<uint32_t,4> channel_words{0x03e00008u,0x8c620000u,0x03e00008u,0x0000102du};
constexpr std::array<uint32_t,2> channel_resumes{0x19a678u,0x19a680u};

void original_dma_channel_tail(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime) {
    const auto entry=ctx->pc;
    if(entry!=0x19a678u&&entry!=0x19a680u) throw std::runtime_error("Unknown DMA channel return PC");
    const uint32_t target=GPR_U32(ctx,31);
    ctx->branch_pc=entry;ctx->pc=entry+4u;ctx->in_delay_slot=true;
    if(entry==0x19a678u) {
        const auto value=READ32(GPR_U32(ctx,3));
        if(ctx->pc!=entry+4u) return;
        SET_GPR_S32(ctx,2,static_cast<int32_t>(value));
    } else SET_GPR_U64(ctx,2,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    ctx->in_delay_slot=false;ctx->pc=target;
}
}

void fate::recomp::register_dma_init_continuations(PS2Runtime& runtime) {
    const auto* ram=runtime.memory().getRDRAM();
    if(!ram) throw std::runtime_error("DMA continuations require original loaded RAM");
    if(std::memcmp(ram+0x19a628u,clear_words.data(),sizeof(clear_words))!=0 ||
       std::memcmp(ram+0x19a6c0u,fate_recovered_0019a6c0_words.data(),sizeof(fate_recovered_0019a6c0_words))!=0 ||
       std::memcmp(ram+0x19a678u,channel_words.data(),sizeof(channel_words))!=0 ||
       std::memcmp(ram+0x19aa4cu,fate_recovered_0019aa4c_words.data(),sizeof(fate_recovered_0019aa4c_words))!=0)
        throw std::runtime_error("DMA continuation words differ from original XL ELF");
    for(const auto address:dma_resumes)
        if(runtime.hasFunction(address)) throw std::runtime_error("DMA continuation mapping conflict");
    for(const auto address:clear_resumes)
        if(runtime.hasFunction(address)) throw std::runtime_error("DMA clear mapping conflict");
    for(const auto address:channel_resumes)
        if(runtime.hasFunction(address)) throw std::runtime_error("DMA channel mapping conflict");
    if(runtime.hasFunction(0x19aa4cu)) throw std::runtime_error("DMA submit mapping conflict");
    for(const auto address:dma_resumes)
        if(!runtime.registerFunction(address,fate_recovered_0019a6c0)) throw std::runtime_error("DMA continuation registration failed");
    for(const auto address:clear_resumes)
        if(!runtime.registerFunction(address,original_dma_clear)) throw std::runtime_error("DMA clear registration failed");
    for(const auto address:channel_resumes)
        if(!runtime.registerFunction(address,original_dma_channel_tail)) throw std::runtime_error("DMA channel registration failed");
    if(!runtime.registerFunction(0x19aa4cu,fate_recovered_0019aa4c)) throw std::runtime_error("DMA submit registration failed");
}
