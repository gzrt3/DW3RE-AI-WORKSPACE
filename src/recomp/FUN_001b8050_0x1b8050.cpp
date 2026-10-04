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

// Function: FUN_001b8050
// Address: 0x1b8050 - 0x1b8078
void FUN_001b8050_0x1b8050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8050_0x1b8050");
#endif

    ctx->pc = 0x1b8050u;

    // 0x1b8050: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b8050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b8054: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b8054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1b8058: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b8058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b805c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1b805cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1b8060: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b8060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b8064: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1b8064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x1b8068: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b8068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b806c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b806cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8070: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b8070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b8074: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b8074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b8078u;
}
