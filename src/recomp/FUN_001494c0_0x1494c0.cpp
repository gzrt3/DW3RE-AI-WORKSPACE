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

// Function: FUN_001494c0
// Address: 0x1494c0 - 0x1494d8
void FUN_001494c0_0x1494c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001494c0_0x1494c0");
#endif

    ctx->pc = 0x1494c0u;

    // 0x1494c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1494c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1494c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1494c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1494c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1494c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1494cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1494ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1494d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1494d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1494d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1494d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1494d8u;
}
