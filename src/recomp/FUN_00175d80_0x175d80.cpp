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

// Function: FUN_00175d80
// Address: 0x175d80 - 0x175da0
void FUN_00175d80_0x175d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00175d80_0x175d80");
#endif

    ctx->pc = 0x175d80u;

    // 0x175d80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x175d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x175d84: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x175d84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x175d88: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x175d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x175d8c: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x175d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x175d90: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x175d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x175d94: 0x24e725ae  addiu       $a3, $a3, 0x25AE
    ctx->pc = 0x175d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9646));
    // 0x175d98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x175d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x175d9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x175da0u;
}
