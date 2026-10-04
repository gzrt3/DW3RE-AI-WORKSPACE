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

// Function: entry_0021ab0c
// Address: 0x21ab0c - 0x21ab10
void entry_0021ab0c_0x21ab0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ab0c_0x21ab0c");
#endif

    ctx->pc = 0x21ab0cu;

    // 0x21ab0c: 0xaf839278  sw          $v1, -0x6D88($gp)
    ctx->pc = 0x21ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939256), GPR_U32(ctx, 3));
    ctx->pc = 0x21ab10u;
}
