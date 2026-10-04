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

// Function: entry_001a5e28
// Address: 0x1a5e28 - 0x1a5e38
void entry_001a5e28_0x1a5e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5e28_0x1a5e28");
#endif

    ctx->pc = 0x1a5e28u;

    // 0x1a5e28: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x1a5e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a5e2c: 0x8c441428  lw          $a0, 0x1428($v0)
    ctx->pc = 0x1a5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5160)));
    // 0x1a5e30: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x1a5e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a5e34: 0x0  nop
    ctx->pc = 0x1a5e34u;
    // NOP
    ctx->pc = 0x1a5e38u;
}
