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

// Function: FUN_00124190
// Address: 0x124190 - 0x1241ac
void FUN_00124190_0x124190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00124190_0x124190");
#endif

    ctx->pc = 0x124190u;

    // 0x124190: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x124190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x124194: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x124194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x124198: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x124198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x12419c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12419cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1241a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1241a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1241a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1241a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1241a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1241a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1241acu;
}
