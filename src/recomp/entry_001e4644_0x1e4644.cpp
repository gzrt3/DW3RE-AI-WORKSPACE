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

// Function: entry_001e4644
// Address: 0x1e4644 - 0x1e4650
void entry_001e4644_0x1e4644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4644_0x1e4644");
#endif

    ctx->pc = 0x1e4644u;

    // 0x1e4644: 0x0  nop
    ctx->pc = 0x1e4644u;
    // NOP
    // 0x1e4648: 0x25ad00a0  addiu       $t5, $t5, 0xA0
    ctx->pc = 0x1e4648u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 160));
    // 0x1e464c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1e464cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    ctx->pc = 0x1e4650u;
}
