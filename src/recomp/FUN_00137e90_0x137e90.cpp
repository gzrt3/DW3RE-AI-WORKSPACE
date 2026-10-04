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

// Function: FUN_00137e90
// Address: 0x137e90 - 0x137ec4
void FUN_00137e90_0x137e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137e90_0x137e90");
#endif

    switch (ctx->pc) {
        case 0x137ea0u: goto label_137ea0;
        case 0x137ea8u: goto label_137ea8;
        case 0x137eb0u: goto label_137eb0;
        case 0x137eb8u: goto label_137eb8;
        case 0x137ec0u: goto label_137ec0;
        default: break;
    }

    ctx->pc = 0x137e90u;

    // 0x137e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137e98: 0xc044f64  jal         func_113D90
    ctx->pc = 0x137E98u;
    SET_GPR_U32(ctx, 31, 0x137EA0u);
    ctx->pc = 0x113D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D90u, 0x137E98u, 0x137EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EA0u;
label_137ea0:
    // 0x137ea0: 0xc04592c  jal         func_1164B0
    ctx->pc = 0x137EA0u;
    SET_GPR_U32(ctx, 31, 0x137EA8u);
    ctx->pc = 0x1164B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1164B0u, 0x137EA0u, 0x137EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EA8u;
label_137ea8:
    // 0x137ea8: 0xc07a748  jal         func_1E9D20
    ctx->pc = 0x137EA8u;
    SET_GPR_U32(ctx, 31, 0x137EB0u);
    ctx->pc = 0x1E9D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9D20u, 0x137EA8u, 0x137EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EB0u;
label_137eb0:
    // 0x137eb0: 0xc05452c  jal         func_1514B0
    ctx->pc = 0x137EB0u;
    SET_GPR_U32(ctx, 31, 0x137EB8u);
    ctx->pc = 0x1514B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1514B0u, 0x137EB0u, 0x137EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EB8u;
label_137eb8:
    // 0x137eb8: 0xc075608  jal         func_1D5820
    ctx->pc = 0x137EB8u;
    SET_GPR_U32(ctx, 31, 0x137EC0u);
    ctx->pc = 0x1D5820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5820u, 0x137EB8u, 0x137EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EC0u;
label_137ec0:
    // 0x137ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x137ec4u;
}
