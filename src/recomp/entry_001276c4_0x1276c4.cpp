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

// Function: entry_001276c4
// Address: 0x1276c4 - 0x1276e0
void entry_001276c4_0x1276c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001276c4_0x1276c4");
#endif

    ctx->pc = 0x1276c4u;

    // 0x1276c4: 0x240300a6  addiu       $v1, $zero, 0xA6
    ctx->pc = 0x1276c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x1276c8: 0x24040099  addiu       $a0, $zero, 0x99
    ctx->pc = 0x1276c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x1276cc: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1276ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1276d0: 0x24030086  addiu       $v1, $zero, 0x86
    ctx->pc = 0x1276d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x1276d4: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1276d4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1276d8: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1276D8u;
    {
        const bool branch_taken_0x1276d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276D8u;
        // 0x1276dc: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276d8) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1276E0u;
}
