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

// Function: FUN_0023c318
// Address: 0x23c318 - 0x23c328
void FUN_0023c318_0x23c318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023c318_0x23c318");
#endif

    ctx->pc = 0x23c318u;

    // 0x23c318: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23c318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x23c31c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x23c31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x23c320: 0x8c430818  lw          $v1, 0x818($v0)
    ctx->pc = 0x23c320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
    // 0x23c324: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x23c324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    ctx->pc = 0x23c328u;
}
