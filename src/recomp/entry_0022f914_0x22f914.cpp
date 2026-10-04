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

// Function: entry_0022f914
// Address: 0x22f914 - 0x22f934
void entry_0022f914_0x22f914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f914_0x22f914");
#endif

    switch (ctx->pc) {
        case 0x22f930u: goto label_22f930;
        default: break;
    }

    ctx->pc = 0x22f914u;

    // 0x22f914: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f918: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x22f918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f91c: 0x8c23007c  lw          $v1, 0x7C($at)
    ctx->pc = 0x22f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B007Cu));
    // 0x22f920: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F920u;
    {
        const bool branch_taken_0x22f920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F920u;
        // 0x22f924: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f920) {
            ctx->pc = 0x22F934u;
            return;
        }
    }
    ctx->pc = 0x22F928u;
    // 0x22f928: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F928u;
    SET_GPR_U32(ctx, 31, 0x22F930u);
    ctx->pc = 0x22F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F928u;
    // 0x22f92c: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F928u, 0x22F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F930u;
label_22f930:
    // 0x22f930: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x22f930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x22f934u;
}
