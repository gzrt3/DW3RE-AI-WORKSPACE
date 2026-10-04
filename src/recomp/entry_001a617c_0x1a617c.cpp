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

// Function: entry_001a617c
// Address: 0x1a617c - 0x1a61a0
void entry_001a617c_0x1a617c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a617c_0x1a617c");
#endif

    switch (ctx->pc) {
        case 0x1a618cu: goto label_1a618c;
        default: break;
    }

    ctx->pc = 0x1a617cu;

    // 0x1a617c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1a617cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1a6180: 0xdc25a578  ld          $a1, -0x5A88($at)
    ctx->pc = 0x1a6180u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x2CA578u));
    // 0x1a6184: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x1A6184u;
    SET_GPR_U32(ctx, 31, 0x1A618Cu);
    ctx->pc = 0x1A6188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6184u;
    // 0x1a6188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x1A6184u, 0x1A618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A618Cu;
label_1a618c:
    // 0x1a618c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A618Cu;
    {
        const bool branch_taken_0x1a618c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A618Cu;
        // 0x1a6190: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a618c) {
            ctx->pc = 0x1A61D4u;
            return;
        }
    }
    ctx->pc = 0x1A6194u;
    // 0x1a6194: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6194u;
    {
        const bool branch_taken_0x1a6194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6194) {
            ctx->pc = 0x1A61B4u;
            return;
        }
    }
    ctx->pc = 0x1A619Cu;
    // 0x1a619c: 0x0  nop
    ctx->pc = 0x1a619cu;
    // NOP
    ctx->pc = 0x1a61a0u;
}
