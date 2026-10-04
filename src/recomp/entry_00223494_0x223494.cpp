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

// Function: entry_00223494
// Address: 0x223494 - 0x2234ac
void entry_00223494_0x223494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223494_0x223494");
#endif

    switch (ctx->pc) {
        case 0x22349cu: goto label_22349c;
        default: break;
    }

    ctx->pc = 0x223494u;

    // 0x223494: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x223494u;
    SET_GPR_U32(ctx, 31, 0x22349Cu);
    ctx->pc = 0x223498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223494u;
    // 0x223498: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x223494u, 0x22349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22349Cu;
label_22349c:
    // 0x22349c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x22349Cu;
    {
        const bool branch_taken_0x22349c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22349Cu;
        // 0x2234a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22349c) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x2234A4u;
    // 0x2234a4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2234A4u;
    {
        const bool branch_taken_0x2234a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234A4u;
        // 0x2234a8: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234a4) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x2234ACu;
}
