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

// Function: entry_001a9908
// Address: 0x1a9908 - 0x1a992c
void entry_001a9908_0x1a9908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9908_0x1a9908");
#endif

    switch (ctx->pc) {
        case 0x1a9914u: goto label_1a9914;
        case 0x1a9924u: goto label_1a9924;
        default: break;
    }

    ctx->pc = 0x1a9908u;

    // 0x1a9908: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1a9908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1a990c: 0xc06a158  jal         func_1A8560
    ctx->pc = 0x1A990Cu;
    SET_GPR_U32(ctx, 31, 0x1A9914u);
    ctx->pc = 0x1A9910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A990Cu;
    // 0x1a9910: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8560u, 0x1A990Cu, 0x1A9914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9914u;
label_1a9914:
    // 0x1a9914: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9914u;
    {
        const bool branch_taken_0x1a9914 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9914) {
            ctx->pc = 0x1A992Cu;
            return;
        }
    }
    ctx->pc = 0x1A991Cu;
    // 0x1a991c: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1A991Cu;
    SET_GPR_U32(ctx, 31, 0x1A9924u);
    ctx->pc = 0x1A9920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A991Cu;
    // 0x1a9920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1A991Cu, 0x1A9924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9924u;
label_1a9924:
    // 0x1a9924: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9924u;
    {
        const bool branch_taken_0x1a9924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9924u;
        // 0x1a9928: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9924) {
            ctx->pc = 0x1A9940u;
            return;
        }
    }
    ctx->pc = 0x1A992Cu;
}
