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

// Function: entry_0010e754
// Address: 0x10e754 - 0x10e758
void entry_0010e754_0x10e754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e754_0x10e754");
#endif

    ctx->pc = 0x10e754u;

    // 0x10e754: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x10e754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    ctx->pc = 0x10e758u;
}
