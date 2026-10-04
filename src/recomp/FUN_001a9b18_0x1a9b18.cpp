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

// Function: FUN_001a9b18
// Address: 0x1a9b18 - 0x1a9b28
void FUN_001a9b18_0x1a9b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a9b18_0x1a9b18");
#endif

    ctx->pc = 0x1a9b18u;

    // 0x1a9b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9b1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9b20: 0xc06a65c  jal         func_1A9970
    ctx->pc = 0x1A9B20u;
    SET_GPR_U32(ctx, 31, 0x1A9B28u);
    ctx->pc = 0x1A9B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B20u;
    // 0x1a9b24: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9970u, 0x1A9B20u, 0x1A9B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9B28u;
}
