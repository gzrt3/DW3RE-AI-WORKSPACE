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

// Function: entry_0019a068
// Address: 0x19a068 - 0x19a06c
void entry_0019a068_0x19a068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a068_0x19a068");
#endif

    ctx->pc = 0x19a068u;

    // 0x19a068: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x19a068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
    ctx->pc = 0x19a06cu;
}
