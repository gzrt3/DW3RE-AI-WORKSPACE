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

// Function: entry_001e4750
// Address: 0x1e4750 - 0x1e4754
void entry_001e4750_0x1e4750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4750_0x1e4750");
#endif

    ctx->pc = 0x1e4750u;

    // 0x1e4750: 0xa0a01d43  sb          $zero, 0x1D43($a1)
    ctx->pc = 0x1e4750u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7491), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1e4754u;
}
