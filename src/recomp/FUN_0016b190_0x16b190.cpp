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

// Function: FUN_0016b190
// Address: 0x16b190 - 0x16b1ac
void FUN_0016b190_0x16b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016b190_0x16b190");
#endif

    ctx->pc = 0x16b190u;

    // 0x16b190: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16b194: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x16b194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x16b198: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16b198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x16b19c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16b19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x16b1a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16b1a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16b1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16b1a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16b1a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16b1acu;
}
