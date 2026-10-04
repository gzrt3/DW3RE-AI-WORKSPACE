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

// Function: entry_001e4938
// Address: 0x1e4938 - 0x1e493c
void entry_001e4938_0x1e4938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4938_0x1e4938");
#endif

    ctx->pc = 0x1e4938u;

    // 0x1e4938: 0xa0a01983  sb          $zero, 0x1983($a1)
    ctx->pc = 0x1e4938u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6531), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1e493cu;
}
