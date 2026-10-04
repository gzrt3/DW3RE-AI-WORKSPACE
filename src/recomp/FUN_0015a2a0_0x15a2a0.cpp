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

// Function: FUN_0015a2a0
// Address: 0x15a2a0 - 0x15a2e0
void FUN_0015a2a0_0x15a2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015a2a0_0x15a2a0");
#endif

    switch (ctx->pc) {
        case 0x15a2d0u: goto label_15a2d0;
        default: break;
    }

    ctx->pc = 0x15a2a0u;

    // 0x15a2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15a2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15a2a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15a2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15a2a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a2ac: 0x8c870034  lw          $a3, 0x34($a0)
    ctx->pc = 0x15a2acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15a2b0: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x15a2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x15a2b4: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x15a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x15a2b8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x15a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15a2bc: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x15a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15a2c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15a2c4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x15a2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a2c8: 0xc090e44  jal         func_243910
    ctx->pc = 0x15A2C8u;
    SET_GPR_U32(ctx, 31, 0x15A2D0u);
    ctx->pc = 0x15A2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A2C8u;
    // 0x15a2cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243910u, 0x15A2C8u, 0x15A2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A2D0u;
label_15a2d0:
    // 0x15a2d0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x15a2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15a2d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x15a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x15a2d8: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x15a2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x15a2dc: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x15a2dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x15a2e0u;
}
