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

// Function: FUN_001918d0
// Address: 0x1918d0 - 0x1918e8
void FUN_001918d0_0x1918d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001918d0_0x1918d0");
#endif

    ctx->pc = 0x1918d0u;

    // 0x1918d0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1918d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1918d4: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1918d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1918d8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1918d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1918dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1918dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1918e0: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1918e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1918e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1918e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1918e8u;
}
