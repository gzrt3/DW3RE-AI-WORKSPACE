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

// Function: entry_001008cc
// Address: 0x1008cc - 0x1008e4
void entry_001008cc_0x1008cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001008cc_0x1008cc");
#endif

    ctx->pc = 0x1008ccu;

    // 0x1008cc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1008ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1008d0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1008d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1008d4: 0x2442ace0  addiu       $v0, $v0, -0x5320
    ctx->pc = 0x1008d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946016));
    // 0x1008d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1008d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1008dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1008dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1008e0: 0x0  nop
    ctx->pc = 0x1008e0u;
    // NOP
    ctx->pc = 0x1008e4u;
}
