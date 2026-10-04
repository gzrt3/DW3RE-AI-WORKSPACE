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

// Function: FUN_00244520
// Address: 0x244520 - 0x2446f8
void FUN_00244520_0x244520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00244520_0x244520");
#endif

    switch (ctx->pc) {
        case 0x244578u: goto label_244578;
        default: break;
    }

    ctx->pc = 0x244520u;

    // 0x244520: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x244520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x244524: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x244524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x244528: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x244528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x24452c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x24452cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x244530: 0x24630230  addiu       $v1, $v1, 0x230
    ctx->pc = 0x244530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 560));
    // 0x244534: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x244534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x244538: 0x90640007  lbu         $a0, 0x7($v1)
    ctx->pc = 0x244538u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x24453c: 0x18800057  blez        $a0, . + 4 + (0x57 << 2)
    ctx->pc = 0x24453Cu;
    {
        const bool branch_taken_0x24453c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x24453c) {
            ctx->pc = 0x24469Cu;
            goto label_24469c;
        }
    }
    ctx->pc = 0x244544u;
    // 0x244544: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x244544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x244548: 0xa0640007  sb          $a0, 0x7($v1)
    ctx->pc = 0x244548u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x24454c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x24454cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x244550: 0x14800052  bnez        $a0, . + 4 + (0x52 << 2)
    ctx->pc = 0x244550u;
    {
        const bool branch_taken_0x244550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x244550) {
            ctx->pc = 0x24469Cu;
            goto label_24469c;
        }
    }
    ctx->pc = 0x244558u;
    // 0x244558: 0x8469000e  lh          $t1, 0xE($v1)
    ctx->pc = 0x244558u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x24455c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24455cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244560: 0x29010013  slti        $at, $t0, 0x13
    ctx->pc = 0x244560u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x244564: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x244564u;
    {
        const bool branch_taken_0x244564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x244568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244564u;
        // 0x244568: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244564) {
            ctx->pc = 0x2445A8u;
            goto label_2445a8;
        }
    }
    ctx->pc = 0x24456Cu;
    // 0x24456c: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x24456cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x244570: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x244570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244574: 0x1062004  sllv        $a0, $a2, $t0
    ctx->pc = 0x244574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
label_244578:
    // 0x244578: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x244578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x24457c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24457Cu;
    {
        const bool branch_taken_0x24457c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24457c) {
            ctx->pc = 0x244594u;
            goto label_244594;
        }
    }
    ctx->pc = 0x244584u;
    // 0x244584: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x244584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x244588: 0x28e1000c  slti        $at, $a3, 0xC
    ctx->pc = 0x244588u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x24458c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x24458Cu;
    {
        const bool branch_taken_0x24458c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24458c) {
            ctx->pc = 0x2445A8u;
            goto label_2445a8;
        }
    }
    ctx->pc = 0x244594u;
label_244594:
    // 0x244594: 0x0  nop
    ctx->pc = 0x244594u;
    // NOP
    // 0x244598: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x244598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x24459c: 0x29040013  slti        $a0, $t0, 0x13
    ctx->pc = 0x24459cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2445a0: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2445A0u;
    {
        const bool branch_taken_0x2445a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2445A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445A0u;
        // 0x2445a4: 0x1062004  sllv        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445a0) {
            ctx->pc = 0x244578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244578;
        }
    }
    ctx->pc = 0x2445A8u;
label_2445a8:
    // 0x2445a8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x2445a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x2445ac: 0x2484eb08  addiu       $a0, $a0, -0x14F8
    ctx->pc = 0x2445acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961928));
    // 0x2445b0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2445b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2445b4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2445b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2445b8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2445b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2445bc: 0x44c3c  dsll32      $t1, $a0, 16
    ctx->pc = 0x2445bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2445c0: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x2445c0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x2445c4: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2445C4u;
    {
        const bool branch_taken_0x2445c4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2445c4) {
            ctx->pc = 0x2445D4u;
            goto label_2445d4;
        }
    }
    ctx->pc = 0x2445CCu;
    // 0x2445cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2445CCu;
    {
        const bool branch_taken_0x2445cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2445D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445CCu;
        // 0x2445d0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445cc) {
            ctx->pc = 0x244614u;
            goto label_244614;
        }
    }
    ctx->pc = 0x2445D4u;
