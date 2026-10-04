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

// Function: FUN_001c3240
// Address: 0x1c3240 - 0x1c3290
void FUN_001c3240_0x1c3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c3240_0x1c3240");
#endif

    ctx->pc = 0x1c3240u;

    // 0x1c3240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3244: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c3244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c3248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c3248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c324c: 0x27828978  addiu       $v0, $gp, -0x7688
    ctx->pc = 0x1c324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936952));
    // 0x1c3250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c3254: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c3254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1c3258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c325c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1c325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    // 0x1c3260: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x1c3260u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c3264: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1c3264u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x1c3268: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c3268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c326c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c326cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c3270: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c3270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3274: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3278: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c327c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c327cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3280: 0xa1140  sll         $v0, $t2, 5
    ctx->pc = 0x1c3280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1c3284: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1c3284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3288: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1C3288u;
    SET_GPR_U32(ctx, 31, 0x1C3290u);
    ctx->pc = 0x1C328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3288u;
    // 0x1c328c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C3288u, 0x1C3290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3290u;
}
