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

// Function: FUN_001b09d0
// Address: 0x1b09d0 - 0x1b0a00
void FUN_001b09d0_0x1b09d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b09d0_0x1b09d0");
#endif

    ctx->pc = 0x1b09d0u;

    // 0x1b09d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b09d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b09d4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b09d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b09d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b09d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b09dc: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x1b09dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
    // 0x1b09e0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b09e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b09e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b09e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b09e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b09e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b09ec: 0x263388c0  addiu       $s3, $s1, -0x7740
    ctx->pc = 0x1b09ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936768));
    // 0x1b09f0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b09f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b09f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b09f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b09f8: 0xc06bf26  jal         func_1AFC98
    ctx->pc = 0x1B09F8u;
    SET_GPR_U32(ctx, 31, 0x1B0A00u);
    ctx->pc = 0x1B09FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B09F8u;
    // 0x1b09fc: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFC98u, 0x1B09F8u, 0x1B0A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A00u;
}
