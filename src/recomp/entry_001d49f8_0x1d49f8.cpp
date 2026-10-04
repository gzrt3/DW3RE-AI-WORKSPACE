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

// Function: entry_001d49f8
// Address: 0x1d49f8 - 0x1d4a00
void entry_001d49f8_0x1d49f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d49f8_0x1d49f8");
#endif

    ctx->pc = 0x1d49f8u;

    // 0x1d49f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d49f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d49fc: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x1d49fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->pc = 0x1d4a00u;
}
