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

// Function: FUN_0016b630
// Address: 0x16b630 - 0x16b644
void FUN_0016b630_0x16b630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016b630_0x16b630");
#endif

    ctx->pc = 0x16b630u;

    // 0x16b630: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16b630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16b634: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16b634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16b638: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16b638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16b63c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16b63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16b640: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16b640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x16b644u;
}
