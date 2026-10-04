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

// Function: entry_0014728c
// Address: 0x14728c - 0x1472a8
void entry_0014728c_0x14728c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014728c_0x14728c");
#endif

    switch (ctx->pc) {
        case 0x1472a0u: goto label_1472a0;
        default: break;
    }

    ctx->pc = 0x14728cu;

    // 0x14728c: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x14728Cu;
    {
        const bool branch_taken_0x14728c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14728c) {
            ctx->pc = 0x1473A4u;
            return;
        }
    }
    ctx->pc = 0x147294u;
    // 0x147294: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x147294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x147298: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147298u;
    SET_GPR_U32(ctx, 31, 0x1472A0u);
    ctx->pc = 0x14729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147298u;
    // 0x14729c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147298u, 0x1472A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472A0u;
label_1472a0:
    // 0x1472a0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1472A0u;
    {
        const bool branch_taken_0x1472a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1472A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472A0u;
        // 0x1472a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472a0) {
            ctx->pc = 0x1473A4u;
            return;
        }
    }
    ctx->pc = 0x1472A8u;
}
