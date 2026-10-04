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

// Function: FUN_001aa2e8
// Address: 0x1aa2e8 - 0x1aa31c
void FUN_001aa2e8_0x1aa2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aa2e8_0x1aa2e8");
#endif

    switch (ctx->pc) {
        case 0x1aa310u: goto label_1aa310;
        default: break;
    }

    ctx->pc = 0x1aa2e8u;

    // 0x1aa2e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1aa2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1aa2ec: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1aa2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1aa2f0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1aa2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1aa2f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aa2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2f8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aa2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1aa2fc: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1aa2fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x1aa300: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aa300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1aa304: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1aa304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1aa308: 0xc06a02c  jal         func_1A80B0
    ctx->pc = 0x1AA308u;
    SET_GPR_U32(ctx, 31, 0x1AA310u);
    ctx->pc = 0x1AA30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA308u;
    // 0x1aa30c: 0x26723240  addiu       $s2, $s3, 0x3240 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 12864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80B0u, 0x1AA308u, 0x1AA310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA310u;
label_1aa310:
    // 0x1aa310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa314: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1AA314u;
    SET_GPR_U32(ctx, 31, 0x1AA31Cu);
    ctx->pc = 0x1AA318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA314u;
    // 0x1aa318: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1AA314u, 0x1AA31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA31Cu;
}
