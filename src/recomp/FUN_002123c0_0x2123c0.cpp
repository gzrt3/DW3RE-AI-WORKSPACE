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

// Function: FUN_002123c0
// Address: 0x2123c0 - 0x2123e4
void FUN_002123c0_0x2123c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002123c0_0x2123c0");
#endif

    ctx->pc = 0x2123c0u;

    // 0x2123c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2123c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2123c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2123c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2123c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2123c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2123cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2123ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2123d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2123d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2123d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2123d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2123d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2123d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2123dc: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x2123DCu;
    SET_GPR_U32(ctx, 31, 0x2123E4u);
    ctx->pc = 0x2123E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123DCu;
    // 0x2123e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2123DCu, 0x2123E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123E4u;
}
