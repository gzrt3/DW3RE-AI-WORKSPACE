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

// Function: entry_001afd7c
// Address: 0x1afd7c - 0x1afdf0
void entry_001afd7c_0x1afd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afd7c_0x1afd7c");
#endif

    switch (ctx->pc) {
        case 0x1afd80u: goto label_1afd80;
        case 0x1afd94u: goto label_1afd94;
        case 0x1afdb8u: goto label_1afdb8;
        case 0x1afdc0u: goto label_1afdc0;
        default: break;
    }

    ctx->pc = 0x1afd7cu;

    // 0x1afd7c: 0x26308cc8  addiu       $s0, $s1, -0x7338
    ctx->pc = 0x1afd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937800));
label_1afd80:
    // 0x1afd80: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1afd80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1afd84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd88: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x1afd88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x1afd8c: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1AFD8Cu;
    SET_GPR_U32(ctx, 31, 0x1AFD94u);
    ctx->pc = 0x1AFD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD8Cu;
    // 0x1afd90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1AFD8Cu, 0x1AFD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD94u;
label_1afd94:
    // 0x1afd94: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AFD94u;
    {
        const bool branch_taken_0x1afd94 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1afd94) {
            ctx->pc = 0x1AFD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFD94u;
            // 0x1afd98: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFDE4u;
            goto label_1afde4;
        }
    }
    ctx->pc = 0x1AFD9Cu;
    // 0x1afd9c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1afda0: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1afda0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x287290u));
    // 0x1afda4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFDA4u;
    {
        const bool branch_taken_0x1afda4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDA4u;
        // 0x1afda8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afda4) {
            ctx->pc = 0x1AFDBCu;
            goto label_1afdbc;
        }
    }
    ctx->pc = 0x1AFDACu;
    // 0x1afdac: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1afdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1afdb0: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AFDB0u;
    SET_GPR_U32(ctx, 31, 0x1AFDB8u);
    ctx->pc = 0x1AFDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDB0u;
    // 0x1afdb4: 0x2484aa70  addiu       $a0, $a0, -0x5590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AFDB0u, 0x1AFDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFDB8u;
label_1afdb8:
    // 0x1afdb8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1afdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1afdbc:
    // 0x1afdbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1afdc0:
    // 0x1afdc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1afdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1afdc4: 0x0  nop
    ctx->pc = 0x1afdc4u;
    // NOP
    // 0x1afdc8: 0x0  nop
    ctx->pc = 0x1afdc8u;
    // NOP
    // 0x1afdcc: 0x0  nop
    ctx->pc = 0x1afdccu;
    // NOP
    // 0x1afdd0: 0x0  nop
    ctx->pc = 0x1afdd0u;
    // NOP
    // 0x1afdd4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AFDD4u;
    {
        const bool branch_taken_0x1afdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afdd4) {
            ctx->pc = 0x1AFDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afdc0;
        }
    }
    ctx->pc = 0x1AFDDCu;
    // 0x1afddc: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1AFDDCu;
    {
        const bool branch_taken_0x1afddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDDCu;
        // 0x1afde0: 0x26308cc8  addiu       $s0, $s1, -0x7338 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afddc) {
            ctx->pc = 0x1AFD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afd80;
        }
    }
    ctx->pc = 0x1AFDE4u;
label_1afde4:
    // 0x1afde4: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1AFDE4u;
    {
        const bool branch_taken_0x1afde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDE4u;
        // 0x1afde8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afde4) {
            ctx->pc = 0x1AFD58u;
            return;
        }
    }
    ctx->pc = 0x1AFDECu;
    // 0x1afdec: 0xae4072c8  sw          $zero, 0x72C8($s2)
    ctx->pc = 0x1afdecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 29384), GPR_U32(ctx, 0));
    ctx->pc = 0x1afdf0u;
}
