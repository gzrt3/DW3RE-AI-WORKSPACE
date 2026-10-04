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

// Function: FUN_001aa0b8
// Address: 0x1aa0b8 - 0x1aa0d8
void FUN_001aa0b8_0x1aa0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aa0b8_0x1aa0b8");
#endif

    ctx->pc = 0x1aa0b8u;

    // 0x1aa0b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aa0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aa0bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa0c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa0c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1aa0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1aa0c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1aa0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1aa0cc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1aa0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1aa0d0: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1AA0D0u;
    SET_GPR_U32(ctx, 31, 0x1AA0D8u);
    ctx->pc = 0x1AA0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA0D0u;
    // 0x1aa0d4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1AA0D0u, 0x1AA0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA0D8u;
}
