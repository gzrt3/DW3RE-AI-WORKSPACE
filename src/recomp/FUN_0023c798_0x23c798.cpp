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

// Function: FUN_0023c798
// Address: 0x23c798 - 0x23c7ac
void FUN_0023c798_0x23c798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023c798_0x23c798");
#endif

    ctx->pc = 0x23c798u;

    // 0x23c798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c79c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c7a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c7a4: 0x80693fc  j           func_1A4FF0
    ctx->pc = 0x23C7A4u;
    ctx->pc = 0x23C7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7A4u;
    // 0x23c7a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FF0u, 0x23C7A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23C7ACu;
}
