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

// Function: FUN_0022c830
// Address: 0x22c830 - 0x22c850
void FUN_0022c830_0x22c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022c830_0x22c830");
#endif

    ctx->pc = 0x22c830u;

    // 0x22c830: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22c834: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22c834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x22c838: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22c838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22c83c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c840: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22c840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x22c844: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22c844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x22c848: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22c848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22c84c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22c84cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22c850u;
}
