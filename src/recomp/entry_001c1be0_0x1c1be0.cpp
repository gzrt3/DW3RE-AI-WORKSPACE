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

// Function: entry_001c1be0
// Address: 0x1c1be0 - 0x1c1c00
void entry_001c1be0_0x1c1be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1be0_0x1c1be0");
#endif

    ctx->pc = 0x1c1be0u;

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
            goto label_1c1bf4;
        }
    }
    ctx->pc = 0x1C1BECu;
    // 0x1c1bec: 0xaf80892c  sw          $zero, -0x76D4($gp)
    ctx->pc = 0x1c1becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 0));
    // 0x1c1bf0: 0xaf838920  sw          $v1, -0x76E0($gp)
    ctx->pc = 0x1c1bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 3));
label_1c1bf4:
    // 0x1c1bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1BFCu;
    // 0x1c1bfc: 0x0  nop
    ctx->pc = 0x1c1bfcu;
    // NOP
    ctx->pc = 0x1c1c00u;
}
