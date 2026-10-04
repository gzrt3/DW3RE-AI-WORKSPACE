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

// Function: entry_0018ed24
// Address: 0x18ed24 - 0x18ed28
void entry_0018ed24_0x18ed24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ed24_0x18ed24");
#endif

    ctx->pc = 0x18ed24u;

    // 0x18ed24: 0x0  nop
    ctx->pc = 0x18ed24u;
    // NOP
    ctx->pc = 0x18ed28u;
}
