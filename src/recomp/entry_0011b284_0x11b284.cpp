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

// Function: entry_0011b284
// Address: 0x11b284 - 0x11b298
void entry_0011b284_0x11b284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b284_0x11b284");
#endif

    switch (ctx->pc) {
        case 0x11b28cu: goto label_11b28c;
        default: break;
    }

    ctx->pc = 0x11b284u;

    // 0x11b284: 0xc071390  jal         func_1C4E40
    ctx->pc = 0x11B284u;
    SET_GPR_U32(ctx, 31, 0x11B28Cu);
    ctx->pc = 0x11B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B284u;
    // 0x11b288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E40u, 0x11B284u, 0x11B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B28Cu;
label_11b28c:
    // 0x11b28c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b290: 0xc0713a8  jal         func_1C4EA0
    ctx->pc = 0x11B290u;
    SET_GPR_U32(ctx, 31, 0x11B298u);
    ctx->pc = 0x11B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B290u;
    // 0x11b294: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EA0u, 0x11B290u, 0x11B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B298u;
}
