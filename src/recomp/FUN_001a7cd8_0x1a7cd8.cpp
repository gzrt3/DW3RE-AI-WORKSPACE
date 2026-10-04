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

// Function: FUN_001a7cd8
// Address: 0x1a7cd8 - 0x1a7cf0
void FUN_001a7cd8_0x1a7cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7cd8_0x1a7cd8");
#endif

    ctx->pc = 0x1a7cd8u;

    // 0x1a7cd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7cdc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a7ce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7ce8: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A7CE8u;
    SET_GPR_U32(ctx, 31, 0x1A7CF0u);
    ctx->pc = 0x1A7CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7CE8u;
    // 0x1a7cec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A7CE8u, 0x1A7CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CF0u;
}
