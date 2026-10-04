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

// Function: entry_001a20d0
// Address: 0x1a20d0 - 0x1a20e8
void entry_001a20d0_0x1a20d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a20d0_0x1a20d0");
#endif

    switch (ctx->pc) {
        case 0x1a20d8u: goto label_1a20d8;
        default: break;
    }

    ctx->pc = 0x1a20d0u;

label_1a20d0:
    // 0x1a20d0: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A20D0u;
    SET_GPR_U32(ctx, 31, 0x1A20D8u);
    ctx->pc = 0x1A20D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20D0u;
    // 0x1a20d4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A20D0u, 0x1A20D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20D8u;
label_1a20d8:
    // 0x1a20d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1a20d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1a20dc: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x1a20dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1a20e0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A20E0u;
    {
        const bool branch_taken_0x1a20e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20E0u;
        // 0x1a20e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a20e0) {
            ctx->pc = 0x1A20D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a20d0;
        }
    }
    ctx->pc = 0x1A20E8u;
}
