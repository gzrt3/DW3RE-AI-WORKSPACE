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

// Function: entry_001efb00
// Address: 0x1efb00 - 0x1efb20
void entry_001efb00_0x1efb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efb00_0x1efb00");
#endif

    ctx->pc = 0x1efb00u;

    // 0x1efb00: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFB00u;
    {
        const bool branch_taken_0x1efb00 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1EFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB00u;
        // 0x1efb04: 0xaf838f6c  sw          $v1, -0x7094($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb00) {
            ctx->pc = 0x1EFB0Cu;
            goto label_1efb0c;
        }
    }
    ctx->pc = 0x1EFB08u;
    // 0x1efb08: 0xaf808f70  sw          $zero, -0x7090($gp)
    ctx->pc = 0x1efb08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938480), GPR_U32(ctx, 0));
label_1efb0c:
    // 0x1efb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFB14u;
    // 0x1efb14: 0x0  nop
    ctx->pc = 0x1efb14u;
    // NOP
    // 0x1efb18: 0x0  nop
    ctx->pc = 0x1efb18u;
    // NOP
    // 0x1efb1c: 0x0  nop
    ctx->pc = 0x1efb1cu;
    // NOP
    ctx->pc = 0x1efb20u;
}
