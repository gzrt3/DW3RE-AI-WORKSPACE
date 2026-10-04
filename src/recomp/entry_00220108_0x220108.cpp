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

// Function: entry_00220108
// Address: 0x220108 - 0x220128
void entry_00220108_0x220108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220108_0x220108");
#endif

    switch (ctx->pc) {
        case 0x220110u: goto label_220110;
        case 0x220120u: goto label_220120;
        default: break;
    }

    ctx->pc = 0x220108u;

    // 0x220108: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x220108u;
    SET_GPR_U32(ctx, 31, 0x220110u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x220108u, 0x220110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220110u;
label_220110:
    // 0x220110: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x220110u;
    {
        const bool branch_taken_0x220110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220110u;
        // 0x220114: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220110) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x220118u;
    // 0x220118: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x220118u;
    SET_GPR_U32(ctx, 31, 0x220120u);
    ctx->pc = 0x22011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220118u;
    // 0x22011c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x220118u, 0x220120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220120u;
label_220120:
    // 0x220120: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x220120u;
    {
        const bool branch_taken_0x220120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220120) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x220128u;
}
