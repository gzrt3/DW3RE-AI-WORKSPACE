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

// Function: FUN_00195850
// Address: 0x195850 - 0x195aa4
void FUN_00195850_0x195850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00195850_0x195850");
#endif

    switch (ctx->pc) {
        case 0x195880u: goto label_195880;
        case 0x1958e0u: goto label_1958e0;
        case 0x195924u: goto label_195924;
        case 0x1959a8u: goto label_1959a8;
        case 0x1959ccu: goto label_1959cc;
        case 0x195a8cu: goto label_195a8c;
        default: break;
    }

    ctx->pc = 0x195850u;

    // 0x195850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195854: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x195854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x195858: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19585c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19585cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195860: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195864: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x195864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF6u));
    // 0x195868: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x195868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x19586c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x19586Cu;
    {
        const bool branch_taken_0x19586c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19586Cu;
        // 0x195870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19586c) {
            ctx->pc = 0x195900u;
            goto label_195900;
        }
    }
    ctx->pc = 0x195874u;
    // 0x195874: 0x3c10002f  lui         $s0, 0x2F
    ctx->pc = 0x195874u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)47 << 16));
    // 0x195878: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x195878u;
    {
        const bool branch_taken_0x195878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195878u;
        // 0x19587c: 0x26102490  addiu       $s0, $s0, 0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195878) {
            ctx->pc = 0x1958ECu;
            goto label_1958ec;
        }
    }
    ctx->pc = 0x195880u;
label_195880:
    // 0x195880: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x195880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x195884: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x195884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x195888: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x195888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x19588c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x19588cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x195890: 0x2484b170  addiu       $a0, $a0, -0x4E90
    ctx->pc = 0x195890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947184));
    // 0x195894: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x195894u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x195898: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x195898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x19589c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x19589cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1958a0: 0x8484010a  lh          $a0, 0x10A($a0)
    ctx->pc = 0x1958a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 266)));
    // 0x1958a4: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x1958a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1958a8: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1958a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1958ac: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1958acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1958b0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1958b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1958b4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1958b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1958b8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1958b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1958bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1958bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1958c0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1958C0u;
    {
        const bool branch_taken_0x1958c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1958c0) {
            ctx->pc = 0x1958E4u;
            goto label_1958e4;
        }
    }
    ctx->pc = 0x1958C8u;
    // 0x1958c8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1958c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1958cc: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x1958ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1958d0: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x1958d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
    // 0x1958d4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1958d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1958d8: 0xc0415a4  jal         func_105690
    ctx->pc = 0x1958D8u;
    SET_GPR_U32(ctx, 31, 0x1958E0u);
    ctx->pc = 0x1958DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1958D8u;
    // 0x1958dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x1958D8u, 0x1958E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1958E0u;
label_1958e0:
    // 0x1958e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1958e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1958e4:
    // 0x1958e4: 0x0  nop
    ctx->pc = 0x1958e4u;
    // NOP
    // 0x1958e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1958e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1958ec:
    // 0x1958ec: 0x0  nop
    ctx->pc = 0x1958ecu;
    // NOP
    // 0x1958f0: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1958f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1958f4: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1958f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1958f8: 0x1483ffe1  bne         $a0, $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1958F8u;
    {
        const bool branch_taken_0x1958f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1958FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958F8u;
        // 0x1958fc: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958f8) {
            ctx->pc = 0x195880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195880;
        }
    }
    ctx->pc = 0x195900u;
