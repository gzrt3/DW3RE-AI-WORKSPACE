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

// Function: FUN_001aa180
// Address: 0x1aa180 - 0x1aa1b4
void FUN_001aa180_0x1aa180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aa180_0x1aa180");
#endif

    switch (ctx->pc) {
        case 0x1aa1a8u: goto label_1aa1a8;
        default: break;
    }

    ctx->pc = 0x1aa180u;

    // 0x1aa180: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1aa180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1aa184: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1aa184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1aa188: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aa188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1aa18c: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1aa18cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1aa190: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aa190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1aa194: 0x26923240  addiu       $s2, $s4, 0x3240
    ctx->pc = 0x1aa194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 12864));
    // 0x1aa198: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1aa198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1aa19c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1aa19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1aa1a0: 0xc06a02c  jal         func_1A80B0
    ctx->pc = 0x1AA1A0u;
    SET_GPR_U32(ctx, 31, 0x1AA1A8u);
    ctx->pc = 0x1AA1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1A0u;
    // 0x1aa1a4: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80B0u, 0x1AA1A0u, 0x1AA1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA1A8u;
label_1aa1a8:
    // 0x1aa1a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa1ac: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1AA1ACu;
    SET_GPR_U32(ctx, 31, 0x1AA1B4u);
    ctx->pc = 0x1AA1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1ACu;
    // 0x1aa1b0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1AA1ACu, 0x1AA1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA1B4u;
}
