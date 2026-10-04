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

// Function: FUN_001c1bd0
// Address: 0x1c1bd0 - 0x1c1bf4
void FUN_001c1bd0_0x1c1bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1bd0_0x1c1bd0");
#endif

    ctx->pc = 0x1c1bd0u;

    // 0x1c1bd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1BD0u;
    {
        const bool branch_taken_0x1c1bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bd0) {
            ctx->pc = 0x1C1BE0u;
            goto label_1c1be0;
        }
    }
    ctx->pc = 0x1C1BD8u;
    // 0x1c1bd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1BD8u;
    {
        const bool branch_taken_0x1c1bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BD8u;
        // 0x1c1bdc: 0xaf808920  sw          $zero, -0x76E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bd8) {
            ctx->pc = 0x1C1BF4u;
            return;
        }
    }
    ctx->pc = 0x1C1BE0u;
label_1c1be0:
    // 0x1c1be0: 0x8f838920  lw          $v1, -0x76E0($gp)
    ctx->pc = 0x1c1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x1c1be4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1BE4u;
    {
        const bool branch_taken_0x1c1be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BE4u;
        // 0x1c1be8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1be4) {
            ctx->pc = 0x1C1BF4u;
            return;
        }
    }
    ctx->pc = 0x1C1BECu;
    // 0x1c1bec: 0xaf80892c  sw          $zero, -0x76D4($gp)
    ctx->pc = 0x1c1becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 0));
    // 0x1c1bf0: 0xaf838920  sw          $v1, -0x76E0($gp)
    ctx->pc = 0x1c1bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 3));
    ctx->pc = 0x1c1bf4u;
}
