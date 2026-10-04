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

// Function: entry_0016d624
// Address: 0x16d624 - 0x16d634
void entry_0016d624_0x16d624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d624_0x16d624");
#endif

    switch (ctx->pc) {
        case 0x16d62cu: goto label_16d62c;
        default: break;
    }

    ctx->pc = 0x16d624u;

    // 0x16d624: 0xc05b6ec  jal         func_16DBB0
    ctx->pc = 0x16D624u;
    SET_GPR_U32(ctx, 31, 0x16D62Cu);
    ctx->pc = 0x16DBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DBB0u, 0x16D624u, 0x16D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D62Cu;
label_16d62c:
    // 0x16d62c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16D62Cu;
    {
        const bool branch_taken_0x16d62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D62Cu;
        // 0x16d630: 0xaf828700  sw          $v0, -0x7900($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d62c) {
            ctx->pc = 0x16D698u;
            return;
        }
    }
    ctx->pc = 0x16D634u;
}
