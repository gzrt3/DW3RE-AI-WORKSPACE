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

// Function: FUN_002470c0
// Address: 0x2470c0 - 0x2470d4
void FUN_002470c0_0x2470c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002470c0_0x2470c0");
#endif

    switch (ctx->pc) {
        case 0x2470d0u: goto label_2470d0;
        default: break;
    }

    ctx->pc = 0x2470c0u;

    // 0x2470c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2470c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2470c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2470c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2470c8: 0xc18f564  jal         func_63D590
    ctx->pc = 0x2470C8u;
    SET_GPR_U32(ctx, 31, 0x2470D0u);
    ctx->pc = 0x2470CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2470C8u;
    // 0x2470cc: 0x24841060  addiu       $a0, $a0, 0x1060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63D590u, 0x2470C8u, 0x2470D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470D0u;
label_2470d0:
    // 0x2470d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2470d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2470d4u;
}
