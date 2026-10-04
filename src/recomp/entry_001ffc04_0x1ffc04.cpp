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

// Function: entry_001ffc04
// Address: 0x1ffc04 - 0x1ffc08
void entry_001ffc04_0x1ffc04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffc04_0x1ffc04");
#endif

    ctx->pc = 0x1ffc04u;

    // 0x1ffc04: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1ffc04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    ctx->pc = 0x1ffc08u;
}
