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

// Function: entry_001ee230
// Address: 0x1ee230 - 0x1ee240
void entry_001ee230_0x1ee230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee230_0x1ee230");
#endif

    switch (ctx->pc) {
        case 0x1ee238u: goto label_1ee238;
        default: break;
    }

    ctx->pc = 0x1ee230u;

    // 0x1ee230: 0xc07ab18  jal         func_1EAC60
    ctx->pc = 0x1EE230u;
    SET_GPR_U32(ctx, 31, 0x1EE238u);
    ctx->pc = 0x1EE234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE230u;
    // 0x1ee234: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC60u, 0x1EE230u, 0x1EE238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE238u;
label_1ee238:
    // 0x1ee238: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE238u;
    {
        const bool branch_taken_0x1ee238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee238) {
            ctx->pc = 0x1EE250u;
            return;
        }
    }
    ctx->pc = 0x1EE240u;
}
