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

// Function: entry_00230df0
// Address: 0x230df0 - 0x230e38
void entry_00230df0_0x230df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230df0_0x230df0");
#endif

    switch (ctx->pc) {
        case 0x230df8u: goto label_230df8;
        case 0x230e2cu: goto label_230e2c;
        default: break;
    }

    ctx->pc = 0x230df0u;

    // 0x230df0: 0xc08c768  jal         func_231DA0
    ctx->pc = 0x230DF0u;
    SET_GPR_U32(ctx, 31, 0x230DF8u);
    ctx->pc = 0x230DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DF0u;
    // 0x230df4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231DA0u, 0x230DF0u, 0x230DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DF8u;
label_230df8:
    // 0x230df8: 0x1a600042  blez        $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x230DF8u;
    {
        const bool branch_taken_0x230df8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x230DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DF8u;
        // 0x230dfc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230df8) {
            ctx->pc = 0x230F04u;
            return;
        }
    }
    ctx->pc = 0x230E00u;
    // 0x230e00: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x230e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x230e04: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x230e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x230e08: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x230E08u;
    {
        const bool branch_taken_0x230e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E08u;
        // 0x230e0c: 0x8f8382d8  lw          $v1, -0x7D28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e08) {
            ctx->pc = 0x230F04u;
            return;
        }
    }
    ctx->pc = 0x230E10u;
    // 0x230e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230e14: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230E14u;
    {
        const bool branch_taken_0x230e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x230E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E14u;
        // 0x230e18: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e14) {
            ctx->pc = 0x230E38u;
            return;
        }
    }
    ctx->pc = 0x230E1Cu;
    // 0x230e1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x230e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230e20: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x230e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x230e24: 0xc08dac2  jal         func_236B08
    ctx->pc = 0x230E24u;
    SET_GPR_U32(ctx, 31, 0x230E2Cu);
    ctx->pc = 0x230E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E24u;
    // 0x230e28: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B08u, 0x230E24u, 0x230E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E2Cu;
label_230e2c:
    // 0x230e2c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x230E2Cu;
    {
        const bool branch_taken_0x230e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E2Cu;
        // 0x230e30: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e2c) {
            ctx->pc = 0x230EF0u;
            return;
        }
    }
    ctx->pc = 0x230E34u;
    // 0x230e34: 0x0  nop
    ctx->pc = 0x230e34u;
    // NOP
    ctx->pc = 0x230e38u;
}
