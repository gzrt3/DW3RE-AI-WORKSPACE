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

// Function: entry_001b18d8
// Address: 0x1b18d8 - 0x1b18dc
void entry_001b18d8_0x1b18d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b18d8_0x1b18d8");
#endif

    ctx->pc = 0x1b18d8u;

    // 0x1b18d8: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b18d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    ctx->pc = 0x1b18dcu;
}
