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

// Function: entry_001d4f4c
// Address: 0x1d4f4c - 0x1d4f50
void entry_001d4f4c_0x1d4f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4f4c_0x1d4f4c");
#endif

    ctx->pc = 0x1d4f4cu;

    // 0x1d4f4c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1d4f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    ctx->pc = 0x1d4f50u;
}
