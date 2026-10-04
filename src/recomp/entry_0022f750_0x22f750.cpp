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

// Function: entry_0022f750
// Address: 0x22f750 - 0x22f778
void entry_0022f750_0x22f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f750_0x22f750");
#endif

    switch (ctx->pc) {
        case 0x22f770u: goto label_22f770;
        default: break;
    }

    ctx->pc = 0x22f750u;

    // 0x22f750: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22f754: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f758: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22F758u;
    {
        const bool branch_taken_0x22f758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F758u;
        // 0x22f75c: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f758) {
            ctx->pc = 0x22F728u;
            return;
        }
    }
    ctx->pc = 0x22F760u;
    // 0x22f760: 0x18e00005  blez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F760u;
    {
        const bool branch_taken_0x22f760 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F760u;
        // 0x22f764: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f760) {
            ctx->pc = 0x22F778u;
            return;
        }
    }
    ctx->pc = 0x22F768u;
    // 0x22f768: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F768u;
    SET_GPR_U32(ctx, 31, 0x22F770u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F768u, 0x22F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F770u;
label_22f770:
    // 0x22f770: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F770u;
    SET_GPR_U32(ctx, 31, 0x22F778u);
    ctx->pc = 0x22F774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F770u;
    // 0x22f774: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F770u, 0x22F778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F778u;
}
