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

// Function: entry_0023b828
// Address: 0x23b828 - 0x23b844
void entry_0023b828_0x23b828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b828_0x23b828");
#endif

    switch (ctx->pc) {
        case 0x23b838u: goto label_23b838;
        default: break;
    }

    ctx->pc = 0x23b828u;

label_23b828:
    // 0x23b828: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x23b828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x23b82c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x23b82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x23b830: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x23B830u;
    SET_GPR_U32(ctx, 31, 0x23B838u);
    ctx->pc = 0x23B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B830u;
    // 0x23b834: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x23B830u, 0x23B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B838u;
label_23b838:
    // 0x23b838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23b838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b83c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23B83Cu;
    {
        const bool branch_taken_0x23b83c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x23b83c) {
            ctx->pc = 0x23B828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b828;
        }
    }
    ctx->pc = 0x23B844u;
}
