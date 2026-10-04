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

// Function: entry_00202810
// Address: 0x202810 - 0x202838
void entry_00202810_0x202810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202810_0x202810");
#endif

    switch (ctx->pc) {
        case 0x202818u: goto label_202818;
        case 0x202820u: goto label_202820;
        case 0x202828u: goto label_202828;
        case 0x202830u: goto label_202830;
        default: break;
    }

    ctx->pc = 0x202810u;

    // 0x202810: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x202810u;
    SET_GPR_U32(ctx, 31, 0x202818u);
    ctx->pc = 0x1EA760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA760u, 0x202810u, 0x202818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202818u;
label_202818:
    // 0x202818: 0xc07a86c  jal         func_1EA1B0
    ctx->pc = 0x202818u;
    SET_GPR_U32(ctx, 31, 0x202820u);
    ctx->pc = 0x1EA1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA1B0u, 0x202818u, 0x202820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202820u;
label_202820:
    // 0x202820: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x202820u;
    SET_GPR_U32(ctx, 31, 0x202828u);
    ctx->pc = 0x202824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202820u;
    // 0x202824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x202820u, 0x202828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202828u;
label_202828:
    // 0x202828: 0xc060258  jal         func_180960
    ctx->pc = 0x202828u;
    SET_GPR_U32(ctx, 31, 0x202830u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x202828u, 0x202830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202830u;
label_202830:
    // 0x202830: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x202830u;
    {
        const bool branch_taken_0x202830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202830) {
            ctx->pc = 0x2027D8u;
            return;
        }
    }
    ctx->pc = 0x202838u;
}
