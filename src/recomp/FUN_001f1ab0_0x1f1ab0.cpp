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

// Function: FUN_001f1ab0
// Address: 0x1f1ab0 - 0x1f1ad0
void FUN_001f1ab0_0x1f1ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f1ab0_0x1f1ab0");
#endif

    switch (ctx->pc) {
        case 0x1f1accu: goto label_1f1acc;
        default: break;
    }

    ctx->pc = 0x1f1ab0u;

    // 0x1f1ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1ab8: 0x8f838fd0  lw          $v1, -0x7030($gp)
    ctx->pc = 0x1f1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f1abc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1ABCu;
    {
        const bool branch_taken_0x1f1abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1abc) {
            ctx->pc = 0x1F1ACCu;
            goto label_1f1acc;
        }
    }
    ctx->pc = 0x1F1AC4u;
    // 0x1f1ac4: 0xc07c7cc  jal         func_1F1F30
    ctx->pc = 0x1F1AC4u;
    SET_GPR_U32(ctx, 31, 0x1F1ACCu);
    ctx->pc = 0x1F1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1F30u, 0x1F1AC4u, 0x1F1ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1ACCu;
label_1f1acc:
    // 0x1f1acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1f1ad0u;
}
