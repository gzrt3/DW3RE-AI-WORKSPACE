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

// Function: FUN_001a7230
// Address: 0x1a7230 - 0x1a7248
void FUN_001a7230_0x1a7230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7230_0x1a7230");
#endif

    ctx->pc = 0x1a7230u;

    // 0x1a7230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7234: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a7238: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a723c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a723cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7240: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A7240u;
    SET_GPR_U32(ctx, 31, 0x1A7248u);
    ctx->pc = 0x1A7244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7240u;
    // 0x1a7244: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A7240u, 0x1A7248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7248u;
}
