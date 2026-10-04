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

// Function: FUN_001eacf0
// Address: 0x1eacf0 - 0x1ead38
void FUN_001eacf0_0x1eacf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eacf0_0x1eacf0");
#endif

    ctx->pc = 0x1eacf0u;

    // 0x1eacf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eacf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eacf4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1eacf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1eacf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eacf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eacfc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eacfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ead00: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1ead00u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1ead04: 0x240308d0  addiu       $v1, $zero, 0x8D0
    ctx->pc = 0x1ead04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x1ead08: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1ead08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1ead0c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1ead0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1ead10: 0x2442c570  addiu       $v0, $v0, -0x3A90
    ctx->pc = 0x1ead10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952304));
    // 0x1ead14: 0x2406008d  addiu       $a2, $zero, 0x8D
    ctx->pc = 0x1ead14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x1ead18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ead18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ead1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ead20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead24: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1ead24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ead28: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1ead28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1ead2c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ead2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ead30: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1EAD30u;
    SET_GPR_U32(ctx, 31, 0x1EAD38u);
    ctx->pc = 0x1EAD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAD30u;
    // 0x1ead34: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EAD30u, 0x1EAD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD38u;
}
