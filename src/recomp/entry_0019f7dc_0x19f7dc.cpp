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

// Function: entry_0019f7dc
// Address: 0x19f7dc - 0x19f7e0
void entry_0019f7dc_0x19f7dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f7dc_0x19f7dc");
#endif

    ctx->pc = 0x19f7dcu;

    // 0x19f7dc: 0x8e220818  lw          $v0, 0x818($s1)
    ctx->pc = 0x19f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
    ctx->pc = 0x19f7e0u;
}
