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

// Function: FUN_001b7f50
// Address: 0x1b7f50 - 0x1b7f84
void FUN_001b7f50_0x1b7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7f50_0x1b7f50");
#endif

    ctx->pc = 0x1b7f50u;

    // 0x1b7f50: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1b7f50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b7f54: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1b7f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1b7f58: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b7f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1b7f5c: 0x42a38  dsll        $a1, $a0, 8
    ctx->pc = 0x1b7f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 8);
    // 0x1b7f60: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x1b7f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x1b7f64: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x1b7f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x1b7f68: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b7f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7f6c: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x1b7f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1b7f70: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b7f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b7f74: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1b7f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b7f78: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b7f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b7f7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b7f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b7f80: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1b7f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->pc = 0x1b7f84u;
}
