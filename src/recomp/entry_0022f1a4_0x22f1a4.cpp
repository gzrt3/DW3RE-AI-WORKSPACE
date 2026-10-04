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

// Function: entry_0022f1a4
// Address: 0x22f1a4 - 0x22f1dc
void entry_0022f1a4_0x22f1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f1a4_0x22f1a4");
#endif

    switch (ctx->pc) {
        case 0x22f1acu: goto label_22f1ac;
        case 0x22f1bcu: goto label_22f1bc;
        case 0x22f1ccu: goto label_22f1cc;
        case 0x22f1d4u: goto label_22f1d4;
        default: break;
    }

    ctx->pc = 0x22f1a4u;

    // 0x22f1a4: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F1A4u;
    SET_GPR_U32(ctx, 31, 0x22F1ACu);
    ctx->pc = 0x22F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1A4u;
    // 0x22f1a8: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F1A4u, 0x22F1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1ACu;
label_22f1ac:
    // 0x22f1ac: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x22F1ACu;
    {
        const bool branch_taken_0x22f1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1ACu;
        // 0x22f1b0: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1ac) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F1B4u;
    // 0x22f1b4: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F1B4u;
    SET_GPR_U32(ctx, 31, 0x22F1BCu);
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F1B4u, 0x22F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1BCu;
label_22f1bc:
    // 0x22f1bc: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x22F1BCu;
    {
        const bool branch_taken_0x22f1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1BCu;
        // 0x22f1c0: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1bc) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F1C4u;
    // 0x22f1c4: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F1C4u;
    SET_GPR_U32(ctx, 31, 0x22F1CCu);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F1C4u, 0x22F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1CCu;
label_22f1cc:
    // 0x22f1cc: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F1CCu;
    SET_GPR_U32(ctx, 31, 0x22F1D4u);
    ctx->pc = 0x22F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1CCu;
    // 0x22f1d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F1CCu, 0x22F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1D4u;
label_22f1d4:
    // 0x22f1d4: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x22F1D4u;
    {
        const bool branch_taken_0x22f1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1d4) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F1DCu;
}
