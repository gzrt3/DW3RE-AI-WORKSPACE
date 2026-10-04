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

// Function: FUN_00166080
// Address: 0x166080 - 0x1660a0
void FUN_00166080_0x166080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00166080_0x166080");
#endif

    ctx->pc = 0x166080u;

    // 0x166080: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x166080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x166084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166088: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x166088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16608c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x16608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x166090: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x166090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x166094: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x166094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166098: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x166098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16609c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16609cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1660a0u;
}
