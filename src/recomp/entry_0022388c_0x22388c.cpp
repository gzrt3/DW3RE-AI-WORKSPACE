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

// Function: entry_0022388c
// Address: 0x22388c - 0x2238a8
void entry_0022388c_0x22388c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022388c_0x22388c");
#endif

    ctx->pc = 0x22388cu;

    // 0x22388c: 0x0  nop
    ctx->pc = 0x22388cu;
    // NOP
    // 0x223890: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x223890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x223894: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x223894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x223898: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x223898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x22389c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22389cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2238a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2238a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2238a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2238a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x2238a8u;
}
