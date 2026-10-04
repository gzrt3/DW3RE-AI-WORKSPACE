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

// Function: entry_0018196c
// Address: 0x18196c - 0x181970
void entry_0018196c_0x18196c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018196c_0x18196c");
#endif

    ctx->pc = 0x18196cu;

    // 0x18196c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x18196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    ctx->pc = 0x181970u;
}
