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

// Function: FUN_001024e0
// Address: 0x1024e0 - 0x1024ec
void FUN_001024e0_0x1024e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001024e0_0x1024e0");
#endif

    ctx->pc = 0x1024e0u;

    // 0x1024e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1024e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1024e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1024e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1024e8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1024e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    ctx->pc = 0x1024ecu;
}
