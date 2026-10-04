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

// Function: FUN_001ac378
// Address: 0x1ac378 - 0x1ac38c
void FUN_001ac378_0x1ac378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac378_0x1ac378");
#endif

    switch (ctx->pc) {
        case 0x1ac388u: goto label_1ac388;
        default: break;
    }

    ctx->pc = 0x1ac378u;

    // 0x1ac378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac37c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac380: 0xc06af62  jal         func_1ABD88
    ctx->pc = 0x1AC380u;
    SET_GPR_U32(ctx, 31, 0x1AC388u);
    ctx->pc = 0x1ABD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD88u, 0x1AC380u, 0x1AC388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC388u;
label_1ac388:
    // 0x1ac388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ac38cu;
}
