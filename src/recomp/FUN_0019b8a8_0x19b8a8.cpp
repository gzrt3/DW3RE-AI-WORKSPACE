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

// Function: FUN_0019b8a8
// Address: 0x19b8a8 - 0x19b8a9
void FUN_0019b8a8_0x19b8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019b8a8_0x19b8a8");
#endif

    ctx->pc = 0x19b8a8u;

    // 0x19b8a8: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x19b8a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x19b8a9u;
}
