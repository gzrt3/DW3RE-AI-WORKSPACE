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

// Function: entry_001ec6cc
// Address: 0x1ec6cc - 0x1ec6dc
void entry_001ec6cc_0x1ec6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec6cc_0x1ec6cc");
#endif

    ctx->pc = 0x1ec6ccu;

    // 0x1ec6cc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC6CCu;
    {
        const bool branch_taken_0x1ec6cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6CCu;
        // 0x1ec6d0: 0xaf808f24  sw          $zero, -0x70DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6cc) {
            ctx->pc = 0x1EC6DCu;
            return;
        }
    }
    ctx->pc = 0x1EC6D4u;
    // 0x1ec6d4: 0xc07b238  jal         func_1EC8E0
    ctx->pc = 0x1EC6D4u;
    SET_GPR_U32(ctx, 31, 0x1EC6DCu);
    ctx->pc = 0x1EC8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC8E0u, 0x1EC6D4u, 0x1EC6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC6DCu;
}
