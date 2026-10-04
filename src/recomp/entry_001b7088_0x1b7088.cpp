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

// Function: entry_001b7088
// Address: 0x1b7088 - 0x1b708c
void entry_001b7088_0x1b7088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7088_0x1b7088");
#endif

    ctx->pc = 0x1b7088u;

    // 0x1b7088: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b7088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    ctx->pc = 0x1b708cu;
}
