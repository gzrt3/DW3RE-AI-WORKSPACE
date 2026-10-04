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

// Function: entry_001531e0
// Address: 0x1531e0 - 0x1531e4
void entry_001531e0_0x1531e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001531e0_0x1531e0");
#endif

    ctx->pc = 0x1531e0u;

    // 0x1531e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1531e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1531e4u;
}
