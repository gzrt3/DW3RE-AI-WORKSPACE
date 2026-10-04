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

// Function: entry_001f81ac
// Address: 0x1f81ac - 0x1f81c8
void entry_001f81ac_0x1f81ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f81ac_0x1f81ac");
#endif

    switch (ctx->pc) {
        case 0x1f81b4u: goto label_1f81b4;
        case 0x1f81c0u: goto label_1f81c0;
        default: break;
    }

    ctx->pc = 0x1f81acu;

    // 0x1f81ac: 0xc04f198  jal         func_13C660
    ctx->pc = 0x1F81ACu;
    SET_GPR_U32(ctx, 31, 0x1F81B4u);
    ctx->pc = 0x1F81B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81ACu;
    // 0x1f81b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C660u, 0x1F81ACu, 0x1F81B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81B4u;
label_1f81b4:
    // 0x1f81b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f81b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f81b8: 0xc04f198  jal         func_13C660
    ctx->pc = 0x1F81B8u;
    SET_GPR_U32(ctx, 31, 0x1F81C0u);
    ctx->pc = 0x1F81BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81B8u;
    // 0x1f81bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C660u, 0x1F81B8u, 0x1F81C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81C0u;
label_1f81c0:
    // 0x1f81c0: 0xc04f208  jal         func_13C820
    ctx->pc = 0x1F81C0u;
    SET_GPR_U32(ctx, 31, 0x1F81C8u);
    ctx->pc = 0x1F81C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81C0u;
    // 0x1f81c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C820u, 0x1F81C0u, 0x1F81C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81C8u;
}
