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

// Function: FUN_001e88a0
// Address: 0x1e88a0 - 0x1e88c0
void FUN_001e88a0_0x1e88a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e88a0_0x1e88a0");
#endif

    ctx->pc = 0x1e88a0u;

    // 0x1e88a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e88a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e88a4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e88a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e88a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e88a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e88ac: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1e88acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1e88b0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e88b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1e88b4: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1e88b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1e88b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e88b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1e88bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e88bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    ctx->pc = 0x1e88c0u;
}
