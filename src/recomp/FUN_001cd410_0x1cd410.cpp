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

// Function: FUN_001cd410
// Address: 0x1cd410 - 0x1cd424
void FUN_001cd410_0x1cd410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cd410_0x1cd410");
#endif

    switch (ctx->pc) {
        case 0x1cd420u: goto label_1cd420;
        default: break;
    }

    ctx->pc = 0x1cd410u;

    // 0x1cd410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd418: 0xc07350c  jal         func_1CD430
    ctx->pc = 0x1CD418u;
    SET_GPR_U32(ctx, 31, 0x1CD420u);
    ctx->pc = 0x1CD430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD430u, 0x1CD418u, 0x1CD420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD420u;
label_1cd420:
    // 0x1cd420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1cd424u;
}
