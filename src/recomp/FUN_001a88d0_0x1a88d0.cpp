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

// Function: FUN_001a88d0
// Address: 0x1a88d0 - 0x1a892c
void FUN_001a88d0_0x1a88d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a88d0_0x1a88d0");
#endif

    ctx->pc = 0x1a88d0u;

    // 0x1a88d0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1a88d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1a88d4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a88d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1a88d8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1a88d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1a88dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a88dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88e0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1a88e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1a88e4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1a88e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88e8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a88e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1a88ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a88ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88f0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1a88f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1a88f4: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1a88f4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
    // 0x1a88f8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a88f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1a88fc: 0x27d13240  addiu       $s1, $fp, 0x3240
    ctx->pc = 0x1a88fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 12864));
    // 0x1a8900: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a8900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1a8904: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a8904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1a8908: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a8908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1a890c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1a8910: 0xffa60120  sd          $a2, 0x120($sp)
    ctx->pc = 0x1a8910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 6));
    // 0x1a8914: 0xffa70128  sd          $a3, 0x128($sp)
    ctx->pc = 0x1a8914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 7));
    // 0x1a8918: 0xffa80130  sd          $t0, 0x130($sp)
    ctx->pc = 0x1a8918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 8));
    // 0x1a891c: 0xffa90138  sd          $t1, 0x138($sp)
    ctx->pc = 0x1a891cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 9));
    // 0x1a8920: 0xffaa0140  sd          $t2, 0x140($sp)
    ctx->pc = 0x1a8920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 10));
    // 0x1a8924: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1A8924u;
    SET_GPR_U32(ctx, 31, 0x1A892Cu);
    ctx->pc = 0x1A8928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8924u;
    // 0x1a8928: 0xffab0148  sd          $t3, 0x148($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A8924u, 0x1A892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A892Cu;
}