label_195900:
    // 0x195900: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x195900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x195904: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x195904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x195908: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x195908u;
    {
        const bool branch_taken_0x195908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195908u;
        // 0x19590c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195908) {
            ctx->pc = 0x1959C0u;
            goto label_1959c0;
        }
    }
    ctx->pc = 0x195910u;
    // 0x195910: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x195910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x195914: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x195914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x195918: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x195918u;
    {
        const bool branch_taken_0x195918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195918u;
        // 0x19591c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195918) {
            ctx->pc = 0x1959C0u;
            goto label_1959c0;
        }
    }
    ctx->pc = 0x195920u;
    // 0x195920: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x195920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195924:
    // 0x195924: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x195924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x195928: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x195928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    // 0x19592c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x19592cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x195930: 0x9083367c  lbu         $v1, 0x367C($a0)
    ctx->pc = 0x195930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13948)));
    // 0x195934: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x195934u;
    {
        const bool branch_taken_0x195934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195934) {
            ctx->pc = 0x1959ACu;
            goto label_1959ac;
        }
    }
    ctx->pc = 0x19593Cu;
    // 0x19593c: 0x9083368a  lbu         $v1, 0x368A($a0)
    ctx->pc = 0x19593cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13962)));
    // 0x195940: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x195940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x195944: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x195944u;
    {
        const bool branch_taken_0x195944 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195944) {
            ctx->pc = 0x1959ACu;
            goto label_1959ac;
        }
    }
    ctx->pc = 0x19594Cu;
    // 0x19594c: 0x90853694  lbu         $a1, 0x3694($a0)
    ctx->pc = 0x19594cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13972)));
    // 0x195950: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x195950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x195954: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x195954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x195958: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x195958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x19595c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x19595cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x195960: 0x24845370  addiu       $a0, $a0, 0x5370
    ctx->pc = 0x195960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21360));
    // 0x195964: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x195964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x195968: 0x84840038  lh          $a0, 0x38($a0)
    ctx->pc = 0x195968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x19596c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x19596cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x195970: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x195970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x195974: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x195974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x195978: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x195978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19597c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x19597cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x195980: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x195980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195984: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x195984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x195988: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x195988u;
    {
        const bool branch_taken_0x195988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195988) {
            ctx->pc = 0x1959ACu;
            goto label_1959ac;
        }
    }
    ctx->pc = 0x195990u;
    // 0x195990: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x195990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x195994: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x195994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x195998: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x195998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
    // 0x19599c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x19599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1959a0: 0xc0415a4  jal         func_105690
    ctx->pc = 0x1959A0u;
    SET_GPR_U32(ctx, 31, 0x1959A8u);
    ctx->pc = 0x1959A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1959A0u;
    // 0x1959a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x1959A0u, 0x1959A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1959A8u;
label_1959a8:
    // 0x1959a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1959a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1959ac:
    // 0x1959ac: 0x0  nop
    ctx->pc = 0x1959acu;
    // NOP
    // 0x1959b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1959b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1959b4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1959b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1959b8: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1959B8u;
    {
        const bool branch_taken_0x1959b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1959BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959B8u;
        // 0x1959bc: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959b8) {
            ctx->pc = 0x195924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195924;
        }
    }
    ctx->pc = 0x1959C0u;
label_1959c0:
    // 0x1959c0: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1959c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1959c4: 0x2610a4c0  addiu       $s0, $s0, -0x5B40
    ctx->pc = 0x1959c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943936));
    // 0x1959c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1959c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1959cc:
    // 0x1959cc: 0x0  nop
    ctx->pc = 0x1959ccu;
    // NOP
    // 0x1959d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1959d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1959d4: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1959D4u;
    {
        const bool branch_taken_0x1959d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959D4u;
        // 0x1959d8: 0x2403002e  addiu       $v1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959d4) {
            ctx->pc = 0x195A90u;
            goto label_195a90;
        }
    }
    ctx->pc = 0x1959DCu;
    // 0x1959dc: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1959DCu;
    {
        const bool branch_taken_0x1959dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1959dc) {
            ctx->pc = 0x1959F0u;
            goto label_1959f0;
        }
    }
    ctx->pc = 0x1959E4u;
    // 0x1959e4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1959e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1959e8: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1959E8u;
    {
        const bool branch_taken_0x1959e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1959e8) {
            ctx->pc = 0x1959F8u;
            goto label_1959f8;
        }
    }
    ctx->pc = 0x1959F0u;
