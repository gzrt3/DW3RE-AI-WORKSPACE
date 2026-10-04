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

// Function: FUN_001052b0
// Address: 0x1052b0 - 0x1052c4
void FUN_001052b0_0x1052b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001052b0_0x1052b0");
#endif

    ctx->pc = 0x1052b0u;

    // 0x1052b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1052b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1052b4: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1052b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1052b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1052b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1052bc: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x1052bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x1052c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1052c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1052c4u;
}
