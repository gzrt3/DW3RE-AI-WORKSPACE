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

// Function: FUN_001e9d20
// Address: 0x1e9d20 - 0x1e9d28
void FUN_001e9d20_0x1e9d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9d20_0x1e9d20");
#endif

    ctx->pc = 0x1e9d20u;

    // 0x1e9d20: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x1e9d24: 0x246331d0  addiu       $v1, $v1, 0x31D0
    ctx->pc = 0x1e9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12752));
    ctx->pc = 0x1e9d28u;
}
