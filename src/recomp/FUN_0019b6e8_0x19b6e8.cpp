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

// Function: FUN_0019b6e8
// Address: 0x19b6e8 - 0x19b6e9
void FUN_0019b6e8_0x19b6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019b6e8_0x19b6e8");
#endif

    ctx->pc = 0x19b6e8u;

    // 0x19b6e8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x19b6e8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x19b6e9u;
}
