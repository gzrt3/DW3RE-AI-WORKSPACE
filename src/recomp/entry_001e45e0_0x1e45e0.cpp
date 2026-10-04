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

// Function: entry_001e45e0
// Address: 0x1e45e0 - 0x1e45e8
void entry_001e45e0_0x1e45e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e45e0_0x1e45e0");
#endif

    ctx->pc = 0x1e45e0u;

    // 0x1e45e0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x1e45e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x1e45e4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1e45e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    ctx->pc = 0x1e45e8u;
}
