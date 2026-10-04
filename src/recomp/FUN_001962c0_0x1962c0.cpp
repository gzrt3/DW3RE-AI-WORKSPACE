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

// Function: FUN_001962c0
// Address: 0x1962c0 - 0x1962d4
void FUN_001962c0_0x1962c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001962c0_0x1962c0");
#endif

    ctx->pc = 0x1962c0u;

    // 0x1962c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1962c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1962c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1962c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1962c8: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x1962c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x1962cc: 0xc08e660  jal         func_239980
    ctx->pc = 0x1962CCu;
    SET_GPR_U32(ctx, 31, 0x1962D4u);
    ctx->pc = 0x1962D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1962CCu;
    // 0x1962d0: 0x3a0f021  addu        $fp, $sp, $zero (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239980u, 0x1962CCu, 0x1962D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1962D4u;
}
