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

// Function: entry_0010e9b4
// Address: 0x10e9b4 - 0x10e9cc
void entry_0010e9b4_0x10e9b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e9b4_0x10e9b4");
#endif

    ctx->pc = 0x10e9b4u;

    // 0x10e9b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10e9b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x10e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x10e9bc: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x10e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
    // 0x10e9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10e9c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10e9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e9c8: 0x0  nop
    ctx->pc = 0x10e9c8u;
    // NOP
    ctx->pc = 0x10e9ccu;
}
