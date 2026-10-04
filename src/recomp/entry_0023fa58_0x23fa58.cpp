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

// Function: entry_0023fa58
// Address: 0x23fa58 - 0x23fa70
void entry_0023fa58_0x23fa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fa58_0x23fa58");
#endif

    switch (ctx->pc) {
        case 0x23fa64u: goto label_23fa64;
        default: break;
    }

    ctx->pc = 0x23fa58u;

    // 0x23fa58: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23fa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x23fa5c: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x23FA5Cu;
    SET_GPR_U32(ctx, 31, 0x23FA64u);
    ctx->pc = 0x23FA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA5Cu;
    // 0x23fa60: 0x8c24c974  lw          $a0, -0x368C($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x23FA5Cu, 0x23FA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA64u;
label_23fa64:
    // 0x23fa64: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x23fa64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x23fa68: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x23FA68u;
    {
        const bool branch_taken_0x23fa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA68u;
        // 0x23fa6c: 0x24140008  addiu       $s4, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa68) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23FA70u;
}
