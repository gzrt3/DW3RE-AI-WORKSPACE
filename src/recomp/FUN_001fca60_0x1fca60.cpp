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

// Function: FUN_001fca60
// Address: 0x1fca60 - 0x1fca70
void FUN_001fca60_0x1fca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fca60_0x1fca60");
#endif

    ctx->pc = 0x1fca60u;

    // 0x1fca60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fca64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fca68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fca6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fca6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1fca70u;
}
