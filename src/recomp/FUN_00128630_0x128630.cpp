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

// Function: FUN_00128630
// Address: 0x128630 - 0x128648
void FUN_00128630_0x128630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128630_0x128630");
#endif

    ctx->pc = 0x128630u;

    // 0x128630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x128630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x128634: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x128634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x128638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12863c: 0x2442fcd0  addiu       $v0, $v0, -0x330
    ctx->pc = 0x12863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966480));
    // 0x128640: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x128644: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x128644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    ctx->pc = 0x128648u;
}
