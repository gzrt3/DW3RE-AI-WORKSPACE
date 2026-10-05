#include "fate/vif_init_continuation.hpp"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"

#include <array>
#include <cstring>
#include <stdexcept>

namespace {
// Selected XL ELF: two LQ/SQ pairs and the GIF_CTRL write in the JR delay.
constexpr std::array<uint32_t,8> words{
    0x78a40000u,0x3c031000u,0x34633000u,0x7cc40000u,
    0x78a20010u,0x7cc20000u,0x03e00008u,0xac670000u};

void original_vif_init_tail(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime) {
    ctx->pc=0x198580u;SET_GPR_VEC(ctx,4,READ128(GPR_U32(ctx,5)));
    ctx->pc=0x198584u;SET_GPR_S32(ctx,3,0x10000000);
    ctx->pc=0x198588u;SET_GPR_U64(ctx,3,GPR_U64(ctx,3)|0x3000ull);
    ctx->pc=0x19858cu;WRITE128(GPR_U32(ctx,6),GPR_VEC(ctx,4));
    ctx->pc=0x198590u;SET_GPR_VEC(ctx,2,READ128(ADD32(GPR_U32(ctx,5),16u)));
    ctx->pc=0x198594u;WRITE128(GPR_U32(ctx,6),GPR_VEC(ctx,2));
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x19859cu;ctx->branch_pc=0x198598u;ctx->in_delay_slot=true;
    WRITE32(GPR_U32(ctx,3),GPR_U32(ctx,7));
    ctx->in_delay_slot=false;ctx->pc=target;
}
}

void fate::recomp::register_vif_init_continuation(PS2Runtime& runtime) {
    const auto* ram=runtime.memory().getRDRAM();
    if(!ram || std::memcmp(ram+0x198580u,words.data(),sizeof(words))!=0)
        throw std::runtime_error("VIF continuation words differ from original XL ELF");
    if(runtime.hasFunction(0x198580u) || !runtime.registerFunction(0x198580u,original_vif_init_tail))
        throw std::runtime_error("Original VIF continuation mapping conflict");
}
