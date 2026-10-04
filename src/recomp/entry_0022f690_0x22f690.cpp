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

// Function: entry_0022f690
// Address: 0x22f690 - 0x22f6b0
void entry_0022f690_0x22f690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f690_0x22f690");
#endif

    ctx->pc = 0x22f690u;

    // 0x22f690: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f694: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f698: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f69c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x22f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x22f6a0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22f6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22f6a4: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x22f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
    // 0x22f6a8: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x22f6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
    // 0x22f6ac: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x22f6b0u;
}
