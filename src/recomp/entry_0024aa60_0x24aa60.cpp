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

// Function: entry_0024aa60
// Address: 0x24aa60 - 0x24aa68
void entry_0024aa60_0x24aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024aa60_0x24aa60");
#endif

    ctx->pc = 0x24aa60u;

    // 0x24aa60: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x24aa60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x24aa64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24aa64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x24aa68u;
}
