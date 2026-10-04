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

// Function: entry_0020f064
// Address: 0x20f064 - 0x20f080
void entry_0020f064_0x20f064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f064_0x20f064");
#endif

    ctx->pc = 0x20f064u;

    // 0x20f064: 0xaf838288  sw          $v1, -0x7D78($gp)
    ctx->pc = 0x20f064u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935176), GPR_U32(ctx, 3));
    // 0x20f068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f06c: 0x3e00008  jr          $ra
    ctx->pc = 0x20F06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F06Cu;
        // 0x20f070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F074u;
    // 0x20f074: 0x0  nop
    ctx->pc = 0x20f074u;
    // NOP
    // 0x20f078: 0x0  nop
    ctx->pc = 0x20f078u;
    // NOP
    // 0x20f07c: 0x0  nop
    ctx->pc = 0x20f07cu;
    // NOP
    ctx->pc = 0x20f080u;
}
