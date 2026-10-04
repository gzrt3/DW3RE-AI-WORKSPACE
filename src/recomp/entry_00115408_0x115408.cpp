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

// Function: entry_00115408
// Address: 0x115408 - 0x115410
void entry_00115408_0x115408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115408_0x115408");
#endif

    ctx->pc = 0x115408u;

    // 0x115408: 0xae071d70  sw          $a3, 0x1D70($s0)
    ctx->pc = 0x115408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7536), GPR_U32(ctx, 7));
    // 0x11540c: 0xae071d74  sw          $a3, 0x1D74($s0)
    ctx->pc = 0x11540cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7540), GPR_U32(ctx, 7));
    ctx->pc = 0x115410u;
}
