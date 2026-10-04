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

// Function: entry_00134d10
// Address: 0x134d10 - 0x134d28
void entry_00134d10_0x134d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134d10_0x134d10");
#endif

    switch (ctx->pc) {
        case 0x134d18u: goto label_134d18;
        default: break;
    }

    ctx->pc = 0x134d10u;

    // 0x134d10: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x134D10u;
    SET_GPR_U32(ctx, 31, 0x134D18u);
    ctx->pc = 0x134D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D10u;
    // 0x134d14: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x134D10u, 0x134D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D18u;
label_134d18:
    // 0x134d18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134D18u;
    {
        const bool branch_taken_0x134d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d18) {
            ctx->pc = 0x134D28u;
            return;
        }
    }
    ctx->pc = 0x134D20u;
    // 0x134d20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134D20u;
    {
        const bool branch_taken_0x134d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d20) {
            ctx->pc = 0x134D34u;
            return;
        }
    }
    ctx->pc = 0x134D28u;
}
