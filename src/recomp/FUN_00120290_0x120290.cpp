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

// Function: FUN_00120290
// Address: 0x120290 - 0x1202ac
void FUN_00120290_0x120290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120290_0x120290");
#endif

    ctx->pc = 0x120290u;

    // 0x120290: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x120290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x120294: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x120294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x120298: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x120298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12029c: 0x2442fb70  addiu       $v0, $v0, -0x490
    ctx->pc = 0x12029cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966128));
    // 0x1202a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1202a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1202a4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1202a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1202a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1202a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x1202acu;
}
