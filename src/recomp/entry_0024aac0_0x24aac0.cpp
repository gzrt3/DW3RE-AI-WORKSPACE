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

// Function: entry_0024aac0
// Address: 0x24aac0 - 0x24aadc
void entry_0024aac0_0x24aac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024aac0_0x24aac0");
#endif

    switch (ctx->pc) {
        case 0x24aad8u: goto label_24aad8;
        default: break;
    }

    ctx->pc = 0x24aac0u;

    // 0x24aac0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24aac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24aac4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x24aac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24aac8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x24AAC8u;
    {
        const bool branch_taken_0x24aac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAC8u;
        // 0x24aacc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aac8) {
            ctx->pc = 0x24AA94u;
            return;
        }
    }
    ctx->pc = 0x24AAD0u;
    // 0x24aad0: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x24AAD0u;
    SET_GPR_U32(ctx, 31, 0x24AAD8u);
    ctx->pc = 0x24AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AAD0u;
    // 0x24aad4: 0x8f8492fc  lw          $a0, -0x6D04($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x24AAD0u, 0x24AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AAD8u;
label_24aad8:
    // 0x24aad8: 0xaf8092fc  sw          $zero, -0x6D04($gp)
    ctx->pc = 0x24aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939388), GPR_U32(ctx, 0));
    ctx->pc = 0x24aadcu;
}
