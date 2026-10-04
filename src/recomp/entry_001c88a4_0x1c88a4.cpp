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

// Function: entry_001c88a4
// Address: 0x1c88a4 - 0x1c88b8
void entry_001c88a4_0x1c88a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c88a4_0x1c88a4");
#endif

    ctx->pc = 0x1c88a4u;

    // 0x1c88a4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c88a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c88a8: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1c88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x1c88ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c88acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c88b0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1c88b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c88b4: 0x0  nop
    ctx->pc = 0x1c88b4u;
    // NOP
    ctx->pc = 0x1c88b8u;
}
