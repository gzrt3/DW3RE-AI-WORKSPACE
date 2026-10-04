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

// Function: entry_00174c60
// Address: 0x174c60 - 0x174c94
void entry_00174c60_0x174c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174c60_0x174c60");
#endif

    switch (ctx->pc) {
        case 0x174c90u: goto label_174c90;
        default: break;
    }

    ctx->pc = 0x174c60u;

    // 0x174c60: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x174c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x174c64: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x174c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x174c68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x174c6c: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x174c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
    // 0x174c70: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x174c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174c74: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x174c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x174c78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x174c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x174c7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x174c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174c80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174c84: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x174c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174c88: 0xc05b66c  jal         func_16D9B0
    ctx->pc = 0x174C88u;
    SET_GPR_U32(ctx, 31, 0x174C90u);
    ctx->pc = 0x174C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C88u;
    // 0x174c8c: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D9B0u, 0x174C88u, 0x174C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C90u;
label_174c90:
    // 0x174c90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x174c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174c94u;
}
