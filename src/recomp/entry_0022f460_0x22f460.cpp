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

// Function: entry_0022f460
// Address: 0x22f460 - 0x22f490
void entry_0022f460_0x22f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f460_0x22f460");
#endif

    switch (ctx->pc) {
        case 0x22f468u: goto label_22f468;
        case 0x22f470u: goto label_22f470;
        case 0x22f480u: goto label_22f480;
        case 0x22f488u: goto label_22f488;
        default: break;
    }

    ctx->pc = 0x22f460u;

    // 0x22f460: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F460u;
    SET_GPR_U32(ctx, 31, 0x22F468u);
    ctx->pc = 0x22F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F460u;
    // 0x22f464: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F460u, 0x22F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F468u;
label_22f468:
    // 0x22f468: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x22F468u;
    SET_GPR_U32(ctx, 31, 0x22F470u);
    ctx->pc = 0x22F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F468u;
    // 0x22f46c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x22F468u, 0x22F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F470u;
label_22f470:
    // 0x22f470: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22F470u;
    {
        const bool branch_taken_0x22f470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F470u;
        // 0x22f474: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f470) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F478u;
    // 0x22f478: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F478u;
    SET_GPR_U32(ctx, 31, 0x22F480u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F478u, 0x22F480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F480u;
label_22f480:
    // 0x22f480: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F480u;
    SET_GPR_U32(ctx, 31, 0x22F488u);
    ctx->pc = 0x22F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F480u;
    // 0x22f484: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F480u, 0x22F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F488u;
label_22f488:
    // 0x22f488: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22F488u;
    {
        const bool branch_taken_0x22f488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f488) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F490u;
}
