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

// Function: entry_0022f338
// Address: 0x22f338 - 0x22f360
void entry_0022f338_0x22f338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f338_0x22f338");
#endif

    switch (ctx->pc) {
        case 0x22f340u: goto label_22f340;
        case 0x22f350u: goto label_22f350;
        case 0x22f358u: goto label_22f358;
        default: break;
    }

    ctx->pc = 0x22f338u;

    // 0x22f338: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x22F338u;
    SET_GPR_U32(ctx, 31, 0x22F340u);
    ctx->pc = 0x22F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F338u;
    // 0x22f33c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x22F338u, 0x22F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F340u;
label_22f340:
    // 0x22f340: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x22F340u;
    {
        const bool branch_taken_0x22f340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F340u;
        // 0x22f344: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f340) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F348u;
    // 0x22f348: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F348u;
    SET_GPR_U32(ctx, 31, 0x22F350u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F348u, 0x22F350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F350u;
label_22f350:
    // 0x22f350: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F350u;
    SET_GPR_U32(ctx, 31, 0x22F358u);
    ctx->pc = 0x22F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F350u;
    // 0x22f354: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F350u, 0x22F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F358u;
label_22f358:
    // 0x22f358: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x22F358u;
    {
        const bool branch_taken_0x22f358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f358) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F360u;
}
