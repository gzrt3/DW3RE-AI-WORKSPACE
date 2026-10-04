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

// Function: FUN_001006e0
// Address: 0x1006e0 - 0x100808
void FUN_001006e0_0x1006e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001006e0_0x1006e0");
#endif

    switch (ctx->pc) {
        case 0x10070cu: goto label_10070c;
        case 0x100718u: goto label_100718;
        case 0x100724u: goto label_100724;
        case 0x100740u: goto label_100740;
        case 0x10074cu: goto label_10074c;
        case 0x100758u: goto label_100758;
        case 0x100778u: goto label_100778;
        case 0x100798u: goto label_100798;
        case 0x1007f8u: goto label_1007f8;
        case 0x100804u: goto label_100804;
        default: break;
    }

    ctx->pc = 0x1006e0u;

    // 0x1006e0: 0x27bddfd0  addiu       $sp, $sp, -0x2030
    ctx->pc = 0x1006e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294959056));
    // 0x1006e4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1006e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1006e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1006e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1006ec: 0x2442ae60  addiu       $v0, $v0, -0x51A0
    ctx->pc = 0x1006ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946400));
    // 0x1006f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1006f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1006f4: 0x48880  sll         $s1, $a0, 2
    ctx->pc = 0x1006f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1006f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1006f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1006fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1006fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x100700: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x100700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100704: 0xc041738  jal         func_105CE0
    ctx->pc = 0x100704u;
    SET_GPR_U32(ctx, 31, 0x10070Cu);
    ctx->pc = 0x100708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100704u;
    // 0x100708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x100704u, 0x10070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10070Cu;
label_10070c:
    // 0x10070c: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x10070cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x100710: 0xc070080  jal         func_1C0200
    ctx->pc = 0x100710u;
    SET_GPR_U32(ctx, 31, 0x100718u);
    ctx->pc = 0x100714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100710u;
    // 0x100714: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x100710u, 0x100718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100718u;
label_100718:
    // 0x100718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10071c: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x10071Cu;
    SET_GPR_U32(ctx, 31, 0x100724u);
    ctx->pc = 0x100720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10071Cu;
    // 0x100720: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x10071Cu, 0x100724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100724u;
label_100724:
    // 0x100724: 0xaf828444  sw          $v0, -0x7BBC($gp)
    ctx->pc = 0x100724u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935620), GPR_U32(ctx, 2));
    // 0x100728: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x100728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10072c: 0x2442ac80  addiu       $v0, $v0, -0x5380
    ctx->pc = 0x10072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945920));
    // 0x100730: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x100730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x100734: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x100734u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100738: 0xc041738  jal         func_105CE0
    ctx->pc = 0x100738u;
    SET_GPR_U32(ctx, 31, 0x100740u);
    ctx->pc = 0x10073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100738u;
    // 0x10073c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x100738u, 0x100740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100740u;
label_100740:
    // 0x100740: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x100740u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x100744: 0xc070080  jal         func_1C0200
    ctx->pc = 0x100744u;
    SET_GPR_U32(ctx, 31, 0x10074Cu);
    ctx->pc = 0x100748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100744u;
    // 0x100748: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x100744u, 0x10074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10074Cu;
label_10074c:
    // 0x10074c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10074cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100750: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x100750u;
    SET_GPR_U32(ctx, 31, 0x100758u);
    ctx->pc = 0x100754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100750u;
    // 0x100754: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x100750u, 0x100758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100758u;
label_100758:
    // 0x100758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10075c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x10075Cu;
    {
        const bool branch_taken_0x10075c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x100760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10075Cu;
        // 0x100760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10075c) {
            ctx->pc = 0x1007F8u;
            goto label_1007f8;
        }
    }
    ctx->pc = 0x100764u;
    // 0x100764: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x100764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x100768: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x100768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10076c: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x10076cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x100770: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x100770u;
    SET_GPR_U32(ctx, 31, 0x100778u);
    ctx->pc = 0x100774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100770u;
    // 0x100774: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AD0u, 0x100770u, 0x100778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100778u;
label_100778:
    // 0x100778: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x100778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10077c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x10077cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x100780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x100780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100784: 0x7082b  sltu        $at, $zero, $a3
    ctx->pc = 0x100784u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x100788: 0xff808420  sd          $zero, -0x7BE0($gp)
    ctx->pc = 0x100788u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935584), GPR_U64(ctx, 0));
    // 0x10078c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x10078Cu;
    {
        const bool branch_taken_0x10078c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x100790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10078Cu;
        // 0x100790: 0xff808428  sd          $zero, -0x7BD8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10078c) {
            ctx->pc = 0x1007F0u;
            goto label_1007f0;
        }
    }
    ctx->pc = 0x100794u;
    // 0x100794: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x100794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_100798:
    // 0x100798: 0x94a4000c  lhu         $a0, 0xC($a1)
    ctx->pc = 0x100798u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x10079c: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x10079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x1007a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1007A0u;
    {
        const bool branch_taken_0x1007a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1007a0) {
            ctx->pc = 0x1007C0u;
            goto label_1007c0;
        }
    }
    ctx->pc = 0x1007A8u;
    // 0x1007a8: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x1007a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1007ac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1007acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1007b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1007b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1007b4: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1007b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1007b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1007B8u;
    {
        const bool branch_taken_0x1007b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1007BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007B8u;
        // 0x1007bc: 0xff828428  sd          $v0, -0x7BD8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935592), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007b8) {
            ctx->pc = 0x1007E0u;
            goto label_1007e0;
        }
    }
    ctx->pc = 0x1007C0u;
label_1007c0:
    // 0x1007c0: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x1007c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x1007c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1007C4u;
    {
        const bool branch_taken_0x1007c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1007c4) {
            ctx->pc = 0x1007E0u;
            goto label_1007e0;
        }
    }
    ctx->pc = 0x1007CCu;
    // 0x1007cc: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x1007ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1007d0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1007d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1007d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1007d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1007d8: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1007d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1007dc: 0xff828420  sd          $v0, -0x7BE0($gp)
    ctx->pc = 0x1007dcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935584), GPR_U64(ctx, 2));
label_1007e0:
    // 0x1007e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1007e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1007e4: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1007e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1007e8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1007E8u;
    {
        const bool branch_taken_0x1007e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1007ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007E8u;
        // 0x1007ec: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007e8) {
            ctx->pc = 0x100798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100798;
        }
    }
    ctx->pc = 0x1007F0u;
label_1007f0:
    // 0x1007f0: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1007F0u;
    SET_GPR_U32(ctx, 31, 0x1007F8u);
    ctx->pc = 0x1007F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1007F0u;
    // 0x1007f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1007F0u, 0x1007F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1007F8u;
label_1007f8:
    // 0x1007f8: 0x8f848444  lw          $a0, -0x7BBC($gp)
    ctx->pc = 0x1007f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935620)));
    // 0x1007fc: 0xc040290  jal         func_100A40
    ctx->pc = 0x1007FCu;
    SET_GPR_U32(ctx, 31, 0x100804u);
    ctx->pc = 0x100800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1007FCu;
    // 0x100800: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100A40u, 0x1007FCu, 0x100804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100804u;
label_100804:
    // 0x100804: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x100804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x100808u;
}
