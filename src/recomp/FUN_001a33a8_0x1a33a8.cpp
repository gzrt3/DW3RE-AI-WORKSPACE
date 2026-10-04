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

// Function: FUN_001a33a8
// Address: 0x1a33a8 - 0x1a33c0
void FUN_001a33a8_0x1a33a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a33a8_0x1a33a8");
#endif

    ctx->pc = 0x1a33a8u;

    // 0x1a33a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a33a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a33ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a33acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a33b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a33b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a33b4: 0xac820818  sw          $v0, 0x818($a0)
    ctx->pc = 0x1a33b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2072), GPR_U32(ctx, 2));
    // 0x1a33b8: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A33B8u;
    SET_GPR_U32(ctx, 31, 0x1A33C0u);
    ctx->pc = 0x1A33BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33B8u;
    // 0x1a33bc: 0xac8001b0  sw          $zero, 0x1B0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A33B8u, 0x1A33C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33C0u;
}
