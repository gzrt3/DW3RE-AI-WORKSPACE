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

// Function: FUN_002343a0
// Address: 0x2343a0 - 0x2343ac
void FUN_002343a0_0x2343a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002343a0_0x2343a0");
#endif

    ctx->pc = 0x2343a0u;

    // 0x2343a0: 0x8f8282d0  lw          $v0, -0x7D30($gp)
    ctx->pc = 0x2343a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x2343a4: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2343a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x2343a8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2343a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    ctx->pc = 0x2343acu;
}
