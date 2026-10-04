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

// Function: FUN_00232498
// Address: 0x232498 - 0x2324b4
void FUN_00232498_0x232498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00232498_0x232498");
#endif

    ctx->pc = 0x232498u;

    // 0x232498: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x232498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x23249c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x23249cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2324a0: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x2324a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x2324a4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2324a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2324a8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2324a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2324ac: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2324acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2324b0: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2324b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    ctx->pc = 0x2324b4u;
}
