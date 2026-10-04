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

// Function: FUN_001ed3d0
// Address: 0x1ed3d0 - 0x1ed474
void FUN_001ed3d0_0x1ed3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ed3d0_0x1ed3d0");
#endif

    switch (ctx->pc) {
        case 0x1ed3e0u: goto label_1ed3e0;
        case 0x1ed3e8u: goto label_1ed3e8;
        case 0x1ed3f0u: goto label_1ed3f0;
        case 0x1ed3f8u: goto label_1ed3f8;
        case 0x1ed400u: goto label_1ed400;
        case 0x1ed408u: goto label_1ed408;
        case 0x1ed410u: goto label_1ed410;
        case 0x1ed418u: goto label_1ed418;
        case 0x1ed420u: goto label_1ed420;
        case 0x1ed428u: goto label_1ed428;
        case 0x1ed430u: goto label_1ed430;
        case 0x1ed438u: goto label_1ed438;
        case 0x1ed440u: goto label_1ed440;
        case 0x1ed448u: goto label_1ed448;
        case 0x1ed450u: goto label_1ed450;
        case 0x1ed458u: goto label_1ed458;
        case 0x1ed460u: goto label_1ed460;
        case 0x1ed468u: goto label_1ed468;
        case 0x1ed470u: goto label_1ed470;
        default: break;
    }

    ctx->pc = 0x1ed3d0u;

    // 0x1ed3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed3d8: 0xc085828  jal         func_2160A0
    ctx->pc = 0x1ED3D8u;
    SET_GPR_U32(ctx, 31, 0x1ED3E0u);
    ctx->pc = 0x2160A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2160A0u, 0x1ED3D8u, 0x1ED3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3E0u;
label_1ed3e0:
    // 0x1ed3e0: 0xc07d60c  jal         func_1F5830
    ctx->pc = 0x1ED3E0u;
    SET_GPR_U32(ctx, 31, 0x1ED3E8u);
    ctx->pc = 0x1F5830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5830u, 0x1ED3E0u, 0x1ED3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3E8u;
label_1ed3e8:
    // 0x1ed3e8: 0xc07d408  jal         func_1F5020
    ctx->pc = 0x1ED3E8u;
    SET_GPR_U32(ctx, 31, 0x1ED3F0u);
    ctx->pc = 0x1F5020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5020u, 0x1ED3E8u, 0x1ED3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3F0u;
label_1ed3f0:
    // 0x1ed3f0: 0xc07db80  jal         func_1F6E00
    ctx->pc = 0x1ED3F0u;
    SET_GPR_U32(ctx, 31, 0x1ED3F8u);
    ctx->pc = 0x1F6E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6E00u, 0x1ED3F0u, 0x1ED3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3F8u;
label_1ed3f8:
    // 0x1ed3f8: 0xc07bfbc  jal         func_1EFEF0
    ctx->pc = 0x1ED3F8u;
    SET_GPR_U32(ctx, 31, 0x1ED400u);
    ctx->pc = 0x1EFEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFEF0u, 0x1ED3F8u, 0x1ED400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED400u;
label_1ed400:
    // 0x1ed400: 0xc07bea4  jal         func_1EFA90
    ctx->pc = 0x1ED400u;
    SET_GPR_U32(ctx, 31, 0x1ED408u);
    ctx->pc = 0x1EFA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA90u, 0x1ED400u, 0x1ED408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED408u;
label_1ed408:
    // 0x1ed408: 0xc07bd98  jal         func_1EF660
    ctx->pc = 0x1ED408u;
    SET_GPR_U32(ctx, 31, 0x1ED410u);
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1ED408u, 0x1ED410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED410u;
label_1ed410:
    // 0x1ed410: 0xc07bb00  jal         func_1EEC00
    ctx->pc = 0x1ED410u;
    SET_GPR_U32(ctx, 31, 0x1ED418u);
    ctx->pc = 0x1EEC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEC00u, 0x1ED410u, 0x1ED418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED418u;
label_1ed418:
    // 0x1ed418: 0xc07c6ac  jal         func_1F1AB0
    ctx->pc = 0x1ED418u;
    SET_GPR_U32(ctx, 31, 0x1ED420u);
    ctx->pc = 0x1F1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1AB0u, 0x1ED418u, 0x1ED420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED420u;
label_1ed420:
    // 0x1ed420: 0xc0801fc  jal         func_2007F0
    ctx->pc = 0x1ED420u;
    SET_GPR_U32(ctx, 31, 0x1ED428u);
    ctx->pc = 0x2007F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2007F0u, 0x1ED420u, 0x1ED428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED428u;
label_1ed428:
    // 0x1ed428: 0xc07fb64  jal         func_1FED90
    ctx->pc = 0x1ED428u;
    SET_GPR_U32(ctx, 31, 0x1ED430u);
    ctx->pc = 0x1FED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FED90u, 0x1ED428u, 0x1ED430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED430u;
label_1ed430:
    // 0x1ed430: 0xc07f754  jal         func_1FDD50
    ctx->pc = 0x1ED430u;
    SET_GPR_U32(ctx, 31, 0x1ED438u);
    ctx->pc = 0x1FDD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDD50u, 0x1ED430u, 0x1ED438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED438u;
label_1ed438:
    // 0x1ed438: 0xc07f5a4  jal         func_1FD690
    ctx->pc = 0x1ED438u;
    SET_GPR_U32(ctx, 31, 0x1ED440u);
    ctx->pc = 0x1FD690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD690u, 0x1ED438u, 0x1ED440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED440u;
label_1ed440:
    // 0x1ed440: 0xc07def8  jal         func_1F7BE0
    ctx->pc = 0x1ED440u;
    SET_GPR_U32(ctx, 31, 0x1ED448u);
    ctx->pc = 0x1F7BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7BE0u, 0x1ED440u, 0x1ED448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED448u;
label_1ed448:
    // 0x1ed448: 0xc081540  jal         func_205500
    ctx->pc = 0x1ED448u;
    SET_GPR_U32(ctx, 31, 0x1ED450u);
    ctx->pc = 0x205500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205500u, 0x1ED448u, 0x1ED450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED450u;
label_1ed450:
    // 0x1ed450: 0xc082774  jal         func_209DD0
    ctx->pc = 0x1ED450u;
    SET_GPR_U32(ctx, 31, 0x1ED458u);
    ctx->pc = 0x209DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209DD0u, 0x1ED450u, 0x1ED458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED458u;
label_1ed458:
    // 0x1ed458: 0xc081dfc  jal         func_2077F0
    ctx->pc = 0x1ED458u;
    SET_GPR_U32(ctx, 31, 0x1ED460u);
    ctx->pc = 0x2077F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2077F0u, 0x1ED458u, 0x1ED460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED460u;
label_1ed460:
    // 0x1ed460: 0xc090614  jal         func_241850
    ctx->pc = 0x1ED460u;
    SET_GPR_U32(ctx, 31, 0x1ED468u);
    ctx->pc = 0x241850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241850u, 0x1ED460u, 0x1ED468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED468u;
label_1ed468:
    // 0x1ed468: 0xc082bb0  jal         func_20AEC0
    ctx->pc = 0x1ED468u;
    SET_GPR_U32(ctx, 31, 0x1ED470u);
    ctx->pc = 0x20AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AEC0u, 0x1ED468u, 0x1ED470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED470u;
label_1ed470:
    // 0x1ed470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ed474u;
}
