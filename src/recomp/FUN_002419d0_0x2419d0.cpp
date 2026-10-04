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

// Function: FUN_002419d0
// Address: 0x2419d0 - 0x2419f4
void FUN_002419d0_0x2419d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002419d0_0x2419d0");
#endif

    switch (ctx->pc) {
        case 0x2419ecu: goto label_2419ec;
        default: break;
    }

    ctx->pc = 0x2419d0u;

    // 0x2419d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2419d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2419d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2419d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2419d8: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x2419d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x2419dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2419DCu;
    {
        const bool branch_taken_0x2419dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2419dc) {
            ctx->pc = 0x2419F0u;
            goto label_2419f0;
        }
    }
    ctx->pc = 0x2419E4u;
    // 0x2419e4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x2419E4u;
    SET_GPR_U32(ctx, 31, 0x2419ECu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x2419E4u, 0x2419ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419ECu;
label_2419ec:
    // 0x2419ec: 0xaf8092f8  sw          $zero, -0x6D08($gp)
    ctx->pc = 0x2419ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939384), GPR_U32(ctx, 0));
label_2419f0:
    // 0x2419f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2419f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2419f4u;
}
