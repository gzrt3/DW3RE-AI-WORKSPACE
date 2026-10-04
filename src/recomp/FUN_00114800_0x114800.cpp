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

// Function: FUN_00114800
// Address: 0x114800 - 0x114810
void FUN_00114800_0x114800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00114800_0x114800");
#endif

    ctx->pc = 0x114800u;

    // 0x114800: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x114800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x114804: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x114804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x114808: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x114808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x11480c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11480cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x114810u;
}
