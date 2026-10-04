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

// Function: FUN_001ed310
// Address: 0x1ed310 - 0x1ed3bc
void FUN_001ed310_0x1ed310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ed310_0x1ed310");
#endif

    switch (ctx->pc) {
        case 0x1ed320u: goto label_1ed320;
        case 0x1ed328u: goto label_1ed328;
        case 0x1ed330u: goto label_1ed330;
        case 0x1ed338u: goto label_1ed338;
        case 0x1ed340u: goto label_1ed340;
        case 0x1ed348u: goto label_1ed348;
        case 0x1ed350u: goto label_1ed350;
        case 0x1ed358u: goto label_1ed358;
        case 0x1ed360u: goto label_1ed360;
        case 0x1ed368u: goto label_1ed368;
        case 0x1ed370u: goto label_1ed370;
        case 0x1ed378u: goto label_1ed378;
        case 0x1ed380u: goto label_1ed380;
        case 0x1ed388u: goto label_1ed388;
        case 0x1ed390u: goto label_1ed390;
        case 0x1ed398u: goto label_1ed398;
        case 0x1ed3a0u: goto label_1ed3a0;
        case 0x1ed3a8u: goto label_1ed3a8;
        case 0x1ed3b0u: goto label_1ed3b0;
        case 0x1ed3b8u: goto label_1ed3b8;
        default: break;
    }

    ctx->pc = 0x1ed310u;

    // 0x1ed310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed318: 0xc07c06c  jal         func_1F01B0
    ctx->pc = 0x1ED318u;
    SET_GPR_U32(ctx, 31, 0x1ED320u);
    ctx->pc = 0x1F01B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F01B0u, 0x1ED318u, 0x1ED320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED320u;
label_1ed320:
    // 0x1ed320: 0xc085908  jal         func_216420
    ctx->pc = 0x1ED320u;
    SET_GPR_U32(ctx, 31, 0x1ED328u);
    ctx->pc = 0x216420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216420u, 0x1ED320u, 0x1ED328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED328u;
label_1ed328:
    // 0x1ed328: 0xc07d610  jal         func_1F5840
    ctx->pc = 0x1ED328u;
    SET_GPR_U32(ctx, 31, 0x1ED330u);
    ctx->pc = 0x1F5840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5840u, 0x1ED328u, 0x1ED330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED330u;
label_1ed330:
    // 0x1ed330: 0xc07d40c  jal         func_1F5030
    ctx->pc = 0x1ED330u;
    SET_GPR_U32(ctx, 31, 0x1ED338u);
    ctx->pc = 0x1F5030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5030u, 0x1ED330u, 0x1ED338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED338u;
label_1ed338:
    // 0x1ed338: 0xc07dbbc  jal         func_1F6EF0
    ctx->pc = 0x1ED338u;
    SET_GPR_U32(ctx, 31, 0x1ED340u);
    ctx->pc = 0x1F6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6EF0u, 0x1ED338u, 0x1ED340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED340u;
label_1ed340:
    // 0x1ed340: 0xc07bfe0  jal         func_1EFF80
    ctx->pc = 0x1ED340u;
    SET_GPR_U32(ctx, 31, 0x1ED348u);
    ctx->pc = 0x1EFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFF80u, 0x1ED340u, 0x1ED348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED348u;
label_1ed348:
    // 0x1ed348: 0xc07bec8  jal         func_1EFB20
    ctx->pc = 0x1ED348u;
    SET_GPR_U32(ctx, 31, 0x1ED350u);
    ctx->pc = 0x1EFB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFB20u, 0x1ED348u, 0x1ED350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED350u;
label_1ed350:
    // 0x1ed350: 0xc07bdbc  jal         func_1EF6F0
    ctx->pc = 0x1ED350u;
    SET_GPR_U32(ctx, 31, 0x1ED358u);
    ctx->pc = 0x1EF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF6F0u, 0x1ED350u, 0x1ED358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED358u;
