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

// Function: entry_002238c0
// Address: 0x2238c0 - 0x2238e0
void entry_002238c0_0x2238c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002238c0_0x2238c0");
#endif

    ctx->pc = 0x2238c0u;

    // 0x2238c0: 0x8f8492dc  lw          $a0, -0x6D24($gp)
    ctx->pc = 0x2238c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939356)));
    // 0x2238c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2238c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2238c8: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x2238c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2238cc: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2238CCu;
    {
        const bool branch_taken_0x2238cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2238D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238CCu;
        // 0x2238d0: 0x891821  addu        $v1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238cc) {
            ctx->pc = 0x22387Cu;
            return;
        }
    }
    ctx->pc = 0x2238D4u;
    // 0x2238d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2238d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2238d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2238D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2238DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238D8u;
        // 0x2238dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2238D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2238E0u;
}
