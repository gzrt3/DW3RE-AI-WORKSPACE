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

// Function: entry_001b1824
// Address: 0x1b1824 - 0x1b1840
void entry_001b1824_0x1b1824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1824_0x1b1824");
#endif

    switch (ctx->pc) {
        case 0x1b1830u: goto label_1b1830;
        default: break;
    }

    ctx->pc = 0x1b1824u;

    // 0x1b1824: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b1824u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
    // 0x1b1828: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B1828u;
    SET_GPR_U32(ctx, 31, 0x1B1830u);
    ctx->pc = 0x1B182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1828u;
    // 0x1b182c: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B1828u, 0x1B1830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1830u;
label_1b1830:
    // 0x1b1830: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1830u;
    {
        const bool branch_taken_0x1b1830 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1830u;
        // 0x1b1834: 0x3c130037  lui         $s3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1830) {
            ctx->pc = 0x1B1840u;
            return;
        }
    }
    ctx->pc = 0x1B1838u;
    // 0x1b1838: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1B1838u;
    {
        const bool branch_taken_0x1b1838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1838u;
        // 0x1b183c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1838) {
            ctx->pc = 0x1B1930u;
            return;
        }
    }
    ctx->pc = 0x1B1840u;
}
