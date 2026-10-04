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

// Function: entry_001fecc8
// Address: 0x1fecc8 - 0x1feccc
void entry_001fecc8_0x1fecc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fecc8_0x1fecc8");
#endif

    ctx->pc = 0x1fecc8u;

    // 0x1fecc8: 0xaf839094  sw          $v1, -0x6F6C($gp)
    ctx->pc = 0x1fecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 3));
    ctx->pc = 0x1fecccu;
}
