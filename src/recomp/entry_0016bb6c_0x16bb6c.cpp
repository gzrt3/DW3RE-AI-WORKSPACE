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

// Function: entry_0016bb6c
// Address: 0x16bb6c - 0x16bb88
void entry_0016bb6c_0x16bb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bb6c_0x16bb6c");
#endif

    switch (ctx->pc) {
        case 0x16bb74u: goto label_16bb74;
        default: break;
    }

    ctx->pc = 0x16bb6cu;

    // 0x16bb6c: 0xc08d7f6  jal         func_235FD8
    ctx->pc = 0x16BB6Cu;
    SET_GPR_U32(ctx, 31, 0x16BB74u);
    ctx->pc = 0x235FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235FD8u, 0x16BB6Cu, 0x16BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB74u;
label_16bb74:
    // 0x16bb74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bb78: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BB78u;
    {
        const bool branch_taken_0x16bb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bb78) {
            ctx->pc = 0x16BB88u;
            return;
        }
    }
    ctx->pc = 0x16BB80u;
    // 0x16bb80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16BB80u;
    {
        const bool branch_taken_0x16bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB80u;
        // 0x16bb84: 0xaf808728  sw          $zero, -0x78D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb80) {
            ctx->pc = 0x16BBA0u;
            return;
        }
    }
    ctx->pc = 0x16BB88u;
}
