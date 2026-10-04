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

// Function: entry_001331c0
// Address: 0x1331c0 - 0x1331c4
void entry_001331c0_0x1331c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001331c0_0x1331c0");
#endif

    ctx->pc = 0x1331c0u;

    // 0x1331c0: 0xa2000294  sb          $zero, 0x294($s0)
    ctx->pc = 0x1331c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 660), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1331c4u;
}
