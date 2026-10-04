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

// Function: entry_001a02ac
// Address: 0x1a02ac - 0x1a02b0
void entry_001a02ac_0x1a02ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a02ac_0x1a02ac");
#endif

    ctx->pc = 0x1a02acu;

    // 0x1a02ac: 0x8e1101c0  lw          $s1, 0x1C0($s0)
    ctx->pc = 0x1a02acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    ctx->pc = 0x1a02b0u;
}
