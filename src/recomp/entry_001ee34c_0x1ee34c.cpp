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

// Function: entry_001ee34c
// Address: 0x1ee34c - 0x1ee36c
void entry_001ee34c_0x1ee34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee34c_0x1ee34c");
#endif

    switch (ctx->pc) {
        case 0x1ee364u: goto label_1ee364;
        default: break;
    }

    ctx->pc = 0x1ee34cu;

    // 0x1ee34c: 0x0  nop
    ctx->pc = 0x1ee34cu;
    // NOP
    // 0x1ee350: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ee350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ee354: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EE354u;
    {
        const bool branch_taken_0x1ee354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE354u;
        // 0x1ee358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee354) {
            ctx->pc = 0x1EE380u;
            return;
        }
    }
    ctx->pc = 0x1EE35Cu;
    // 0x1ee35c: 0xc07ab18  jal         func_1EAC60
    ctx->pc = 0x1EE35Cu;
    SET_GPR_U32(ctx, 31, 0x1EE364u);
    ctx->pc = 0x1EAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC60u, 0x1EE35Cu, 0x1EE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE364u;
label_1ee364:
    // 0x1ee364: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE364u;
    {
        const bool branch_taken_0x1ee364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee364) {
            ctx->pc = 0x1EE380u;
            return;
        }
    }
    ctx->pc = 0x1EE36Cu;
}
