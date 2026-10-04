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

// Function: entry_0021ae6c
// Address: 0x21ae6c - 0x21ae70
void entry_0021ae6c_0x21ae6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ae6c_0x21ae6c");
#endif

    ctx->pc = 0x21ae6cu;

    // 0x21ae6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21ae6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x21ae70u;
}
