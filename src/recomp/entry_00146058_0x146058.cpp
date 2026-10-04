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

// Function: entry_00146058
// Address: 0x146058 - 0x1460d4
void entry_00146058_0x146058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146058_0x146058");
#endif

    switch (ctx->pc) {
        case 0x146060u: goto label_146060;
        case 0x146068u: goto label_146068;
        case 0x146070u: goto label_146070;
        case 0x146078u: goto label_146078;
        case 0x146080u: goto label_146080;
        case 0x146088u: goto label_146088;
        case 0x146090u: goto label_146090;
        case 0x146098u: goto label_146098;
        case 0x1460a0u: goto label_1460a0;
        case 0x1460a8u: goto label_1460a8;
        case 0x1460b0u: goto label_1460b0;
        case 0x1460b8u: goto label_1460b8;
        case 0x1460c0u: goto label_1460c0;
        case 0x1460c8u: goto label_1460c8;
        case 0x1460d0u: goto label_1460d0;
        default: break;
    }

    ctx->pc = 0x146058u;

    // 0x146058: 0xc04d650  jal         func_135940
    ctx->pc = 0x146058u;
    SET_GPR_U32(ctx, 31, 0x146060u);
    ctx->pc = 0x135940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135940u, 0x146058u, 0x146060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146060u;
label_146060:
    // 0x146060: 0xc056108  jal         func_158420
    ctx->pc = 0x146060u;
    SET_GPR_U32(ctx, 31, 0x146068u);
    ctx->pc = 0x158420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158420u, 0x146060u, 0x146068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146068u;
label_146068:
    // 0x146068: 0xc057b20  jal         func_15EC80
    ctx->pc = 0x146068u;
    SET_GPR_U32(ctx, 31, 0x146070u);
    ctx->pc = 0x15EC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC80u, 0x146068u, 0x146070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146070u;
label_146070:
    // 0x146070: 0xc0436c0  jal         func_10DB00
    ctx->pc = 0x146070u;
    SET_GPR_U32(ctx, 31, 0x146078u);
    ctx->pc = 0x10DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB00u, 0x146070u, 0x146078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146078u;
label_146078:
    // 0x146078: 0xc064b30  jal         func_192CC0
    ctx->pc = 0x146078u;
    SET_GPR_U32(ctx, 31, 0x146080u);
    ctx->pc = 0x192CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192CC0u, 0x146078u, 0x146080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146080u;
label_146080:
    // 0x146080: 0xc044a04  jal         func_112810
    ctx->pc = 0x146080u;
    SET_GPR_U32(ctx, 31, 0x146088u);
    ctx->pc = 0x112810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112810u, 0x146080u, 0x146088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146088u;
label_146088:
    // 0x146088: 0xc04dfc4  jal         func_137F10
    ctx->pc = 0x146088u;
    SET_GPR_U32(ctx, 31, 0x146090u);
    ctx->pc = 0x137F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F10u, 0x146088u, 0x146090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146090u;
label_146090:
    // 0x146090: 0xc07a75c  jal         func_1E9D70
    ctx->pc = 0x146090u;
    SET_GPR_U32(ctx, 31, 0x146098u);
    ctx->pc = 0x1E9D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9D70u, 0x146090u, 0x146098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146098u;
label_146098:
    // 0x146098: 0xc040324  jal         func_100C90
    ctx->pc = 0x146098u;
    SET_GPR_U32(ctx, 31, 0x1460A0u);
    ctx->pc = 0x100C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C90u, 0x146098u, 0x1460A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460A0u;
label_1460a0:
    // 0x1460a0: 0xc0555e4  jal         func_155790
    ctx->pc = 0x1460A0u;
    SET_GPR_U32(ctx, 31, 0x1460A8u);
    ctx->pc = 0x155790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155790u, 0x1460A0u, 0x1460A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460A8u;
label_1460a8:
    // 0x1460a8: 0xc0521c8  jal         func_148720
    ctx->pc = 0x1460A8u;
    SET_GPR_U32(ctx, 31, 0x1460B0u);
    ctx->pc = 0x148720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148720u, 0x1460A8u, 0x1460B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460B0u;
label_1460b0:
    // 0x1460b0: 0xc0548d0  jal         func_152340
    ctx->pc = 0x1460B0u;
    SET_GPR_U32(ctx, 31, 0x1460B8u);
    ctx->pc = 0x152340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152340u, 0x1460B0u, 0x1460B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460B8u;
label_1460b8:
    // 0x1460b8: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1460B8u;
    SET_GPR_U32(ctx, 31, 0x1460C0u);
    ctx->pc = 0x1460BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1460B8u;
    // 0x1460bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1460B8u, 0x1460C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460C0u;
label_1460c0:
    // 0x1460c0: 0xc05bfb0  jal         func_16FEC0
    ctx->pc = 0x1460C0u;
    SET_GPR_U32(ctx, 31, 0x1460C8u);
    ctx->pc = 0x1460C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1460C0u;
    // 0x1460c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FEC0u, 0x1460C0u, 0x1460C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460C8u;
label_1460c8:
    // 0x1460c8: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1460C8u;
    SET_GPR_U32(ctx, 31, 0x1460D0u);
    ctx->pc = 0x1460CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1460C8u;
    // 0x1460cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1460C8u, 0x1460D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460D0u;
label_1460d0:
    // 0x1460d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1460d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1460d4u;
}
