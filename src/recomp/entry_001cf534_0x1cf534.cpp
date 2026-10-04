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

// Function: entry_001cf534
// Address: 0x1cf534 - 0x1cf564
void entry_001cf534_0x1cf534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf534_0x1cf534");
#endif

    switch (ctx->pc) {
        case 0x1cf560u: goto label_1cf560;
        default: break;
    }

    ctx->pc = 0x1cf534u;

    // 0x1cf534: 0x0  nop
    ctx->pc = 0x1cf534u;
    // NOP
    // 0x1cf538: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cf53c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1cf53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cf540: 0x1440ff5b  bnez        $v0, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x1CF540u;
    {
        const bool branch_taken_0x1cf540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF540u;
        // 0x1cf544: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf540) {
            ctx->pc = 0x1CF2B0u;
            return;
        }
    }
    ctx->pc = 0x1CF548u;
    // 0x1cf548: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1cf548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1cf54c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF54Cu;
    {
        const bool branch_taken_0x1cf54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF54Cu;
        // 0x1cf550: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf54c) {
            ctx->pc = 0x1CF564u;
            return;
        }
    }
    ctx->pc = 0x1CF554u;
    // 0x1cf554: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cf554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cf558: 0xc070e2c  jal         func_1C38B0
    ctx->pc = 0x1CF558u;
    SET_GPR_U32(ctx, 31, 0x1CF560u);
    ctx->pc = 0x1CF55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF558u;
    // 0x1cf55c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x1CF558u, 0x1CF560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF560u;
label_1cf560:
    // 0x1cf560: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1cf560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    ctx->pc = 0x1cf564u;
}
