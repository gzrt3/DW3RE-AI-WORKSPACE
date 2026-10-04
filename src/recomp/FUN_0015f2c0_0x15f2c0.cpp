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

// Function: FUN_0015f2c0
// Address: 0x15f2c0 - 0x15f2d8
void FUN_0015f2c0_0x15f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015f2c0_0x15f2c0");
#endif

    ctx->pc = 0x15f2c0u;

    // 0x15f2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15f2c4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15f2c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15f2cc: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x15f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x15f2d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15f2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15f2d4: 0x24424b40  addiu       $v0, $v0, 0x4B40
    ctx->pc = 0x15f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19264));
    ctx->pc = 0x15f2d8u;
}
