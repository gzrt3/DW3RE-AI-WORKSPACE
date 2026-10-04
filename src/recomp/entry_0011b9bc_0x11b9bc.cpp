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

// Function: entry_0011b9bc
// Address: 0x11b9bc - 0x11b9d0
void entry_0011b9bc_0x11b9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b9bc_0x11b9bc");
#endif

    switch (ctx->pc) {
        case 0x11b9c4u: goto label_11b9c4;
        default: break;
    }

    ctx->pc = 0x11b9bcu;

    // 0x11b9bc: 0xc071390  jal         func_1C4E40
    ctx->pc = 0x11B9BCu;
    SET_GPR_U32(ctx, 31, 0x11B9C4u);
    ctx->pc = 0x11B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9BCu;
    // 0x11b9c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E40u, 0x11B9BCu, 0x11B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9C4u;
label_11b9c4:
    // 0x11b9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9c8: 0xc0713a8  jal         func_1C4EA0
    ctx->pc = 0x11B9C8u;
    SET_GPR_U32(ctx, 31, 0x11B9D0u);
    ctx->pc = 0x11B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9C8u;
    // 0x11b9cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EA0u, 0x11B9C8u, 0x11B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9D0u;
}
