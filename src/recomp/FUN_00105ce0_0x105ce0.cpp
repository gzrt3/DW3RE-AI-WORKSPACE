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

// Function: FUN_00105ce0
// Address: 0x105ce0 - 0x105cf4
void FUN_00105ce0_0x105ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105ce0_0x105ce0");
#endif

    ctx->pc = 0x105ce0u;

    // 0x105ce0: 0x8f858308  lw          $a1, -0x7CF8($gp)
    ctx->pc = 0x105ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935304)));
    // 0x105ce4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x105ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x105ce8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x105ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105cec: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x105cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x105cf0: 0x2442b160  addiu       $v0, $v0, -0x4EA0
    ctx->pc = 0x105cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947168));
    ctx->pc = 0x105cf4u;
}
