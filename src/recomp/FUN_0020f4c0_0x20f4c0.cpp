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

// Function: FUN_0020f4c0
// Address: 0x20f4c0 - 0x20f4e0
void FUN_0020f4c0_0x20f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020f4c0_0x20f4c0");
#endif

    ctx->pc = 0x20f4c0u;

    // 0x20f4c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20f4c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20f4c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f4c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20f4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20f4cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20f4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20f4d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20f4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20f4d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20f4d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f4d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20f4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20f4dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20f4dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20f4e0u;
}
