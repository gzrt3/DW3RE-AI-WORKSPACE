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

// Function: entry_001a4e38
// Address: 0x1a4e38 - 0x1a4e48
void entry_001a4e38_0x1a4e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4e38_0x1a4e38");
#endif

    switch (ctx->pc) {
        case 0x1a4e40u: goto label_1a4e40;
        default: break;
    }

    ctx->pc = 0x1a4e38u;

    // 0x1a4e38: 0xc069728  jal         func_1A5CA0
    ctx->pc = 0x1A4E38u;
    SET_GPR_U32(ctx, 31, 0x1A4E40u);
    ctx->pc = 0x1A4E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4E38u;
    // 0x1a4e3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5CA0u, 0x1A4E38u, 0x1A4E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4E40u;
label_1a4e40:
    // 0x1a4e40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4E40u;
    {
        const bool branch_taken_0x1a4e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E40u;
        // 0x1a4e44: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e40) {
            ctx->pc = 0x1A4E50u;
            return;
        }
    }
    ctx->pc = 0x1A4E48u;
}
