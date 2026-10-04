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

// Function: entry_00233a18
// Address: 0x233a18 - 0x233a40
void entry_00233a18_0x233a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233a18_0x233a18");
#endif

    switch (ctx->pc) {
        case 0x233a20u: goto label_233a20;
        case 0x233a30u: goto label_233a30;
        default: break;
    }

    ctx->pc = 0x233a18u;

    // 0x233a18: 0xc068ad6  jal         func_1A2B58
    ctx->pc = 0x233A18u;
    SET_GPR_U32(ctx, 31, 0x233A20u);
    ctx->pc = 0x233A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A18u;
    // 0x233a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2B58u, 0x233A18u, 0x233A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A20u;
label_233a20:
    // 0x233a20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233A20u;
    {
        const bool branch_taken_0x233a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A20u;
        // 0x233a24: 0x8f8282d0  lw          $v0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a20) {
            ctx->pc = 0x233A40u;
            return;
        }
    }
    ctx->pc = 0x233A28u;
    // 0x233a28: 0xc08cd34  jal         func_2334D0
    ctx->pc = 0x233A28u;
    SET_GPR_U32(ctx, 31, 0x233A30u);
    ctx->pc = 0x233A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A28u;
    // 0x233a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334D0u, 0x233A28u, 0x233A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A30u;
label_233a30:
    // 0x233a30: 0x5452ff88  bnel        $v0, $s2, . + 4 + (-0x78 << 2)
    ctx->pc = 0x233A30u;
    {
        const bool branch_taken_0x233a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x233a30) {
            ctx->pc = 0x233A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233A30u;
            // 0x233a34: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233854u;
            return;
        }
    }
    ctx->pc = 0x233A38u;
    // 0x233a38: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x233a38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x233a3c: 0x8f8282d0  lw          $v0, -0x7D30($gp)
    ctx->pc = 0x233a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    ctx->pc = 0x233a40u;
}
