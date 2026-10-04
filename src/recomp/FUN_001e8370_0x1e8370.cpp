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

// Function: FUN_001e8370
// Address: 0x1e8370 - 0x1e838c
void FUN_001e8370_0x1e8370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8370_0x1e8370");
#endif

    switch (ctx->pc) {
        case 0x1e8380u: goto label_1e8380;
        default: break;
    }

    ctx->pc = 0x1e8370u;

    // 0x1e8370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e8370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e8374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8378: 0xc041478  jal         func_1051E0
    ctx->pc = 0x1E8378u;
    SET_GPR_U32(ctx, 31, 0x1E8380u);
    ctx->pc = 0x1051E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E0u, 0x1E8378u, 0x1E8380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8380u;
label_1e8380:
    // 0x1e8380: 0x8f848e90  lw          $a0, -0x7170($gp)
    ctx->pc = 0x1e8380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
    // 0x1e8384: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1E8384u;
    SET_GPR_U32(ctx, 31, 0x1E838Cu);
    ctx->pc = 0x1E8388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8384u;
    // 0x1e8388: 0xaf808dc4  sw          $zero, -0x723C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938052), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1E8384u, 0x1E838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E838Cu;
}
