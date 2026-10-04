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

// Function: entry_001e6ccc
// Address: 0x1e6ccc - 0x1e6cd0
void entry_001e6ccc_0x1e6ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6ccc_0x1e6ccc");
#endif

    ctx->pc = 0x1e6cccu;

    // 0x1e6ccc: 0x8f828e80  lw          $v0, -0x7180($gp)
    ctx->pc = 0x1e6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
    ctx->pc = 0x1e6cd0u;
}
