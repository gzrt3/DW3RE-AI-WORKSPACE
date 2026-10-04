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

// Function: entry_00230e98
// Address: 0x230e98 - 0x230ea8
void entry_00230e98_0x230e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230e98_0x230e98");
#endif

    switch (ctx->pc) {
        case 0x230ea0u: goto label_230ea0;
        default: break;
    }

    ctx->pc = 0x230e98u;

    // 0x230e98: 0xc06c03a  jal         func_1B00E8
    ctx->pc = 0x230E98u;
    SET_GPR_U32(ctx, 31, 0x230EA0u);
    ctx->pc = 0x230E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E98u;
    // 0x230e9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B00E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B00E8u, 0x230E98u, 0x230EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EA0u;
label_230ea0:
    // 0x230ea0: 0x1450fff3  bne         $v0, $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x230EA0u;
    {
        const bool branch_taken_0x230ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x230ea0) {
            ctx->pc = 0x230E70u;
            return;
        }
    }
    ctx->pc = 0x230EA8u;
}
