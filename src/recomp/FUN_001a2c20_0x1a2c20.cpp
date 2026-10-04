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

// Function: FUN_001a2c20
// Address: 0x1a2c20 - 0x1a2c3c
void FUN_001a2c20_0x1a2c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2c20_0x1a2c20");
#endif

    ctx->pc = 0x1a2c20u;

    // 0x1a2c20: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a2c24: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1a2c24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a2c28: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x1a2c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1a2c2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a2c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a2c30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a2c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a2c34: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1a2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x1a2c38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x1a2c3cu;
}
