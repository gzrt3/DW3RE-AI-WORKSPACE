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

// Function: entry_001a02bc
// Address: 0x1a02bc - 0x1a02d4
void entry_001a02bc_0x1a02bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a02bc_0x1a02bc");
#endif

    switch (ctx->pc) {
        case 0x1a02c4u: goto label_1a02c4;
        default: break;
    }

    ctx->pc = 0x1a02bcu;

    // 0x1a02bc: 0xc067952  jal         func_19E548
    ctx->pc = 0x1A02BCu;
    SET_GPR_U32(ctx, 31, 0x1A02C4u);
    ctx->pc = 0x1A02C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A02BCu;
    // 0x1a02c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E548u, 0x1A02BCu, 0x1A02C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02C4u;
label_1a02c4:
    // 0x1a02c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a02c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A02C8u;
    {
        const bool branch_taken_0x1a02c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02C8u;
        // 0x1a02cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02c8) {
            ctx->pc = 0x1A02D4u;
            return;
        }
    }
    ctx->pc = 0x1A02D0u;
    // 0x1a02d0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1a02d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x1a02d4u;
}
