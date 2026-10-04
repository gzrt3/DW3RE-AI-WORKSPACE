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

// Function: FUN_001fc860
// Address: 0x1fc860 - 0x1fc87c
void FUN_001fc860_0x1fc860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fc860_0x1fc860");
#endif

    ctx->pc = 0x1fc860u;

    // 0x1fc860: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fc860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fc864: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1fc864u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc868: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fc868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1fc86c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1fc86cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc870: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fc870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fc874: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x1fc874u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc878: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fc878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1fc87cu;
}
