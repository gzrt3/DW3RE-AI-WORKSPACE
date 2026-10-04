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

// Function: FUN_001bc270
// Address: 0x1bc270 - 0x1bc280
void FUN_001bc270_0x1bc270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bc270_0x1bc270");
#endif

    ctx->pc = 0x1bc270u;

    // 0x1bc270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bc270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bc274: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bc274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bc278: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bc278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bc27c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bc27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1bc280u;
}
