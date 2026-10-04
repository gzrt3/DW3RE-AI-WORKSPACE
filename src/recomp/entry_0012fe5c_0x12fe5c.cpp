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

// Function: entry_0012fe5c
// Address: 0x12fe5c - 0x12fe78
void entry_0012fe5c_0x12fe5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fe5c_0x12fe5c");
#endif

    switch (ctx->pc) {
        case 0x12fe64u: goto label_12fe64;
        case 0x12fe74u: goto label_12fe74;
        default: break;
    }

    ctx->pc = 0x12fe5cu;

    // 0x12fe5c: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FE5Cu;
    SET_GPR_U32(ctx, 31, 0x12FE64u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FE5Cu, 0x12FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE64u;
label_12fe64:
    // 0x12fe64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FE64u;
    {
        const bool branch_taken_0x12fe64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE64u;
        // 0x12fe68: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe64) {
            ctx->pc = 0x12FE78u;
            return;
        }
    }
    ctx->pc = 0x12FE6Cu;
    // 0x12fe6c: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FE6Cu;
    SET_GPR_U32(ctx, 31, 0x12FE74u);
    ctx->pc = 0x12FE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE6Cu;
    // 0x12fe70: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FE6Cu, 0x12FE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE74u;
label_12fe74:
    // 0x12fe74: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x12fe78u;
}
