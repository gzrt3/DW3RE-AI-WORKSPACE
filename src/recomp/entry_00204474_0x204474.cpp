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

// Function: entry_00204474
// Address: 0x204474 - 0x204484
void entry_00204474_0x204474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204474_0x204474");
#endif

    switch (ctx->pc) {
        case 0x20447cu: goto label_20447c;
        default: break;
    }

    ctx->pc = 0x204474u;

    // 0x204474: 0xc06c800  jal         func_1B2000
    ctx->pc = 0x204474u;
    SET_GPR_U32(ctx, 31, 0x20447Cu);
    ctx->pc = 0x204478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204474u;
    // 0x204478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2000u, 0x204474u, 0x20447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20447Cu;
label_20447c:
    // 0x20447c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x20447Cu;
    {
        const bool branch_taken_0x20447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20447Cu;
        // 0x204480: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20447c) {
            ctx->pc = 0x20455Cu;
            return;
        }
    }
    ctx->pc = 0x204484u;
}
