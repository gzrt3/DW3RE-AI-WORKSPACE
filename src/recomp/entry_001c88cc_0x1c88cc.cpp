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

// Function: entry_001c88cc
// Address: 0x1c88cc - 0x1c88e0
void entry_001c88cc_0x1c88cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c88cc_0x1c88cc");
#endif

    ctx->pc = 0x1c88ccu;

    // 0x1c88cc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c88d0: 0x24420cf4  addiu       $v0, $v0, 0xCF4
    ctx->pc = 0x1c88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3316));
    // 0x1c88d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c88d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c88d8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1c88d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c88dc: 0x0  nop
    ctx->pc = 0x1c88dcu;
    // NOP
    ctx->pc = 0x1c88e0u;
}
