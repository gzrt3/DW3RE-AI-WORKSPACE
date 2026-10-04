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

// Function: entry_00157ee0
// Address: 0x157ee0 - 0x157ef0
void entry_00157ee0_0x157ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157ee0_0x157ee0");
#endif

    switch (ctx->pc) {
        case 0x157ee8u: goto label_157ee8;
        default: break;
    }

    ctx->pc = 0x157ee0u;

    // 0x157ee0: 0xc07b1ac  jal         func_1EC6B0
    ctx->pc = 0x157EE0u;
    SET_GPR_U32(ctx, 31, 0x157EE8u);
    ctx->pc = 0x157EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157EE0u;
    // 0x157ee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6B0u, 0x157EE0u, 0x157EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157EE8u;
label_157ee8:
    // 0x157ee8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x157EE8u;
    {
        const bool branch_taken_0x157ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EE8u;
        // 0x157eec: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ee8) {
            ctx->pc = 0x157F00u;
            return;
        }
    }
    ctx->pc = 0x157EF0u;
}
