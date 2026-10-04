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

// Function: entry_001af71c
// Address: 0x1af71c - 0x1af794
void entry_001af71c_0x1af71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af71c_0x1af71c");
#endif

    switch (ctx->pc) {
        case 0x1af720u: goto label_1af720;
        case 0x1af734u: goto label_1af734;
        case 0x1af754u: goto label_1af754;
        case 0x1af760u: goto label_1af760;
        default: break;
    }

    ctx->pc = 0x1af71cu;

    // 0x1af71c: 0x26f06140  addiu       $s0, $s7, 0x6140
    ctx->pc = 0x1af71cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 24896));
label_1af720:
    // 0x1af720: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1af720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1af724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af728: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x1af728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
    // 0x1af72c: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1AF72Cu;
    SET_GPR_U32(ctx, 31, 0x1AF734u);
    ctx->pc = 0x1AF730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF72Cu;
    // 0x1af730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1AF72Cu, 0x1AF734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF734u;
label_1af734:
    // 0x1af734: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AF734u;
    {
        const bool branch_taken_0x1af734 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1af734) {
            ctx->pc = 0x1AF738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF734u;
            // 0x1af738: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF784u;
            goto label_1af784;
        }
    }
    ctx->pc = 0x1AF73Cu;
    // 0x1af73c: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1af73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
    // 0x1af740: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF740u;
    {
        const bool branch_taken_0x1af740 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF740u;
        // 0x1af744: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af740) {
            ctx->pc = 0x1AF758u;
            goto label_1af758;
        }
    }
    ctx->pc = 0x1AF748u;
    // 0x1af748: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1af748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1af74c: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AF74Cu;
    SET_GPR_U32(ctx, 31, 0x1AF754u);
    ctx->pc = 0x1AF750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF74Cu;
    // 0x1af750: 0x2484a978  addiu       $a0, $a0, -0x5688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AF74Cu, 0x1AF754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF754u;
label_1af754:
    // 0x1af754: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1af754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1af758:
    // 0x1af758: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1af758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af75c: 0x0  nop
    ctx->pc = 0x1af75cu;
    // NOP
label_1af760:
    // 0x1af760: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1af764: 0x0  nop
    ctx->pc = 0x1af764u;
    // NOP
    // 0x1af768: 0x0  nop
    ctx->pc = 0x1af768u;
    // NOP
    // 0x1af76c: 0x0  nop
    ctx->pc = 0x1af76cu;
    // NOP
    // 0x1af770: 0x0  nop
    ctx->pc = 0x1af770u;
    // NOP
    // 0x1af774: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AF774u;
    {
        const bool branch_taken_0x1af774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1af774) {
            ctx->pc = 0x1AF760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af760;
        }
    }
    ctx->pc = 0x1AF77Cu;
    // 0x1af77c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1AF77Cu;
    {
        const bool branch_taken_0x1af77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF77Cu;
        // 0x1af780: 0x26f06140  addiu       $s0, $s7, 0x6140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 24896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af77c) {
            ctx->pc = 0x1AF720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af720;
        }
    }
    ctx->pc = 0x1AF784u;
label_1af784:
    // 0x1af784: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1AF784u;
    {
        const bool branch_taken_0x1af784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF784u;
        // 0x1af788: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af784) {
            ctx->pc = 0x1AF6F8u;
            return;
        }
    }
    ctx->pc = 0x1AF78Cu;
    // 0x1af78c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF78Cu;
    {
        const bool branch_taken_0x1af78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF78Cu;
        // 0x1af790: 0xae2072c0  sw          $zero, 0x72C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af78c) {
            ctx->pc = 0x1AF7A0u;
            return;
        }
    }
    ctx->pc = 0x1AF794u;
}
