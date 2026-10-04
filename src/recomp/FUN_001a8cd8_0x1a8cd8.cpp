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

// Function: FUN_001a8cd8
// Address: 0x1a8cd8 - 0x1a8d1c
void FUN_001a8cd8_0x1a8cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a8cd8_0x1a8cd8");
#endif

    switch (ctx->pc) {
        case 0x1a8d10u: goto label_1a8d10;
        default: break;
    }

    ctx->pc = 0x1a8cd8u;

    // 0x1a8cd8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a8cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a8cdc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a8cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1a8ce0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a8ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1a8ce4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a8ce4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ce8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a8ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1a8cec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a8cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8cf0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a8cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1a8cf4: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1a8cf4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1a8cf8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a8cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1a8cfc: 0x26b13240  addiu       $s1, $s5, 0x3240
    ctx->pc = 0x1a8cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 12864));
    // 0x1a8d00: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1a8d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1a8d04: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a8d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1a8d08: 0xc06a02c  jal         func_1A80B0
    ctx->pc = 0x1A8D08u;
    SET_GPR_U32(ctx, 31, 0x1A8D10u);
    ctx->pc = 0x1A8D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D08u;
    // 0x1a8d0c: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80B0u, 0x1A8D08u, 0x1A8D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D10u;
label_1a8d10:
    // 0x1a8d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d14: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1A8D14u;
    SET_GPR_U32(ctx, 31, 0x1A8D1Cu);
    ctx->pc = 0x1A8D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D14u;
    // 0x1a8d18: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A8D14u, 0x1A8D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D1Cu;
}
