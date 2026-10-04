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

// Function: FUN_001b1958
// Address: 0x1b1958 - 0x1b196c
void FUN_001b1958_0x1b1958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1958_0x1b1958");
#endif

    switch (ctx->pc) {
        case 0x1b1968u: goto label_1b1968;
        default: break;
    }

    ctx->pc = 0x1b1958u;

    // 0x1b1958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b195c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b195cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1960: 0xc0695b4  jal         func_1A56D0
    ctx->pc = 0x1B1960u;
    SET_GPR_U32(ctx, 31, 0x1B1968u);
    ctx->pc = 0x1B1964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1960u;
    // 0x1b1964: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A56D0u, 0x1B1960u, 0x1B1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1968u;
label_1b1968:
    // 0x1b1968: 0xf  sync
    ctx->pc = 0x1b1968u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x1b196cu;
}
