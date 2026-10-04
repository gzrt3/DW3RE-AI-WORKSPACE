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

// Function: entry_0021560c
// Address: 0x21560c - 0x215610
void entry_0021560c_0x21560c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021560c_0x21560c");
#endif

    ctx->pc = 0x21560cu;

    // 0x21560c: 0x28640058  slti        $a0, $v1, 0x58
    ctx->pc = 0x21560cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)88) ? 1 : 0);
    ctx->pc = 0x215610u;
}
