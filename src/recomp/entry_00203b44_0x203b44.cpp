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

// Function: entry_00203b44
// Address: 0x203b44 - 0x203b70
void entry_00203b44_0x203b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203b44_0x203b44");
#endif

    switch (ctx->pc) {
        case 0x203b58u: goto label_203b58;
        case 0x203b60u: goto label_203b60;
        case 0x203b68u: goto label_203b68;
        default: break;
    }

    ctx->pc = 0x203b44u;

    // 0x203b44: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x203b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x203b48: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b50: 0xc08104c  jal         func_204130
    ctx->pc = 0x203B50u;
    SET_GPR_U32(ctx, 31, 0x203B58u);
    ctx->pc = 0x203B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B50u;
    // 0x203b54: 0x27a80330  addiu       $t0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203B50u, 0x203B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B58u;
label_203b58:
    // 0x203b58: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203B58u;
    SET_GPR_U32(ctx, 31, 0x203B60u);
    ctx->pc = 0x203B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B58u;
    // 0x203b5c: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203B58u, 0x203B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B60u;
label_203b60:
    // 0x203b60: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203B60u;
    SET_GPR_U32(ctx, 31, 0x203B68u);
    ctx->pc = 0x203B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B60u;
    // 0x203b64: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203B60u, 0x203B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B68u;
label_203b68:
    // 0x203b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203b6c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x203b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x203b70u;
}
