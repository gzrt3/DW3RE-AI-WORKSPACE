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

// Function: entry_0014808c
// Address: 0x14808c - 0x148090
void entry_0014808c_0x14808c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014808c_0x14808c");
#endif

    ctx->pc = 0x14808cu;

    // 0x14808c: 0x0  nop
    ctx->pc = 0x14808cu;
    // NOP
    ctx->pc = 0x148090u;
}
