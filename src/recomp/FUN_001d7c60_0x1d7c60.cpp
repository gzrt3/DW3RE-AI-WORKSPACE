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

// Function: FUN_001d7c60
// Address: 0x1d7c60 - 0x1d7c70
void FUN_001d7c60_0x1d7c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d7c60_0x1d7c60");
#endif

    ctx->pc = 0x1d7c60u;

    // 0x1d7c60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d7c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d7c64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d7c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7c68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d7c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d7c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d7c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1d7c70u;
}
