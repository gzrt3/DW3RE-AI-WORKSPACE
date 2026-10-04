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

// Function: entry_0023f708
// Address: 0x23f708 - 0x23f730
void entry_0023f708_0x23f708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f708_0x23f708");
#endif

    switch (ctx->pc) {
        case 0x23f710u: goto label_23f710;
        case 0x23f718u: goto label_23f718;
        case 0x23f720u: goto label_23f720;
        case 0x23f728u: goto label_23f728;
        default: break;
    }

    ctx->pc = 0x23f708u;

    // 0x23f708: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x23F708u;
    SET_GPR_U32(ctx, 31, 0x23F710u);
    ctx->pc = 0x1EA760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA760u, 0x23F708u, 0x23F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F710u;
label_23f710:
    // 0x23f710: 0xc07a86c  jal         func_1EA1B0
    ctx->pc = 0x23F710u;
    SET_GPR_U32(ctx, 31, 0x23F718u);
    ctx->pc = 0x1EA1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA1B0u, 0x23F710u, 0x23F718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F718u;
label_23f718:
    // 0x23f718: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x23F718u;
    SET_GPR_U32(ctx, 31, 0x23F720u);
    ctx->pc = 0x23F71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F718u;
    // 0x23f71c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x23F718u, 0x23F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F720u;
label_23f720:
    // 0x23f720: 0xc060258  jal         func_180960
    ctx->pc = 0x23F720u;
    SET_GPR_U32(ctx, 31, 0x23F728u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F720u, 0x23F728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F728u;
label_23f728:
    // 0x23f728: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x23F728u;
    {
        const bool branch_taken_0x23f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f728) {
            ctx->pc = 0x23F6C0u;
            return;
        }
    }
    ctx->pc = 0x23F730u;
}
