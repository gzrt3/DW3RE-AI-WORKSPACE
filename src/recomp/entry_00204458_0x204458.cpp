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

// Function: entry_00204458
// Address: 0x204458 - 0x204474
void entry_00204458_0x204458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204458_0x204458");
#endif

    switch (ctx->pc) {
        case 0x20446cu: goto label_20446c;
        default: break;
    }

    ctx->pc = 0x204458u;

    // 0x204458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20445c: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x20445cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x204460: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x204460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204464: 0xc06c73c  jal         func_1B1CF0
    ctx->pc = 0x204464u;
    SET_GPR_U32(ctx, 31, 0x20446Cu);
    ctx->pc = 0x204468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204464u;
    // 0x204468: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1CF0u, 0x204464u, 0x20446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20446Cu;
label_20446c:
    // 0x20446c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x20446Cu;
    {
        const bool branch_taken_0x20446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20446Cu;
        // 0x204470: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20446c) {
            ctx->pc = 0x20455Cu;
            return;
        }
    }
    ctx->pc = 0x204474u;
}
