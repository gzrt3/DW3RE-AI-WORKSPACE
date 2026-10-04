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

// Function: entry_00234620
// Address: 0x234620 - 0x234630
void entry_00234620_0x234620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234620_0x234620");
#endif

    switch (ctx->pc) {
        case 0x234628u: goto label_234628;
        default: break;
    }

    ctx->pc = 0x234620u;

    // 0x234620: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x234620u;
    SET_GPR_U32(ctx, 31, 0x234628u);
    ctx->pc = 0x234624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234620u;
    // 0x234624: 0x2624b140  addiu       $a0, $s1, -0x4EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x234620u, 0x234628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234628u;
label_234628:
    // 0x234628: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x234628u;
    {
        const bool branch_taken_0x234628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234628u;
        // 0x23462c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234628) {
            ctx->pc = 0x234618u;
            return;
        }
    }
    ctx->pc = 0x234630u;
}
