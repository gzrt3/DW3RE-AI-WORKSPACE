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

// Function: entry_0022b058
// Address: 0x22b058 - 0x22b05c
void entry_0022b058_0x22b058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b058_0x22b058");
#endif

    ctx->pc = 0x22b058u;

    // 0x22b058: 0xac4a0060  sw          $t2, 0x60($v0)
    ctx->pc = 0x22b058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 10));
    ctx->pc = 0x22b05cu;
}
