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

// Function: FUN_0018f440
// Address: 0x18f440 - 0x18f454
void FUN_0018f440_0x18f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f440_0x18f440");
#endif

    ctx->pc = 0x18f440u;

    // 0x18f440: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18f440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18f444: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18f444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18f448: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18f44c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18f44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18f450: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18f450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18f454u;
}
