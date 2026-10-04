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

// Function: entry_0023f830
// Address: 0x23f830 - 0x23f844
void entry_0023f830_0x23f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f830_0x23f830");
#endif

    switch (ctx->pc) {
        case 0x23f83cu: goto label_23f83c;
        default: break;
    }

    ctx->pc = 0x23f830u;

    // 0x23f830: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23f830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x23f834: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x23F834u;
    SET_GPR_U32(ctx, 31, 0x23F83Cu);
    ctx->pc = 0x23F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F834u;
    // 0x23f838: 0x8c24c97c  lw          $a0, -0x3684($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x23F834u, 0x23F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F83Cu;
label_23f83c:
    // 0x23f83c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x23F83Cu;
    {
        const bool branch_taken_0x23f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F83Cu;
        // 0x23f840: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f83c) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23F844u;
}
