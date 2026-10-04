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

// Function: entry_0010ea88
// Address: 0x10ea88 - 0x10eac4
void entry_0010ea88_0x10ea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea88_0x10ea88");
#endif

    switch (ctx->pc) {
        case 0x10ea90u: goto label_10ea90;
        case 0x10ea98u: goto label_10ea98;
        case 0x10eaa0u: goto label_10eaa0;
        case 0x10eaa8u: goto label_10eaa8;
        case 0x10eab0u: goto label_10eab0;
        case 0x10eab8u: goto label_10eab8;
        case 0x10eac0u: goto label_10eac0;
        default: break;
    }

    ctx->pc = 0x10ea88u;

    // 0x10ea88: 0xc043fd4  jal         func_10FF50
    ctx->pc = 0x10EA88u;
    SET_GPR_U32(ctx, 31, 0x10EA90u);
    ctx->pc = 0x10FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF50u, 0x10EA88u, 0x10EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA90u;
label_10ea90:
    // 0x10ea90: 0xc0443a0  jal         func_110E80
    ctx->pc = 0x10EA90u;
    SET_GPR_U32(ctx, 31, 0x10EA98u);
    ctx->pc = 0x110E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E80u, 0x10EA90u, 0x10EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA98u;
label_10ea98:
    // 0x10ea98: 0xc043b50  jal         func_10ED40
    ctx->pc = 0x10EA98u;
    SET_GPR_U32(ctx, 31, 0x10EAA0u);
    ctx->pc = 0x10ED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED40u, 0x10EA98u, 0x10EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAA0u;
label_10eaa0:
    // 0x10eaa0: 0xc06eb8c  jal         func_1BAE30
    ctx->pc = 0x10EAA0u;
    SET_GPR_U32(ctx, 31, 0x10EAA8u);
    ctx->pc = 0x1BAE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE30u, 0x10EAA0u, 0x10EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAA8u;
label_10eaa8:
    // 0x10eaa8: 0xc0563e0  jal         func_158F80
    ctx->pc = 0x10EAA8u;
    SET_GPR_U32(ctx, 31, 0x10EAB0u);
    ctx->pc = 0x158F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F80u, 0x10EAA8u, 0x10EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAB0u;
label_10eab0:
    // 0x10eab0: 0xc06e620  jal         func_1B9880
    ctx->pc = 0x10EAB0u;
    SET_GPR_U32(ctx, 31, 0x10EAB8u);
    ctx->pc = 0x1B9880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9880u, 0x10EAB0u, 0x10EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAB8u;
label_10eab8:
    // 0x10eab8: 0xc043adc  jal         func_10EB70
    ctx->pc = 0x10EAB8u;
    SET_GPR_U32(ctx, 31, 0x10EAC0u);
    ctx->pc = 0x10EB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EB70u, 0x10EAB8u, 0x10EAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAC0u;
label_10eac0:
    // 0x10eac0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10eac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x10eac4u;
}
