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

// Function: FUN_0016c530
// Address: 0x16c530 - 0x16c53c
void FUN_0016c530_0x16c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016c530_0x16c530");
#endif

    ctx->pc = 0x16c530u;

    // 0x16c530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16c530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16c534: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16c534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16c538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16c538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x16c53cu;
}
