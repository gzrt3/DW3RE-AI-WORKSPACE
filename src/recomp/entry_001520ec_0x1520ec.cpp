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

// Function: entry_001520ec
// Address: 0x1520ec - 0x1520f0
void entry_001520ec_0x1520ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001520ec_0x1520ec");
#endif

    ctx->pc = 0x1520ecu;

    // 0x1520ec: 0x2a020019  slti        $v0, $s0, 0x19
    ctx->pc = 0x1520ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25) ? 1 : 0);
    ctx->pc = 0x1520f0u;
}
