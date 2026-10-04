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

// Function: FUN_001133f0
// Address: 0x1133f0 - 0x113408
void FUN_001133f0_0x1133f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001133f0_0x1133f0");
#endif

    ctx->pc = 0x1133f0u;

    // 0x1133f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1133f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1133f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1133f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1133f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1133f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1133fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1133fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x113400: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x113400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x113404: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x113404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x113408u;
}
