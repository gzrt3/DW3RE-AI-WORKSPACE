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

// Function: entry_0017fb50
// Address: 0x17fb50 - 0x17fb54
void entry_0017fb50_0x17fb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fb50_0x17fb50");
#endif

    ctx->pc = 0x17fb50u;

    // 0x17fb50: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x17fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    ctx->pc = 0x17fb54u;
}
