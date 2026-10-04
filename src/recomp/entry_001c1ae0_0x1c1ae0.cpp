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

// Function: entry_001c1ae0
// Address: 0x1c1ae0 - 0x1c1b00
void entry_001c1ae0_0x1c1ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1ae0_0x1c1ae0");
#endif

    ctx->pc = 0x1c1ae0u;

    // 0x1c1ae0: 0x8f838930  lw          $v1, -0x76D0($gp)
    ctx->pc = 0x1c1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
    // 0x1c1ae4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1AE4u;
    {
        const bool branch_taken_0x1c1ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AE4u;
        // 0x1c1ae8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ae4) {
            ctx->pc = 0x1C1AF4u;
            goto label_1c1af4;
        }
    }
    ctx->pc = 0x1C1AECu;
    // 0x1c1aec: 0xaf80893c  sw          $zero, -0x76C4($gp)
    ctx->pc = 0x1c1aecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 0));
    // 0x1c1af0: 0xaf838930  sw          $v1, -0x76D0($gp)
    ctx->pc = 0x1c1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 3));
label_1c1af4:
    // 0x1c1af4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1AFCu;
    // 0x1c1afc: 0x0  nop
    ctx->pc = 0x1c1afcu;
    // NOP
    ctx->pc = 0x1c1b00u;
}
