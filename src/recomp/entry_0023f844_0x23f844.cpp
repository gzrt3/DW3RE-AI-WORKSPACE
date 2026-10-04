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

// Function: entry_0023f844
// Address: 0x23f844 - 0x23f86c
void entry_0023f844_0x23f844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f844_0x23f844");
#endif

    switch (ctx->pc) {
        case 0x23f850u: goto label_23f850;
        case 0x23f864u: goto label_23f864;
        default: break;
    }

    ctx->pc = 0x23f844u;

    // 0x23f844: 0x0  nop
    ctx->pc = 0x23f844u;
    // NOP
    // 0x23f848: 0xc06c1da  jal         func_1B0768
    ctx->pc = 0x23F848u;
    SET_GPR_U32(ctx, 31, 0x23F850u);
    ctx->pc = 0x1B0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0768u, 0x23F848u, 0x23F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F850u;
label_23f850:
    // 0x23f850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f854: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F854u;
    {
        const bool branch_taken_0x23f854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F854u;
        // 0x23f858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f854) {
            ctx->pc = 0x23F86Cu;
            return;
        }
    }
    ctx->pc = 0x23F85Cu;
    // 0x23f85c: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x23F85Cu;
    SET_GPR_U32(ctx, 31, 0x23F864u);
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x23F85Cu, 0x23F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F864u;
label_23f864:
    // 0x23f864: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x23F864u;
    {
        const bool branch_taken_0x23f864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F864u;
        // 0x23f868: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f864) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23F86Cu;
}
