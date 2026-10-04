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

// Function: FUN_0011a330
// Address: 0x11a330 - 0x11a344
void FUN_0011a330_0x11a330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a330_0x11a330");
#endif

    switch (ctx->pc) {
        case 0x11a340u: goto label_11a340;
        default: break;
    }

    ctx->pc = 0x11a330u;

    // 0x11a330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a338: 0xc049718  jal         func_125C60
    ctx->pc = 0x11A338u;
    SET_GPR_U32(ctx, 31, 0x11A340u);
    ctx->pc = 0x125C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C60u, 0x11A338u, 0x11A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A340u;
label_11a340:
    // 0x11a340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x11a344u;
}
