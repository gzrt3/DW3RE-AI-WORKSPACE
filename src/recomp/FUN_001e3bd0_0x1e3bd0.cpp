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

// Function: FUN_001e3bd0
// Address: 0x1e3bd0 - 0x1e3be0
void FUN_001e3bd0_0x1e3bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e3bd0_0x1e3bd0");
#endif

    ctx->pc = 0x1e3bd0u;

    // 0x1e3bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e3bd4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1e3bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x1e3bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3bdc: 0x2463b8b0  addiu       $v1, $v1, -0x4750
    ctx->pc = 0x1e3bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949040));
    ctx->pc = 0x1e3be0u;
}
