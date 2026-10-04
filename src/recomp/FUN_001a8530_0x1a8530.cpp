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

// Function: FUN_001a8530
// Address: 0x1a8530 - 0x1a854c
void FUN_001a8530_0x1a8530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a8530_0x1a8530");
#endif

    switch (ctx->pc) {
        case 0x1a8540u: goto label_1a8540;
        default: break;
    }

    ctx->pc = 0x1a8530u;

    // 0x1a8530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8538: 0xc06a138  jal         func_1A84E0
    ctx->pc = 0x1A8538u;
    SET_GPR_U32(ctx, 31, 0x1A8540u);
    ctx->pc = 0x1A84E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A84E0u, 0x1A8538u, 0x1A8540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8540u;
label_1a8540:
    // 0x1a8540: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a8540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1a8544: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1A8544u;
    SET_GPR_U32(ctx, 31, 0x1A854Cu);
    ctx->pc = 0x1A8548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8544u;
    // 0x1a8548: 0x8c445bfc  lw          $a0, 0x5BFC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1A8544u, 0x1A854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A854Cu;
}
