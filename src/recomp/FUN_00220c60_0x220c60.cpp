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

// Function: FUN_00220c60
// Address: 0x220c60 - 0x220c74
void FUN_00220c60_0x220c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00220c60_0x220c60");
#endif

    ctx->pc = 0x220c60u;

    // 0x220c60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x220c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x220c64: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x220c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x220c68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x220c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x220c6c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x220c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x220c70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x220c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x220c74u;
}
