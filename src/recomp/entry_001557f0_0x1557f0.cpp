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

// Function: entry_001557f0
// Address: 0x1557f0 - 0x155808
void entry_001557f0_0x1557f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001557f0_0x1557f0");
#endif

    ctx->pc = 0x1557f0u;

    // 0x1557f0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1557f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1557f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1557f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1557f8: 0x24422600  addiu       $v0, $v0, 0x2600
    ctx->pc = 0x1557f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
    // 0x1557fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1557fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155800: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x155800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155804: 0x0  nop
    ctx->pc = 0x155804u;
    // NOP
    ctx->pc = 0x155808u;
}