label_1ed358:
    // 0x1ed358: 0xc07bb50  jal         func_1EED40
    ctx->pc = 0x1ED358u;
    SET_GPR_U32(ctx, 31, 0x1ED360u);
    ctx->pc = 0x1EED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EED40u, 0x1ED358u, 0x1ED360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED360u;
label_1ed360:
    // 0x1ed360: 0xc07c6b8  jal         func_1F1AE0
    ctx->pc = 0x1ED360u;
    SET_GPR_U32(ctx, 31, 0x1ED368u);
    ctx->pc = 0x1F1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1AE0u, 0x1ED360u, 0x1ED368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED368u;
label_1ed368:
    // 0x1ed368: 0xc08022c  jal         func_2008B0
    ctx->pc = 0x1ED368u;
    SET_GPR_U32(ctx, 31, 0x1ED370u);
    ctx->pc = 0x2008B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2008B0u, 0x1ED368u, 0x1ED370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED370u;
label_1ed370:
    // 0x1ed370: 0xc07fb68  jal         func_1FEDA0
    ctx->pc = 0x1ED370u;
    SET_GPR_U32(ctx, 31, 0x1ED378u);
    ctx->pc = 0x1FEDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEDA0u, 0x1ED370u, 0x1ED378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED378u;
label_1ed378:
    // 0x1ed378: 0xc07f758  jal         func_1FDD60
    ctx->pc = 0x1ED378u;
    SET_GPR_U32(ctx, 31, 0x1ED380u);
    ctx->pc = 0x1FDD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDD60u, 0x1ED378u, 0x1ED380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED380u;
label_1ed380:
    // 0x1ed380: 0xc07f5b4  jal         func_1FD6D0
    ctx->pc = 0x1ED380u;
    SET_GPR_U32(ctx, 31, 0x1ED388u);
    ctx->pc = 0x1FD6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6D0u, 0x1ED380u, 0x1ED388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED388u;
label_1ed388:
    // 0x1ed388: 0xc07df44  jal         func_1F7D10
    ctx->pc = 0x1ED388u;
    SET_GPR_U32(ctx, 31, 0x1ED390u);
    ctx->pc = 0x1F7D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D10u, 0x1ED388u, 0x1ED390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED390u;
label_1ed390:
    // 0x1ed390: 0xc081580  jal         func_205600
    ctx->pc = 0x1ED390u;
    SET_GPR_U32(ctx, 31, 0x1ED398u);
    ctx->pc = 0x205600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205600u, 0x1ED390u, 0x1ED398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED398u;
label_1ed398:
    // 0x1ed398: 0xc0827b4  jal         func_209ED0
    ctx->pc = 0x1ED398u;
    SET_GPR_U32(ctx, 31, 0x1ED3A0u);
    ctx->pc = 0x209ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209ED0u, 0x1ED398u, 0x1ED3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3A0u;
label_1ed3a0:
    // 0x1ed3a0: 0xc081e5c  jal         func_207970
    ctx->pc = 0x1ED3A0u;
    SET_GPR_U32(ctx, 31, 0x1ED3A8u);
    ctx->pc = 0x207970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207970u, 0x1ED3A0u, 0x1ED3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3A8u;
label_1ed3a8:
    // 0x1ed3a8: 0xc0908b4  jal         func_2422D0
    ctx->pc = 0x1ED3A8u;
    SET_GPR_U32(ctx, 31, 0x1ED3B0u);
    ctx->pc = 0x2422D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2422D0u, 0x1ED3A8u, 0x1ED3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3B0u;
label_1ed3b0:
    // 0x1ed3b0: 0xc082bec  jal         func_20AFB0
    ctx->pc = 0x1ED3B0u;
    SET_GPR_U32(ctx, 31, 0x1ED3B8u);
    ctx->pc = 0x20AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AFB0u, 0x1ED3B0u, 0x1ED3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3B8u;
label_1ed3b8:
    // 0x1ed3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ed3bcu;
}
