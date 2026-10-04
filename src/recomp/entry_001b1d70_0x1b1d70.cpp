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

// Function: entry_001b1d70
// Address: 0x1b1d70 - 0x1b1d80
void entry_001b1d70_0x1b1d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1d70_0x1b1d70");
#endif

    switch (ctx->pc) {
        case 0x1b1d78u: goto label_1b1d78;
        default: break;
    }

    ctx->pc = 0x1b1d70u;

    // 0x1b1d70: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1D70u;
    SET_GPR_U32(ctx, 31, 0x1B1D78u);
    ctx->pc = 0x1B1D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D70u;
    // 0x1b1d74: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1D70u, 0x1B1D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D78u;
label_1b1d78:
    // 0x1b1d78: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B1D78u;
    {
        const bool branch_taken_0x1b1d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D78u;
        // 0x1b1d7c: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d78) {
            ctx->pc = 0x1B1E0Cu;
            return;
        }
    }
    ctx->pc = 0x1B1D80u;
}
