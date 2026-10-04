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

// Function: FUN_001382f0
// Address: 0x1382f0 - 0x1382fc
void FUN_001382f0_0x1382f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001382f0_0x1382f0");
#endif

    ctx->pc = 0x1382f0u;

    // 0x1382f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1382f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1382f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1382f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1382f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1382f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x1382fcu;
}
