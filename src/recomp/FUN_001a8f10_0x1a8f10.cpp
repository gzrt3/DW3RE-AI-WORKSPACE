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

// Function: FUN_001a8f10
// Address: 0x1a8f10 - 0x1a8f5c
void FUN_001a8f10_0x1a8f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a8f10_0x1a8f10");
#endif

    switch (ctx->pc) {
        case 0x1a8f50u: goto label_1a8f50;
        default: break;
    }

    ctx->pc = 0x1a8f10u;

    // 0x1a8f10: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1a8f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1a8f14: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1a8f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1a8f18: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a8f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1a8f1c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1a8f1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f20: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a8f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1a8f24: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a8f24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f28: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a8f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1a8f2c: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a8f2cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1a8f30: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a8f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1a8f34: 0x26913240  addiu       $s1, $s4, 0x3240
    ctx->pc = 0x1a8f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 12864));
    // 0x1a8f38: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1a8f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1a8f3c: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1a8f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1a8f40: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a8f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1a8f44: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a8f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1a8f48: 0xc06a02c  jal         func_1A80B0
    ctx->pc = 0x1A8F48u;
    SET_GPR_U32(ctx, 31, 0x1A8F50u);
    ctx->pc = 0x1A8F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F48u;
    // 0x1a8f4c: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80B0u, 0x1A8F48u, 0x1A8F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F50u;
label_1a8f50:
    // 0x1a8f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f54: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1A8F54u;
    SET_GPR_U32(ctx, 31, 0x1A8F5Cu);
    ctx->pc = 0x1A8F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F54u;
    // 0x1a8f58: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A8F54u, 0x1A8F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F5Cu;
}
