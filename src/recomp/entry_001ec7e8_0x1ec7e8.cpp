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

// Function: entry_001ec7e8
// Address: 0x1ec7e8 - 0x1ec7ec
void entry_001ec7e8_0x1ec7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec7e8_0x1ec7e8");
#endif

    ctx->pc = 0x1ec7e8u;

    // 0x1ec7e8: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x1ec7e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    ctx->pc = 0x1ec7ecu;
}
