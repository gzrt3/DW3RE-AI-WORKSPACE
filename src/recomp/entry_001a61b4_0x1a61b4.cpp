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

// Function: entry_001a61b4
// Address: 0x1a61b4 - 0x1a61d4
void entry_001a61b4_0x1a61b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a61b4_0x1a61b4");
#endif

    switch (ctx->pc) {
        case 0x1a61c4u: goto label_1a61c4;
        default: break;
    }

    ctx->pc = 0x1a61b4u;

    // 0x1a61b4: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1a61b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1a61b8: 0xdc25a580  ld          $a1, -0x5A80($at)
    ctx->pc = 0x1a61b8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x2CA580u));
    // 0x1a61bc: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x1A61BCu;
    SET_GPR_U32(ctx, 31, 0x1A61C4u);
    ctx->pc = 0x1A61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61BCu;
    // 0x1a61c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x1A61BCu, 0x1A61C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61C4u;
label_1a61c4:
    // 0x1a61c4: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A61C4u;
    {
        const bool branch_taken_0x1a61c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61c4) {
            ctx->pc = 0x1A61A0u;
            return;
        }
    }
    ctx->pc = 0x1A61CCu;
    // 0x1a61cc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A61CCu;
    {
        const bool branch_taken_0x1a61cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a61cc) {
            ctx->pc = 0x1A6224u;
            return;
        }
    }
    ctx->pc = 0x1A61D4u;
}
