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

// Function: entry_0022f440
// Address: 0x22f440 - 0x22f460
void entry_0022f440_0x22f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f440_0x22f440");
#endif

    switch (ctx->pc) {
        case 0x22f448u: goto label_22f448;
        case 0x22f458u: goto label_22f458;
        default: break;
    }

    ctx->pc = 0x22f440u;

    // 0x22f440: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F440u;
    SET_GPR_U32(ctx, 31, 0x22F448u);
    ctx->pc = 0x22F444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F440u;
    // 0x22f444: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F440u, 0x22F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F448u;
label_22f448:
    // 0x22f448: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22F448u;
    {
        const bool branch_taken_0x22f448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F448u;
        // 0x22f44c: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f448) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F450u;
    // 0x22f450: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F450u;
    SET_GPR_U32(ctx, 31, 0x22F458u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F450u, 0x22F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F458u;
label_22f458:
    // 0x22f458: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x22F458u;
    {
        const bool branch_taken_0x22f458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f458) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F460u;
}
