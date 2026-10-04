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

// Function: entry_0017feb8
// Address: 0x17feb8 - 0x17fed8
void entry_0017feb8_0x17feb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017feb8_0x17feb8");
#endif

    switch (ctx->pc) {
        case 0x17fec0u: goto label_17fec0;
        default: break;
    }

    ctx->pc = 0x17feb8u;

label_17feb8:
    // 0x17feb8: 0xc06bf82  jal         func_1AFE08
    ctx->pc = 0x17FEB8u;
    SET_GPR_U32(ctx, 31, 0x17FEC0u);
    ctx->pc = 0x17FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEB8u;
    // 0x17febc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFE08u, 0x17FEB8u, 0x17FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FEC0u;
label_17fec0:
    // 0x17fec0: 0x0  nop
    ctx->pc = 0x17fec0u;
    // NOP
    // 0x17fec4: 0x0  nop
    ctx->pc = 0x17fec4u;
    // NOP
    // 0x17fec8: 0x0  nop
    ctx->pc = 0x17fec8u;
    // NOP
    // 0x17fecc: 0x0  nop
    ctx->pc = 0x17feccu;
    // NOP
    // 0x17fed0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17FED0u;
    {
        const bool branch_taken_0x17fed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fed0) {
            ctx->pc = 0x17FEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17feb8;
        }
    }
    ctx->pc = 0x17FED8u;
}
