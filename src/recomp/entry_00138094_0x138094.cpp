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

// Function: entry_00138094
// Address: 0x138094 - 0x1380a8
void entry_00138094_0x138094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138094_0x138094");
#endif

    ctx->pc = 0x138094u;

    // 0x138094: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x138094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x138098: 0x24420cf4  addiu       $v0, $v0, 0xCF4
    ctx->pc = 0x138098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3316));
    // 0x13809c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1380a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1380a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1380a4: 0x0  nop
    ctx->pc = 0x1380a4u;
    // NOP
    ctx->pc = 0x1380a8u;
}
