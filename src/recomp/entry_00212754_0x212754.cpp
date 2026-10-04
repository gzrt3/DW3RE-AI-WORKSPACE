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

// Function: entry_00212754
// Address: 0x212754 - 0x212890
void entry_00212754_0x212754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212754_0x212754");
#endif

    switch (ctx->pc) {
        case 0x2127a8u: goto label_2127a8;
        case 0x2127b4u: goto label_2127b4;
        case 0x2127ccu: goto label_2127cc;
        case 0x2127dcu: goto label_2127dc;
        case 0x212818u: goto label_212818;
        case 0x212820u: goto label_212820;
        case 0x212874u: goto label_212874;
        case 0x21287cu: goto label_21287c;
        default: break;
    }

    ctx->pc = 0x212754u;

    // 0x212754: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x212754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x212758: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x212758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x21275c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x21275cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x212760: 0x24427568  addiu       $v0, $v0, 0x7568
    ctx->pc = 0x212760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30056));
    // 0x212764: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x212764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x212768: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x21276c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x21276cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x212770: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x212770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x212774: 0x8c284900  lw          $t0, 0x4900($at)
    ctx->pc = 0x212774u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x334900u));
    // 0x212778: 0x24427590  addiu       $v0, $v0, 0x7590
    ctx->pc = 0x212778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30096));
    // 0x21277c: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x21277cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x212780: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x212780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x212784: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x212784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x212788: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x212788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21278c: 0x24427560  addiu       $v0, $v0, 0x7560
    ctx->pc = 0x21278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30048));
    // 0x212790: 0x24a54930  addiu       $a1, $a1, 0x4930
    ctx->pc = 0x212790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18736));
    // 0x212794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212798: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x212798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21279c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x21279cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2127a0: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x2127A0u;
    SET_GPR_U32(ctx, 31, 0x2127A8u);
    ctx->pc = 0x2127A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2127A0u;
    // 0x2127a4: 0xace80000  sw          $t0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2127A0u, 0x2127A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2127A8u;
label_2127a8:
    // 0x2127a8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2127a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2127ac: 0xc056a20  jal         func_15A880
    ctx->pc = 0x2127ACu;
    SET_GPR_U32(ctx, 31, 0x2127B4u);
    ctx->pc = 0x2127B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2127ACu;
    // 0x2127b0: 0x8c244970  lw          $a0, 0x4970($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x2127ACu, 0x2127B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2127B4u;
label_2127b4:
    // 0x2127b4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2127b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2127b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2127b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2127bc: 0x90257561  lbu         $a1, 0x7561($at)
    ctx->pc = 0x2127bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x587561u));
    // 0x2127c0: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x2127c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2127c4: 0xc056a04  jal         func_15A810
    ctx->pc = 0x2127C4u;
    SET_GPR_U32(ctx, 31, 0x2127CCu);
    ctx->pc = 0x2127C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2127C4u;
    // 0x2127c8: 0x27a7001c  addiu       $a3, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x2127C4u, 0x2127CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2127CCu;
label_2127cc:
    // 0x2127cc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2127ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2127d0: 0x90257561  lbu         $a1, 0x7561($at)
    ctx->pc = 0x2127d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x587561u));
    // 0x2127d4: 0xc0514e4  jal         func_145390
    ctx->pc = 0x2127D4u;
    SET_GPR_U32(ctx, 31, 0x2127DCu);
    ctx->pc = 0x2127D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2127D4u;
    // 0x2127d8: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145390u, 0x2127D4u, 0x2127DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2127DCu;
label_2127dc:
    // 0x2127dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2127DCu;
    {
        const bool branch_taken_0x2127dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2127dc) {
            ctx->pc = 0x212828u;
            goto label_212828;
        }
    }
    ctx->pc = 0x2127E4u;
    // 0x2127e4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2127e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2127e8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x2127e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x2127ec: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x2127ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334970u));
    // 0x2127f0: 0x2442ff8c  addiu       $v0, $v0, -0x74
    ctx->pc = 0x2127f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967180));
    // 0x2127f4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2127f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2127f8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2127f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2127fc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2127fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212800: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x212800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212804: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x212804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x212808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21280c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x21280cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x212810: 0xc090138  jal         func_2404E0
    ctx->pc = 0x212810u;
    SET_GPR_U32(ctx, 31, 0x212818u);
    ctx->pc = 0x212814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212810u;
    // 0x212814: 0x90247560  lbu         $a0, 0x7560($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2404E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2404E0u, 0x212810u, 0x212818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212818u;
label_212818:
    // 0x212818: 0xc08bd38  jal         func_22F4E0
    ctx->pc = 0x212818u;
    SET_GPR_U32(ctx, 31, 0x212820u);
    ctx->pc = 0x22F4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F4E0u, 0x212818u, 0x212820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212820u;
label_212820:
    // 0x212820: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x212820u;
    {
        const bool branch_taken_0x212820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212820) {
            ctx->pc = 0x212874u;
            goto label_212874;
        }
    }
    ctx->pc = 0x212828u;
label_212828:
    // 0x212828: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x21282c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x21282cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x212830: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x212830u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334970u));
    // 0x212834: 0x2442ff8c  addiu       $v0, $v0, -0x74
    ctx->pc = 0x212834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967180));
    // 0x212838: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x212838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21283c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21283cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x212840: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x212840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212844: 0x90254af1  lbu         $a1, 0x4AF1($at)
    ctx->pc = 0x212844u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x334AF1u));
    // 0x212848: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x212848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x21284c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x21284cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212850: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x212850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212854: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x212854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x212858: 0x41280a  movz        $a1, $v0, $at
    ctx->pc = 0x212858u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x21285c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x21285cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x212860: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212864: 0x90247560  lbu         $a0, 0x7560($at)
    ctx->pc = 0x212864u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x587560u));
    // 0x212868: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21286c: 0xc090160  jal         func_240580
    ctx->pc = 0x21286Cu;
    SET_GPR_U32(ctx, 31, 0x212874u);
    ctx->pc = 0x212870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21286Cu;
    // 0x212870: 0x90257561  lbu         $a1, 0x7561($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30049)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240580u, 0x21286Cu, 0x212874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212874u;
label_212874:
    // 0x212874: 0xc084a24  jal         func_212890
    ctx->pc = 0x212874u;
    SET_GPR_U32(ctx, 31, 0x21287Cu);
    ctx->pc = 0x212890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212890u, 0x212874u, 0x21287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21287Cu;
label_21287c:
    // 0x21287c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21287cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212880: 0x3e00008  jr          $ra
    ctx->pc = 0x212880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212880u;
        // 0x212884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212888u;
    // 0x212888: 0x0  nop
    ctx->pc = 0x212888u;
    // NOP
    // 0x21288c: 0x0  nop
    ctx->pc = 0x21288cu;
    // NOP
    ctx->pc = 0x212890u;
}
