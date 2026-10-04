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

// Function: FUN_001b02e0
// Address: 0x1b02e0 - 0x1b0308
void FUN_001b02e0_0x1b02e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b02e0_0x1b02e0");
#endif

    ctx->pc = 0x1b02e0u;

    // 0x1b02e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b02e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b02e4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b02e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b02e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b02e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b02ec: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x1b02ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
    // 0x1b02f0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b02f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b02f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b02f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b02f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b02fc: 0x263288c0  addiu       $s2, $s1, -0x7740
    ctx->pc = 0x1b02fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936768));
    // 0x1b0300: 0xc06bf26  jal         func_1AFC98
    ctx->pc = 0x1B0300u;
    SET_GPR_U32(ctx, 31, 0x1B0308u);
    ctx->pc = 0x1B0304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0300u;
    // 0x1b0304: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFC98u, 0x1B0300u, 0x1B0308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0308u;
}
