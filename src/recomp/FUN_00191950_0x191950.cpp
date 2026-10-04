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

// Function: FUN_00191950
// Address: 0x191950 - 0x191968
void FUN_00191950_0x191950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191950_0x191950");
#endif

    ctx->pc = 0x191950u;

    // 0x191950: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x191954: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x191954u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x191958: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x191958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x19195c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19195cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x191960: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x191960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x191964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x191968u;
}
