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

// Function: entry_001380c0
// Address: 0x1380c0 - 0x1380d4
void entry_001380c0_0x1380c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001380c0_0x1380c0");
#endif

    ctx->pc = 0x1380c0u;

    // 0x1380c0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1380c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1380c4: 0x24420d04  addiu       $v0, $v0, 0xD04
    ctx->pc = 0x1380c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3332));
    // 0x1380c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1380c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1380cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1380ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1380d0: 0x0  nop
    ctx->pc = 0x1380d0u;
    // NOP
    ctx->pc = 0x1380d4u;
}
