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

// Function: FUN_001a6e50
// Address: 0x1a6e50 - 0x1a6e84
void FUN_001a6e50_0x1a6e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6e50_0x1a6e50");
#endif

    switch (ctx->pc) {
        case 0x1a6e80u: goto label_1a6e80;
        default: break;
    }

    ctx->pc = 0x1a6e50u;

    // 0x1a6e50: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a6e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e54: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1a6e54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e58: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1a6e58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6e5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6e60: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1a6e60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e64: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a6e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6e6c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a6e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e70: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1a6e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e74: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1a6e74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e78: 0xc069b36  jal         func_1A6CD8
    ctx->pc = 0x1A6E78u;
    SET_GPR_U32(ctx, 31, 0x1A6E80u);
    ctx->pc = 0x1A6E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E78u;
    // 0x1a6e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x1A6E78u, 0x1A6E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6E80u;
label_1a6e80:
    // 0x1a6e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a6e84u;
}
