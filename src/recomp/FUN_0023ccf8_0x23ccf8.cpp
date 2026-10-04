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

// Function: FUN_0023ccf8
// Address: 0x23ccf8 - 0x23cd00
void FUN_0023ccf8_0x23ccf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023ccf8_0x23ccf8");
#endif

    ctx->pc = 0x23ccf8u;

    // 0x23ccf8: 0x854025  or          $t0, $a0, $a1
    ctx->pc = 0x23ccf8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x23ccfc: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x23ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    ctx->pc = 0x23cd00u;
}
