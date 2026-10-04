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

// Function: FUN_001586e0
// Address: 0x1586e0 - 0x1586fc
void FUN_001586e0_0x1586e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001586e0_0x1586e0");
#endif

    ctx->pc = 0x1586e0u;

    // 0x1586e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1586e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1586e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1586e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1586e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1586e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1586ec: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1586ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1586f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1586f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1586f4: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1586f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    // 0x1586f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1586f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1586fcu;
}
