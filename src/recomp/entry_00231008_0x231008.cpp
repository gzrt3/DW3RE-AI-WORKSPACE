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

// Function: entry_00231008
// Address: 0x231008 - 0x231028
void entry_00231008_0x231008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231008_0x231008");
#endif

    switch (ctx->pc) {
        case 0x231010u: goto label_231010;
        case 0x231020u: goto label_231020;
        default: break;
    }

    ctx->pc = 0x231008u;

    // 0x231008: 0xc08cd90  jal         func_233640
    ctx->pc = 0x231008u;
    SET_GPR_U32(ctx, 31, 0x231010u);
    ctx->pc = 0x23100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231008u;
    // 0x23100c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233640u, 0x231008u, 0x231010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231010u;
label_231010:
    // 0x231010: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231010u;
    {
        const bool branch_taken_0x231010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231010u;
        // 0x231014: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231010) {
            ctx->pc = 0x231028u;
            return;
        }
    }
    ctx->pc = 0x231018u;
    // 0x231018: 0xc08cd34  jal         func_2334D0
    ctx->pc = 0x231018u;
    SET_GPR_U32(ctx, 31, 0x231020u);
    ctx->pc = 0x2334D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334D0u, 0x231018u, 0x231020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231020u;
label_231020:
    // 0x231020: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x231020u;
    {
        const bool branch_taken_0x231020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x231020) {
            ctx->pc = 0x231000u;
            return;
        }
    }
    ctx->pc = 0x231028u;
}
