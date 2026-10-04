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

// Function: entry_0017ff50
// Address: 0x17ff50 - 0x17ff74
void entry_0017ff50_0x17ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ff50_0x17ff50");
#endif

    switch (ctx->pc) {
        case 0x17ff58u: goto label_17ff58;
        default: break;
    }

    ctx->pc = 0x17ff50u;

label_17ff50:
    // 0x17ff50: 0xc06c0b8  jal         func_1B02E0
    ctx->pc = 0x17FF50u;
    SET_GPR_U32(ctx, 31, 0x17FF58u);
    ctx->pc = 0x17FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF50u;
    // 0x17ff54: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B02E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B02E0u, 0x17FF50u, 0x17FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF58u;
label_17ff58:
    // 0x17ff58: 0x0  nop
    ctx->pc = 0x17ff58u;
    // NOP
    // 0x17ff5c: 0x0  nop
    ctx->pc = 0x17ff5cu;
    // NOP
    // 0x17ff60: 0x0  nop
    ctx->pc = 0x17ff60u;
    // NOP
    // 0x17ff64: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17FF64u;
    {
        const bool branch_taken_0x17ff64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff64) {
            ctx->pc = 0x17FF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ff50;
        }
    }
    ctx->pc = 0x17FF6Cu;
    // 0x17ff6c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17FF6Cu;
    {
        const bool branch_taken_0x17ff6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF6Cu;
        // 0x17ff70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff6c) {
            ctx->pc = 0x17FFC0u;
            return;
        }
    }
    ctx->pc = 0x17FF74u;
}
