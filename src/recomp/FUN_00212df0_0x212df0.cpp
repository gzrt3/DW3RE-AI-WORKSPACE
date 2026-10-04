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

// Function: FUN_00212df0
// Address: 0x212df0 - 0x212e04
void FUN_00212df0_0x212df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00212df0_0x212df0");
#endif

    ctx->pc = 0x212df0u;

    // 0x212df0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x212df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212df8: 0x8c237564  lw          $v1, 0x7564($at)
    ctx->pc = 0x212df8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x587564u));
    // 0x212dfc: 0x822004  sllv        $a0, $v0, $a0
    ctx->pc = 0x212dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x212e00: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x212e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    ctx->pc = 0x212e04u;
}
