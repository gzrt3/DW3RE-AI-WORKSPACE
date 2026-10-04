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

// Function: entry_002153dc
// Address: 0x2153dc - 0x2153e0
void entry_002153dc_0x2153dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002153dc_0x2153dc");
#endif

    ctx->pc = 0x2153dcu;

    // 0x2153dc: 0x28640040  slti        $a0, $v1, 0x40
    ctx->pc = 0x2153dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    ctx->pc = 0x2153e0u;
}
