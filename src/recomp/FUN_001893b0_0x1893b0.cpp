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

// Function: FUN_001893b0
// Address: 0x1893b0 - 0x1893d0
void FUN_001893b0_0x1893b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001893b0_0x1893b0");
#endif

    ctx->pc = 0x1893b0u;

    // 0x1893b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1893b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1893b4: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x1893b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x1893b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1893b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1893bc: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1893bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1893c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1893c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1893c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1893c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1893c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1893c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1893cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1893ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1893d0u;
}
