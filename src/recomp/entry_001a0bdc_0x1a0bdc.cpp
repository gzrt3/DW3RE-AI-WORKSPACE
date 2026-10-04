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

// Function: entry_001a0bdc
// Address: 0x1a0bdc - 0x1a0be8
void entry_001a0bdc_0x1a0bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0bdc_0x1a0bdc");
#endif

    switch (ctx->pc) {
        case 0x1a0be4u: goto label_1a0be4;
        default: break;
    }

    ctx->pc = 0x1a0bdcu;

    // 0x1a0bdc: 0xc0681b6  jal         func_1A06D8
    ctx->pc = 0x1A0BDCu;
    SET_GPR_U32(ctx, 31, 0x1A0BE4u);
    ctx->pc = 0x1A0BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BDCu;
    // 0x1a0be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A06D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A06D8u, 0x1A0BDCu, 0x1A0BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0BE4u;
label_1a0be4:
    // 0x1a0be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a0be8u;
}
