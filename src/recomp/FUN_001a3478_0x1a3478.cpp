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

// Function: FUN_001a3478
// Address: 0x1a3478 - 0x1a349c
void FUN_001a3478_0x1a3478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3478_0x1a3478");
#endif

    switch (ctx->pc) {
        case 0x1a3490u: goto label_1a3490;
        default: break;
    }

    ctx->pc = 0x1a3478u;

    // 0x1a3478: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1a3478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1a347c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1a347cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x1a3480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3484: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1a3484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1a3488: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1A3488u;
    SET_GPR_U32(ctx, 31, 0x1A3490u);
    ctx->pc = 0x1A348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3488u;
    // 0x1a348c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1A3488u, 0x1A3490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3490u;
label_1a3490:
    // 0x1a3490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3494: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A3494u;
    SET_GPR_U32(ctx, 31, 0x1A349Cu);
    ctx->pc = 0x1A3498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3494u;
    // 0x1a3498: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A3494u, 0x1A349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A349Cu;
}
