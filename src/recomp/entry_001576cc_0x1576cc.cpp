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

// Function: entry_001576cc
// Address: 0x1576cc - 0x1576d0
void entry_001576cc_0x1576cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001576cc_0x1576cc");
#endif

    ctx->pc = 0x1576ccu;

    // 0x1576cc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1576ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->pc = 0x1576d0u;
}
