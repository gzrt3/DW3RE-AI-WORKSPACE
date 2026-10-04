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

// Function: entry_00130168
// Address: 0x130168 - 0x130174
void entry_00130168_0x130168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130168_0x130168");
#endif

    ctx->pc = 0x130168u;

    // 0x130168: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x130168u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x13016c: 0xc07e7c4  jal         func_1F9F10
    ctx->pc = 0x13016Cu;
    SET_GPR_U32(ctx, 31, 0x130174u);
    ctx->pc = 0x130170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13016Cu;
    // 0x130170: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9F10u, 0x13016Cu, 0x130174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130174u;
}
