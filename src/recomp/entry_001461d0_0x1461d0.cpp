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

// Function: entry_001461d0
// Address: 0x1461d0 - 0x1461e0
void entry_001461d0_0x1461d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001461d0_0x1461d0");
#endif

    ctx->pc = 0x1461d0u;

    // 0x1461d0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1461D0u;
    {
        const bool branch_taken_0x1461d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1461d0) {
            ctx->pc = 0x1461E0u;
            return;
        }
    }
    ctx->pc = 0x1461D8u;
    // 0x1461d8: 0xc059e84  jal         func_167A10
    ctx->pc = 0x1461D8u;
    SET_GPR_U32(ctx, 31, 0x1461E0u);
    ctx->pc = 0x1461DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461D8u;
    // 0x1461dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167A10u, 0x1461D8u, 0x1461E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461E0u;
}
