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

// Function: FUN_001aa098
// Address: 0x1aa098 - 0x1aa0a8
void FUN_001aa098_0x1aa098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aa098_0x1aa098");
#endif

    ctx->pc = 0x1aa098u;

    // 0x1aa098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa09c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa0a0: 0xc06a65c  jal         func_1A9970
    ctx->pc = 0x1AA0A0u;
    SET_GPR_U32(ctx, 31, 0x1AA0A8u);
    ctx->pc = 0x1AA0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA0A0u;
    // 0x1aa0a4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9970u, 0x1AA0A0u, 0x1AA0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA0A8u;
}
