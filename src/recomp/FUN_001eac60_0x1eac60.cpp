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

// Function: FUN_001eac60
// Address: 0x1eac60 - 0x1eacd4
void FUN_001eac60_0x1eac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eac60_0x1eac60");
#endif

    ctx->pc = 0x1eac60u;

    // 0x1eac60: 0x8f838efc  lw          $v1, -0x7104($gp)
    ctx->pc = 0x1eac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938364)));
    // 0x1eac64: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EAC64u;
    {
        const bool branch_taken_0x1eac64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eac64) {
            ctx->pc = 0x1EACD4u;
            return;
        }
    }
    ctx->pc = 0x1EAC6Cu;
    // 0x1eac6c: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EAC6Cu;
    {
        const bool branch_taken_0x1eac6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC6Cu;
        // 0x1eac70: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac6c) {
            ctx->pc = 0x1EACCCu;
            goto label_1eaccc;
        }
    }
    ctx->pc = 0x1EAC74u;
    // 0x1eac74: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1eac74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1eac78: 0xaf808ef8  sw          $zero, -0x7108($gp)
    ctx->pc = 0x1eac78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938360), GPR_U32(ctx, 0));
    // 0x1eac7c: 0xaf838ef0  sw          $v1, -0x7110($gp)
    ctx->pc = 0x1eac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938352), GPR_U32(ctx, 3));
    // 0x1eac80: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x1eac80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1eac84: 0xaf808efc  sw          $zero, -0x7104($gp)
    ctx->pc = 0x1eac84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 0));
    // 0x1eac88: 0xaf838eec  sw          $v1, -0x7114($gp)
    ctx->pc = 0x1eac88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938348), GPR_U32(ctx, 3));
    // 0x1eac8c: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1eac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1eac90: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1eac90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
    // 0x1eac94: 0xaf838ee8  sw          $v1, -0x7118($gp)
    ctx->pc = 0x1eac94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 3));
    // 0x1eac98: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1eac98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1eac9c: 0xaf808ee4  sw          $zero, -0x711C($gp)
    ctx->pc = 0x1eac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938340), GPR_U32(ctx, 0));
    // 0x1eaca0: 0xaf838ee0  sw          $v1, -0x7120($gp)
    ctx->pc = 0x1eaca0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938336), GPR_U32(ctx, 3));
    // 0x1eaca4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1eaca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eaca8: 0xaf808ed8  sw          $zero, -0x7128($gp)
    ctx->pc = 0x1eaca8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 0));
    // 0x1eacac: 0xaf838edc  sw          $v1, -0x7124($gp)
    ctx->pc = 0x1eacacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938332), GPR_U32(ctx, 3));
    // 0x1eacb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eacb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eacb4: 0xaf808ed4  sw          $zero, -0x712C($gp)
    ctx->pc = 0x1eacb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 0));
    // 0x1eacb8: 0xaf838ed0  sw          $v1, -0x7130($gp)
    ctx->pc = 0x1eacb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 3));
    // 0x1eacbc: 0xaf838ecc  sw          $v1, -0x7134($gp)
    ctx->pc = 0x1eacbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 3));
    // 0x1eacc0: 0xaf808ec8  sw          $zero, -0x7138($gp)
    ctx->pc = 0x1eacc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 0));
    // 0x1eacc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EACC4u;
    {
        const bool branch_taken_0x1eacc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACC4u;
        // 0x1eacc8: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacc4) {
            ctx->pc = 0x1EACD4u;
            return;
        }
    }
    ctx->pc = 0x1EACCCu;
label_1eaccc:
    // 0x1eaccc: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1eacccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
    // 0x1eacd0: 0xaf838efc  sw          $v1, -0x7104($gp)
    ctx->pc = 0x1eacd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 3));
    ctx->pc = 0x1eacd4u;
}
