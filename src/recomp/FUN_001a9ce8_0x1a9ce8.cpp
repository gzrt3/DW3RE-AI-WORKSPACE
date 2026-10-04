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

// Function: FUN_001a9ce8
// Address: 0x1a9ce8 - 0x1a9cf8
void FUN_001a9ce8_0x1a9ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a9ce8_0x1a9ce8");
#endif

    ctx->pc = 0x1a9ce8u;

    // 0x1a9ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9cec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9cf0: 0xc06a65c  jal         func_1A9970
    ctx->pc = 0x1A9CF0u;
    SET_GPR_U32(ctx, 31, 0x1A9CF8u);
    ctx->pc = 0x1A9CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9CF0u;
    // 0x1a9cf4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9970u, 0x1A9CF0u, 0x1A9CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9CF8u;
}
