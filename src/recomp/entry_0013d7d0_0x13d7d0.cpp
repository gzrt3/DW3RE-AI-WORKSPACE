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

// Function: entry_0013d7d0
// Address: 0x13d7d0 - 0x13d7d8
void entry_0013d7d0_0x13d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d7d0_0x13d7d0");
#endif

    ctx->pc = 0x13d7d0u;

    // 0x13d7d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x13d7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x13d7d4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x13d7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    ctx->pc = 0x13d7d8u;
}
