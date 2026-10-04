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

// Function: entry_001a5400
// Address: 0x1a5400 - 0x1a5424
void entry_001a5400_0x1a5400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5400_0x1a5400");
#endif

    switch (ctx->pc) {
        case 0x1a5408u: goto label_1a5408;
        case 0x1a5420u: goto label_1a5420;
        default: break;
    }

    ctx->pc = 0x1a5400u;

    // 0x1a5400: 0xc069164  jal         func_1A4590
    ctx->pc = 0x1A5400u;
    SET_GPR_U32(ctx, 31, 0x1A5408u);
    ctx->pc = 0x1A5404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5400u;
    // 0x1a5404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4590u, 0x1A5400u, 0x1A5408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5408u;
label_1a5408:
    // 0x1a5408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a540c: 0xf  sync
    ctx->pc = 0x1a540cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a5410: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5410u;
    {
        const bool branch_taken_0x1a5410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5410u;
        // 0x1a5414: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5410) {
            ctx->pc = 0x1A5424u;
            return;
        }
    }
    ctx->pc = 0x1A5418u;
    // 0x1a5418: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A5418u;
    SET_GPR_U32(ctx, 31, 0x1A5420u);
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A5418u, 0x1A5420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5420u;
label_1a5420:
    // 0x1a5420: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a5420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a5424u;
}
