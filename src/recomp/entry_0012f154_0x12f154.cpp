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

// Function: entry_0012f154
// Address: 0x12f154 - 0x12f164
void entry_0012f154_0x12f154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f154_0x12f154");
#endif

    switch (ctx->pc) {
        case 0x12f15cu: goto label_12f15c;
        default: break;
    }

    ctx->pc = 0x12f154u;

    // 0x12f154: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12F154u;
    SET_GPR_U32(ctx, 31, 0x12F15Cu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12F154u, 0x12F15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F15Cu;
label_12f15c:
    // 0x12f15c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x12F15Cu;
    {
        const bool branch_taken_0x12f15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F15Cu;
        // 0x12f160: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f15c) {
            ctx->pc = 0x12F234u;
            return;
        }
    }
    ctx->pc = 0x12F164u;
}
