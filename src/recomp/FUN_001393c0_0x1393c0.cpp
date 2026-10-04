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

// Function: FUN_001393c0
// Address: 0x1393c0 - 0x1393d8
void FUN_001393c0_0x1393c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001393c0_0x1393c0");
#endif

    ctx->pc = 0x1393c0u;

    // 0x1393c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1393c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1393c4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1393c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1393c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1393c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1393cc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1393ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1393d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1393d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1393d4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1393d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    ctx->pc = 0x1393d8u;
}
