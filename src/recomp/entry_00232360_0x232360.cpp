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

// Function: entry_00232360
// Address: 0x232360 - 0x232370
void entry_00232360_0x232360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232360_0x232360");
#endif

    switch (ctx->pc) {
        case 0x232368u: goto label_232368;
        default: break;
    }

    ctx->pc = 0x232360u;

label_232360:
    // 0x232360: 0xc0692f0  jal         func_1A4BC0
    ctx->pc = 0x232360u;
    SET_GPR_U32(ctx, 31, 0x232368u);
    ctx->pc = 0x232364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232360u;
    // 0x232364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BC0u, 0x232360u, 0x232368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232368u;
label_232368:
    // 0x232368: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x232368u;
    {
        const bool branch_taken_0x232368 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232368u;
        // 0x23236c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232368) {
            ctx->pc = 0x232360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232360;
        }
    }
    ctx->pc = 0x232370u;
}
