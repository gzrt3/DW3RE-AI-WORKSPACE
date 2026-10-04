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

// Function: entry_002347b0
// Address: 0x2347b0 - 0x2348c8
void entry_002347b0_0x2347b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002347b0_0x2347b0");
#endif

    switch (ctx->pc) {
        case 0x2347c8u: goto label_2347c8;
        case 0x2347e8u: goto label_2347e8;
        case 0x2347f8u: goto label_2347f8;
        case 0x234830u: goto label_234830;
        case 0x234848u: goto label_234848;
        case 0x234874u: goto label_234874;
        case 0x234890u: goto label_234890;
        case 0x23489cu: goto label_23489c;
        default: break;
    }

    ctx->pc = 0x2347b0u;

    // 0x2347b0: 0x2630b140  addiu       $s0, $s1, -0x4EC0
    ctx->pc = 0x2347b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947136));
    // 0x2347b4: 0x3c054b53  lui         $a1, 0x4B53
    ctx->pc = 0x2347b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19283 << 16));
    // 0x2347b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2347b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2347bc: 0x34a54e44  ori         $a1, $a1, 0x4E44
    ctx->pc = 0x2347bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20036);
    // 0x2347c0: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x2347C0u;
    SET_GPR_U32(ctx, 31, 0x2347C8u);
    ctx->pc = 0x2347C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2347C0u;
    // 0x2347c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x2347C0u, 0x2347C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2347C8u;
label_2347c8:
    // 0x2347c8: 0x4400039  bltz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2347C8u;
    {
        const bool branch_taken_0x2347c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2347CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347C8u;
        // 0x2347cc: 0x2402ff9d  addiu       $v0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347c8) {
            ctx->pc = 0x2348B0u;
            goto label_2348b0;
        }
    }
    ctx->pc = 0x2347D0u;
    // 0x2347d0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2347d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2347d4: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2347D4u;
    {
        const bool branch_taken_0x2347d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347D4u;
        // 0x2347d8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347d4) {
            ctx->pc = 0x234780u;
            return;
        }
    }
    ctx->pc = 0x2347DCu;
    // 0x2347dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2347DCu;
    {
        const bool branch_taken_0x2347dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347DCu;
        // 0x2347e0: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347dc) {
            ctx->pc = 0x234818u;
            goto label_234818;
        }
    }
    ctx->pc = 0x2347E4u;
    // 0x2347e4: 0x0  nop
    ctx->pc = 0x2347e4u;
    // NOP
label_2347e8:
    // 0x2347e8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2347e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2347ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2347ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2347f0: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x2347f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x2347f4: 0x0  nop
    ctx->pc = 0x2347f4u;
    // NOP
label_2347f8:
    // 0x2347f8: 0x0  nop
    ctx->pc = 0x2347f8u;
    // NOP
    // 0x2347fc: 0x0  nop
    ctx->pc = 0x2347fcu;
    // NOP
    // 0x234800: 0x0  nop
    ctx->pc = 0x234800u;
    // NOP
    // 0x234804: 0x0  nop
    ctx->pc = 0x234804u;
    // NOP
    // 0x234808: 0x0  nop
    ctx->pc = 0x234808u;
    // NOP
    // 0x23480c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23480Cu;
    {
        const bool branch_taken_0x23480c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23480c) {
            ctx->pc = 0x234810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23480Cu;
            // 0x234810: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2347F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2347f8;
        }
    }
    ctx->pc = 0x234814u;
    // 0x234814: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x234814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_234818:
    // 0x234818: 0x2630b168  addiu       $s0, $s1, -0x4E98
    ctx->pc = 0x234818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947176));
    // 0x23481c: 0x3c054b53  lui         $a1, 0x4B53
    ctx->pc = 0x23481cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19283 << 16));
    // 0x234820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234824: 0x34a54e45  ori         $a1, $a1, 0x4E45
    ctx->pc = 0x234824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20037);
    // 0x234828: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x234828u;
    SET_GPR_U32(ctx, 31, 0x234830u);
    ctx->pc = 0x23482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234828u;
    // 0x23482c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x234828u, 0x234830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234830u;
label_234830:
    // 0x234830: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234830u;
    {
        const bool branch_taken_0x234830 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x234830) {
            ctx->pc = 0x234834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234830u;
            // 0x234834: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234840u;
            goto label_234840;
        }
    }
    ctx->pc = 0x234838u;
    // 0x234838: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x234838u;
    {
        const bool branch_taken_0x234838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234838u;
        // 0x23483c: 0x2402ff9d  addiu       $v0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234838) {
            ctx->pc = 0x2348B0u;
            goto label_2348b0;
        }
    }
    ctx->pc = 0x234840u;
label_234840:
    // 0x234840: 0x1080ffe9  beqz        $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x234840u;
    {
        const bool branch_taken_0x234840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x234844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234840u;
        // 0x234844: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234840) {
            ctx->pc = 0x2347E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2347e8;
        }
    }
    ctx->pc = 0x234848u;
label_234848:
    // 0x234848: 0x0  nop
    ctx->pc = 0x234848u;
    // NOP
    // 0x23484c: 0x0  nop
    ctx->pc = 0x23484cu;
    // NOP
    // 0x234850: 0x0  nop
    ctx->pc = 0x234850u;
    // NOP
    // 0x234854: 0x0  nop
    ctx->pc = 0x234854u;
    // NOP
    // 0x234858: 0x0  nop
    ctx->pc = 0x234858u;
    // NOP
    // 0x23485c: 0x0  nop
    ctx->pc = 0x23485cu;
    // NOP
    // 0x234860: 0x0  nop
    ctx->pc = 0x234860u;
    // NOP
    // 0x234864: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x234864u;
    {
        const bool branch_taken_0x234864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x234864) {
            ctx->pc = 0x234848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234848;
        }
    }
    ctx->pc = 0x23486Cu;
    // 0x23486c: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x23486Cu;
    SET_GPR_U32(ctx, 31, 0x234874u);
    ctx->pc = 0x234870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23486Cu;
    // 0x234870: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x23486Cu, 0x234874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234874u;
label_234874:
    // 0x234874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234878: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x234878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23487c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23487cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x234880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234884: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x234884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x234888: 0xc069208  jal         func_1A4820
    ctx->pc = 0x234888u;
    SET_GPR_U32(ctx, 31, 0x234890u);
    ctx->pc = 0x23488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234888u;
    // 0x23488c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x234888u, 0x234890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234890u;
label_234890:
    // 0x234890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234894: 0xc069208  jal         func_1A4820
    ctx->pc = 0x234894u;
    SET_GPR_U32(ctx, 31, 0x23489Cu);
    ctx->pc = 0x234898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234894u;
    // 0x234898: 0xaf8282e4  sw          $v0, -0x7D1C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x234894u, 0x23489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23489Cu;
label_23489c:
    // 0x23489c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x23489cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x2348a0: 0x24630518  addiu       $v1, $v1, 0x518
    ctx->pc = 0x2348a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1304));
    // 0x2348a4: 0xaf8282e8  sw          $v0, -0x7D18($gp)
    ctx->pc = 0x2348a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935272), GPR_U32(ctx, 2));
    // 0x2348a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2348a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x29051Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29051Cu, _value); } while (0);
    // 0x2348ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2348acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2348b0:
    // 0x2348b0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2348b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2348b4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2348b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2348b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2348b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2348bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2348BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2348C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348BCu;
        // 0x2348c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2348BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2348C4u;
    // 0x2348c4: 0x0  nop
    ctx->pc = 0x2348c4u;
    // NOP
    ctx->pc = 0x2348c8u;
}
