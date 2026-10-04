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

// Function: FUN_0023ac90
// Address: 0x23ac90 - 0x23acc0
void FUN_0023ac90_0x23ac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023ac90_0x23ac90");
#endif

    switch (ctx->pc) {
        case 0x23aca8u: goto label_23aca8;
        default: break;
    }

    ctx->pc = 0x23ac90u;

    // 0x23ac90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ac94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ac98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23ac98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ac9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23ac9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23aca0: 0xc08ea10  jal         func_23A840
    ctx->pc = 0x23ACA0u;
    SET_GPR_U32(ctx, 31, 0x23ACA8u);
    ctx->pc = 0x23ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ACA0u;
    // 0x23aca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A840u, 0x23ACA0u, 0x23ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ACA8u;
label_23aca8:
    // 0x23aca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23acac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23acacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23acb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23acb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23acb4: 0xac900014  sw          $s0, 0x14($a0)
    ctx->pc = 0x23acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 16));
    // 0x23acb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23acb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23acbc: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x23acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x23acc0u;
}
