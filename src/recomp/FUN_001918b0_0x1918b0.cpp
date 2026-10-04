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

// Function: FUN_001918b0
// Address: 0x1918b0 - 0x1918c8
void FUN_001918b0_0x1918b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001918b0_0x1918b0");
#endif

    ctx->pc = 0x1918b0u;

    // 0x1918b0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1918b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1918b4: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1918b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1918b8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1918b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1918bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1918bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1918c0: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1918c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1918c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1918c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1918c8u;
}
