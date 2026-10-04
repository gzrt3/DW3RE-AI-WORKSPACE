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

// Function: FUN_001ef490
// Address: 0x1ef490 - 0x1ef4b0
void FUN_001ef490_0x1ef490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ef490_0x1ef490");
#endif

    ctx->pc = 0x1ef490u;

    // 0x1ef490: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ef490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ef494: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1ef494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1ef498: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ef498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ef49c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ef49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ef4a0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ef4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1ef4a4: 0x246339b0  addiu       $v1, $v1, 0x39B0
    ctx->pc = 0x1ef4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14768));
    // 0x1ef4a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ef4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ef4ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ef4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    ctx->pc = 0x1ef4b0u;
}
