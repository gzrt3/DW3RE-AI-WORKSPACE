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

// Function: entry_0022f668
// Address: 0x22f668 - 0x22f690
void entry_0022f668_0x22f668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f668_0x22f668");
#endif

    switch (ctx->pc) {
        case 0x22f688u: goto label_22f688;
        default: break;
    }

    ctx->pc = 0x22f668u;

    // 0x22f668: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22f66c: 0x28e20029  slti        $v0, $a3, 0x29
    ctx->pc = 0x22f66cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f670: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22F670u;
    {
        const bool branch_taken_0x22f670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F670u;
        // 0x22f674: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f670) {
            ctx->pc = 0x22F640u;
            return;
        }
    }
    ctx->pc = 0x22F678u;
    // 0x22f678: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F678u;
    {
        const bool branch_taken_0x22f678 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x22F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F678u;
        // 0x22f67c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f678) {
            ctx->pc = 0x22F690u;
            return;
        }
    }
    ctx->pc = 0x22F680u;
    // 0x22f680: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F680u;
    SET_GPR_U32(ctx, 31, 0x22F688u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F680u, 0x22F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F688u;
label_22f688:
    // 0x22f688: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F688u;
    SET_GPR_U32(ctx, 31, 0x22F690u);
    ctx->pc = 0x22F68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F688u;
    // 0x22f68c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F688u, 0x22F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F690u;
}
