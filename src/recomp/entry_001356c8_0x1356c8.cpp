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

// Function: entry_001356c8
// Address: 0x1356c8 - 0x1356dc
void entry_001356c8_0x1356c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001356c8_0x1356c8");
#endif

    ctx->pc = 0x1356c8u;

    // 0x1356c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1356c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1356cc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1356ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1356d0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1356d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1356d4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1356d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1356d8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1356d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x1356dcu;
}
