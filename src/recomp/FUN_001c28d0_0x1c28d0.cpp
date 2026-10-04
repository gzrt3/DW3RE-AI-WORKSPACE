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

// Function: FUN_001c28d0
// Address: 0x1c28d0 - 0x1c2924
void FUN_001c28d0_0x1c28d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c28d0_0x1c28d0");
#endif

    ctx->pc = 0x1c28d0u;

    // 0x1c28d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c28d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c28d4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1c28d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c28d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c28dc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c28dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c28e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c28e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c28e4: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x1c28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
    // 0x1c28e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c28e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c28ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c28ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1c28f0: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x1c28f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c28f4: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1c28f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x1c28f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c28fc: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1c28fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    // 0x1c2900: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c2900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2904: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c2904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c2908: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c290c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c290cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2910: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2914: 0xa1140  sll         $v0, $t2, 5
    ctx->pc = 0x1c2914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1c2918: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1c2918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c291c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1C291Cu;
    SET_GPR_U32(ctx, 31, 0x1C2924u);
    ctx->pc = 0x1C2920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C291Cu;
    // 0x1c2920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C291Cu, 0x1C2924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2924u;
}
