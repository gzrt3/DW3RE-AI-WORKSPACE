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

// Function: entry_0014da28
// Address: 0x14da28 - 0x14da38
void entry_0014da28_0x14da28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014da28_0x14da28");
#endif

    ctx->pc = 0x14da28u;

    // 0x14da28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA28u;
    {
        const bool branch_taken_0x14da28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA28u;
        // 0x14da2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da28) {
            ctx->pc = 0x14DA38u;
            return;
        }
    }
    ctx->pc = 0x14DA30u;
    // 0x14da30: 0xc07b064  jal         func_1EC190
    ctx->pc = 0x14DA30u;
    SET_GPR_U32(ctx, 31, 0x14DA38u);
    ctx->pc = 0x14DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA30u;
    // 0x14da34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC190u, 0x14DA30u, 0x14DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA38u;
}
