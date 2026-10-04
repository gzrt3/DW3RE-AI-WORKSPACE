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

// Function: FUN_0020dcb0
// Address: 0x20dcb0 - 0x20dcc0
void FUN_0020dcb0_0x20dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020dcb0_0x20dcb0");
#endif

    ctx->pc = 0x20dcb0u;

    // 0x20dcb0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x20dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x20dcb4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x20dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x20dcb8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x20dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x20dcbc: 0x2463d400  addiu       $v1, $v1, -0x2C00
    ctx->pc = 0x20dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956032));
    ctx->pc = 0x20dcc0u;
}
