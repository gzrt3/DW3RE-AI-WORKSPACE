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

// Function: entry_001a61d4
// Address: 0x1a61d4 - 0x1a61f8
void entry_001a61d4_0x1a61d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a61d4_0x1a61d4");
#endif

    switch (ctx->pc) {
        case 0x1a61e4u: goto label_1a61e4;
        default: break;
    }

    ctx->pc = 0x1a61d4u;

    // 0x1a61d4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1a61d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1a61d8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1a61d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1a61dc: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x1A61DCu;
    SET_GPR_U32(ctx, 31, 0x1A61E4u);
    ctx->pc = 0x1A61E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61DCu;
    // 0x1a61e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x1A61DCu, 0x1A61E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61E4u;
label_1a61e4:
    // 0x1a61e4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A61E4u;
    {
        const bool branch_taken_0x1a61e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61E4u;
        // 0x1a61e8: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61e4) {
            ctx->pc = 0x1A6224u;
            return;
        }
    }
    ctx->pc = 0x1A61ECu;
    // 0x1a61ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A61ECu;
    {
        const bool branch_taken_0x1a61ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a61ec) {
            ctx->pc = 0x1A620Cu;
            return;
        }
    }
    ctx->pc = 0x1A61F4u;
    // 0x1a61f4: 0x0  nop
    ctx->pc = 0x1a61f4u;
    // NOP
    ctx->pc = 0x1a61f8u;
}
