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

// Function: FUN_001fc680
// Address: 0x1fc680 - 0x1fc698
void FUN_001fc680_0x1fc680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fc680_0x1fc680");
#endif

    ctx->pc = 0x1fc680u;

    // 0x1fc680: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1fc680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1fc684: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1fc684u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fc688: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1fc68c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc690: 0x2442a67c  addiu       $v0, $v0, -0x5984
    ctx->pc = 0x1fc690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944380));
    // 0x1fc694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1fc698u;
}
