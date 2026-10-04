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

// Function: entry_0023fa08
// Address: 0x23fa08 - 0x23fa44
void entry_0023fa08_0x23fa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fa08_0x23fa08");
#endif

    switch (ctx->pc) {
        case 0x23fa10u: goto label_23fa10;
        case 0x23fa34u: goto label_23fa34;
        case 0x23fa3cu: goto label_23fa3c;
        default: break;
    }

    ctx->pc = 0x23fa08u;

    // 0x23fa08: 0xc06be58  jal         func_1AF960
    ctx->pc = 0x23FA08u;
    SET_GPR_U32(ctx, 31, 0x23FA10u);
    ctx->pc = 0x23FA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA08u;
    // 0x23fa0c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF960u, 0x23FA08u, 0x23FA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA10u;
label_23fa10:
    // 0x23fa10: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23FA10u;
    {
        const bool branch_taken_0x23fa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA10u;
        // 0x23fa14: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa10) {
            ctx->pc = 0x23FA44u;
            return;
        }
    }
    ctx->pc = 0x23FA18u;
    // 0x23fa18: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x23fa18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x23fa1c: 0x8c26c96c  lw          $a2, -0x3694($at)
    ctx->pc = 0x23fa1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953324)));
    // 0x23fa20: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x23fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23fa24: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23fa24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x23fa28: 0x8c27c97c  lw          $a3, -0x3684($at)
    ctx->pc = 0x23fa28u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x29C97Cu));
    // 0x23fa2c: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x23FA2Cu;
    SET_GPR_U32(ctx, 31, 0x23FA34u);
    ctx->pc = 0x23FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA2Cu;
    // 0x23fa30: 0x24a5ea28  addiu       $a1, $a1, -0x15D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x23FA2Cu, 0x23FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA34u;
label_23fa34:
    // 0x23fa34: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x23FA34u;
    SET_GPR_U32(ctx, 31, 0x23FA3Cu);
    ctx->pc = 0x23FA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA34u;
    // 0x23fa38: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x23FA34u, 0x23FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA3Cu;
label_23fa3c:
    // 0x23fa3c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x23FA3Cu;
    {
        const bool branch_taken_0x23fa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA3Cu;
        // 0x23fa40: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa3c) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23FA44u;
}
