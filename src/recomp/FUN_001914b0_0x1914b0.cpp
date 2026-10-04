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

// Function: FUN_001914b0
// Address: 0x1914b0 - 0x1914c8
void FUN_001914b0_0x1914b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001914b0_0x1914b0");
#endif

    ctx->pc = 0x1914b0u;

    // 0x1914b0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1914b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1914b4: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1914b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1914b8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1914b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1914bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1914bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1914c0: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x1914c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
    // 0x1914c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1914c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1914c8u;
}
