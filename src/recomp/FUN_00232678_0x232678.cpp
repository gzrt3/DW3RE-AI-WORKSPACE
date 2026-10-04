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

// Function: FUN_00232678
// Address: 0x232678 - 0x2326b0
void FUN_00232678_0x232678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00232678_0x232678");
#endif

    ctx->pc = 0x232678u;

    // 0x232678: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23267c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23267cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232684: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x232688: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x232688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23268c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23268cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x232690: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x232690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232694: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x232694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x232698: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x232698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23269c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2326a0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2326a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326a4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2326a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2326a8: 0xc069218  jal         func_1A4860
    ctx->pc = 0x2326A8u;
    SET_GPR_U32(ctx, 31, 0x2326B0u);
    ctx->pc = 0x2326ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2326A8u;
    // 0x2326ac: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x2326A8u, 0x2326B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326B0u;
}
