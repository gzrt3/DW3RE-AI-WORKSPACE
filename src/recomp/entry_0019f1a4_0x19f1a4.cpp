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

// Function: entry_0019f1a4
// Address: 0x19f1a4 - 0x19f1cc
void entry_0019f1a4_0x19f1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f1a4_0x19f1a4");
#endif

    switch (ctx->pc) {
        case 0x19f1acu: goto label_19f1ac;
        case 0x19f1c4u: goto label_19f1c4;
        default: break;
    }

    ctx->pc = 0x19f1a4u;

    // 0x19f1a4: 0xc067cf6  jal         func_19F3D8
    ctx->pc = 0x19F1A4u;
    SET_GPR_U32(ctx, 31, 0x19F1ACu);
    ctx->pc = 0x19F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1A4u;
    // 0x19f1a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3D8u, 0x19F1A4u, 0x19F1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1ACu;
label_19f1ac:
    // 0x19f1ac: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F1ACu;
    {
        const bool branch_taken_0x19f1ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1ACu;
        // 0x19f1b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1ac) {
            ctx->pc = 0x19F1CCu;
            return;
        }
    }
    ctx->pc = 0x19F1B4u;
    // 0x19f1b4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F1B4u;
    {
        const bool branch_taken_0x19f1b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1B4u;
        // 0x19f1b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1b4) {
            ctx->pc = 0x19F1CCu;
            return;
        }
    }
    ctx->pc = 0x19F1BCu;
    // 0x19f1bc: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19F1BCu;
    SET_GPR_U32(ctx, 31, 0x19F1C4u);
    ctx->pc = 0x19F1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1BCu;
    // 0x19f1c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19F1BCu, 0x19F1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1C4u;
label_19f1c4:
    // 0x19f1c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F1C4u;
    {
        const bool branch_taken_0x19f1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1C4u;
        // 0x19f1c8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1c4) {
            ctx->pc = 0x19F1D0u;
            return;
        }
    }
    ctx->pc = 0x19F1CCu;
}
