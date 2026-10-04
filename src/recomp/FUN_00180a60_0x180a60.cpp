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

// Function: FUN_00180a60
// Address: 0x180a60 - 0x180a64
void FUN_00180a60_0x180a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180a60_0x180a60");
#endif

    ctx->pc = 0x180a60u;

    // 0x180a60: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x180a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    ctx->pc = 0x180a64u;
}
