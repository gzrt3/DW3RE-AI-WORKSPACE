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

// Function: entry_0019928c
// Address: 0x19928c - 0x199294
void entry_0019928c_0x19928c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019928c_0x19928c");
#endif

    ctx->pc = 0x19928cu;

    // 0x19928c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x19928cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199290: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x199290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->pc = 0x199294u;
}
