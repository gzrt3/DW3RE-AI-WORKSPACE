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

// Function: FUN_001487c0
// Address: 0x1487c0 - 0x14880c
void FUN_001487c0_0x1487c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001487c0_0x1487c0");
#endif

    switch (ctx->pc) {
        case 0x1487d0u: goto label_1487d0;
        case 0x1487d8u: goto label_1487d8;
        case 0x1487e0u: goto label_1487e0;
        case 0x1487e8u: goto label_1487e8;
        case 0x1487f0u: goto label_1487f0;
        case 0x1487f8u: goto label_1487f8;
        case 0x148800u: goto label_148800;
        case 0x148808u: goto label_148808;
        default: break;
    }

    ctx->pc = 0x1487c0u;

    // 0x1487c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1487c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1487c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1487c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1487c8: 0xc0521a4  jal         func_148690
    ctx->pc = 0x1487C8u;
    SET_GPR_U32(ctx, 31, 0x1487D0u);
    ctx->pc = 0x148690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148690u, 0x1487C8u, 0x1487D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487D0u;
label_1487d0:
    // 0x1487d0: 0xc04fbb4  jal         func_13EED0
    ctx->pc = 0x1487D0u;
    SET_GPR_U32(ctx, 31, 0x1487D8u);
    ctx->pc = 0x13EED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EED0u, 0x1487D0u, 0x1487D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487D8u;
label_1487d8:
    // 0x1487d8: 0xc04f894  jal         func_13E250
    ctx->pc = 0x1487D8u;
    SET_GPR_U32(ctx, 31, 0x1487E0u);
    ctx->pc = 0x13E250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E250u, 0x1487D8u, 0x1487E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487E0u;
label_1487e0:
    // 0x1487e0: 0xc04f534  jal         func_13D4D0
    ctx->pc = 0x1487E0u;
    SET_GPR_U32(ctx, 31, 0x1487E8u);
    ctx->pc = 0x13D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D4D0u, 0x1487E0u, 0x1487E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487E8u;
label_1487e8:
    // 0x1487e8: 0xc042070  jal         func_1081C0
    ctx->pc = 0x1487E8u;
    SET_GPR_U32(ctx, 31, 0x1487F0u);
    ctx->pc = 0x1081C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081C0u, 0x1487E8u, 0x1487F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487F0u;
label_1487f0:
    // 0x1487f0: 0xc05a024  jal         func_168090
    ctx->pc = 0x1487F0u;
    SET_GPR_U32(ctx, 31, 0x1487F8u);
    ctx->pc = 0x168090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168090u, 0x1487F0u, 0x1487F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487F8u;
label_1487f8:
    // 0x1487f8: 0xc059510  jal         func_165440
    ctx->pc = 0x1487F8u;
    SET_GPR_U32(ctx, 31, 0x148800u);
    ctx->pc = 0x165440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165440u, 0x1487F8u, 0x148800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148800u;
label_148800:
    // 0x148800: 0xc04f3ec  jal         func_13CFB0
    ctx->pc = 0x148800u;
    SET_GPR_U32(ctx, 31, 0x148808u);
    ctx->pc = 0x13CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CFB0u, 0x148800u, 0x148808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148808u;
label_148808:
    // 0x148808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x14880cu;
}
