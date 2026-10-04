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

// Function: FUN_001a6998
// Address: 0x1a6998 - 0x1a69b8
void FUN_001a6998_0x1a6998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6998_0x1a6998");
#endif

    ctx->pc = 0x1a6998u;

    // 0x1a6998: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a6998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a699c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a69a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a69a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a69a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a69a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a69a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a69a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a69ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a69acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a69b0: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A69B0u;
    SET_GPR_U32(ctx, 31, 0x1A69B8u);
    ctx->pc = 0x1A69B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69B0u;
    // 0x1a69b4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A69B0u, 0x1A69B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69B8u;
}
