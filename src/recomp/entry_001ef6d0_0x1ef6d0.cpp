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

// Function: entry_001ef6d0
// Address: 0x1ef6d0 - 0x1ef6f0
void entry_001ef6d0_0x1ef6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef6d0_0x1ef6d0");
#endif

    ctx->pc = 0x1ef6d0u;

    // 0x1ef6d0: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF6D0u;
    {
        const bool branch_taken_0x1ef6d0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1EF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6D0u;
        // 0x1ef6d4: 0xaf838f54  sw          $v1, -0x70AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6d0) {
            ctx->pc = 0x1EF6DCu;
            goto label_1ef6dc;
        }
    }
    ctx->pc = 0x1EF6D8u;
    // 0x1ef6d8: 0xaf808f58  sw          $zero, -0x70A8($gp)
    ctx->pc = 0x1ef6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938456), GPR_U32(ctx, 0));
label_1ef6dc:
    // 0x1ef6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF6E4u;
    // 0x1ef6e4: 0x0  nop
    ctx->pc = 0x1ef6e4u;
    // NOP
    // 0x1ef6e8: 0x0  nop
    ctx->pc = 0x1ef6e8u;
    // NOP
    // 0x1ef6ec: 0x0  nop
    ctx->pc = 0x1ef6ecu;
    // NOP
    ctx->pc = 0x1ef6f0u;
}
