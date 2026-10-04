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

// Function: entry_00202838
// Address: 0x202838 - 0x202854
void entry_00202838_0x202838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202838_0x202838");
#endif

    switch (ctx->pc) {
        case 0x202840u: goto label_202840;
        case 0x202848u: goto label_202848;
        case 0x202850u: goto label_202850;
        default: break;
    }

    ctx->pc = 0x202838u;

    // 0x202838: 0xc07ab18  jal         func_1EAC60
    ctx->pc = 0x202838u;
    SET_GPR_U32(ctx, 31, 0x202840u);
    ctx->pc = 0x20283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202838u;
    // 0x20283c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC60u, 0x202838u, 0x202840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202840u;
label_202840:
    // 0x202840: 0xc060258  jal         func_180960
    ctx->pc = 0x202840u;
    SET_GPR_U32(ctx, 31, 0x202848u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x202840u, 0x202848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202848u;
label_202848:
    // 0x202848: 0xc060258  jal         func_180960
    ctx->pc = 0x202848u;
    SET_GPR_U32(ctx, 31, 0x202850u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x202848u, 0x202850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202850u;
label_202850:
    // 0x202850: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x202850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202854u;
}
