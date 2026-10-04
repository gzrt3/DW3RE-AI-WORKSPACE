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

// Function: entry_00188998
// Address: 0x188998 - 0x1889bc
void entry_00188998_0x188998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188998_0x188998");
#endif

    switch (ctx->pc) {
        case 0x1889a8u: goto label_1889a8;
        default: break;
    }

    ctx->pc = 0x188998u;

    // 0x188998: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x188998u;
    {
        const bool branch_taken_0x188998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188998u;
        // 0x18899c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188998) {
            ctx->pc = 0x1889BCu;
            return;
        }
    }
    ctx->pc = 0x1889A0u;
    // 0x1889a0: 0xc062348  jal         func_188D20
    ctx->pc = 0x1889A0u;
    SET_GPR_U32(ctx, 31, 0x1889A8u);
    ctx->pc = 0x188D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188D20u, 0x1889A0u, 0x1889A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1889A8u;
label_1889a8:
    // 0x1889a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1889a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1889ac: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1889ACu;
    {
        const bool branch_taken_0x1889ac = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1889B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889ACu;
        // 0x1889b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889ac) {
            ctx->pc = 0x1889BCu;
            return;
        }
    }
    ctx->pc = 0x1889B4u;
    // 0x1889b4: 0xc062274  jal         func_1889D0
    ctx->pc = 0x1889B4u;
    SET_GPR_U32(ctx, 31, 0x1889BCu);
    ctx->pc = 0x1889D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1889D0u, 0x1889B4u, 0x1889BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1889BCu;
}
