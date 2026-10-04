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

// Function: FUN_001e1e70
// Address: 0x1e1e70 - 0x1e1e88
void FUN_001e1e70_0x1e1e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1e70_0x1e1e70");
#endif

    ctx->pc = 0x1e1e70u;

    // 0x1e1e70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e1e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e1e74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1e78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e1e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e1e7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e1e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e1e80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e1e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e1e84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e1e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1e1e88u;
}
