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

// Function: entry_00128094
// Address: 0x128094 - 0x1280a4
void entry_00128094_0x128094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128094_0x128094");
#endif

    switch (ctx->pc) {
        case 0x12809cu: goto label_12809c;
        default: break;
    }

    ctx->pc = 0x128094u;

    // 0x128094: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x128094u;
    SET_GPR_U32(ctx, 31, 0x12809Cu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x128094u, 0x12809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12809Cu;
label_12809c:
    // 0x12809c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x12809Cu;
    {
        const bool branch_taken_0x12809c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1280A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12809Cu;
        // 0x1280a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12809c) {
            ctx->pc = 0x128280u;
            return;
        }
    }
    ctx->pc = 0x1280A4u;
}
