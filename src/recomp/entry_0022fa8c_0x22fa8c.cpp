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

// Function: entry_0022fa8c
// Address: 0x22fa8c - 0x22faa8
void entry_0022fa8c_0x22fa8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fa8c_0x22fa8c");
#endif

    ctx->pc = 0x22fa8cu;

    // 0x22fa8c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x22fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x22fa90: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x22fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22fa94: 0x2442f730  addiu       $v0, $v0, -0x8D0
    ctx->pc = 0x22fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965040));
    // 0x22fa98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22fa9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22faa0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22faa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22faa4: 0x0  nop
    ctx->pc = 0x22faa4u;
    // NOP
    ctx->pc = 0x22faa8u;
}
