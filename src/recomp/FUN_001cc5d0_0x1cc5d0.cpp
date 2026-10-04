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

// Function: FUN_001cc5d0
// Address: 0x1cc5d0 - 0x1cc5d4
void FUN_001cc5d0_0x1cc5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc5d0_0x1cc5d0");
#endif

    ctx->pc = 0x1cc5d0u;

    // 0x1cc5d0: 0x24031430  addiu       $v1, $zero, 0x1430
    ctx->pc = 0x1cc5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5168));
    ctx->pc = 0x1cc5d4u;
}
