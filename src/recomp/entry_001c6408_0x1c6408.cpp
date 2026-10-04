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

// Function: entry_001c6408
// Address: 0x1c6408 - 0x1c640c
void entry_001c6408_0x1c6408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6408_0x1c6408");
#endif

    ctx->pc = 0x1c6408u;

    // 0x1c6408: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1c6408u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x1c640cu;
}
