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

// Function: FUN_001f9f10
// Address: 0x1f9f10 - 0x1f9f1c
void FUN_001f9f10_0x1f9f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f9f10_0x1f9f10");
#endif

    ctx->pc = 0x1f9f10u;

    // 0x1f9f10: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f9f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f9f14: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f9f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
    // 0x1f9f18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f9f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1f9f1cu;
}
