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

// Function: entry_001acb14
// Address: 0x1acb14 - 0x1acb34
void entry_001acb14_0x1acb14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acb14_0x1acb14");
#endif

    switch (ctx->pc) {
        case 0x1acb2cu: goto label_1acb2c;
        default: break;
    }

    ctx->pc = 0x1acb14u;

    // 0x1acb14: 0x2c420051  sltiu       $v0, $v0, 0x51
    ctx->pc = 0x1acb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
    // 0x1acb18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ACB18u;
    {
        const bool branch_taken_0x1acb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB18u;
        // 0x1acb1c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb18) {
            ctx->pc = 0x1ACB34u;
            return;
        }
    }
    ctx->pc = 0x1ACB20u;
    // 0x1acb20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1acb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb24: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1ACB24u;
    SET_GPR_U32(ctx, 31, 0x1ACB2Cu);
    ctx->pc = 0x1ACB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB24u;
    // 0x1acb28: 0x2484a750  addiu       $a0, $a0, -0x58B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1ACB24u, 0x1ACB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB2Cu;
label_1acb2c:
    // 0x1acb2c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1ACB2Cu;
    {
        const bool branch_taken_0x1acb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB2Cu;
        // 0x1acb30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb2c) {
            ctx->pc = 0x1ACBBCu;
            return;
        }
    }
    ctx->pc = 0x1ACB34u;
}
