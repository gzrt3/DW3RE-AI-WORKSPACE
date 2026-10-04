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

// Function: entry_0017fe30
// Address: 0x17fe30 - 0x17fe3c
void entry_0017fe30_0x17fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fe30_0x17fe30");
#endif

    ctx->pc = 0x17fe30u;

    // 0x17fe30: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x17fe34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17fe38: 0xaf838798  sw          $v1, -0x7868($gp)
    ctx->pc = 0x17fe38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 3));
    ctx->pc = 0x17fe3cu;
}
