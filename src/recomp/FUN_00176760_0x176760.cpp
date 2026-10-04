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

// Function: FUN_00176760
// Address: 0x176760 - 0x176950
void FUN_00176760_0x176760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00176760_0x176760");
#endif

    switch (ctx->pc) {
        case 0x1767acu: goto label_1767ac;
        case 0x1767dcu: goto label_1767dc;
        case 0x176840u: goto label_176840;
        case 0x17689cu: goto label_17689c;
        case 0x176938u: goto label_176938;
        default: break;
    }

    ctx->pc = 0x176760u;

    // 0x176760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176764: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x176764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x176768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17676c: 0x10a30050  beq         $a1, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x17676Cu;
    {
        const bool branch_taken_0x17676c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x176770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17676Cu;
        // 0x176770: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17676c) {
            ctx->pc = 0x1768B0u;
            goto label_1768b0;
        }
    }
    ctx->pc = 0x176774u;
    // 0x176774: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x176774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176778: 0x10a30034  beq         $a1, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x176778u;
    {
        const bool branch_taken_0x176778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x17677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176778u;
        // 0x17677c: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176778) {
            ctx->pc = 0x17684Cu;
            goto label_17684c;
        }
    }
    ctx->pc = 0x176780u;
    // 0x176780: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176784: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x176784u;
    {
        const bool branch_taken_0x176784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x176784) {
            ctx->pc = 0x1767B4u;
            goto label_1767b4;
        }
    }
    ctx->pc = 0x17678Cu;
    // 0x17678c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17678Cu;
    {
        const bool branch_taken_0x17678c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17678c) {
            ctx->pc = 0x17679Cu;
            goto label_17679c;
        }
    }
    ctx->pc = 0x176794u;
    // 0x176794: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x176794u;
    {
        const bool branch_taken_0x176794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176794u;
        // 0x176798: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176794) {
            ctx->pc = 0x176950u;
            return;
        }
    }
    ctx->pc = 0x17679Cu;
label_17679c:
    // 0x17679c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17679cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767a0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1767a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767a4: 0xc072ecc  jal         func_1CBB30
    ctx->pc = 0x1767A4u;
    SET_GPR_U32(ctx, 31, 0x1767ACu);
    ctx->pc = 0x1767A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1767A4u;
    // 0x1767a8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBB30u, 0x1767A4u, 0x1767ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1767ACu;
label_1767ac:
    // 0x1767ac: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1767ACu;
    {
        const bool branch_taken_0x1767ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1767ac) {
            ctx->pc = 0x17694Cu;
            goto label_17694c;
        }
    }
    ctx->pc = 0x1767B4u;
label_1767b4:
    // 0x1767b4: 0x24020195  addiu       $v0, $zero, 0x195
    ctx->pc = 0x1767b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
    // 0x1767b8: 0x14e2000a  bne         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1767B8u;
    {
        const bool branch_taken_0x1767b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1767BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767B8u;
        // 0x1767bc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767b8) {
            ctx->pc = 0x1767E4u;
            goto label_1767e4;
        }
    }
    ctx->pc = 0x1767C0u;
    // 0x1767c0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1767c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1767c4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1767c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1767c8: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x1767c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
    // 0x1767cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1767ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1767d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1767d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1767d4: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1767D4u;
    SET_GPR_U32(ctx, 31, 0x1767DCu);
    ctx->pc = 0x1767D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1767D4u;
    // 0x1767d8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1767D4u, 0x1767DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1767DCu;
label_1767dc:
    // 0x1767dc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1767DCu;
    {
        const bool branch_taken_0x1767dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1767E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767DCu;
        // 0x1767e0: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767dc) {
            ctx->pc = 0x176844u;
            goto label_176844;
        }
    }
    ctx->pc = 0x1767E4u;
