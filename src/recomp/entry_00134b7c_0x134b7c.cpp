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

// Function: entry_00134b7c
// Address: 0x134b7c - 0x134b90
void entry_00134b7c_0x134b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134b7c_0x134b7c");
#endif

    switch (ctx->pc) {
        case 0x134b88u: goto label_134b88;
        default: break;
    }

    ctx->pc = 0x134b7cu;

    // 0x134b7c: 0x0  nop
    ctx->pc = 0x134b7cu;
    // NOP
    // 0x134b80: 0xc059e78  jal         func_1679E0
    ctx->pc = 0x134B80u;
    SET_GPR_U32(ctx, 31, 0x134B88u);
    ctx->pc = 0x134B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B80u;
    // 0x134b84: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1679E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1679E0u, 0x134B80u, 0x134B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B88u;
label_134b88:
    // 0x134b88: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x134B88u;
    {
        const bool branch_taken_0x134b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b88) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134B90u;
}
