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

// Function: FUN_0015c7e0
// Address: 0x15c7e0 - 0x15c800
void FUN_0015c7e0_0x15c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015c7e0_0x15c7e0");
#endif

    ctx->pc = 0x15c7e0u;

    // 0x15c7e0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x15c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x15c7e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15c7e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15c7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15c7ec: 0x278280d0  addiu       $v0, $gp, -0x7F30
    ctx->pc = 0x15c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934736));
    // 0x15c7f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15c7f4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c7f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15c7fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x15c800u;
}
