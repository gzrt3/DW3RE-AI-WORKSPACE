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

// Function: FUN_001c1da0
// Address: 0x1c1da0 - 0x1c1de8
void FUN_001c1da0_0x1c1da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1da0_0x1c1da0");
#endif

    switch (ctx->pc) {
        case 0x1c1db0u: goto label_1c1db0;
        case 0x1c1db8u: goto label_1c1db8;
        case 0x1c1dd4u: goto label_1c1dd4;
        case 0x1c1ddcu: goto label_1c1ddc;
        case 0x1c1de4u: goto label_1c1de4;
        default: break;
    }

    ctx->pc = 0x1c1da0u;

    // 0x1c1da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1da8: 0xc073e44  jal         func_1CF910
    ctx->pc = 0x1C1DA8u;
    SET_GPR_U32(ctx, 31, 0x1C1DB0u);
    ctx->pc = 0x1CF910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF910u, 0x1C1DA8u, 0x1C1DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DB0u;
label_1c1db0:
    // 0x1c1db0: 0xc074408  jal         func_1D1020
    ctx->pc = 0x1C1DB0u;
    SET_GPR_U32(ctx, 31, 0x1C1DB8u);
    ctx->pc = 0x1D1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1020u, 0x1C1DB0u, 0x1C1DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DB8u;
label_1c1db8:
    // 0x1c1db8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c1db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1c1dbc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c1dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c1dc0: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1c1dc0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x1c1dc4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1DC4u;
    {
        const bool branch_taken_0x1c1dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c1dc4) {
            ctx->pc = 0x1C1DD4u;
            goto label_1c1dd4;
        }
    }
    ctx->pc = 0x1C1DCCu;
    // 0x1c1dcc: 0xc0747b0  jal         func_1D1EC0
    ctx->pc = 0x1C1DCCu;
    SET_GPR_U32(ctx, 31, 0x1C1DD4u);
    ctx->pc = 0x1D1EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1EC0u, 0x1C1DCCu, 0x1C1DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DD4u;
label_1c1dd4:
    // 0x1c1dd4: 0xc0711ec  jal         func_1C47B0
    ctx->pc = 0x1C1DD4u;
    SET_GPR_U32(ctx, 31, 0x1C1DDCu);
    ctx->pc = 0x1C47B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C47B0u, 0x1C1DD4u, 0x1C1DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DDCu;
label_1c1ddc:
    // 0x1c1ddc: 0xc0731ac  jal         func_1CC6B0
    ctx->pc = 0x1C1DDCu;
    SET_GPR_U32(ctx, 31, 0x1C1DE4u);
    ctx->pc = 0x1CC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC6B0u, 0x1C1DDCu, 0x1C1DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DE4u;
label_1c1de4:
    // 0x1c1de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1c1de8u;
}