label_2445d4:
    // 0x2445d4: 0x90650008  lbu         $a1, 0x8($v1)
    ctx->pc = 0x2445d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2445d8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2445d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2445dc: 0x5200a  movz        $a0, $zero, $a1
    ctx->pc = 0x2445dcu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x2445e0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2445e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2445e4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2445e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2445e8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2445e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2445ec: 0x44c3c  dsll32      $t1, $a0, 16
    ctx->pc = 0x2445ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2445f0: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x2445f0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x2445f4: 0x29210064  slti        $at, $t1, 0x64
    ctx->pc = 0x2445f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2445f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2445F8u;
    {
        const bool branch_taken_0x2445f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2445f8) {
            ctx->pc = 0x244608u;
            goto label_244608;
        }
    }
    ctx->pc = 0x244600u;
    // 0x244600: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x244600u;
    {
        const bool branch_taken_0x244600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244600u;
        // 0x244604: 0x9243c  dsll32      $a0, $t1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244600) {
            ctx->pc = 0x244610u;
            goto label_244610;
        }
    }
    ctx->pc = 0x244608u;
label_244608:
    // 0x244608: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x244608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x24460c: 0x9243c  dsll32      $a0, $t1, 16
    ctx->pc = 0x24460cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 16));
label_244610:
    // 0x244610: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x244610u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_244614:
    // 0x244614: 0x43c3c  dsll32      $a3, $a0, 16
    ctx->pc = 0x244614u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 16));
    // 0x244618: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x244618u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x24461c: 0x28e1001e  slti        $at, $a3, 0x1E
    ctx->pc = 0x24461cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x244620: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x244620u;
    {
        const bool branch_taken_0x244620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x244620) {
            ctx->pc = 0x244634u;
            goto label_244634;
        }
    }
    ctx->pc = 0x244628u;
    // 0x244628: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x244628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x24462c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24462Cu;
    {
        const bool branch_taken_0x24462c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24462c) {
            ctx->pc = 0x24467Cu;
            goto label_24467c;
        }
    }
    ctx->pc = 0x244634u;
label_244634:
    // 0x244634: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x244634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x244638: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x244638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x24463c: 0x3488869f  ori         $t0, $a0, 0x869F
    ctx->pc = 0x24463cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34463);
    // 0x244640: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x244640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x244644: 0x8c24ccf4  lw          $a0, -0x330C($at)
    ctx->pc = 0x244644u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x29CCF4u));
    // 0x244648: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x244648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24464c: 0x53042  srl         $a2, $a1, 1
    ctx->pc = 0x24464cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x244650: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x244650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x244654: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x244654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x244658: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x244658u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24465c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x24465cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x244660: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x244660u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x244664: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x244664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x244668: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x244668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x24466c: 0x88082a  slt         $at, $a0, $t0
    ctx->pc = 0x24466cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x244670: 0x101200a  movz        $a0, $t0, $at
    ctx->pc = 0x244670u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 8));
    // 0x244674: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x244674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x244678: 0xac24ccf4  sw          $a0, -0x330C($at)
    ctx->pc = 0x244678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x29CCF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29CCF4u, _value); } while (0);
label_24467c:
    // 0x24467c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x24467cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244680: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x244680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x244684: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x244684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x244688: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x244688u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x24468c: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x24468cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x244690: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x244690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x244694: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x244694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x244698: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x244698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
label_24469c:
    // 0x24469c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x24469cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2446a0: 0x2881005c  slti        $at, $a0, 0x5C
    ctx->pc = 0x2446a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)92) ? 1 : 0);
    // 0x2446a4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2446A4u;
    {
        const bool branch_taken_0x2446a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2446a4) {
            ctx->pc = 0x2446C8u;
            goto label_2446c8;
        }
    }
    ctx->pc = 0x2446ACu;
    // 0x2446ac: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2446acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2446b0: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2446b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2446b4: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2446b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2446b8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2446b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2446bc: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2446BCu;
    {
        const bool branch_taken_0x2446bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2446bc) {
            ctx->pc = 0x2446C8u;
            goto label_2446c8;
        }
    }
    ctx->pc = 0x2446C4u;
    // 0x2446c4: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x2446c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
label_2446c8:
    // 0x2446c8: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x2446c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2446cc: 0x28810050  slti        $at, $a0, 0x50
    ctx->pc = 0x2446ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x2446d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2446D0u;
    {
        const bool branch_taken_0x2446d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2446d0) {
            ctx->pc = 0x2446E0u;
            goto label_2446e0;
        }
    }
    ctx->pc = 0x2446D8u;
    // 0x2446d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2446d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2446dc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2446dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_2446e0:
    // 0x2446e0: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x2446e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2446e4: 0x28810041  slti        $at, $a0, 0x41
    ctx->pc = 0x2446e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x2446e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2446E8u;
    {
        const bool branch_taken_0x2446e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2446e8) {
            ctx->pc = 0x2446F8u;
            return;
        }
    }
    ctx->pc = 0x2446F0u;
    // 0x2446f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2446f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2446f4: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x2446f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2446f8u;
}
