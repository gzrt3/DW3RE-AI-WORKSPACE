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

// Function: FUN_001aae58
// Address: 0x1aae58 - 0x1aae9c
void FUN_001aae58_0x1aae58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aae58_0x1aae58");
#endif

    switch (ctx->pc) {
        case 0x1aae90u: goto label_1aae90;
        default: break;
    }

    ctx->pc = 0x1aae58u;

    // 0x1aae58: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1aae58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1aae5c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1aae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1aae60: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aae60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1aae64: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1aae64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae68: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1aae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1aae6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1aae6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae70: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1aae70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1aae74: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1aae74u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1aae78: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1aae7c: 0x26b13240  addiu       $s1, $s5, 0x3240
    ctx->pc = 0x1aae7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 12864));
    // 0x1aae80: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1aae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1aae84: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1aae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1aae88: 0xc06a02c  jal         func_1A80B0
    ctx->pc = 0x1AAE88u;
    SET_GPR_U32(ctx, 31, 0x1AAE90u);
    ctx->pc = 0x1AAE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE88u;
    // 0x1aae8c: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80B0u, 0x1AAE88u, 0x1AAE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE90u;
label_1aae90:
    // 0x1aae90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aae90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae94: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1AAE94u;
    SET_GPR_U32(ctx, 31, 0x1AAE9Cu);
    ctx->pc = 0x1AAE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE94u;
    // 0x1aae98: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1AAE94u, 0x1AAE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE9Cu;
}
