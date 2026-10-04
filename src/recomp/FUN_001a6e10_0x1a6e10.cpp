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

// Function: FUN_001a6e10
// Address: 0x1a6e10 - 0x1a6e44
void FUN_001a6e10_0x1a6e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6e10_0x1a6e10");
#endif

    switch (ctx->pc) {
        case 0x1a6e40u: goto label_1a6e40;
        default: break;
    }

    ctx->pc = 0x1a6e10u;

    // 0x1a6e10: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a6e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e14: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1a6e14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e18: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1a6e18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6e20: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1a6e20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a6e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6e2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a6e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e30: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1a6e30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e34: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1a6e34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e38: 0xc069b36  jal         func_1A6CD8
    ctx->pc = 0x1A6E38u;
    SET_GPR_U32(ctx, 31, 0x1A6E40u);
    ctx->pc = 0x1A6E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E38u;
    // 0x1a6e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x1A6E38u, 0x1A6E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6E40u;
label_1a6e40:
    // 0x1a6e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a6e44u;
}
