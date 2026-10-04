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

// Function: entry_0016d634
// Address: 0x16d634 - 0x16d660
void entry_0016d634_0x16d634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d634_0x16d634");
#endif

    switch (ctx->pc) {
        case 0x16d63cu: goto label_16d63c;
        default: break;
    }

    ctx->pc = 0x16d634u;

    // 0x16d634: 0xc05ae90  jal         func_16BA40
    ctx->pc = 0x16D634u;
    SET_GPR_U32(ctx, 31, 0x16D63Cu);
    ctx->pc = 0x16BA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BA40u, 0x16D634u, 0x16D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D63Cu;
label_16d63c:
    // 0x16d63c: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d640: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16D640u;
    {
        const bool branch_taken_0x16d640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D640u;
        // 0x16d644: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d640) {
            ctx->pc = 0x16D68Cu;
            return;
        }
    }
    ctx->pc = 0x16D648u;
    // 0x16d648: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16D648u;
    {
        const bool branch_taken_0x16d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d648) {
            ctx->pc = 0x16D660u;
            return;
        }
    }
    ctx->pc = 0x16D650u;
    // 0x16d650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d654: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x16d654u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x16d658: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16D658u;
    {
        const bool branch_taken_0x16d658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d658) {
            ctx->pc = 0x16D688u;
            return;
        }
    }
    ctx->pc = 0x16D660u;
}
