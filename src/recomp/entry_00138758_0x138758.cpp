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

// Function: entry_00138758
// Address: 0x138758 - 0x138770
void entry_00138758_0x138758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138758_0x138758");
#endif

    ctx->pc = 0x138758u;

    // 0x138758: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x138758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13875c: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x13875cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x138760: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x138760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x138764: 0x244258d0  addiu       $v0, $v0, 0x58D0
    ctx->pc = 0x138764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22736));
    // 0x138768: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x138768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13876c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13876cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x138770u;
}
