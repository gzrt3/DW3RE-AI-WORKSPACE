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

// Function: entry_0019fa10
// Address: 0x19fa10 - 0x19fa20
void entry_0019fa10_0x19fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fa10_0x19fa10");
#endif

    switch (ctx->pc) {
        case 0x19fa18u: goto label_19fa18;
        default: break;
    }

    ctx->pc = 0x19fa10u;

    // 0x19fa10: 0xc068d86  jal         func_1A3618
    ctx->pc = 0x19FA10u;
    SET_GPR_U32(ctx, 31, 0x19FA18u);
    ctx->pc = 0x19FA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA10u;
    // 0x19fa14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3618u, 0x19FA10u, 0x19FA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA18u;
label_19fa18:
    // 0x19fa18: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x19FA18u;
    {
        const bool branch_taken_0x19fa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fa18) {
            ctx->pc = 0x19F9C0u;
            return;
        }
    }
    ctx->pc = 0x19FA20u;
}
