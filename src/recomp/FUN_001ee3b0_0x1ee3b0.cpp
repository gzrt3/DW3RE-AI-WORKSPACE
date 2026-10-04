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

// Function: FUN_001ee3b0
// Address: 0x1ee3b0 - 0x1ee3d0
void FUN_001ee3b0_0x1ee3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee3b0_0x1ee3b0");
#endif

    ctx->pc = 0x1ee3b0u;

    // 0x1ee3b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ee3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ee3b4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1ee3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1ee3b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ee3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ee3bc: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1ee3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1ee3c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ee3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ee3c4: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x1ee3c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x1ee3c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ee3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ee3cc: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x1ee3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->pc = 0x1ee3d0u;
}
