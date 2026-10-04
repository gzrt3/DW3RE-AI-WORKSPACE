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

// Function: entry_001a3004
// Address: 0x1a3004 - 0x1a301c
void entry_001a3004_0x1a3004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3004_0x1a3004");
#endif

    switch (ctx->pc) {
        case 0x1a300cu: goto label_1a300c;
        default: break;
    }

    ctx->pc = 0x1a3004u;

    // 0x1a3004: 0xc0680e0  jal         func_1A0380
    ctx->pc = 0x1A3004u;
    SET_GPR_U32(ctx, 31, 0x1A300Cu);
    ctx->pc = 0x1A3008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3004u;
    // 0x1a3008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0380u, 0x1A3004u, 0x1A300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A300Cu;
label_1a300c:
    // 0x1a300c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a300cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3010: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a3010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3014: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x1A3014u;
    SET_GPR_U32(ctx, 31, 0x1A301Cu);
    ctx->pc = 0x1A3018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3014u;
    // 0x1a3018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x1A3014u, 0x1A301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A301Cu;
}
