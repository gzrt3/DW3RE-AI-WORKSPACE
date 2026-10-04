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

// Function: FUN_0012a350
// Address: 0x12a350 - 0x12a368
void FUN_0012a350_0x12a350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a350_0x12a350");
#endif

    ctx->pc = 0x12a350u;

    // 0x12a350: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12a350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12a354: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12a354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12a358: 0x27a2007c  addiu       $v0, $sp, 0x7C
    ctx->pc = 0x12a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x12a35c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x12a360: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12a360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12a364: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12a364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12a368u;
}
