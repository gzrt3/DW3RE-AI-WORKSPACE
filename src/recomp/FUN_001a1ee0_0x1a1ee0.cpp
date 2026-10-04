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

// Function: FUN_001a1ee0
// Address: 0x1a1ee0 - 0x1a1ef8
void FUN_001a1ee0_0x1a1ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a1ee0_0x1a1ee0");
#endif

    switch (ctx->pc) {
        case 0x1a1ef4u: goto label_1a1ef4;
        default: break;
    }

    ctx->pc = 0x1a1ee0u;

    // 0x1a1ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1ee4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a1ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1eec: 0xc0686fa  jal         func_1A1BE8
    ctx->pc = 0x1A1EECu;
    SET_GPR_U32(ctx, 31, 0x1A1EF4u);
    ctx->pc = 0x1A1EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1EECu;
    // 0x1a1ef0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BE8u, 0x1A1EECu, 0x1A1EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EF4u;
label_1a1ef4:
    // 0x1a1ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a1ef8u;
}
