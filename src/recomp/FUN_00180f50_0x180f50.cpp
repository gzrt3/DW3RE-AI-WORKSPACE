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

// Function: FUN_00180f50
// Address: 0x180f50 - 0x180f78
void FUN_00180f50_0x180f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180f50_0x180f50");
#endif

    ctx->pc = 0x180f50u;

    // 0x180f50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x180f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x180f54: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x180f54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f58: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x180f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x180f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180f60: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x180f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x180f64: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x180f64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x180f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x180f6c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x180f6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x180f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x180f74: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x180f74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180f78u;
}
