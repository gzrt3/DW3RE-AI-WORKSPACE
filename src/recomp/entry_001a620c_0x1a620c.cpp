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

// Function: entry_001a620c
// Address: 0x1a620c - 0x1a6224
void entry_001a620c_0x1a620c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a620c_0x1a620c");
#endif

    switch (ctx->pc) {
        case 0x1a621cu: goto label_1a621c;
        default: break;
    }

    ctx->pc = 0x1a620cu;

    // 0x1a620c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1a620cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1a6210: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1a6210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1a6214: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x1A6214u;
    SET_GPR_U32(ctx, 31, 0x1A621Cu);
    ctx->pc = 0x1A6218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6214u;
    // 0x1a6218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x1A6214u, 0x1A621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A621Cu;
label_1a621c:
    // 0x1a621c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A621Cu;
    {
        const bool branch_taken_0x1a621c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A621Cu;
        // 0x1a6220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a621c) {
            ctx->pc = 0x1A61F8u;
            return;
        }
    }
    ctx->pc = 0x1A6224u;
}
