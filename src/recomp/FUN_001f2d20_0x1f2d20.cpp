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

// Function: FUN_001f2d20
// Address: 0x1f2d20 - 0x1f2d34
void FUN_001f2d20_0x1f2d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2d20_0x1f2d20");
#endif

    ctx->pc = 0x1f2d20u;

    // 0x1f2d20: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x1f2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x1f2d24: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1f2d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1f2d28: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1f2d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1f2d2c: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1f2d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1f2d30: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1f2d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->pc = 0x1f2d34u;
}
