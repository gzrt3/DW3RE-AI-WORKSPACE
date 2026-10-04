#pragma once
#include "ps2_runtime_macros.h"
#include <stdexcept>

namespace fate::recomp {
inline void execute_register_return(R5900Context& state,uint32_t delay) {
    auto* ctx=&state;
    const uint32_t branch=ctx->pc;
    const uint32_t target=GPR_U32(ctx,31);
    const uint32_t op=delay>>26,rs=(delay>>21)&31u,rt=(delay>>16)&31u,rd=(delay>>11)&31u;
    const uint32_t funct=delay&63u;
    if(delay!=0u&&op!=9u&&!(op==0u&&((delay>>6)&31u)==0u&&(funct==33u||funct==37u||funct==45u)))
        throw std::runtime_error("Unsupported original return delay");
    ctx->pc=branch+4u;ctx->branch_pc=branch;ctx->in_delay_slot=true;
    if(op==9u) {
        const uint32_t imm=static_cast<uint32_t>(static_cast<int32_t>(static_cast<int16_t>(delay)));
        SET_GPR_S32(ctx,rt,static_cast<int32_t>(ADD32(GPR_U32(ctx,rs),imm)));
    } else if(delay!=0u) {
        if(funct==33u) SET_GPR_S32(ctx,rd,static_cast<int32_t>(ADD32(GPR_U32(ctx,rs),GPR_U32(ctx,rt))));
        else if(funct==37u) SET_GPR_U64(ctx,rd,GPR_U64(ctx,rs)|GPR_U64(ctx,rt));
        else SET_GPR_U64(ctx,rd,GPR_U64(ctx,rs)+GPR_U64(ctx,rt));
    }
    ctx->in_delay_slot=false;ctx->pc=target;
}
}
