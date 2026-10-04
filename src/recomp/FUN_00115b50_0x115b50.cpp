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

// Function: FUN_00115b50
// Address: 0x115b50 - 0x115b74
void FUN_00115b50_0x115b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00115b50_0x115b50");
#endif

    ctx->pc = 0x115b50u;

    // 0x115b50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x115b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x115b54: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x115b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x115b58: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x115b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x115b5c: 0x34451db0  ori         $a1, $v0, 0x1DB0
    ctx->pc = 0x115b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7600);
    // 0x115b60: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x115b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x115b64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x115b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x115b68: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x115b68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x115b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x115b70: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x115b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x115b74u;
}
