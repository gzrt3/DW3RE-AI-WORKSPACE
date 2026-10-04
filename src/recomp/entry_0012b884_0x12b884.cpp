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

// Function: entry_0012b884
// Address: 0x12b884 - 0x12b894
void entry_0012b884_0x12b884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b884_0x12b884");
#endif

    switch (ctx->pc) {
        case 0x12b88cu: goto label_12b88c;
        default: break;
    }

    ctx->pc = 0x12b884u;

    // 0x12b884: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12B884u;
    SET_GPR_U32(ctx, 31, 0x12B88Cu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12B884u, 0x12B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B88Cu;
label_12b88c:
    // 0x12b88c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x12B88Cu;
    {
        const bool branch_taken_0x12b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B88Cu;
        // 0x12b890: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b88c) {
            ctx->pc = 0x12B9CCu;
            return;
        }
    }
    ctx->pc = 0x12B894u;
}
