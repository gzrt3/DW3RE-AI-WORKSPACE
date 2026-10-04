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

// Function: FUN_001ed230
// Address: 0x1ed230 - 0x1ed2a8
void FUN_001ed230_0x1ed230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ed230_0x1ed230");
#endif

    switch (ctx->pc) {
        case 0x1ed240u: goto label_1ed240;
        case 0x1ed248u: goto label_1ed248;
        case 0x1ed250u: goto label_1ed250;
        case 0x1ed258u: goto label_1ed258;
        case 0x1ed260u: goto label_1ed260;
        case 0x1ed268u: goto label_1ed268;
        case 0x1ed270u: goto label_1ed270;
        case 0x1ed278u: goto label_1ed278;
        case 0x1ed280u: goto label_1ed280;
        case 0x1ed288u: goto label_1ed288;
        case 0x1ed290u: goto label_1ed290;
        case 0x1ed298u: goto label_1ed298;
        case 0x1ed2a0u: goto label_1ed2a0;
        default: break;
    }

    ctx->pc = 0x1ed230u;

    // 0x1ed230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed238: 0xc07b18c  jal         func_1EC630
    ctx->pc = 0x1ED238u;
    SET_GPR_U32(ctx, 31, 0x1ED240u);
    ctx->pc = 0x1EC630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC630u, 0x1ED238u, 0x1ED240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED240u;
label_1ed240:
    // 0x1ed240: 0xc07b4f4  jal         func_1ED3D0
    ctx->pc = 0x1ED240u;
    SET_GPR_U32(ctx, 31, 0x1ED248u);
    ctx->pc = 0x1ED3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED3D0u, 0x1ED240u, 0x1ED248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED248u;
label_1ed248:
    // 0x1ed248: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x1ED248u;
    SET_GPR_U32(ctx, 31, 0x1ED250u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x1ED248u, 0x1ED250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED250u;
label_1ed250:
    // 0x1ed250: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x1ED250u;
    SET_GPR_U32(ctx, 31, 0x1ED258u);
    ctx->pc = 0x1EA760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA760u, 0x1ED250u, 0x1ED258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED258u;
label_1ed258:
    // 0x1ed258: 0xc07b230  jal         func_1EC8C0
    ctx->pc = 0x1ED258u;
    SET_GPR_U32(ctx, 31, 0x1ED260u);
    ctx->pc = 0x1EC8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC8C0u, 0x1ED258u, 0x1ED260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED260u;
label_1ed260:
    // 0x1ed260: 0xc07ab54  jal         func_1EAD50
    ctx->pc = 0x1ED260u;
    SET_GPR_U32(ctx, 31, 0x1ED268u);
    ctx->pc = 0x1EAD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD50u, 0x1ED260u, 0x1ED268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED268u;
label_1ed268:
    // 0x1ed268: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x1ED268u;
    SET_GPR_U32(ctx, 31, 0x1ED270u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1ED268u, 0x1ED270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED270u;
label_1ed270:
    // 0x1ed270: 0xc07b4c4  jal         func_1ED310
    ctx->pc = 0x1ED270u;
    SET_GPR_U32(ctx, 31, 0x1ED278u);
    ctx->pc = 0x1ED310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED310u, 0x1ED270u, 0x1ED278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED278u;
label_1ed278:
    // 0x1ed278: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x1ED278u;
    SET_GPR_U32(ctx, 31, 0x1ED280u);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x1ED278u, 0x1ED280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED280u;
label_1ed280:
    // 0x1ed280: 0xc07a86c  jal         func_1EA1B0
    ctx->pc = 0x1ED280u;
    SET_GPR_U32(ctx, 31, 0x1ED288u);
    ctx->pc = 0x1EA1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA1B0u, 0x1ED280u, 0x1ED288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED288u;
label_1ed288:
    // 0x1ed288: 0xc07b1bc  jal         func_1EC6F0
    ctx->pc = 0x1ED288u;
    SET_GPR_U32(ctx, 31, 0x1ED290u);
    ctx->pc = 0x1EC6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6F0u, 0x1ED288u, 0x1ED290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED290u;
label_1ed290:
    // 0x1ed290: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1ED290u;
    SET_GPR_U32(ctx, 31, 0x1ED298u);
    ctx->pc = 0x1EACF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACF0u, 0x1ED290u, 0x1ED298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED298u;
label_1ed298:
    // 0x1ed298: 0xc04e120  jal         func_138480
    ctx->pc = 0x1ED298u;
    SET_GPR_U32(ctx, 31, 0x1ED2A0u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1ED298u, 0x1ED2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2A0u;
label_1ed2a0:
    // 0x1ed2a0: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1ED2A0u;
    SET_GPR_U32(ctx, 31, 0x1ED2A8u);
    ctx->pc = 0x1ED2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED2A0u;
    // 0x1ed2a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1ED2A0u, 0x1ED2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2A8u;
}
