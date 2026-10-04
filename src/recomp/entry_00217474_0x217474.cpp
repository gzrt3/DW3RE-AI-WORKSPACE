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

// Function: entry_00217474
// Address: 0x217474 - 0x217478
void entry_00217474_0x217474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217474_0x217474");
#endif

    ctx->pc = 0x217474u;

    // 0x217474: 0x261082f0  addiu       $s0, $s0, -0x7D10
    ctx->pc = 0x217474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935280));
    ctx->pc = 0x217478u;
}
