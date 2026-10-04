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

// Function: entry_001b73c8
// Address: 0x1b73c8 - 0x1b7420
void entry_001b73c8_0x1b73c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b73c8_0x1b73c8");
#endif

    ctx->pc = 0x1b73c8u;

    // 0x1b73c8: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x1B73C8u;
    {
        const bool branch_taken_0x1b73c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73C8u;
        // 0x1b73cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73c8) {
            ctx->pc = 0x1B75C4u;
            return;
        }
    }
    ctx->pc = 0x1B73D0u;
    // 0x1b73d0: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x1b73d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x1b73d4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B73D4u;
    {
        const bool branch_taken_0x1b73d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73D4u;
        // 0x1b73d8: 0x38e30002  xori        $v1, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73d4) {
            ctx->pc = 0x1B7420u;
            return;
        }
    }
    ctx->pc = 0x1B73DCu;
    // 0x1b73dc: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x1b73dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x1b73e0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B73E0u;
    {
        const bool branch_taken_0x1b73e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b73e0) {
            ctx->pc = 0x1B7418u;
            goto label_1b7418;
        }
    }
    ctx->pc = 0x1B73E8u;
    // 0x1b73e8: 0xdd640000  ld          $a0, 0x0($t3)
    ctx->pc = 0x1b73e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1b73ec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1b73ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73f0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x1b73f0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x1b73f4: 0xdd630008  ld          $v1, 0x8($t3)
    ctx->pc = 0x1b73f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1b73f8: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1b73f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1b73fc: 0xdd640010  ld          $a0, 0x10($t3)
    ctx->pc = 0x1b73fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1b7400: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x1b7400u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x1b7404: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x1b7404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1b7408: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1b7408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1b740c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b740cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b7410: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7410u;
        // 0x1b7414: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7418u;
label_1b7418:
    // 0x1b7418: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7418u;
        // 0x1b741c: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7420u;
}
