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

// Function: FUN_001413f0
// Address: 0x1413f0 - 0x141434
void FUN_001413f0_0x1413f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001413f0_0x1413f0");
#endif

    ctx->pc = 0x1413f0u;

    // 0x1413f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1413f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1413f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1413f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1413f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1413f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1413fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1413fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141404: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x141404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141408: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x141408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14140c: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x14140cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x141410: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x141410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x141414: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x141414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x141418: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x141418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x14141c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14141cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x141420: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x141420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x141424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141428: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14142c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x14142Cu;
    SET_GPR_U32(ctx, 31, 0x141434u);
    ctx->pc = 0x141430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14142Cu;
    // 0x141430: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x14142Cu, 0x141434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141434u;
}
