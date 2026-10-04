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

// Function: entry_00134d3c
// Address: 0x134d3c - 0x134d50
void entry_00134d3c_0x134d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134d3c_0x134d3c");
#endif

    switch (ctx->pc) {
        case 0x134d48u: goto label_134d48;
        default: break;
    }

    ctx->pc = 0x134d3cu;

    // 0x134d3c: 0x0  nop
    ctx->pc = 0x134d3cu;
    // NOP
    // 0x134d40: 0xc04c614  jal         func_131850
    ctx->pc = 0x134D40u;
    SET_GPR_U32(ctx, 31, 0x134D48u);
    ctx->pc = 0x134D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D40u;
    // 0x134d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131850u, 0x134D40u, 0x134D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D48u;
label_134d48:
    // 0x134d48: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x134D48u;
    {
        const bool branch_taken_0x134d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D48u;
        // 0x134d4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d48) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134D50u;
}
