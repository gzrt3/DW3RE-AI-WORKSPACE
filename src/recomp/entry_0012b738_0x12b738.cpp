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

// Function: entry_0012b738
// Address: 0x12b738 - 0x12b748
void entry_0012b738_0x12b738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b738_0x12b738");
#endif

    switch (ctx->pc) {
        case 0x12b740u: goto label_12b740;
        default: break;
    }

    ctx->pc = 0x12b738u;

    // 0x12b738: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12B738u;
    SET_GPR_U32(ctx, 31, 0x12B740u);
    ctx->pc = 0x12B73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B738u;
    // 0x12b73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12B738u, 0x12B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B740u;
label_12b740:
    // 0x12b740: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x12B740u;
    {
        const bool branch_taken_0x12b740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B740u;
        // 0x12b744: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b740) {
            ctx->pc = 0x12B850u;
            return;
        }
    }
    ctx->pc = 0x12B748u;
}
