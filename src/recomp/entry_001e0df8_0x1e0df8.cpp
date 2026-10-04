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

// Function: entry_001e0df8
// Address: 0x1e0df8 - 0x1e0dfc
void entry_001e0df8_0x1e0df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0df8_0x1e0df8");
#endif

    ctx->pc = 0x1e0df8u;

    // 0x1e0df8: 0xa0a30c3b  sb          $v1, 0xC3B($a1)
    ctx->pc = 0x1e0df8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3131), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1e0dfcu;
}
