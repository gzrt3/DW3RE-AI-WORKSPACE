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

// Function: entry_0022f430
// Address: 0x22f430 - 0x22f440
void entry_0022f430_0x22f430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f430_0x22f430");
#endif

    switch (ctx->pc) {
        case 0x22f438u: goto label_22f438;
        default: break;
    }

    ctx->pc = 0x22f430u;

    // 0x22f430: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F430u;
    SET_GPR_U32(ctx, 31, 0x22F438u);
    ctx->pc = 0x22F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F430u;
    // 0x22f434: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F430u, 0x22F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F438u;
label_22f438:
    // 0x22f438: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x22F438u;
    {
        const bool branch_taken_0x22f438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f438) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F440u;
}
