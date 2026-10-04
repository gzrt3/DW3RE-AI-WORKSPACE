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

// Function: FUN_0011e3b0
// Address: 0x11e3b0 - 0x11e3d0
void FUN_0011e3b0_0x11e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011e3b0_0x11e3b0");
#endif

    ctx->pc = 0x11e3b0u;

    // 0x11e3b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11e3b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e3b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11e3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11e3bc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x11e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x11e3c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11e3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11e3c4: 0x2442fba0  addiu       $v0, $v0, -0x460
    ctx->pc = 0x11e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966176));
    // 0x11e3c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11e3cc: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x11e3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x11e3d0u;
}
