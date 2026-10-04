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

// Function: FUN_001b1c80
// Address: 0x1b1c80 - 0x1b1cc0
void FUN_001b1c80_0x1b1c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1c80_0x1b1c80");
#endif

    ctx->pc = 0x1b1c80u;

    // 0x1b1c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1c84: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b1c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b1c88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b1c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b1c8c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1b1c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1b1c90: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b1c90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b1c94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b1c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b1c98: 0x24846200  addiu       $a0, $a0, 0x6200
    ctx->pc = 0x1b1c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25088));
    // 0x1b1c9c: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b1c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1b1ca0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b1ca4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x1b1ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1b1ca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cac: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b1cb0: 0x260977c0  addiu       $t1, $s0, 0x77C0
    ctx->pc = 0x1b1cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 30656));
    // 0x1b1cb4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1cb8: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B1CB8u;
    SET_GPR_U32(ctx, 31, 0x1B1CC0u);
    ctx->pc = 0x1B1CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1CB8u;
    // 0x1b1cbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B1CB8u, 0x1B1CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CC0u;
}
