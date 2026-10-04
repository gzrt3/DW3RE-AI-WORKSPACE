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

// Function: entry_002201e8
// Address: 0x2201e8 - 0x220208
void entry_002201e8_0x2201e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002201e8_0x2201e8");
#endif

    switch (ctx->pc) {
        case 0x2201f0u: goto label_2201f0;
        case 0x220204u: goto label_220204;
        default: break;
    }

    ctx->pc = 0x2201e8u;

    // 0x2201e8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x2201E8u;
    SET_GPR_U32(ctx, 31, 0x2201F0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x2201E8u, 0x2201F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201F0u;
label_2201f0:
    // 0x2201f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2201F0u;
    {
        const bool branch_taken_0x2201f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201F0u;
        // 0x2201f4: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201f0) {
            ctx->pc = 0x220208u;
            return;
        }
    }
    ctx->pc = 0x2201F8u;
    // 0x2201f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2201f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2201fc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2201FCu;
    SET_GPR_U32(ctx, 31, 0x220204u);
    ctx->pc = 0x220200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201FCu;
    // 0x220200: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2201FCu, 0x220204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220204u;
label_220204:
    // 0x220204: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x220204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->pc = 0x220208u;
}
