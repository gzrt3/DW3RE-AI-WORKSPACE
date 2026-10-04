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

// Function: entry_0022f2f8
// Address: 0x22f2f8 - 0x22f318
void entry_0022f2f8_0x22f2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f2f8_0x22f2f8");
#endif

    switch (ctx->pc) {
        case 0x22f300u: goto label_22f300;
        case 0x22f310u: goto label_22f310;
        default: break;
    }

    ctx->pc = 0x22f2f8u;

    // 0x22f2f8: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x22F2F8u;
    SET_GPR_U32(ctx, 31, 0x22F300u);
    ctx->pc = 0x22F2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2F8u;
    // 0x22f2fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x22F2F8u, 0x22F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F300u;
label_22f300:
    // 0x22f300: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x22F300u;
    {
        const bool branch_taken_0x22f300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F300u;
        // 0x22f304: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f300) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F308u;
    // 0x22f308: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F308u;
    SET_GPR_U32(ctx, 31, 0x22F310u);
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F308u, 0x22F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F310u;
label_22f310:
    // 0x22f310: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x22F310u;
    {
        const bool branch_taken_0x22f310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f310) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F318u;
}
