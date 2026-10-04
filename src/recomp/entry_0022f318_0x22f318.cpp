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

// Function: entry_0022f318
// Address: 0x22f318 - 0x22f338
void entry_0022f318_0x22f318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f318_0x22f318");
#endif

    switch (ctx->pc) {
        case 0x22f320u: goto label_22f320;
        case 0x22f330u: goto label_22f330;
        default: break;
    }

    ctx->pc = 0x22f318u;

    // 0x22f318: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x22F318u;
    SET_GPR_U32(ctx, 31, 0x22F320u);
    ctx->pc = 0x22F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F318u;
    // 0x22f31c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x22F318u, 0x22F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F320u;
label_22f320:
    // 0x22f320: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x22F320u;
    {
        const bool branch_taken_0x22f320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F320u;
        // 0x22f324: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f320) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F328u;
    // 0x22f328: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F328u;
    SET_GPR_U32(ctx, 31, 0x22F330u);
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F328u, 0x22F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F330u;
label_22f330:
    // 0x22f330: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x22F330u;
    {
        const bool branch_taken_0x22f330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f330) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F338u;
}
