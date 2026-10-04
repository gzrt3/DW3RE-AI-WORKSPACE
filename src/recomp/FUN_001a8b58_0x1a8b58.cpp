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

// Function: FUN_001a8b58
// Address: 0x1a8b58 - 0x1a8b8c
void FUN_001a8b58_0x1a8b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a8b58_0x1a8b58");
#endif

    switch (ctx->pc) {
        case 0x1a8b80u: goto label_1a8b80;
        default: break;
    }

    ctx->pc = 0x1a8b58u;

    // 0x1a8b58: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a8b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1a8b5c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a8b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1a8b60: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a8b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1a8b64: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a8b64u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1a8b68: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a8b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1a8b6c: 0x26923240  addiu       $s2, $s4, 0x3240
    ctx->pc = 0x1a8b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 12864));
    // 0x1a8b70: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a8b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1a8b74: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a8b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1a8b78: 0xc06a02c  jal         func_1A80B0
    ctx->pc = 0x1A8B78u;
    SET_GPR_U32(ctx, 31, 0x1A8B80u);
    ctx->pc = 0x1A8B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B78u;
    // 0x1a8b7c: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80B0u, 0x1A8B78u, 0x1A8B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B80u;
label_1a8b80:
    // 0x1a8b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b84: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1A8B84u;
    SET_GPR_U32(ctx, 31, 0x1A8B8Cu);
    ctx->pc = 0x1A8B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B84u;
    // 0x1a8b88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A8B84u, 0x1A8B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B8Cu;
}
