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

// Function: entry_001a5468
// Address: 0x1a5468 - 0x1a548c
void entry_001a5468_0x1a5468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5468_0x1a5468");
#endif

    switch (ctx->pc) {
        case 0x1a5470u: goto label_1a5470;
        case 0x1a5488u: goto label_1a5488;
        default: break;
    }

    ctx->pc = 0x1a5468u;

    // 0x1a5468: 0xc069160  jal         func_1A4580
    ctx->pc = 0x1A5468u;
    SET_GPR_U32(ctx, 31, 0x1A5470u);
    ctx->pc = 0x1A546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5468u;
    // 0x1a546c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4580u, 0x1A5468u, 0x1A5470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5470u;
label_1a5470:
    // 0x1a5470: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5474: 0xf  sync
    ctx->pc = 0x1a5474u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a5478: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5478u;
    {
        const bool branch_taken_0x1a5478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5478u;
        // 0x1a547c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5478) {
            ctx->pc = 0x1A548Cu;
            return;
        }
    }
    ctx->pc = 0x1A5480u;
    // 0x1a5480: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A5480u;
    SET_GPR_U32(ctx, 31, 0x1A5488u);
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A5480u, 0x1A5488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5488u;
label_1a5488:
    // 0x1a5488: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a5488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a548cu;
}
