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

// Function: entry_0015817c
// Address: 0x15817c - 0x1581a0
void entry_0015817c_0x15817c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015817c_0x15817c");
#endif

    switch (ctx->pc) {
        case 0x158190u: goto label_158190;
        case 0x15819cu: goto label_15819c;
        default: break;
    }

    ctx->pc = 0x15817cu;

    // 0x15817c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x15817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x158180: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x158180u;
    {
        const bool branch_taken_0x158180 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x158180) {
            ctx->pc = 0x1581A0u;
            return;
        }
    }
    ctx->pc = 0x158188u;
    // 0x158188: 0xc084900  jal         func_212400
    ctx->pc = 0x158188u;
    SET_GPR_U32(ctx, 31, 0x158190u);
    ctx->pc = 0x212400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212400u, 0x158188u, 0x158190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158190u;
label_158190:
    // 0x158190: 0xaf82863c  sw          $v0, -0x79C4($gp)
    ctx->pc = 0x158190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
    // 0x158194: 0xc051420  jal         func_145080
    ctx->pc = 0x158194u;
    SET_GPR_U32(ctx, 31, 0x15819Cu);
    ctx->pc = 0x158198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158194u;
    // 0x158198: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145080u, 0x158194u, 0x15819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15819Cu;
label_15819c:
    // 0x15819c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15819cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1581a0u;
}
