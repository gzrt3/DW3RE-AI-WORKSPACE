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

// Function: entry_0019f2e0
// Address: 0x19f2e0 - 0x19f2f8
void entry_0019f2e0_0x19f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f2e0_0x19f2e0");
#endif

    switch (ctx->pc) {
        case 0x19f2f4u: goto label_19f2f4;
        default: break;
    }

    ctx->pc = 0x19f2e0u;

    // 0x19f2e0: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f2e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x19f2e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F2E4u;
    {
        const bool branch_taken_0x19f2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2E4u;
        // 0x19f2e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2e4) {
            ctx->pc = 0x19F2F8u;
            return;
        }
    }
    ctx->pc = 0x19F2ECu;
    // 0x19f2ec: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x19F2ECu;
    SET_GPR_U32(ctx, 31, 0x19F2F4u);
    ctx->pc = 0x19F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F2ECu;
    // 0x19f2f0: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x19F2ECu, 0x19F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2F4u;
label_19f2f4:
    // 0x19f2f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19f2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f2f8u;
}