label_1767e4:
    // 0x1767e4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1767e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1767e8: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x1767e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
    // 0x1767ec: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1767ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1767f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1767f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1767f4: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1767f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
    // 0x1767f8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1767f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1767fc: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1767fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x176800: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x176800u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x176804: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x176804u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x176808: 0x24e72930  addiu       $a3, $a3, 0x2930
    ctx->pc = 0x176808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10544));
    // 0x17680c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x17680cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x176810: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x176810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x176814: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x176814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176818: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x176818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x17681c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x176820: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x176820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176824: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x176824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x176828: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x176828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17682c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17682cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x176830: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x176830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x176834: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x176834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176838: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x176838u;
    SET_GPR_U32(ctx, 31, 0x176840u);
    ctx->pc = 0x17683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176838u;
    // 0x17683c: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x176838u, 0x176840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176840u;
label_176840:
    // 0x176840: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x176840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_176844:
    // 0x176844: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x176844u;
    {
        const bool branch_taken_0x176844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176844) {
            ctx->pc = 0x17694Cu;
            goto label_17694c;
        }
    }
    ctx->pc = 0x17684Cu;
label_17684c:
    // 0x17684c: 0x278281d0  addiu       $v0, $gp, -0x7E30
    ctx->pc = 0x17684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934992));
    // 0x176850: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x176850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176854: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x176854u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x176858: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x176858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17685c: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x17685cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x176860: 0x478023  subu        $s0, $v0, $a3
    ctx->pc = 0x176860u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x176864: 0x25082930  addiu       $t0, $t0, 0x2930
    ctx->pc = 0x176864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10544));
    // 0x176868: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x176868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17686c: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x17686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
    // 0x176870: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x176870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x176874: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x176874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x176878: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x176878u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17687c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x176880: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x176880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
    // 0x176884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176888: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x176888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17688c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x17688cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x176890: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x176890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x176894: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x176894u;
    SET_GPR_U32(ctx, 31, 0x17689Cu);
    ctx->pc = 0x176898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176894u;
    // 0x176898: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x176894u, 0x17689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17689Cu;
label_17689c:
    // 0x17689c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1768a0: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x1768a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
    // 0x1768a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1768a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1768a8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1768A8u;
    {
        const bool branch_taken_0x1768a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1768ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768A8u;
        // 0x1768ac: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1768a8) {
            ctx->pc = 0x17694Cu;
            goto label_17694c;
        }
    }
    ctx->pc = 0x1768B0u;
label_1768b0:
    // 0x1768b0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1768b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1768b4: 0x278281d0  addiu       $v0, $gp, -0x7E30
    ctx->pc = 0x1768b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934992));
    // 0x1768b8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1768b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1768bc: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1768bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
    // 0x1768c0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1768c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1768c4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1768c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1768c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1768cc: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1768ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x1768d0: 0x25293b80  addiu       $t1, $t1, 0x3B80
    ctx->pc = 0x1768d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15232));
    // 0x1768d4: 0x25082930  addiu       $t0, $t0, 0x2930
    ctx->pc = 0x1768d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10544));
    // 0x1768d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1768d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1768dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1768dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1768e0: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x1768e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
    // 0x1768e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1768e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1768e8: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x1768e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1768ec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1768ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1768f0: 0x24634670  addiu       $v1, $v1, 0x4670
    ctx->pc = 0x1768f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18032));
    // 0x1768f4: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1768f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1768f8: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x1768f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1768fc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1768fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x176900: 0x739c0  sll         $a3, $a3, 7
    ctx->pc = 0x176900u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x176904: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x176904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x176908: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x176908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17690c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x17690cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x176910: 0x24c20000  addiu       $v0, $a2, 0x0
    ctx->pc = 0x176910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x176914: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x176914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176918: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x176918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x17691c: 0x4a8023  subu        $s0, $v0, $t2
    ctx->pc = 0x17691cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x176920: 0x1301021  addu        $v0, $t1, $s0
    ctx->pc = 0x176920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x176924: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x176924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176928: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x176928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17692c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x17692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x176930: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x176930u;
    SET_GPR_U32(ctx, 31, 0x176938u);
    ctx->pc = 0x176934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176930u;
    // 0x176934: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x176930u, 0x176938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176938u;
label_176938:
    // 0x176938: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x176938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17693c: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x17693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
    // 0x176940: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x176940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x176944: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x176944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176948: 0x0  nop
    ctx->pc = 0x176948u;
    // NOP
label_17694c:
    // 0x17694c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17694cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x176950u;
}
