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

// Function: entry_001eff60
// Address: 0x1eff60 - 0x1eff80
void entry_001eff60_0x1eff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eff60_0x1eff60");
#endif

    ctx->pc = 0x1eff60u;

    // 0x1eff60: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFF60u;
    {
        const bool branch_taken_0x1eff60 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1EFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF60u;
        // 0x1eff64: 0xaf838f74  sw          $v1, -0x708C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff60) {
            ctx->pc = 0x1EFF6Cu;
            goto label_1eff6c;
        }
    }
    ctx->pc = 0x1EFF68u;
    // 0x1eff68: 0xaf808f78  sw          $zero, -0x7088($gp)
    ctx->pc = 0x1eff68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938488), GPR_U32(ctx, 0));
label_1eff6c:
    // 0x1eff6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFF74u;
    // 0x1eff74: 0x0  nop
    ctx->pc = 0x1eff74u;
    // NOP
    // 0x1eff78: 0x0  nop
    ctx->pc = 0x1eff78u;
    // NOP
    // 0x1eff7c: 0x0  nop
    ctx->pc = 0x1eff7cu;
    // NOP
    ctx->pc = 0x1eff80u;
}
