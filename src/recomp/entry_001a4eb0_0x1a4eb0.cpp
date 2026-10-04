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

// Function: entry_001a4eb0
// Address: 0x1a4eb0 - 0x1a4ec0
void entry_001a4eb0_0x1a4eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4eb0_0x1a4eb0");
#endif

    switch (ctx->pc) {
        case 0x1a4eb8u: goto label_1a4eb8;
        default: break;
    }

    ctx->pc = 0x1a4eb0u;

    // 0x1a4eb0: 0xc06977c  jal         func_1A5DF0
    ctx->pc = 0x1A4EB0u;
    SET_GPR_U32(ctx, 31, 0x1A4EB8u);
    ctx->pc = 0x1A4EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4EB0u;
    // 0x1a4eb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5DF0u, 0x1A4EB0u, 0x1A4EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EB8u;
label_1a4eb8:
    // 0x1a4eb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4EB8u;
    {
        const bool branch_taken_0x1a4eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EB8u;
        // 0x1a4ebc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4eb8) {
            ctx->pc = 0x1A4EC8u;
            return;
        }
    }
    ctx->pc = 0x1A4EC0u;
}
