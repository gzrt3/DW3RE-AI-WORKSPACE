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

// Function: FUN_00113eb0
// Address: 0x113eb0 - 0x113ec0
void FUN_00113eb0_0x113eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00113eb0_0x113eb0");
#endif

    ctx->pc = 0x113eb0u;

    // 0x113eb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x113eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x113eb4: 0x278380d0  addiu       $v1, $gp, -0x7F30
    ctx->pc = 0x113eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934736));
    // 0x113eb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x113eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x113ebc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x113ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x113ec0u;
}
