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

// Function: FUN_001ad460
// Address: 0x1ad460 - 0x1ad4a0
void FUN_001ad460_0x1ad460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad460_0x1ad460");
#endif

    switch (ctx->pc) {
        case 0x1ad478u: goto label_1ad478;
        default: break;
    }

    ctx->pc = 0x1ad460u;

    // 0x1ad460: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x1ad460u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x1ad464: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ad464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ad468: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ad468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ad46c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AD46Cu;
    {
        const bool branch_taken_0x1ad46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD46Cu;
        // 0x1ad470: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad46c) {
            ctx->pc = 0x1AD49Cu;
            goto label_1ad49c;
        }
    }
    ctx->pc = 0x1AD474u;
    // 0x1ad474: 0x0  nop
    ctx->pc = 0x1ad474u;
    // NOP
label_1ad478:
    // 0x1ad478: 0x42000039  di
    ctx->pc = 0x1ad478u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x1ad47c: 0x40f  sync.p
    ctx->pc = 0x1ad47cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ad480: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1ad480u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1ad484: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1ad484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1ad488: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ad488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ad48c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AD48Cu;
    {
        const bool branch_taken_0x1ad48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad48c) {
            ctx->pc = 0x1AD478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad478;
        }
    }
    ctx->pc = 0x1AD494u;
    // 0x1ad494: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD494u;
        // 0x1ad498: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD49Cu;
label_1ad49c:
    // 0x1ad49c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ad49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ad4a0u;
}
