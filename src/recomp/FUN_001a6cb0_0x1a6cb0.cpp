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

// Function: FUN_001a6cb0
// Address: 0x1a6cb0 - 0x1a6cd0
void FUN_001a6cb0_0x1a6cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6cb0_0x1a6cb0");
#endif

    ctx->pc = 0x1a6cb0u;

    // 0x1a6cb0: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6CB0u;
    {
        const bool branch_taken_0x1a6cb0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A6CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CB0u;
        // 0x1a6cb4: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cb0) {
            ctx->pc = 0x1A6CC4u;
            goto label_1a6cc4;
        }
    }
    ctx->pc = 0x1A6CB8u;
    // 0x1a6cb8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a6cbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6CBCu;
    {
        const bool branch_taken_0x1a6cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CBCu;
        // 0x1a6cc0: 0x8c441824  lw          $a0, 0x1824($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cbc) {
            ctx->pc = 0x1A6CCCu;
            goto label_1a6ccc;
        }
    }
    ctx->pc = 0x1A6CC4u;
label_1a6cc4:
    // 0x1a6cc4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a6cc8: 0x8c44182c  lw          $a0, 0x182C($v0)
    ctx->pc = 0x1a6cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x37182Cu));
label_1a6ccc:
    // 0x1a6ccc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a6cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1a6cd0u;
}
