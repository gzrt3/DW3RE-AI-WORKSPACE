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

// Function: entry_0023a4e0
// Address: 0x23a4e0 - 0x23a4f8
void entry_0023a4e0_0x23a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a4e0_0x23a4e0");
#endif

    ctx->pc = 0x23a4e0u;

    // 0x23a4e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23a4e4: 0x14c7fff8  bne         $a2, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23A4E4u;
    {
        const bool branch_taken_0x23a4e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x23A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4E4u;
        // 0x23a4e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4e4) {
            ctx->pc = 0x23A4C8u;
            return;
        }
    }
    ctx->pc = 0x23A4ECu;
    // 0x23a4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x23A4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4ECu;
        // 0x23a4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A4F4u;
    // 0x23a4f4: 0x0  nop
    ctx->pc = 0x23a4f4u;
    // NOP
    ctx->pc = 0x23a4f8u;
}
