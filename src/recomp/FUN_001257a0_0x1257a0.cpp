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

// Function: FUN_001257a0
// Address: 0x1257a0 - 0x1257bc
void FUN_001257a0_0x1257a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001257a0_0x1257a0");
#endif

    ctx->pc = 0x1257a0u;

    // 0x1257a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1257a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1257a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1257a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1257a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1257a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1257ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1257acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1257b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1257b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1257b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1257b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1257b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1257b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1257bcu;
}
