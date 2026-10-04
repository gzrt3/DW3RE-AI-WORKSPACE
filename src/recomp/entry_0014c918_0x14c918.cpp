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

// Function: entry_0014c918
// Address: 0x14c918 - 0x14c928
void entry_0014c918_0x14c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c918_0x14c918");
#endif

    ctx->pc = 0x14c918u;

    // 0x14c918: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C918u;
    {
        const bool branch_taken_0x14c918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c918) {
            ctx->pc = 0x14C928u;
            return;
        }
    }
    ctx->pc = 0x14C920u;
    // 0x14c920: 0xc053250  jal         func_14C940
    ctx->pc = 0x14C920u;
    SET_GPR_U32(ctx, 31, 0x14C928u);
    ctx->pc = 0x14C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C920u;
    // 0x14c924: 0x8f8480d4  lw          $a0, -0x7F2C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934740)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C940u, 0x14C920u, 0x14C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C928u;
}
