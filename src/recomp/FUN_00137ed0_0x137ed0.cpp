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

// Function: FUN_00137ed0
// Address: 0x137ed0 - 0x137f04
void FUN_00137ed0_0x137ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137ed0_0x137ed0");
#endif

    switch (ctx->pc) {
        case 0x137ee0u: goto label_137ee0;
        case 0x137ee8u: goto label_137ee8;
        case 0x137ef0u: goto label_137ef0;
        case 0x137ef8u: goto label_137ef8;
        case 0x137f00u: goto label_137f00;
        default: break;
    }

    ctx->pc = 0x137ed0u;

    // 0x137ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137ed8: 0xc044f64  jal         func_113D90
    ctx->pc = 0x137ED8u;
    SET_GPR_U32(ctx, 31, 0x137EE0u);
    ctx->pc = 0x113D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D90u, 0x137ED8u, 0x137EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EE0u;
label_137ee0:
    // 0x137ee0: 0xc054550  jal         func_151540
    ctx->pc = 0x137EE0u;
    SET_GPR_U32(ctx, 31, 0x137EE8u);
    ctx->pc = 0x151540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151540u, 0x137EE0u, 0x137EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EE8u;
label_137ee8:
    // 0x137ee8: 0xc07a74c  jal         func_1E9D30
    ctx->pc = 0x137EE8u;
    SET_GPR_U32(ctx, 31, 0x137EF0u);
    ctx->pc = 0x1E9D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9D30u, 0x137EE8u, 0x137EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EF0u;
label_137ef0:
    // 0x137ef0: 0xc045924  jal         func_116490
    ctx->pc = 0x137EF0u;
    SET_GPR_U32(ctx, 31, 0x137EF8u);
    ctx->pc = 0x116490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116490u, 0x137EF0u, 0x137EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EF8u;
label_137ef8:
    // 0x137ef8: 0xc075638  jal         func_1D58E0
    ctx->pc = 0x137EF8u;
    SET_GPR_U32(ctx, 31, 0x137F00u);
    ctx->pc = 0x1D58E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D58E0u, 0x137EF8u, 0x137F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F00u;
label_137f00:
    // 0x137f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x137f04u;
}
