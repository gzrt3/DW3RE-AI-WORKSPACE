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

// Function: FUN_001558b0
// Address: 0x1558b0 - 0x1558d8
void FUN_001558b0_0x1558b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001558b0_0x1558b0");
#endif

    switch (ctx->pc) {
        case 0x1558c8u: goto label_1558c8;
        case 0x1558d4u: goto label_1558d4;
        default: break;
    }

    ctx->pc = 0x1558b0u;

    // 0x1558b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1558b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1558b4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1558b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1558b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1558b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1558bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1558bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1558c0: 0xc04e188  jal         func_138620
    ctx->pc = 0x1558C0u;
    SET_GPR_U32(ctx, 31, 0x1558C8u);
    ctx->pc = 0x1558C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1558C0u;
    // 0x1558c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1558C0u, 0x1558C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558C8u;
label_1558c8:
    // 0x1558c8: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x1558c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x1558cc: 0xc060254  jal         func_180950
    ctx->pc = 0x1558CCu;
    SET_GPR_U32(ctx, 31, 0x1558D4u);
    ctx->pc = 0x1558D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1558CCu;
    // 0x1558d0: 0x24845900  addiu       $a0, $a0, 0x5900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180950u, 0x1558CCu, 0x1558D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558D4u;
label_1558d4:
    // 0x1558d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1558d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1558d8u;
}
