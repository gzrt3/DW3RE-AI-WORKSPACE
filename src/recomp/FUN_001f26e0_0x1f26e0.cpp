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

// Function: FUN_001f26e0
// Address: 0x1f26e0 - 0x1f2704
void FUN_001f26e0_0x1f26e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f26e0_0x1f26e0");
#endif

    ctx->pc = 0x1f26e0u;

    // 0x1f26e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f26e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f26e4: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x1f26e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f26e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f26e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f26ec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1f26ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1f26f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f26f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f26f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f26f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f26f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f26fc: 0x24a57f40  addiu       $a1, $a1, 0x7F40
    ctx->pc = 0x1f26fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32576));
    // 0x1f2700: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f2700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1f2704u;
}
