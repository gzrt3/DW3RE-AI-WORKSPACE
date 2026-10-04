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

// Function: entry_001b7c80
// Address: 0x1b7c80 - 0x1b7c84
void entry_001b7c80_0x1b7c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7c80_0x1b7c80");
#endif

    ctx->pc = 0x1b7c80u;

    // 0x1b7c80: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x1b7c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    ctx->pc = 0x1b7c84u;
}
