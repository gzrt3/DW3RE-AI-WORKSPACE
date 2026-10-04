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

// Function: FUN_001a2c98
// Address: 0x1a2c98 - 0x1a2cb0
void FUN_001a2c98_0x1a2c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2c98_0x1a2c98");
#endif

    ctx->pc = 0x1a2c98u;

    // 0x1a2c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2ca0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a2ca4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a2ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ca8: 0xc068b12  jal         func_1A2C48
    ctx->pc = 0x1A2CA8u;
    SET_GPR_U32(ctx, 31, 0x1A2CB0u);
    ctx->pc = 0x1A2CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2CA8u;
    // 0x1a2cac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C48u, 0x1A2CA8u, 0x1A2CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CB0u;
}
