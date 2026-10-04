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

// Function: entry_001a5398
// Address: 0x1a5398 - 0x1a53bc
void entry_001a5398_0x1a5398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5398_0x1a5398");
#endif

    switch (ctx->pc) {
        case 0x1a53a0u: goto label_1a53a0;
        case 0x1a53b8u: goto label_1a53b8;
        default: break;
    }

    ctx->pc = 0x1a5398u;

    // 0x1a5398: 0xc069158  jal         func_1A4560
    ctx->pc = 0x1A5398u;
    SET_GPR_U32(ctx, 31, 0x1A53A0u);
    ctx->pc = 0x1A539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5398u;
    // 0x1a539c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4560u, 0x1A5398u, 0x1A53A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53A0u;
label_1a53a0:
    // 0x1a53a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a53a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a53a4: 0xf  sync
    ctx->pc = 0x1a53a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a53a8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A53A8u;
    {
        const bool branch_taken_0x1a53a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A53ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53A8u;
        // 0x1a53ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53a8) {
            ctx->pc = 0x1A53BCu;
            return;
        }
    }
    ctx->pc = 0x1A53B0u;
    // 0x1a53b0: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A53B0u;
    SET_GPR_U32(ctx, 31, 0x1A53B8u);
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A53B0u, 0x1A53B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53B8u;
label_1a53b8:
    // 0x1a53b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a53b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a53bcu;
}
