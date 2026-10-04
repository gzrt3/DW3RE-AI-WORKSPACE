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

// Function: FUN_0016c780
// Address: 0x16c780 - 0x16c884
void FUN_0016c780_0x16c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016c780_0x16c780");
#endif

    switch (ctx->pc) {
        case 0x16c7a4u: goto label_16c7a4;
        case 0x16c7b0u: goto label_16c7b0;
        case 0x16c7c0u: goto label_16c7c0;
        case 0x16c7d4u: goto label_16c7d4;
        case 0x16c844u: goto label_16c844;
        case 0x16c858u: goto label_16c858;
        default: break;
    }

    ctx->pc = 0x16c780u;

    // 0x16c780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16c784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16c788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16c78c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16c790: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16c790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16c794: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x16C794u;
    {
        const bool branch_taken_0x16c794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C794u;
        // 0x16c798: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c794) {
            ctx->pc = 0x16C838u;
            goto label_16c838;
        }
    }
    ctx->pc = 0x16C79Cu;
    // 0x16c79c: 0xc08d30c  jal         func_234C30
    ctx->pc = 0x16C79Cu;
    SET_GPR_U32(ctx, 31, 0x16C7A4u);
    ctx->pc = 0x16C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C79Cu;
    // 0x16c7a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234C30u, 0x16C79Cu, 0x16C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C7A4u;
label_16c7a4:
    // 0x16c7a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16c7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c7a8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x16C7A8u;
    {
        const bool branch_taken_0x16c7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7A8u;
        // 0x16c7ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c7a8) {
            ctx->pc = 0x16C824u;
            goto label_16c824;
        }
    }
    ctx->pc = 0x16C7B0u;
label_16c7b0:
    // 0x16c7b0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c7b4: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c7b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x16c7b8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16C7B8u;
    {
        const bool branch_taken_0x16c7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c7b8) {
            ctx->pc = 0x16C7E4u;
            goto label_16c7e4;
        }
    }
    ctx->pc = 0x16C7C0u;
label_16c7c0:
    // 0x16c7c0: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c7c4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16c7c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c7cc: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16C7CCu;
    SET_GPR_U32(ctx, 31, 0x16C7D4u);
    ctx->pc = 0x16C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C7CCu;
    // 0x16c7d0: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16C7CCu, 0x16C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C7D4u;
label_16c7d4:
    // 0x16c7d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16c7d8: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16C7D8u;
    {
        const bool branch_taken_0x16c7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c7d8) {
            ctx->pc = 0x16C7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c7c0;
        }
    }
    ctx->pc = 0x16C7E0u;
    // 0x16c7e0: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c7e4:
    // 0x16c7e4: 0x0  nop
    ctx->pc = 0x16c7e4u;
    // NOP
    // 0x16c7e8: 0x3c032002  lui         $v1, 0x2002
    ctx->pc = 0x16c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8194 << 16));
    // 0x16c7ec: 0x2233025  or          $a2, $s1, $v1
    ctx->pc = 0x16c7ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x16c7f0: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c7f4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x16c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x16c7f8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x16c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x16c7fc: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x16c7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x16c800: 0x24843ef0  addiu       $a0, $a0, 0x3EF0
    ctx->pc = 0x16c800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16112));
    // 0x16c804: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x16c804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16c808: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x16c808u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16c80c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x16c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16c810: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c814: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x16c814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x16c818: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c81c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16c820: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c824:
    // 0x16c824: 0x0  nop
    ctx->pc = 0x16c824u;
    // NOP
    // 0x16c828: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x16c828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x16c82c: 0x2863000f  slti        $v1, $v1, 0xF
    ctx->pc = 0x16c82cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x16c830: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x16C830u;
    {
        const bool branch_taken_0x16c830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c830) {
            ctx->pc = 0x16C7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c7b0;
        }
    }
    ctx->pc = 0x16C838u;
label_16c838:
    // 0x16c838: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c83c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16C83Cu;
    {
        const bool branch_taken_0x16c83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c83c) {
            ctx->pc = 0x16C868u;
            goto label_16c868;
        }
    }
    ctx->pc = 0x16C844u;
label_16c844:
    // 0x16c844: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c848: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c848u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16c84c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c850: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16C850u;
    SET_GPR_U32(ctx, 31, 0x16C858u);
    ctx->pc = 0x16C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C850u;
    // 0x16c854: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16C850u, 0x16C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C858u;
label_16c858:
    // 0x16c858: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16c85c: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16C85Cu;
    {
        const bool branch_taken_0x16c85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c85c) {
            ctx->pc = 0x16C844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c844;
        }
    }
    ctx->pc = 0x16C864u;
    // 0x16c864: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c864u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c868:
    // 0x16c868: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16c868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16c86c: 0xac201ed8  sw          $zero, 0x1ED8($at)
    ctx->pc = 0x16c86cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x281ED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281ED8u, _value); } while (0);
    // 0x16c870: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16c870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16c874: 0xac201edc  sw          $zero, 0x1EDC($at)
    ctx->pc = 0x16c874u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x281EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EDCu, _value); } while (0);
    // 0x16c878: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16c878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16c87c: 0xac201ee0  sw          $zero, 0x1EE0($at)
    ctx->pc = 0x16c87cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x281EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EE0u, _value); } while (0);
    // 0x16c880: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16c880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x16c884u;
}
