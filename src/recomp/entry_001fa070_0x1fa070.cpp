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

// Function: entry_001fa070
// Address: 0x1fa070 - 0x1fa074
void entry_001fa070_0x1fa070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa070_0x1fa070");
#endif

    ctx->pc = 0x1fa070u;

    // 0x1fa070: 0x64020017  daddiu      $v0, $zero, 0x17
    ctx->pc = 0x1fa070u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)23);
    ctx->pc = 0x1fa074u;
}
