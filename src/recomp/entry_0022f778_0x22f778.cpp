#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0022f778
// Address: 0x22f778 - 0x22f79c
void entry_0022f778_0x22f778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f778_0x22f778");
#endif

    ctx->pc = 0x22f778u;

    // 0x22f778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f77c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f77cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f780: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f784: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x22f788: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x22f78c: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    // 0x22f790: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f794: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x22f798: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x22f79cu;
}
