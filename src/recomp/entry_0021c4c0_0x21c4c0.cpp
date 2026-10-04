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

// Function: entry_0021c4c0
// Address: 0x21c4c0 - 0x21c4c4
void entry_0021c4c0_0x21c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c4c0_0x21c4c0");
#endif

    ctx->pc = 0x21c4c0u;

    // 0x21c4c0: 0xaf8092cc  sw          $zero, -0x6D34($gp)
    ctx->pc = 0x21c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 0));
    ctx->pc = 0x21c4c4u;
}
