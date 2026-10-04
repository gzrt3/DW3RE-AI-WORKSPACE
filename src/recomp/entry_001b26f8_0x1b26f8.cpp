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

// Function: entry_001b26f8
// Address: 0x1b26f8 - 0x1b2708
void entry_001b26f8_0x1b26f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b26f8_0x1b26f8");
#endif

    switch (ctx->pc) {
        case 0x1b2700u: goto label_1b2700;
        default: break;
    }

    ctx->pc = 0x1b26f8u;

    // 0x1b26f8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B26F8u;
    SET_GPR_U32(ctx, 31, 0x1B2700u);
    ctx->pc = 0x1B26FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B26F8u;
    // 0x1b26fc: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B26F8u, 0x1B2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2700u;
label_1b2700:
    // 0x1b2700: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1B2700u;
    {
        const bool branch_taken_0x1b2700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2700u;
        // 0x1b2704: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2700) {
            ctx->pc = 0x1B2778u;
            return;
        }
    }
    ctx->pc = 0x1B2708u;
}
