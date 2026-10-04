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

// Function: entry_00152e3c
// Address: 0x152e3c - 0x152e50
void entry_00152e3c_0x152e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152e3c_0x152e3c");
#endif

    switch (ctx->pc) {
        case 0x152e44u: goto label_152e44;
        default: break;
    }

    ctx->pc = 0x152e3cu;

    // 0x152e3c: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x152E3Cu;
    SET_GPR_U32(ctx, 31, 0x152E44u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152E3Cu, 0x152E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E44u;
label_152e44:
    // 0x152e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x152e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e48: 0xc043884  jal         func_10E210
    ctx->pc = 0x152E48u;
    SET_GPR_U32(ctx, 31, 0x152E50u);
    ctx->pc = 0x152E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E48u;
    // 0x152e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E210u, 0x152E48u, 0x152E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E50u;
}
