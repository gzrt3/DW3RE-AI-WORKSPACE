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

// Function: entry_0023f90c
// Address: 0x23f90c - 0x23f92c
void entry_0023f90c_0x23f90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f90c_0x23f90c");
#endif

    switch (ctx->pc) {
        case 0x23f918u: goto label_23f918;
        default: break;
    }

    ctx->pc = 0x23f90cu;

    // 0x23f90c: 0x0  nop
    ctx->pc = 0x23f90cu;
    // NOP
    // 0x23f910: 0xc06c03a  jal         func_1B00E8
    ctx->pc = 0x23F910u;
    SET_GPR_U32(ctx, 31, 0x23F918u);
    ctx->pc = 0x23F914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F910u;
    // 0x23f914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B00E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B00E8u, 0x23F910u, 0x23F918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F918u;
label_23f918:
    // 0x23f918: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f91c: 0x1443006c  bne         $v0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x23F91Cu;
    {
        const bool branch_taken_0x23f91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f91c) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23F924u;
    // 0x23f924: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x23F924u;
    {
        const bool branch_taken_0x23f924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F924u;
        // 0x23f928: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f924) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23F92Cu;
}
