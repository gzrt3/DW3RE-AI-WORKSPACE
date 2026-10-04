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

// Function: FUN_001896e0
// Address: 0x1896e0 - 0x1896f8
void FUN_001896e0_0x1896e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001896e0_0x1896e0");
#endif

    ctx->pc = 0x1896e0u;

    // 0x1896e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1896e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1896e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1896e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1896e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1896e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1896ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1896ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1896f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1896f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1896f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1896f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x1896f8u;
}
