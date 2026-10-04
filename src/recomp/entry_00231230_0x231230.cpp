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

// Function: entry_00231230
// Address: 0x231230 - 0x23123c
void entry_00231230_0x231230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231230_0x231230");
#endif

    switch (ctx->pc) {
        case 0x231238u: goto label_231238;
        default: break;
    }

    ctx->pc = 0x231230u;

    // 0x231230: 0xc08e5be  jal         func_2396F8
    ctx->pc = 0x231230u;
    SET_GPR_U32(ctx, 31, 0x231238u);
    ctx->pc = 0x231234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231230u;
    // 0x231234: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2396F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2396F8u, 0x231230u, 0x231238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231238u;
label_231238:
    // 0x231238: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x231238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23123cu;
}
