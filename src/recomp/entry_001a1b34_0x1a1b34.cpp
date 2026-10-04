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

// Function: entry_001a1b34
// Address: 0x1a1b34 - 0x1a1b38
void entry_001a1b34_0x1a1b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1b34_0x1a1b34");
#endif

    ctx->pc = 0x1a1b34u;

    // 0x1a1b34: 0xd93824  and         $a3, $a2, $t9
    ctx->pc = 0x1a1b34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
    ctx->pc = 0x1a1b38u;
}
