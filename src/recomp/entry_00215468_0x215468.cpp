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

// Function: entry_00215468
// Address: 0x215468 - 0x21546c
void entry_00215468_0x215468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215468_0x215468");
#endif

    ctx->pc = 0x215468u;

    // 0x215468: 0x28640048  slti        $a0, $v1, 0x48
    ctx->pc = 0x215468u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)72) ? 1 : 0);
    ctx->pc = 0x21546cu;
}
