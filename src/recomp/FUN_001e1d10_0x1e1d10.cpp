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

// Function: FUN_001e1d10
// Address: 0x1e1d10 - 0x1e1d34
void FUN_001e1d10_0x1e1d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1d10_0x1e1d10");
#endif

    ctx->pc = 0x1e1d10u;

    // 0x1e1d10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e1d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e1d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1d18: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e1d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e1d1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e1d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1d20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e1d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e1d24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e1d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e1d28: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e1d28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1d2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e1d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e1d30: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1e1d34u;
}
