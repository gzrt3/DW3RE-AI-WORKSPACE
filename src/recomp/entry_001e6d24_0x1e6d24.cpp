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

// Function: entry_001e6d24
// Address: 0x1e6d24 - 0x1e6d50
void entry_001e6d24_0x1e6d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6d24_0x1e6d24");
#endif

    switch (ctx->pc) {
        case 0x1e6d48u: goto label_1e6d48;
        default: break;
    }

    ctx->pc = 0x1e6d24u;

    // 0x1e6d24: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1e6d28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6d2c: 0x24423110  addiu       $v0, $v0, 0x3110
    ctx->pc = 0x1e6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12560));
    // 0x1e6d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e6d34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6d38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6D38u;
    {
        const bool branch_taken_0x1e6d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6d38) {
            ctx->pc = 0x1E6D50u;
            return;
        }
    }
    ctx->pc = 0x1E6D40u;
    // 0x1e6d40: 0xc070e2c  jal         func_1C38B0
    ctx->pc = 0x1E6D40u;
    SET_GPR_U32(ctx, 31, 0x1E6D48u);
    ctx->pc = 0x1E6D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D40u;
    // 0x1e6d44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x1E6D40u, 0x1E6D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D48u;
label_1e6d48:
    // 0x1e6d48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6D48u;
    {
        const bool branch_taken_0x1e6d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D48u;
        // 0x1e6d4c: 0x83828dc8  lb          $v0, -0x7238($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d48) {
            ctx->pc = 0x1E6D60u;
            return;
        }
    }
    ctx->pc = 0x1E6D50u;
}
