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

// Function: FUN_001176f0
// Address: 0x1176f0 - 0x117704
void FUN_001176f0_0x1176f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001176f0_0x1176f0");
#endif

    switch (ctx->pc) {
        case 0x117700u: goto label_117700;
        default: break;
    }

    ctx->pc = 0x1176f0u;

    // 0x1176f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1176f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1176f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1176f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1176f8: 0xc047cac  jal         func_11F2B0
    ctx->pc = 0x1176F8u;
    SET_GPR_U32(ctx, 31, 0x117700u);
    ctx->pc = 0x11F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F2B0u, 0x1176F8u, 0x117700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117700u;
label_117700:
    // 0x117700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x117704u;
}
