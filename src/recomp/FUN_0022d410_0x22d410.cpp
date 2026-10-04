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

// Function: FUN_0022d410
// Address: 0x22d410 - 0x22d428
void FUN_0022d410_0x22d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022d410_0x22d410");
#endif

    ctx->pc = 0x22d410u;

    // 0x22d410: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22d414: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22d414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x22d418: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22d418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22d41c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22d420: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22d420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22d424: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22d424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x22d428u;
}
