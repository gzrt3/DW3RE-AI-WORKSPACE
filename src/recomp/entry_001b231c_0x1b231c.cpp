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

// Function: entry_001b231c
// Address: 0x1b231c - 0x1b232c
void entry_001b231c_0x1b231c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b231c_0x1b231c");
#endif

    switch (ctx->pc) {
        case 0x1b2324u: goto label_1b2324;
        default: break;
    }

    ctx->pc = 0x1b231cu;

    // 0x1b231c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B231Cu;
    SET_GPR_U32(ctx, 31, 0x1B2324u);
    ctx->pc = 0x1B2320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B231Cu;
    // 0x1b2320: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B231Cu, 0x1B2324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2324u;
label_1b2324:
    // 0x1b2324: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1B2324u;
    {
        const bool branch_taken_0x1b2324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2324u;
        // 0x1b2328: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2324) {
            ctx->pc = 0x1B243Cu;
            return;
        }
    }
    ctx->pc = 0x1B232Cu;
}
