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

// Function: FUN_001d74b0
// Address: 0x1d74b0 - 0x1d74cc
void FUN_001d74b0_0x1d74b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d74b0_0x1d74b0");
#endif

    ctx->pc = 0x1d74b0u;

    // 0x1d74b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d74b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d74b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d74b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1d74b8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d74b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d74bc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d74bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d74c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d74c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d74c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d74c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d74c8: 0xc075f18  jal         func_1D7C60
    ctx->pc = 0x1D74C8u;
    SET_GPR_U32(ctx, 31, 0x1D74D0u);
    ctx->pc = 0x1D7C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7C60u, 0x1D74C8u, 0x1D74D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74D0u;
}
