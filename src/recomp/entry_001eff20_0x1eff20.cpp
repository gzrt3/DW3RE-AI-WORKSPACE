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

// Function: entry_001eff20
// Address: 0x1eff20 - 0x1eff38
void entry_001eff20_0x1eff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eff20_0x1eff20");
#endif

    ctx->pc = 0x1eff20u;

    // 0x1eff20: 0xaf838f74  sw          $v1, -0x708C($gp)
    ctx->pc = 0x1eff20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 3));
    // 0x1eff24: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x1eff24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1eff28: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EFF28u;
    {
        const bool branch_taken_0x1eff28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eff28) {
            ctx->pc = 0x1EFF6Cu;
            return;
        }
    }
    ctx->pc = 0x1EFF30u;
    // 0x1eff30: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EFF30u;
    {
        const bool branch_taken_0x1eff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF30u;
        // 0x1eff34: 0xaf808f78  sw          $zero, -0x7088($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff30) {
            ctx->pc = 0x1EFF6Cu;
            return;
        }
    }
    ctx->pc = 0x1EFF38u;
}
