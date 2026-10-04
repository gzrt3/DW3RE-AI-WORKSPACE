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

// Function: FUN_00205120
// Address: 0x205120 - 0x205144
void FUN_00205120_0x205120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00205120_0x205120");
#endif

    switch (ctx->pc) {
        case 0x20513cu: goto label_20513c;
        default: break;
    }

    ctx->pc = 0x205120u;

    // 0x205120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205128: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x205128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x20512c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20512Cu;
    {
        const bool branch_taken_0x20512c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20512c) {
            ctx->pc = 0x205140u;
            goto label_205140;
        }
    }
    ctx->pc = 0x205134u;
    // 0x205134: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x205134u;
    SET_GPR_U32(ctx, 31, 0x20513Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x205134u, 0x20513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20513Cu;
label_20513c:
    // 0x20513c: 0xaf8090f8  sw          $zero, -0x6F08($gp)
    ctx->pc = 0x20513cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938872), GPR_U32(ctx, 0));
label_205140:
    // 0x205140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x205144u;
}
