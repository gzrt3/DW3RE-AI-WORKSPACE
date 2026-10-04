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

// Function: entry_001380ec
// Address: 0x1380ec - 0x138104
void entry_001380ec_0x1380ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001380ec_0x1380ec");
#endif

    ctx->pc = 0x1380ecu;

    // 0x1380ec: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1380ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1380f0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1380f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1380f4: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1380f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x1380f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1380f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1380fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1380fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138100: 0x0  nop
    ctx->pc = 0x138100u;
    // NOP
    ctx->pc = 0x138104u;
}
