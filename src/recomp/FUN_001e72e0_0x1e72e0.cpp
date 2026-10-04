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

// Function: FUN_001e72e0
// Address: 0x1e72e0 - 0x1e72ec
void FUN_001e72e0_0x1e72e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e72e0_0x1e72e0");
#endif

    ctx->pc = 0x1e72e0u;

    // 0x1e72e0: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x1e72e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x1e72e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e72e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e72e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x1e72ecu;
}
