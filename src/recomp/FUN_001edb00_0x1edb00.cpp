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

// Function: FUN_001edb00
// Address: 0x1edb00 - 0x1edb24
void FUN_001edb00_0x1edb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001edb00_0x1edb00");
#endif

    ctx->pc = 0x1edb00u;

    // 0x1edb00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1edb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1edb04: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1edb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1edb08: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1edb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1edb0c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1edb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1edb10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1edb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1edb14: 0x244229e0  addiu       $v0, $v0, 0x29E0
    ctx->pc = 0x1edb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10720));
    // 0x1edb18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1edb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1edb1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1edb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edb20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1edb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1edb24u;
}
