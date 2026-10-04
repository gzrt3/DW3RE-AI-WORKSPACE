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

// Function: entry_001b24e4
// Address: 0x1b24e4 - 0x1b24f4
void entry_001b24e4_0x1b24e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b24e4_0x1b24e4");
#endif

    switch (ctx->pc) {
        case 0x1b24ecu: goto label_1b24ec;
        default: break;
    }

    ctx->pc = 0x1b24e4u;

    // 0x1b24e4: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B24E4u;
    SET_GPR_U32(ctx, 31, 0x1B24ECu);
    ctx->pc = 0x1B24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24E4u;
    // 0x1b24e8: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B24E4u, 0x1B24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24ECu;
label_1b24ec:
    // 0x1b24ec: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1B24ECu;
    {
        const bool branch_taken_0x1b24ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24ECu;
        // 0x1b24f0: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24ec) {
            ctx->pc = 0x1B2598u;
            return;
        }
    }
    ctx->pc = 0x1B24F4u;
}
