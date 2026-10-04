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

// Function: FUN_0010c9d0
// Address: 0x10c9d0 - 0x10c9e8
void FUN_0010c9d0_0x10c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010c9d0_0x10c9d0");
#endif

    switch (ctx->pc) {
        case 0x10c9e4u: goto label_10c9e4;
        default: break;
    }

    ctx->pc = 0x10c9d0u;

    // 0x10c9d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c9d4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x10c9d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c9dc: 0xc043034  jal         func_10C0D0
    ctx->pc = 0x10C9DCu;
    SET_GPR_U32(ctx, 31, 0x10C9E4u);
    ctx->pc = 0x10C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9DCu;
    // 0x10c9e0: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C0D0u, 0x10C9DCu, 0x10C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9E4u;
label_10c9e4:
    // 0x10c9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x10c9e8u;
}
