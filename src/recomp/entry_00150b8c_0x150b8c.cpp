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

// Function: entry_00150b8c
// Address: 0x150b8c - 0x150b9c
void entry_00150b8c_0x150b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150b8c_0x150b8c");
#endif

    switch (ctx->pc) {
        case 0x150b94u: goto label_150b94;
        default: break;
    }

    ctx->pc = 0x150b8cu;

    // 0x150b8c: 0xc0452cc  jal         func_114B30
    ctx->pc = 0x150B8Cu;
    SET_GPR_U32(ctx, 31, 0x150B94u);
    ctx->pc = 0x150B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B8Cu;
    // 0x150b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x150B8Cu, 0x150B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B94u;
label_150b94:
    // 0x150b94: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x150b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
    // 0x150b98: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x150b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    ctx->pc = 0x150b9cu;
}
