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

// Function: entry_00115918
// Address: 0x115918 - 0x11591c
void entry_00115918_0x115918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115918_0x115918");
#endif

    ctx->pc = 0x115918u;

    // 0x115918: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x115918u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    ctx->pc = 0x11591cu;
}
