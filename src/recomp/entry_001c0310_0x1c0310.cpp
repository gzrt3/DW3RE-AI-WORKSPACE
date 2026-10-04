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

// Function: entry_001c0310
// Address: 0x1c0310 - 0x1c0328
void entry_001c0310_0x1c0310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0310_0x1c0310");
#endif

    switch (ctx->pc) {
        case 0x1c0318u: goto label_1c0318;
        default: break;
    }

    ctx->pc = 0x1c0310u;

    // 0x1c0310: 0xc0700d4  jal         func_1C0350
    ctx->pc = 0x1C0310u;
    SET_GPR_U32(ctx, 31, 0x1C0318u);
    ctx->pc = 0x1C0314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0310u;
    // 0x1c0314: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0350u, 0x1C0310u, 0x1C0318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0318u;
label_1c0318:
    // 0x1c0318: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0318u;
    {
        const bool branch_taken_0x1c0318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0318u;
        // 0x1c031c: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0318) {
            ctx->pc = 0x1C0328u;
            return;
        }
    }
    ctx->pc = 0x1C0320u;
    // 0x1c0320: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0320u;
    {
        const bool branch_taken_0x1c0320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0320u;
        // 0x1c0324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0320) {
            ctx->pc = 0x1C0344u;
            return;
        }
    }
    ctx->pc = 0x1C0328u;
}
