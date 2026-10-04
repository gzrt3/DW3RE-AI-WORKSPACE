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

// Function: entry_001a02b0
// Address: 0x1a02b0 - 0x1a02bc
void entry_001a02b0_0x1a02b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a02b0_0x1a02b0");
#endif

    ctx->pc = 0x1a02b0u;

    // 0x1a02b0: 0x24a5a220  addiu       $a1, $a1, -0x5DE0
    ctx->pc = 0x1a02b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943264));
    // 0x1a02b4: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A02B4u;
    SET_GPR_U32(ctx, 31, 0x1A02BCu);
    ctx->pc = 0x1A02B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A02B4u;
    // 0x1a02b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A02B4u, 0x1A02BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02BCu;
}
