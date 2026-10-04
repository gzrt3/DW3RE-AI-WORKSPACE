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

// Function: entry_001b1f38
// Address: 0x1b1f38 - 0x1b1f48
void entry_001b1f38_0x1b1f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1f38_0x1b1f38");
#endif

    switch (ctx->pc) {
        case 0x1b1f40u: goto label_1b1f40;
        default: break;
    }

    ctx->pc = 0x1b1f38u;

    // 0x1b1f38: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1F38u;
    SET_GPR_U32(ctx, 31, 0x1B1F40u);
    ctx->pc = 0x1B1F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F38u;
    // 0x1b1f3c: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1F38u, 0x1B1F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F40u;
label_1b1f40:
    // 0x1b1f40: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B1F40u;
    {
        const bool branch_taken_0x1b1f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F40u;
        // 0x1b1f44: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f40) {
            ctx->pc = 0x1B1FD4u;
            return;
        }
    }
    ctx->pc = 0x1B1F48u;
}
