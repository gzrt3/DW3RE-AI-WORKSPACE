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

// Function: entry_00147224
// Address: 0x147224 - 0x147240
void entry_00147224_0x147224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147224_0x147224");
#endif

    switch (ctx->pc) {
        case 0x147238u: goto label_147238;
        default: break;
    }

    ctx->pc = 0x147224u;

    // 0x147224: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x147224u;
    {
        const bool branch_taken_0x147224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147224u;
        // 0x147228: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147224) {
            ctx->pc = 0x147240u;
            return;
        }
    }
    ctx->pc = 0x14722Cu;
    // 0x14722c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14722cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x147230: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x147230u;
    SET_GPR_U32(ctx, 31, 0x147238u);
    ctx->pc = 0x147234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147230u;
    // 0x147234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x147230u, 0x147238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147238u;
label_147238:
    // 0x147238: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x147238u;
    {
        const bool branch_taken_0x147238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147238u;
        // 0x14723c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147238) {
            ctx->pc = 0x1473A4u;
            return;
        }
    }
    ctx->pc = 0x147240u;
}
