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

// Function: FUN_00201a60
// Address: 0x201a60 - 0x201a7c
void FUN_00201a60_0x201a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201a60_0x201a60");
#endif

    ctx->pc = 0x201a60u;

    // 0x201a60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x201a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x201a64: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x201a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x201a68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x201a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x201a6c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x201a70: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x201a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x201a74: 0x2463f700  addiu       $v1, $v1, -0x900
    ctx->pc = 0x201a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964992));
    // 0x201a78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x201a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x201a7cu;
}
