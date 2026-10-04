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

// Function: FUN_001a2808
// Address: 0x1a2808 - 0x1a2838
void FUN_001a2808_0x1a2808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2808_0x1a2808");
#endif

    ctx->pc = 0x1a2808u;

    // 0x1a2808: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a2808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a280c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a280cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a2810: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a2810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a2814: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a2814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a281c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a281cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2820: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a2820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2824: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a2824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a2828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a282c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a2830: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x1A2830u;
    SET_GPR_U32(ctx, 31, 0x1A2838u);
    ctx->pc = 0x1A2834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2830u;
    // 0x1a2834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x1A2830u, 0x1A2838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2838u;
}
