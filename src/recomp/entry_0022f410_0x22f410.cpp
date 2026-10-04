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

// Function: entry_0022f410
// Address: 0x22f410 - 0x22f430
void entry_0022f410_0x22f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f410_0x22f410");
#endif

    switch (ctx->pc) {
        case 0x22f418u: goto label_22f418;
        case 0x22f428u: goto label_22f428;
        default: break;
    }

    ctx->pc = 0x22f410u;

    // 0x22f410: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x22F410u;
    SET_GPR_U32(ctx, 31, 0x22F418u);
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x22F410u, 0x22F418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F418u;
label_22f418:
    // 0x22f418: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x22F418u;
    {
        const bool branch_taken_0x22f418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F418u;
        // 0x22f41c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f418) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F420u;
    // 0x22f420: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F420u;
    SET_GPR_U32(ctx, 31, 0x22F428u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F420u, 0x22F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F428u;
label_22f428:
    // 0x22f428: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x22F428u;
    {
        const bool branch_taken_0x22f428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f428) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F430u;
}
