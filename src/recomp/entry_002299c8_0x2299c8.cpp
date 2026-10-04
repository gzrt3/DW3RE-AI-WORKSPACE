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

// Function: entry_002299c8
// Address: 0x2299c8 - 0x2299e0
void entry_002299c8_0x2299c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002299c8_0x2299c8");
#endif

    switch (ctx->pc) {
        case 0x2299d4u: goto label_2299d4;
        default: break;
    }

    ctx->pc = 0x2299c8u;

    // 0x2299c8: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x2299c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2299cc: 0xc08a004  jal         func_228010
    ctx->pc = 0x2299CCu;
    SET_GPR_U32(ctx, 31, 0x2299D4u);
    ctx->pc = 0x2299D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299CCu;
    // 0x2299d0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228010u, 0x2299CCu, 0x2299D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299D4u;
label_2299d4:
    // 0x2299d4: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x2299d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2299d8: 0x1020fff0  beqz        $at, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2299D8u;
    {
        const bool branch_taken_0x2299d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2299d8) {
            ctx->pc = 0x22999Cu;
            return;
        }
    }
    ctx->pc = 0x2299E0u;
}
