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

// Function: entry_00145f1c
// Address: 0x145f1c - 0x145fac
void entry_00145f1c_0x145f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145f1c_0x145f1c");
#endif

    switch (ctx->pc) {
        case 0x145f24u: goto label_145f24;
        case 0x145f2cu: goto label_145f2c;
        case 0x145f34u: goto label_145f34;
        case 0x145f3cu: goto label_145f3c;
        case 0x145f44u: goto label_145f44;
        case 0x145f4cu: goto label_145f4c;
        case 0x145f54u: goto label_145f54;
        case 0x145f5cu: goto label_145f5c;
        case 0x145f64u: goto label_145f64;
        case 0x145f6cu: goto label_145f6c;
        case 0x145fa4u: goto label_145fa4;
        default: break;
    }

    ctx->pc = 0x145f1cu;

    // 0x145f1c: 0xc08527c  jal         func_2149F0
    ctx->pc = 0x145F1Cu;
    SET_GPR_U32(ctx, 31, 0x145F24u);
    ctx->pc = 0x2149F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2149F0u, 0x145F1Cu, 0x145F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F24u;
label_145f24:
    // 0x145f24: 0xc0751bc  jal         func_1D46F0
    ctx->pc = 0x145F24u;
    SET_GPR_U32(ctx, 31, 0x145F2Cu);
    ctx->pc = 0x1D46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D46F0u, 0x145F24u, 0x145F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F2Cu;
label_145f2c:
    // 0x145f2c: 0xc074cc4  jal         func_1D3310
    ctx->pc = 0x145F2Cu;
    SET_GPR_U32(ctx, 31, 0x145F34u);
    ctx->pc = 0x1D3310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3310u, 0x145F2Cu, 0x145F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F34u;
label_145f34:
    // 0x145f34: 0xc07077c  jal         func_1C1DF0
    ctx->pc = 0x145F34u;
    SET_GPR_U32(ctx, 31, 0x145F3Cu);
    ctx->pc = 0x1C1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DF0u, 0x145F34u, 0x145F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F3Cu;
label_145f3c:
    // 0x145f3c: 0xc070140  jal         func_1C0500
    ctx->pc = 0x145F3Cu;
    SET_GPR_U32(ctx, 31, 0x145F44u);
    ctx->pc = 0x1C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0500u, 0x145F3Cu, 0x145F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F44u;
label_145f44:
    // 0x145f44: 0xc07b07c  jal         func_1EC1F0
    ctx->pc = 0x145F44u;
    SET_GPR_U32(ctx, 31, 0x145F4Cu);
    ctx->pc = 0x1EC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC1F0u, 0x145F44u, 0x145F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F4Cu;
label_145f4c:
    // 0x145f4c: 0xc07af20  jal         func_1EBC80
    ctx->pc = 0x145F4Cu;
    SET_GPR_U32(ctx, 31, 0x145F54u);
    ctx->pc = 0x1EBC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBC80u, 0x145F4Cu, 0x145F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F54u;
label_145f54:
    // 0x145f54: 0xc07ae58  jal         func_1EB960
    ctx->pc = 0x145F54u;
    SET_GPR_U32(ctx, 31, 0x145F5Cu);
    ctx->pc = 0x1EB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB960u, 0x145F54u, 0x145F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F5Cu;
label_145f5c:
    // 0x145f5c: 0xc07b110  jal         func_1EC440
    ctx->pc = 0x145F5Cu;
    SET_GPR_U32(ctx, 31, 0x145F64u);
    ctx->pc = 0x1EC440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC440u, 0x145F5Cu, 0x145F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F64u;
label_145f64:
    // 0x145f64: 0xc090e7c  jal         func_2439F0
    ctx->pc = 0x145F64u;
    SET_GPR_U32(ctx, 31, 0x145F6Cu);
    ctx->pc = 0x2439F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2439F0u, 0x145F64u, 0x145F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F6Cu;
label_145f6c:
    // 0x145f6c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x145f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x145f70: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x145f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x145f74: 0x802451ec  lb          $a0, 0x51EC($at)
    ctx->pc = 0x145f74u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x3651ECu));
    // 0x145f78: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x145F78u;
    {
        const bool branch_taken_0x145f78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x145F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F78u;
        // 0x145f7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f78) {
            ctx->pc = 0x145FACu;
            return;
        }
    }
    ctx->pc = 0x145F80u;
    // 0x145f80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145f84: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x145f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x145f88: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x145f88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x145f8c: 0x24420a40  addiu       $v0, $v0, 0xA40
    ctx->pc = 0x145f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2624));
    // 0x145f90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x145f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x145f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145f98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x145f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145f9c: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x145F9Cu;
    SET_GPR_U32(ctx, 31, 0x145FA4u);
    ctx->pc = 0x145FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F9Cu;
    // 0x145fa0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x145F9Cu, 0x145FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FA4u;
label_145fa4:
    // 0x145fa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x145FA4u;
    {
        const bool branch_taken_0x145fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145fa4) {
            ctx->pc = 0x145FB4u;
            return;
        }
    }
    ctx->pc = 0x145FACu;
}
