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

// Function: FUN_001ab2c8
// Address: 0x1ab2c8 - 0x1ab304
void FUN_001ab2c8_0x1ab2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab2c8_0x1ab2c8");
#endif

    ctx->pc = 0x1ab2c8u;

    // 0x1ab2c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ab2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ab2cc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1ab2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1ab2d0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1ab2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1ab2d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab2d8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1ab2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1ab2dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ab2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab2e0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1ab2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1ab2e4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1ab2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ab2e8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1ab2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1ab2ec: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1ab2ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1ab2f0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1ab2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1ab2f4: 0x26d23240  addiu       $s2, $s6, 0x3240
    ctx->pc = 0x1ab2f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
    // 0x1ab2f8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1ab2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1ab2fc: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1AB2FCu;
    SET_GPR_U32(ctx, 31, 0x1AB304u);
    ctx->pc = 0x1AB300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB2FCu;
    // 0x1ab300: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1AB2FCu, 0x1AB304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB304u;
}
