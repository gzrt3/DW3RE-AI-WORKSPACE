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

// Function: thunk_FUN_001acea8
// Address: 0x1ada10 - 0x1ada18
void thunk_FUN_001acea8_0x1ada10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("thunk_FUN_001acea8_0x1ada10");
#endif

    ctx->pc = 0x1ada10u;

    // 0x1ada10: 0x806b3aa  j           func_1ACEA8
    ctx->pc = 0x1ADA10u;
    ctx->pc = 0x1ACEA8u;
    FUN_001acea8_0x1acea8(rdram, ctx, runtime); return;
    ctx->pc = 0x1ADA18u;
}
