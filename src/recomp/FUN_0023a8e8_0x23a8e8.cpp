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

// Function: FUN_0023a8e8
// Address: 0x23a8e8 - 0x23a90c
void FUN_0023a8e8_0x23a8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023a8e8_0x23a8e8");
#endif

    ctx->pc = 0x23a8e8u;

    // 0x23a8e8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23A8E8u;
    {
        const bool branch_taken_0x23a8e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a8e8) {
            ctx->pc = 0x23A90Cu;
            return;
        }
    }
    ctx->pc = 0x23A8F0u;
    // 0x23a8f0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x23a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23a8f4: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x23a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x23a8f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23a8fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23a900: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a904: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x23a904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x23a908: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x23a908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x23a90cu;
}
