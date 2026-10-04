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

// Function: FUN_0012d070
// Address: 0x12d070 - 0x12d08c
void FUN_0012d070_0x12d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012d070_0x12d070");
#endif

    ctx->pc = 0x12d070u;

    // 0x12d070: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12d070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x12d074: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12d074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12d078: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x12d078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x12d07c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12d07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x12d080: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12d080u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d084: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12d084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12d088: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12d088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12d08cu;
}
