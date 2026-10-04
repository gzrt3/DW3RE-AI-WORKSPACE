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

// Function: entry_001ecc68
// Address: 0x1ecc68 - 0x1ecca0
void entry_001ecc68_0x1ecc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecc68_0x1ecc68");
#endif

    switch (ctx->pc) {
        case 0x1ecc70u: goto label_1ecc70;
        case 0x1ecc78u: goto label_1ecc78;
        case 0x1ecc80u: goto label_1ecc80;
        case 0x1ecc88u: goto label_1ecc88;
        case 0x1ecc90u: goto label_1ecc90;
        case 0x1ecc98u: goto label_1ecc98;
        default: break;
    }

    ctx->pc = 0x1ecc68u;

    // 0x1ecc68: 0xc070c50  jal         func_1C3140
    ctx->pc = 0x1ECC68u;
    SET_GPR_U32(ctx, 31, 0x1ECC70u);
    ctx->pc = 0x1C3140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3140u, 0x1ECC68u, 0x1ECC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC70u;
label_1ecc70:
    // 0x1ecc70: 0xc070d64  jal         func_1C3590
    ctx->pc = 0x1ECC70u;
    SET_GPR_U32(ctx, 31, 0x1ECC78u);
    ctx->pc = 0x1C3590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3590u, 0x1ECC70u, 0x1ECC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC78u;
label_1ecc78:
    // 0x1ecc78: 0xc070b08  jal         func_1C2C20
    ctx->pc = 0x1ECC78u;
    SET_GPR_U32(ctx, 31, 0x1ECC80u);
    ctx->pc = 0x1C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2C20u, 0x1ECC78u, 0x1ECC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC80u;
label_1ecc80:
    // 0x1ecc80: 0xc070cb4  jal         func_1C32D0
    ctx->pc = 0x1ECC80u;
    SET_GPR_U32(ctx, 31, 0x1ECC88u);
    ctx->pc = 0x1C32D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C32D0u, 0x1ECC80u, 0x1ECC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC88u;
label_1ecc88:
    // 0x1ecc88: 0xc07d874  jal         func_1F61D0
    ctx->pc = 0x1ECC88u;
    SET_GPR_U32(ctx, 31, 0x1ECC90u);
    ctx->pc = 0x1F61D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F61D0u, 0x1ECC88u, 0x1ECC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC90u;
label_1ecc90:
    // 0x1ecc90: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x1ECC90u;
    SET_GPR_U32(ctx, 31, 0x1ECC98u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x1ECC90u, 0x1ECC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC98u;
label_1ecc98:
    // 0x1ecc98: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1ECC98u;
    SET_GPR_U32(ctx, 31, 0x1ECCA0u);
    ctx->pc = 0x1ECC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC98u;
    // 0x1ecc9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1ECC98u, 0x1ECCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCA0u;
}
