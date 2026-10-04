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

// Function: entry_001e47c8
// Address: 0x1e47c8 - 0x1e47d0
void entry_001e47c8_0x1e47c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e47c8_0x1e47c8");
#endif

    ctx->pc = 0x1e47c8u;

    // 0x1e47c8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1e47c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1e47cc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1e47ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    ctx->pc = 0x1e47d0u;
}
