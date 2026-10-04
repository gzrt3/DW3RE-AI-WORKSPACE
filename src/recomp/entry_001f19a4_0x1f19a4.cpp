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

// Function: entry_001f19a4
// Address: 0x1f19a4 - 0x1f19d0
void entry_001f19a4_0x1f19a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f19a4_0x1f19a4");
#endif

    ctx->pc = 0x1f19a4u;

    // 0x1f19a4: 0x0  nop
    ctx->pc = 0x1f19a4u;
    // NOP
    // 0x1f19a8: 0x8f838fc4  lw          $v1, -0x703C($gp)
    ctx->pc = 0x1f19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938564)));
    // 0x1f19ac: 0x0  nop
    ctx->pc = 0x1f19acu;
    // NOP
    // 0x1f19b0: 0x0  nop
    ctx->pc = 0x1f19b0u;
    // NOP
    // 0x1f19b4: 0x0  nop
    ctx->pc = 0x1f19b4u;
    // NOP
    // 0x1f19b8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F19B8u;
    {
        const bool branch_taken_0x1f19b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f19b8) {
            ctx->pc = 0x1F199Cu;
            return;
        }
    }
    ctx->pc = 0x1F19C0u;
    // 0x1f19c0: 0xaf808fd0  sw          $zero, -0x7030($gp)
    ctx->pc = 0x1f19c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938576), GPR_U32(ctx, 0));
    // 0x1f19c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f19c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f19c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F19C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19C8u;
        // 0x1f19cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F19C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F19D0u;
}
