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

// Function: entry_00167b80
// Address: 0x167b80 - 0x167bb4
void entry_00167b80_0x167b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167b80_0x167b80");
#endif

    switch (ctx->pc) {
        case 0x167b9cu: goto label_167b9c;
        default: break;
    }

    ctx->pc = 0x167b80u;

    // 0x167b80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x167b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x167b84: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x167b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x167b88: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x167B88u;
    {
        const bool branch_taken_0x167b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B88u;
        // 0x167b8c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b88) {
            ctx->pc = 0x167B64u;
            return;
        }
    }
    ctx->pc = 0x167B90u;
    // 0x167b90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b94: 0xc06468c  jal         func_191A30
    ctx->pc = 0x167B94u;
    SET_GPR_U32(ctx, 31, 0x167B9Cu);
    ctx->pc = 0x167B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B94u;
    // 0x167b98: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A30u, 0x167B94u, 0x167B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B9Cu;
label_167b9c:
    // 0x167b9c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x167b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x167ba0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x167ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x167ba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167BA4u;
    {
        const bool branch_taken_0x167ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BA4u;
        // 0x167ba8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ba4) {
            ctx->pc = 0x167BB4u;
            return;
        }
    }
    ctx->pc = 0x167BACu;
    // 0x167bac: 0xc06468c  jal         func_191A30
    ctx->pc = 0x167BACu;
    SET_GPR_U32(ctx, 31, 0x167BB4u);
    ctx->pc = 0x167BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BACu;
    // 0x167bb0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A30u, 0x167BACu, 0x167BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BB4u;
}
