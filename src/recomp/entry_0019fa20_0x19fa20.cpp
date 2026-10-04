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

// Function: entry_0019fa20
// Address: 0x19fa20 - 0x19fa30
void entry_0019fa20_0x19fa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fa20_0x19fa20");
#endif

    switch (ctx->pc) {
        case 0x19fa28u: goto label_19fa28;
        default: break;
    }

    ctx->pc = 0x19fa20u;

    // 0x19fa20: 0xc067fcc  jal         func_19FF30
    ctx->pc = 0x19FA20u;
    SET_GPR_U32(ctx, 31, 0x19FA28u);
    ctx->pc = 0x19FA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA20u;
    // 0x19fa24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FF30u, 0x19FA20u, 0x19FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA28u;
label_19fa28:
    // 0x19fa28: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x19FA28u;
    {
        const bool branch_taken_0x19fa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fa28) {
            ctx->pc = 0x19F9C0u;
            return;
        }
    }
    ctx->pc = 0x19FA30u;
}
