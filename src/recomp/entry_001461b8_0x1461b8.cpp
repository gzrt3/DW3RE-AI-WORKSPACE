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

// Function: entry_001461b8
// Address: 0x1461b8 - 0x1461d0
void entry_001461b8_0x1461b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001461b8_0x1461b8");
#endif

    switch (ctx->pc) {
        case 0x1461c0u: goto label_1461c0;
        case 0x1461c8u: goto label_1461c8;
        default: break;
    }

    ctx->pc = 0x1461b8u;

    // 0x1461b8: 0xc059e84  jal         func_167A10
    ctx->pc = 0x1461B8u;
    SET_GPR_U32(ctx, 31, 0x1461C0u);
    ctx->pc = 0x1461BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461B8u;
    // 0x1461bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167A10u, 0x1461B8u, 0x1461C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461C0u;
label_1461c0:
    // 0x1461c0: 0xc059e84  jal         func_167A10
    ctx->pc = 0x1461C0u;
    SET_GPR_U32(ctx, 31, 0x1461C8u);
    ctx->pc = 0x1461C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461C0u;
    // 0x1461c4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167A10u, 0x1461C0u, 0x1461C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461C8u;
label_1461c8:
    // 0x1461c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1461C8u;
    {
        const bool branch_taken_0x1461c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1461c8) {
            ctx->pc = 0x1461E0u;
            return;
        }
    }
    ctx->pc = 0x1461D0u;
}
