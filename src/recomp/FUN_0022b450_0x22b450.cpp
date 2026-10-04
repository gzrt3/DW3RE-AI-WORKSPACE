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

// Function: FUN_0022b450
// Address: 0x22b450 - 0x22b45c
void FUN_0022b450_0x22b450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022b450_0x22b450");
#endif

    ctx->pc = 0x22b450u;

    // 0x22b450: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22b450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22b454: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22b454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22b458: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x22b45cu;
}
