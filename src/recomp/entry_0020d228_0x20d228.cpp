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

// Function: entry_0020d228
// Address: 0x20d228 - 0x20d244
void entry_0020d228_0x20d228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d228_0x20d228");
#endif

    switch (ctx->pc) {
        case 0x20d23cu: goto label_20d23c;
        default: break;
    }

    ctx->pc = 0x20d228u;

    // 0x20d228: 0x8f82916c  lw          $v0, -0x6E94($gp)
    ctx->pc = 0x20d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
    // 0x20d22c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D22Cu;
    {
        const bool branch_taken_0x20d22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D22Cu;
        // 0x20d230: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d22c) {
            ctx->pc = 0x20D244u;
            return;
        }
    }
    ctx->pc = 0x20D234u;
    // 0x20d234: 0xc078050  jal         func_1E0140
    ctx->pc = 0x20D234u;
    SET_GPR_U32(ctx, 31, 0x20D23Cu);
    ctx->pc = 0x20D238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D234u;
    // 0x20d238: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0140u, 0x20D234u, 0x20D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D23Cu;
label_20d23c:
    // 0x20d23c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20D23Cu;
    {
        const bool branch_taken_0x20d23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d23c) {
            ctx->pc = 0x20D24Cu;
            return;
        }
    }
    ctx->pc = 0x20D244u;
}
