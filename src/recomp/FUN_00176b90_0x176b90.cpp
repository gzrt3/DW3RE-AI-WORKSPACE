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

// Function: FUN_00176b90
// Address: 0x176b90 - 0x176ba4
void FUN_00176b90_0x176b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00176b90_0x176b90");
#endif

    ctx->pc = 0x176b90u;

    // 0x176b90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x176b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x176b94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x176b98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x176b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x176b9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x176b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x176ba0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x176ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x176ba4u;
}
