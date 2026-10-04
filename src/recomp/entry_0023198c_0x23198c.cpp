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

// Function: entry_0023198c
// Address: 0x23198c - 0x231990
void entry_0023198c_0x23198c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023198c_0x23198c");
#endif

    ctx->pc = 0x23198cu;

    // 0x23198c: 0x8f8382d8  lw          $v1, -0x7D28($gp)
    ctx->pc = 0x23198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
    ctx->pc = 0x231990u;
}
