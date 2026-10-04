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

// Function: entry_00239de0
// Address: 0x239de0 - 0x239de8
void entry_00239de0_0x239de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239de0_0x239de0");
#endif

    ctx->pc = 0x239de0u;

    // 0x239de0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x239de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x239de4: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x239de4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x239de8u;
}
