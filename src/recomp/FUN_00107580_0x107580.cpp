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

// Function: FUN_00107580
// Address: 0x107580 - 0x1075b4
void FUN_00107580_0x107580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00107580_0x107580");
#endif

    switch (ctx->pc) {
        case 0x10759cu: goto label_10759c;
        case 0x1075b0u: goto label_1075b0;
        default: break;
    }

    ctx->pc = 0x107580u;

    // 0x107580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107588: 0x8f848474  lw          $a0, -0x7B8C($gp)
    ctx->pc = 0x107588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935668)));
    // 0x10758c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10758Cu;
    {
        const bool branch_taken_0x10758c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10758c) {
            ctx->pc = 0x10759Cu;
            goto label_10759c;
        }
    }
    ctx->pc = 0x107594u;
    // 0x107594: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x107594u;
    SET_GPR_U32(ctx, 31, 0x10759Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x107594u, 0x10759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10759Cu;
label_10759c:
    // 0x10759c: 0x8f84847c  lw          $a0, -0x7B84($gp)
    ctx->pc = 0x10759cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935676)));
    // 0x1075a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1075A0u;
    {
        const bool branch_taken_0x1075a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1075a0) {
            ctx->pc = 0x1075B0u;
            goto label_1075b0;
        }
    }
    ctx->pc = 0x1075A8u;
    // 0x1075a8: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1075A8u;
    SET_GPR_U32(ctx, 31, 0x1075B0u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1075A8u, 0x1075B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075B0u;
label_1075b0:
    // 0x1075b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1075b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1075b4u;
}
