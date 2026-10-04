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

// Function: entry_001278c8
// Address: 0x1278c8 - 0x1278e0
void entry_001278c8_0x1278c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001278c8_0x1278c8");
#endif

    ctx->pc = 0x1278c8u;

    // 0x1278c8: 0x240300a6  addiu       $v1, $zero, 0xA6
    ctx->pc = 0x1278c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x1278cc: 0x24040099  addiu       $a0, $zero, 0x99
    ctx->pc = 0x1278ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x1278d0: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1278d0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1278d4: 0x24030086  addiu       $v1, $zero, 0x86
    ctx->pc = 0x1278d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x1278d8: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1278d8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1278dc: 0xa38384ec  sb          $v1, -0x7B14($gp)
    ctx->pc = 0x1278dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1278e0u;
}
