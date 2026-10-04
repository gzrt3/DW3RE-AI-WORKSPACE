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

// Function: entry_0017bfc0
// Address: 0x17bfc0 - 0x17bfe0
void entry_0017bfc0_0x17bfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bfc0_0x17bfc0");
#endif

    ctx->pc = 0x17bfc0u;

    // 0x17bfc0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x17bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17bfc4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17bfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x17bfc8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BFC8u;
    {
        const bool branch_taken_0x17bfc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bfc8) {
            ctx->pc = 0x17BFD8u;
            goto label_17bfd8;
        }
    }
    ctx->pc = 0x17BFD0u;
    // 0x17bfd0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x17BFD0u;
    {
        const bool branch_taken_0x17bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFD0u;
        // 0x17bfd4: 0x24e70044  addiu       $a3, $a3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfd0) {
            ctx->pc = 0x17BF90u;
            return;
        }
    }
    ctx->pc = 0x17BFD8u;
label_17bfd8:
    // 0x17bfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BFE0u;
}
