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

// Function: entry_001ed2cc
// Address: 0x1ed2cc - 0x1ed2f4
void entry_001ed2cc_0x1ed2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed2cc_0x1ed2cc");
#endif

    switch (ctx->pc) {
        case 0x1ed2d4u: goto label_1ed2d4;
        case 0x1ed2e4u: goto label_1ed2e4;
        default: break;
    }

    ctx->pc = 0x1ed2ccu;

    // 0x1ed2cc: 0xc07b1a8  jal         func_1EC6A0
    ctx->pc = 0x1ED2CCu;
    SET_GPR_U32(ctx, 31, 0x1ED2D4u);
    ctx->pc = 0x1EC6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6A0u, 0x1ED2CCu, 0x1ED2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2D4u;
label_1ed2d4:
    // 0x1ed2d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED2D4u;
    {
        const bool branch_taken_0x1ed2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2d4) {
            ctx->pc = 0x1ED2F4u;
            return;
        }
    }
    ctx->pc = 0x1ED2DCu;
    // 0x1ed2dc: 0xc07b1a4  jal         func_1EC690
    ctx->pc = 0x1ED2DCu;
    SET_GPR_U32(ctx, 31, 0x1ED2E4u);
    ctx->pc = 0x1EC690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC690u, 0x1ED2DCu, 0x1ED2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED2E4u;
label_1ed2e4:
    // 0x1ed2e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED2E4u;
    {
        const bool branch_taken_0x1ed2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed2e4) {
            ctx->pc = 0x1ED2F4u;
            return;
        }
    }
    ctx->pc = 0x1ED2ECu;
    // 0x1ed2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed2f0: 0xaf828f40  sw          $v0, -0x70C0($gp)
    ctx->pc = 0x1ed2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938432), GPR_U32(ctx, 2));
    ctx->pc = 0x1ed2f4u;
}
