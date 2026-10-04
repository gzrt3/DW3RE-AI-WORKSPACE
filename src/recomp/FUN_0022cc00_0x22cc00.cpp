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

// Function: FUN_0022cc00
// Address: 0x22cc00 - 0x22cc18
void FUN_0022cc00_0x22cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022cc00_0x22cc00");
#endif

    ctx->pc = 0x22cc00u;

    // 0x22cc00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x22cc04: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22cc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x22cc08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22cc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22cc0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22cc10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x22cc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x22cc14: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22cc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    ctx->pc = 0x22cc18u;
}
