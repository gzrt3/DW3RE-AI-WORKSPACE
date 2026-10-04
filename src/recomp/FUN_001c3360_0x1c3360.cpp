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

// Function: FUN_001c3360
// Address: 0x1c3360 - 0x1c3374
void FUN_001c3360_0x1c3360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c3360_0x1c3360");
#endif

    ctx->pc = 0x1c3360u;

    // 0x1c3360: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c3360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c3364: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c3364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c3368: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c3368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c336c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c336cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c3370: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c3370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1c3374u;
}
