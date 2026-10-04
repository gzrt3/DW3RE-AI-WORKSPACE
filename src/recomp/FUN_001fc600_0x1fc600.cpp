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

// Function: FUN_001fc600
// Address: 0x1fc600 - 0x1fc618
void FUN_001fc600_0x1fc600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fc600_0x1fc600");
#endif

    ctx->pc = 0x1fc600u;

    // 0x1fc600: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1fc600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1fc604: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1fc604u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc608: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fc608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1fc60c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fc60cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fc610: 0x2463a678  addiu       $v1, $v1, -0x5988
    ctx->pc = 0x1fc610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944376));
    // 0x1fc614: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fc614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1fc618u;
}
