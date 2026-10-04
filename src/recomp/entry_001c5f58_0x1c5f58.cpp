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

// Function: entry_001c5f58
// Address: 0x1c5f58 - 0x1c5f5c
void entry_001c5f58_0x1c5f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5f58_0x1c5f58");
#endif

    ctx->pc = 0x1c5f58u;

    // 0x1c5f58: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x1c5f58u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    ctx->pc = 0x1c5f5cu;
}
