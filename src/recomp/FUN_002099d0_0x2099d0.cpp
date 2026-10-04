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

// Function: FUN_002099d0
// Address: 0x2099d0 - 0x2099f4
void FUN_002099d0_0x2099d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002099d0_0x2099d0");
#endif

    switch (ctx->pc) {
        case 0x2099ecu: goto label_2099ec;
        default: break;
    }

    ctx->pc = 0x2099d0u;

    // 0x2099d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2099d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2099d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2099d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2099d8: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x2099d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x2099dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2099DCu;
    {
        const bool branch_taken_0x2099dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2099dc) {
            ctx->pc = 0x2099F0u;
            goto label_2099f0;
        }
    }
    ctx->pc = 0x2099E4u;
    // 0x2099e4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x2099E4u;
    SET_GPR_U32(ctx, 31, 0x2099ECu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x2099E4u, 0x2099ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099ECu;
label_2099ec:
    // 0x2099ec: 0xaf809100  sw          $zero, -0x6F00($gp)
    ctx->pc = 0x2099ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938880), GPR_U32(ctx, 0));
label_2099f0:
    // 0x2099f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2099f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2099f4u;
}
