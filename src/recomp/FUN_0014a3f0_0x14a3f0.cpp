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

// Function: FUN_0014a3f0
// Address: 0x14a3f0 - 0x14a414
void FUN_0014a3f0_0x14a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014a3f0_0x14a3f0");
#endif

    ctx->pc = 0x14a3f0u;

    // 0x14a3f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14a3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14a3f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a3f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14a3fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14a3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a400: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14a404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14a404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a408: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14a408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14a40c: 0x27b50074  addiu       $s5, $sp, 0x74
    ctx->pc = 0x14a40cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x14a410: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14a410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x14a414u;
}
