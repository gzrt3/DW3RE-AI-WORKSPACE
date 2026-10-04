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

// Function: entry_0020d4b8
// Address: 0x20d4b8 - 0x20d4e0
void entry_0020d4b8_0x20d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d4b8_0x20d4b8");
#endif

    ctx->pc = 0x20d4b8u;

    // 0x20d4b8: 0x8f849130  lw          $a0, -0x6ED0($gp)
    ctx->pc = 0x20d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
    // 0x20d4bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d4c0: 0x1083ff6a  beq         $a0, $v1, . + 4 + (-0x96 << 2)
    ctx->pc = 0x20D4C0u;
    {
        const bool branch_taken_0x20d4c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20d4c0) {
            ctx->pc = 0x20D26Cu;
            return;
        }
    }
    ctx->pc = 0x20D4C8u;
    // 0x20d4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x20D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4CCu;
        // 0x20d4d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D4D4u;
    // 0x20d4d4: 0x0  nop
    ctx->pc = 0x20d4d4u;
    // NOP
    // 0x20d4d8: 0x0  nop
    ctx->pc = 0x20d4d8u;
    // NOP
    // 0x20d4dc: 0x0  nop
    ctx->pc = 0x20d4dcu;
    // NOP
    ctx->pc = 0x20d4e0u;
}
