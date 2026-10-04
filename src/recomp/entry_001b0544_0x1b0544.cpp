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

// Function: entry_001b0544
// Address: 0x1b0544 - 0x1b0564
void entry_001b0544_0x1b0544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0544_0x1b0544");
#endif

    switch (ctx->pc) {
        case 0x1b0560u: goto label_1b0560;
        default: break;
    }

    ctx->pc = 0x1b0544u;

    // 0x1b0544: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0544u;
    {
        const bool branch_taken_0x1b0544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0544u;
        // 0x1b0548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0544) {
            ctx->pc = 0x1B0564u;
            return;
        }
    }
    ctx->pc = 0x1B054Cu;
    // 0x1b054c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B054Cu;
    {
        const bool branch_taken_0x1b054c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B054Cu;
        // 0x1b0550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b054c) {
            ctx->pc = 0x1B0564u;
            return;
        }
    }
    ctx->pc = 0x1B0554u;
    // 0x1b0554: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1b0558: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0558u;
    SET_GPR_U32(ctx, 31, 0x1B0560u);
    ctx->pc = 0x1B055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0558u;
    // 0x1b055c: 0x2484ab18  addiu       $a0, $a0, -0x54E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0558u, 0x1B0560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0560u;
label_1b0560:
    // 0x1b0560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1b0564u;
}
