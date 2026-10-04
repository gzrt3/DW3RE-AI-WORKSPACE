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

// Function: FUN_00139110
// Address: 0x139110 - 0x139134
void FUN_00139110_0x139110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00139110_0x139110");
#endif

    ctx->pc = 0x139110u;

    // 0x139110: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x139110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x139114: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x139114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x139118: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x139118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13911c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x13911cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x139120: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x139120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x139124: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x139124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x139128: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x139128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13912c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13912cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x139130: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x139130u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x139134u;
}
