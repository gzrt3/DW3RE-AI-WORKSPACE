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

// Function: FUN_001e84f0
// Address: 0x1e84f0 - 0x1e8500
void FUN_001e84f0_0x1e84f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e84f0_0x1e84f0");
#endif

    ctx->pc = 0x1e84f0u;

    // 0x1e84f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e84f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e84f4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e84f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e84f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1e84f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1e84fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e84fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1e8500u;
}
