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

// Function: FUN_0021cac0
// Address: 0x21cac0 - 0x21cad4
void FUN_0021cac0_0x21cac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021cac0_0x21cac0");
#endif

    ctx->pc = 0x21cac0u;

    // 0x21cac0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x21cac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x21cac4: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x21cac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x21cac8: 0x24c6d940  addiu       $a2, $a2, -0x26C0
    ctx->pc = 0x21cac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957376));
    // 0x21cacc: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x21caccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x21cad0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x21cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->pc = 0x21cad4u;
}
