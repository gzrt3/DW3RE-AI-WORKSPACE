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

// Function: entry_001a0d60
// Address: 0x1a0d60 - 0x1a0d6c
void entry_001a0d60_0x1a0d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0d60_0x1a0d60");
#endif

    switch (ctx->pc) {
        case 0x1a0d68u: goto label_1a0d68;
        default: break;
    }

    ctx->pc = 0x1a0d60u;

    // 0x1a0d60: 0xc0681b6  jal         func_1A06D8
    ctx->pc = 0x1A0D60u;
    SET_GPR_U32(ctx, 31, 0x1A0D68u);
    ctx->pc = 0x1A0D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D60u;
    // 0x1a0d64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A06D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A06D8u, 0x1A0D60u, 0x1A0D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D68u;
label_1a0d68:
    // 0x1a0d68: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->pc = 0x1a0d6cu;
}
