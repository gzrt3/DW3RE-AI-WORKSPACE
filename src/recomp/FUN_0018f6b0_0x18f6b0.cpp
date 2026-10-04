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

// Function: FUN_0018f6b0
// Address: 0x18f6b0 - 0x18f6cc
void FUN_0018f6b0_0x18f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f6b0_0x18f6b0");
#endif

    ctx->pc = 0x18f6b0u;

    // 0x18f6b0: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x18f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x18f6b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18f6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18f6b8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18f6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18f6bc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18f6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18f6c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18f6c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f6c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18f6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18f6c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18f6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18f6ccu;
}
