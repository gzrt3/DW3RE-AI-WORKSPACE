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

// Function: FUN_00112810
// Address: 0x112810 - 0x11284c
void FUN_00112810_0x112810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00112810_0x112810");
#endif

    switch (ctx->pc) {
        case 0x112820u: goto label_112820;
        case 0x112828u: goto label_112828;
        case 0x112830u: goto label_112830;
        case 0x112838u: goto label_112838;
        case 0x112840u: goto label_112840;
        case 0x112848u: goto label_112848;
        default: break;
    }

    ctx->pc = 0x112810u;

    // 0x112810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112818: 0xc044a18  jal         func_112860
    ctx->pc = 0x112818u;
    SET_GPR_U32(ctx, 31, 0x112820u);
    ctx->pc = 0x112860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112860u, 0x112818u, 0x112820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112820u;
label_112820:
    // 0x112820: 0xc045670  jal         func_1159C0
    ctx->pc = 0x112820u;
    SET_GPR_U32(ctx, 31, 0x112828u);
    ctx->pc = 0x1159C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159C0u, 0x112820u, 0x112828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112828u;
label_112828:
    // 0x112828: 0xc045b3c  jal         func_116CF0
    ctx->pc = 0x112828u;
    SET_GPR_U32(ctx, 31, 0x112830u);
    ctx->pc = 0x116CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116CF0u, 0x112828u, 0x112830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112830u;
label_112830:
    // 0x112830: 0xc057adc  jal         func_15EB70
    ctx->pc = 0x112830u;
    SET_GPR_U32(ctx, 31, 0x112838u);
    ctx->pc = 0x15EB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB70u, 0x112830u, 0x112838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112838u;
label_112838:
    // 0x112838: 0xc08c254  jal         func_230950
    ctx->pc = 0x112838u;
    SET_GPR_U32(ctx, 31, 0x112840u);
    ctx->pc = 0x230950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230950u, 0x112838u, 0x112840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112840u;
label_112840:
    // 0x112840: 0xc054448  jal         func_151120
    ctx->pc = 0x112840u;
    SET_GPR_U32(ctx, 31, 0x112848u);
    ctx->pc = 0x151120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151120u, 0x112840u, 0x112848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112848u;
label_112848:
    // 0x112848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x11284cu;
}
