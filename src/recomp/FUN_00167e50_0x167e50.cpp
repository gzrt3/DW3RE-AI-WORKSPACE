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

// Function: FUN_00167e50
// Address: 0x167e50 - 0x167ea8
void FUN_00167e50_0x167e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167e50_0x167e50");
#endif

    ctx->pc = 0x167e50u;

    // 0x167e50: 0x8f8386e0  lw          $v1, -0x7920($gp)
    ctx->pc = 0x167e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
    // 0x167e54: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x167E54u;
    {
        const bool branch_taken_0x167e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x167e54) {
            ctx->pc = 0x167E70u;
            goto label_167e70;
        }
    }
    ctx->pc = 0x167E5Cu;
    // 0x167e5c: 0xaf8486e0  sw          $a0, -0x7920($gp)
    ctx->pc = 0x167e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936288), GPR_U32(ctx, 4));
    // 0x167e60: 0xaf8486d0  sw          $a0, -0x7930($gp)
    ctx->pc = 0x167e60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936272), GPR_U32(ctx, 4));
    // 0x167e64: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x167e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x167e68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x167E68u;
    {
        const bool branch_taken_0x167e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E68u;
        // 0x167e6c: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e68) {
            ctx->pc = 0x167EA8u;
            return;
        }
    }
    ctx->pc = 0x167E70u;
label_167e70:
    // 0x167e70: 0x8f8586d0  lw          $a1, -0x7930($gp)
    ctx->pc = 0x167e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x167e74: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x167E74u;
    {
        const bool branch_taken_0x167e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x167e74) {
            ctx->pc = 0x167E94u;
            goto label_167e94;
        }
    }
    ctx->pc = 0x167E7Cu;
    // 0x167e7c: 0xac640044  sw          $a0, 0x44($v1)
    ctx->pc = 0x167e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
    // 0x167e80: 0x8f8386e0  lw          $v1, -0x7920($gp)
    ctx->pc = 0x167e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
    // 0x167e84: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x167e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x167e88: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x167e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x167e8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x167E8Cu;
    {
        const bool branch_taken_0x167e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E8Cu;
        // 0x167e90: 0xaf8486d0  sw          $a0, -0x7930($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e8c) {
            ctx->pc = 0x167EA8u;
            return;
        }
    }
    ctx->pc = 0x167E94u;
label_167e94:
    // 0x167e94: 0xaca40044  sw          $a0, 0x44($a1)
    ctx->pc = 0x167e94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 4));
    // 0x167e98: 0x8f8386d0  lw          $v1, -0x7930($gp)
    ctx->pc = 0x167e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x167e9c: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x167e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x167ea0: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x167ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x167ea4: 0xaf8486d0  sw          $a0, -0x7930($gp)
    ctx->pc = 0x167ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936272), GPR_U32(ctx, 4));
    ctx->pc = 0x167ea8u;
}
