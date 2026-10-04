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

// Function: FUN_00228030
// Address: 0x228030 - 0x228044
void FUN_00228030_0x228030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00228030_0x228030");
#endif

    ctx->pc = 0x228030u;

    // 0x228030: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x228030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x228034: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x228034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x228038: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x228038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22803c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x228040: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x228040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x228044u;
}
