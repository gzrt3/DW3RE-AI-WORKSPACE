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

// Function: entry_001a314c
// Address: 0x1a314c - 0x1a3170
void entry_001a314c_0x1a314c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a314c_0x1a314c");
#endif

    switch (ctx->pc) {
        case 0x1a3154u: goto label_1a3154;
        case 0x1a316cu: goto label_1a316c;
        default: break;
    }

    ctx->pc = 0x1a314cu;

    // 0x1a314c: 0xc0680e0  jal         func_1A0380
    ctx->pc = 0x1A314Cu;
    SET_GPR_U32(ctx, 31, 0x1A3154u);
    ctx->pc = 0x1A3150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A314Cu;
    // 0x1a3150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0380u, 0x1A314Cu, 0x1A3154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3154u;
label_1a3154:
    // 0x1a3154: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3154u;
    {
        const bool branch_taken_0x1a3154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3154u;
        // 0x1a3158: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3154) {
            ctx->pc = 0x1A3170u;
            return;
        }
    }
    ctx->pc = 0x1A315Cu;
    // 0x1a315c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A315Cu;
    {
        const bool branch_taken_0x1a315c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A315Cu;
        // 0x1a3160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a315c) {
            ctx->pc = 0x1A3174u;
            return;
        }
    }
    ctx->pc = 0x1A3164u;
    // 0x1a3164: 0xc068088  jal         func_1A0220
    ctx->pc = 0x1A3164u;
    SET_GPR_U32(ctx, 31, 0x1A316Cu);
    ctx->pc = 0x1A3168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3164u;
    // 0x1a3168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0220u, 0x1A3164u, 0x1A316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A316Cu;
label_1a316c:
    // 0x1a316c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a316cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1a3170u;
}
