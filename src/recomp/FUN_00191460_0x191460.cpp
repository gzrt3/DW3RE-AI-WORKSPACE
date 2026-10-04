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

// Function: FUN_00191460
// Address: 0x191460 - 0x19147c
void FUN_00191460_0x191460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191460_0x191460");
#endif

    ctx->pc = 0x191460u;

    // 0x191460: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x191460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x191464: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x191464u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191468: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x191468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x19146c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x19146cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x191470: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
    // 0x191474: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191478: 0xac6500cc  sw          $a1, 0xCC($v1)
    ctx->pc = 0x191478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 5));
    ctx->pc = 0x19147cu;
}
