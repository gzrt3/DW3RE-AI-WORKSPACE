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

// Function: entry_001a2fe0
// Address: 0x1a2fe0 - 0x1a2ffc
void entry_001a2fe0_0x1a2fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2fe0_0x1a2fe0");
#endif

    switch (ctx->pc) {
        case 0x1a2fe8u: goto label_1a2fe8;
        case 0x1a2ff8u: goto label_1a2ff8;
        default: break;
    }

    ctx->pc = 0x1a2fe0u;

    // 0x1a2fe0: 0xc0680e0  jal         func_1A0380
    ctx->pc = 0x1A2FE0u;
    SET_GPR_U32(ctx, 31, 0x1A2FE8u);
    ctx->pc = 0x1A2FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2FE0u;
    // 0x1a2fe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0380u, 0x1A2FE0u, 0x1A2FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FE8u;
label_1a2fe8:
    // 0x1a2fe8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2FE8u;
    {
        const bool branch_taken_0x1a2fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FE8u;
        // 0x1a2fec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fe8) {
            ctx->pc = 0x1A2FFCu;
            return;
        }
    }
    ctx->pc = 0x1A2FF0u;
    // 0x1a2ff0: 0xc068088  jal         func_1A0220
    ctx->pc = 0x1A2FF0u;
    SET_GPR_U32(ctx, 31, 0x1A2FF8u);
    ctx->pc = 0x1A2FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2FF0u;
    // 0x1a2ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0220u, 0x1A2FF0u, 0x1A2FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2FF8u;
label_1a2ff8:
    // 0x1a2ff8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1a2ff8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x1a2ffcu;
}
