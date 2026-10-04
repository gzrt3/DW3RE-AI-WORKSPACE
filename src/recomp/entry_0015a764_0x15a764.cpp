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

// Function: entry_0015a764
// Address: 0x15a764 - 0x15a768
void entry_0015a764_0x15a764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a764_0x15a764");
#endif

    ctx->pc = 0x15a764u;

    // 0x15a764: 0xa0204af2  sb          $zero, 0x4AF2($at)
    ctx->pc = 0x15a764u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x15a768u;
}
