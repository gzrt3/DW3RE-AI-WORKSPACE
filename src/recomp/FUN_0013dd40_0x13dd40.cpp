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

// Function: FUN_0013dd40
// Address: 0x13dd40 - 0x13dd74
void FUN_0013dd40_0x13dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013dd40_0x13dd40");
#endif

    switch (ctx->pc) {
        case 0x13dd5cu: goto label_13dd5c;
        case 0x13dd70u: goto label_13dd70;
        default: break;
    }

    ctx->pc = 0x13dd40u;

    // 0x13dd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13dd44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13dd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13dd48: 0x8f848540  lw          $a0, -0x7AC0($gp)
    ctx->pc = 0x13dd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935872)));
    // 0x13dd4c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DD4Cu;
    {
        const bool branch_taken_0x13dd4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dd4c) {
            ctx->pc = 0x13DD5Cu;
            goto label_13dd5c;
        }
    }
    ctx->pc = 0x13DD54u;
    // 0x13dd54: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x13DD54u;
    SET_GPR_U32(ctx, 31, 0x13DD5Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x13DD54u, 0x13DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD5Cu;
label_13dd5c:
    // 0x13dd5c: 0x8f848538  lw          $a0, -0x7AC8($gp)
    ctx->pc = 0x13dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935864)));
    // 0x13dd60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DD60u;
    {
        const bool branch_taken_0x13dd60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dd60) {
            ctx->pc = 0x13DD70u;
            goto label_13dd70;
        }
    }
    ctx->pc = 0x13DD68u;
    // 0x13dd68: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x13DD68u;
    SET_GPR_U32(ctx, 31, 0x13DD70u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x13DD68u, 0x13DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD70u;
label_13dd70:
    // 0x13dd70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13dd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13dd74u;
}
