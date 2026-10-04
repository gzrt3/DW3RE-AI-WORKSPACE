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

// Function: entry_002234c8
// Address: 0x2234c8 - 0x2234e4
void entry_002234c8_0x2234c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002234c8_0x2234c8");
#endif

    switch (ctx->pc) {
        case 0x2234d0u: goto label_2234d0;
        default: break;
    }

    ctx->pc = 0x2234c8u;

    // 0x2234c8: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x2234C8u;
    SET_GPR_U32(ctx, 31, 0x2234D0u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x2234C8u, 0x2234D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234D0u;
label_2234d0:
    // 0x2234d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2234D0u;
    {
        const bool branch_taken_0x2234d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234D0u;
        // 0x2234d4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234d0) {
            ctx->pc = 0x2234E4u;
            return;
        }
    }
    ctx->pc = 0x2234D8u;
    // 0x2234d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2234d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2234dc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2234DCu;
    {
        const bool branch_taken_0x2234dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234DCu;
        // 0x2234e0: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234dc) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x2234E4u;
}
