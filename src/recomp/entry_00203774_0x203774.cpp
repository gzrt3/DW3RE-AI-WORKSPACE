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

// Function: entry_00203774
// Address: 0x203774 - 0x2037a4
void entry_00203774_0x203774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203774_0x203774");
#endif

    switch (ctx->pc) {
        case 0x203788u: goto label_203788;
        case 0x203790u: goto label_203790;
        case 0x203798u: goto label_203798;
        default: break;
    }

    ctx->pc = 0x203774u;

    // 0x203774: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203778: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x203778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20377c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20377cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203780: 0xc08104c  jal         func_204130
    ctx->pc = 0x203780u;
    SET_GPR_U32(ctx, 31, 0x203788u);
    ctx->pc = 0x203784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203780u;
    // 0x203784: 0x27a80420  addiu       $t0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203780u, 0x203788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203788u;
label_203788:
    // 0x203788: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203788u;
    SET_GPR_U32(ctx, 31, 0x203790u);
    ctx->pc = 0x20378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203788u;
    // 0x20378c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203788u, 0x203790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203790u;
label_203790:
    // 0x203790: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203790u;
    SET_GPR_U32(ctx, 31, 0x203798u);
    ctx->pc = 0x203794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203790u;
    // 0x203794: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203790u, 0x203798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203798u;
label_203798:
    // 0x203798: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20379c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x20379Cu;
    {
        const bool branch_taken_0x20379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20379Cu;
        // 0x2037a0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20379c) {
            ctx->pc = 0x203804u;
            return;
        }
    }
    ctx->pc = 0x2037A4u;
}
