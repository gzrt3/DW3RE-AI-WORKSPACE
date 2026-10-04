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

// Function: FUN_001c1680
// Address: 0x1c1680 - 0x1c169c
void FUN_001c1680_0x1c1680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1680_0x1c1680");
#endif

    switch (ctx->pc) {
        case 0x1c1690u: goto label_1c1690;
        case 0x1c1698u: goto label_1c1698;
        default: break;
    }

    ctx->pc = 0x1c1680u;

    // 0x1c1680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1688: 0xc070648  jal         func_1C1920
    ctx->pc = 0x1C1688u;
    SET_GPR_U32(ctx, 31, 0x1C1690u);
    ctx->pc = 0x1C1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1920u, 0x1C1688u, 0x1C1690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1690u;
label_1c1690:
    // 0x1c1690: 0xc0705e0  jal         func_1C1780
    ctx->pc = 0x1C1690u;
    SET_GPR_U32(ctx, 31, 0x1C1698u);
    ctx->pc = 0x1C1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1780u, 0x1C1690u, 0x1C1698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1698u;
label_1c1698:
    // 0x1c1698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1c169cu;
}