label_1959f0:
    // 0x1959f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1959F0u;
    {
        const bool branch_taken_0x1959f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959F0u;
        // 0x1959f4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959f0) {
            ctx->pc = 0x195A3Cu;
            goto label_195a3c;
        }
    }
    ctx->pc = 0x1959F8u;
label_1959f8:
    // 0x1959f8: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1959f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1959fc: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1959FCu;
    {
        const bool branch_taken_0x1959fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x195A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959FCu;
        // 0x195a00: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959fc) {
            ctx->pc = 0x195A0Cu;
            goto label_195a0c;
        }
    }
    ctx->pc = 0x195A04u;
    // 0x195a04: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x195A04u;
    {
        const bool branch_taken_0x195a04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x195a04) {
            ctx->pc = 0x195A18u;
            goto label_195a18;
        }
    }
    ctx->pc = 0x195A0Cu;
label_195a0c:
    // 0x195a0c: 0x0  nop
    ctx->pc = 0x195a0cu;
    // NOP
    // 0x195a10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x195A10u;
    {
        const bool branch_taken_0x195a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A10u;
        // 0x195a14: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a10) {
            ctx->pc = 0x195A3Cu;
            goto label_195a3c;
        }
    }
    ctx->pc = 0x195A18u;
label_195a18:
    // 0x195a18: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x195a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x195a1c: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195A1Cu;
    {
        const bool branch_taken_0x195a1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x195A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A1Cu;
        // 0x195a20: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a1c) {
            ctx->pc = 0x195A2Cu;
            goto label_195a2c;
        }
    }
    ctx->pc = 0x195A24u;
    // 0x195a24: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x195A24u;
    {
        const bool branch_taken_0x195a24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x195a24) {
            ctx->pc = 0x195A38u;
            goto label_195a38;
        }
    }
    ctx->pc = 0x195A2Cu;
label_195a2c:
    // 0x195a2c: 0x0  nop
    ctx->pc = 0x195a2cu;
    // NOP
    // 0x195a30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195A30u;
    {
        const bool branch_taken_0x195a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A30u;
        // 0x195a34: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a30) {
            ctx->pc = 0x195A3Cu;
            goto label_195a3c;
        }
    }
    ctx->pc = 0x195A38u;
label_195a38:
    // 0x195a38: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x195a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_195a3c:
    // 0x195a3c: 0x0  nop
    ctx->pc = 0x195a3cu;
    // NOP
    // 0x195a40: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x195a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x195a44: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x195A44u;
    {
        const bool branch_taken_0x195a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x195A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A44u;
        // 0x195a48: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a44) {
            ctx->pc = 0x195A90u;
            goto label_195a90;
        }
    }
    ctx->pc = 0x195A4Cu;
    // 0x195a4c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x195a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x195a50: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x195a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x195a54: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x195a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x195a58: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x195a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x195a5c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x195a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x195a60: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x195a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x195a64: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x195a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195a68: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x195a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x195a6c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x195A6Cu;
    {
        const bool branch_taken_0x195a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195a6c) {
            ctx->pc = 0x195A90u;
            goto label_195a90;
        }
    }
    ctx->pc = 0x195A74u;
    // 0x195a74: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x195a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x195a78: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x195a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x195a7c: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x195a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
    // 0x195a80: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x195a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x195a84: 0xc0415a4  jal         func_105690
    ctx->pc = 0x195A84u;
    SET_GPR_U32(ctx, 31, 0x195A8Cu);
    ctx->pc = 0x195A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195A84u;
    // 0x195a88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x195A84u, 0x195A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A8Cu;
label_195a8c:
    // 0x195a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195a90:
    // 0x195a90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x195a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x195a94: 0x2a230080  slti        $v1, $s1, 0x80
    ctx->pc = 0x195a94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x195a98: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x195A98u;
    {
        const bool branch_taken_0x195a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A98u;
        // 0x195a9c: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a98) {
            ctx->pc = 0x1959CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1959cc;
        }
    }
    ctx->pc = 0x195AA0u;
    // 0x195aa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x195aa4u;
}
