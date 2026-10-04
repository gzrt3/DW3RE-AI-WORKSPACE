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

// Function: FUN_001fc6a0
// Address: 0x1fc6a0 - 0x1fc6b8
void FUN_001fc6a0_0x1fc6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fc6a0_0x1fc6a0");
#endif

    ctx->pc = 0x1fc6a0u;

    // 0x1fc6a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fc6a4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fc6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1fc6a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fc6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fc6ac: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1fc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1fc6b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fc6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fc6b4: 0x2463a670  addiu       $v1, $v1, -0x5990
    ctx->pc = 0x1fc6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944368));
    ctx->pc = 0x1fc6b8u;
}
