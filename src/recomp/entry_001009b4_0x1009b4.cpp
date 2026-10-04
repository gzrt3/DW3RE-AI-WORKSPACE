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

// Function: entry_001009b4
// Address: 0x1009b4 - 0x1009c8
void entry_001009b4_0x1009b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001009b4_0x1009b4");
#endif

    ctx->pc = 0x1009b4u;

    // 0x1009b4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1009b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1009b8: 0x2442aec0  addiu       $v0, $v0, -0x5140
    ctx->pc = 0x1009b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946496));
    // 0x1009bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1009bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1009c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1009c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1009c4: 0x0  nop
    ctx->pc = 0x1009c4u;
    // NOP
    ctx->pc = 0x1009c8u;
}
