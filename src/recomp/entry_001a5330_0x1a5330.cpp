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

// Function: entry_001a5330
// Address: 0x1a5330 - 0x1a5354
void entry_001a5330_0x1a5330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5330_0x1a5330");
#endif

    switch (ctx->pc) {
        case 0x1a5338u: goto label_1a5338;
        case 0x1a5350u: goto label_1a5350;
        default: break;
    }

    ctx->pc = 0x1a5330u;

    // 0x1a5330: 0xc06915c  jal         func_1A4570
    ctx->pc = 0x1A5330u;
    SET_GPR_U32(ctx, 31, 0x1A5338u);
    ctx->pc = 0x1A5334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5330u;
    // 0x1a5334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4570u, 0x1A5330u, 0x1A5338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5338u;
label_1a5338:
    // 0x1a5338: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a533c: 0xf  sync
    ctx->pc = 0x1a533cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a5340: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5340u;
    {
        const bool branch_taken_0x1a5340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5340u;
        // 0x1a5344: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5340) {
            ctx->pc = 0x1A5354u;
            return;
        }
    }
    ctx->pc = 0x1A5348u;
    // 0x1a5348: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A5348u;
    SET_GPR_U32(ctx, 31, 0x1A5350u);
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A5348u, 0x1A5350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5350u;
label_1a5350:
    // 0x1a5350: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a5350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a5354u;
}
