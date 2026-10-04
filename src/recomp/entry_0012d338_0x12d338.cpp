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

// Function: entry_0012d338
// Address: 0x12d338 - 0x12d348
void entry_0012d338_0x12d338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d338_0x12d338");
#endif

    switch (ctx->pc) {
        case 0x12d340u: goto label_12d340;
        default: break;
    }

    ctx->pc = 0x12d338u;

    // 0x12d338: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12D338u;
    SET_GPR_U32(ctx, 31, 0x12D340u);
    ctx->pc = 0x12D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D338u;
    // 0x12d33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12D338u, 0x12D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D340u;
label_12d340:
    // 0x12d340: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x12D340u;
    {
        const bool branch_taken_0x12d340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D340u;
        // 0x12d344: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d340) {
            ctx->pc = 0x12D3C0u;
            return;
        }
    }
    ctx->pc = 0x12D348u;
}
