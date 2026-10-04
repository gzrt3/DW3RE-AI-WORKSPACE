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

// Function: entry_001ee314
// Address: 0x1ee314 - 0x1ee34c
void entry_001ee314_0x1ee314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee314_0x1ee314");
#endif

    switch (ctx->pc) {
        case 0x1ee31cu: goto label_1ee31c;
        case 0x1ee330u: goto label_1ee330;
        case 0x1ee344u: goto label_1ee344;
        default: break;
    }

    ctx->pc = 0x1ee314u;

    // 0x1ee314: 0xc07ab38  jal         func_1EACE0
    ctx->pc = 0x1EE314u;
    SET_GPR_U32(ctx, 31, 0x1EE31Cu);
    ctx->pc = 0x1EACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACE0u, 0x1EE314u, 0x1EE31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE31Cu;
label_1ee31c:
    // 0x1ee31c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee320: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE320u;
    {
        const bool branch_taken_0x1ee320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee320) {
            ctx->pc = 0x1EE36Cu;
            return;
        }
    }
    ctx->pc = 0x1EE328u;
    // 0x1ee328: 0xc07aaa4  jal         func_1EAA90
    ctx->pc = 0x1EE328u;
    SET_GPR_U32(ctx, 31, 0x1EE330u);
    ctx->pc = 0x1EAA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA90u, 0x1EE328u, 0x1EE330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE330u;
label_1ee330:
    // 0x1ee330: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee334: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE334u;
    {
        const bool branch_taken_0x1ee334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE334u;
        // 0x1ee338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee334) {
            ctx->pc = 0x1EE34Cu;
            return;
        }
    }
    ctx->pc = 0x1EE33Cu;
    // 0x1ee33c: 0xc07ab18  jal         func_1EAC60
    ctx->pc = 0x1EE33Cu;
    SET_GPR_U32(ctx, 31, 0x1EE344u);
    ctx->pc = 0x1EE340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE33Cu;
    // 0x1ee340: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC60u, 0x1EE33Cu, 0x1EE344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE344u;
label_1ee344:
    // 0x1ee344: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EE344u;
    {
        const bool branch_taken_0x1ee344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee344) {
            ctx->pc = 0x1EE380u;
            return;
        }
    }
    ctx->pc = 0x1EE34Cu;
}
