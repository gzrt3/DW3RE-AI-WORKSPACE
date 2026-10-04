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

// Function: entry_0022357c
// Address: 0x22357c - 0x223590
void entry_0022357c_0x22357c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022357c_0x22357c");
#endif

    switch (ctx->pc) {
        case 0x223584u: goto label_223584;
        default: break;
    }

    ctx->pc = 0x22357cu;

    // 0x22357c: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x22357Cu;
    SET_GPR_U32(ctx, 31, 0x223584u);
    ctx->pc = 0x223580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22357Cu;
    // 0x223580: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x22357Cu, 0x223584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223584u;
label_223584:
    // 0x223584: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x223584u;
    {
        const bool branch_taken_0x223584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223584u;
        // 0x223588: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223584) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x22358Cu;
    // 0x22358c: 0xaf8392e0  sw          $v1, -0x6D20($gp)
    ctx->pc = 0x22358cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
    ctx->pc = 0x223590u;
}
