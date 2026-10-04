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

// Function: FUN_001385a0
// Address: 0x1385a0 - 0x1385a8
void FUN_001385a0_0x1385a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001385a0_0x1385a0");
#endif

    ctx->pc = 0x1385a0u;

    // 0x1385a0: 0x8f848514  lw          $a0, -0x7AEC($gp)
    ctx->pc = 0x1385a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935828)));
    // 0x1385a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1385a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1385a8u;
}
