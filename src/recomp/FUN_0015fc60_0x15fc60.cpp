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

// Function: FUN_0015fc60
// Address: 0x15fc60 - 0x15fc90
void FUN_0015fc60_0x15fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015fc60_0x15fc60");
#endif

    ctx->pc = 0x15fc60u;

    // 0x15fc60: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x15fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x15fc64: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x15fc64u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15fc68: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15fc68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15fc6c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x15fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x15fc70: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15fc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15fc74: 0x2463c154  addiu       $v1, $v1, -0x3EAC
    ctx->pc = 0x15fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951252));
    // 0x15fc78: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x15fc78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x15fc7c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15fc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15fc80: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x15fc80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15fc84: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15fc88: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15fc88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15fc8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x15fc90u;
}
