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

// Function: FUN_001d76a0
// Address: 0x1d76a0 - 0x1d76b8
void FUN_001d76a0_0x1d76a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d76a0_0x1d76a0");
#endif

    ctx->pc = 0x1d76a0u;

    // 0x1d76a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d76a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d76a4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1d76a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d76a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d76a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d76ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d76acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d76b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d76b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d76b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d76b8u;
}
