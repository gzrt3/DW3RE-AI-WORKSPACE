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

// Function: entry_001755e4
// Address: 0x1755e4 - 0x175810
void entry_001755e4_0x1755e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001755e4_0x1755e4");
#endif

    switch (ctx->pc) {
        case 0x175730u: goto label_175730;
        default: break;
    }

    ctx->pc = 0x1755e4u;

    // 0x1755e4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1755e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1755e8: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x1755e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
    // 0x1755ec: 0x8c294968  lw          $t1, 0x4968($at)
    ctx->pc = 0x1755ecu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x334968u));
    // 0x1755f0: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x1755f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
    // 0x1755f4: 0x9126024b  lbu         $a2, 0x24B($t1)
    ctx->pc = 0x1755f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 587)));
    // 0x1755f8: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x1755f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1755fc: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x1755fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x175600: 0x0  nop
    ctx->pc = 0x175600u;
    // NOP
    // 0x175604: 0x0  nop
    ctx->pc = 0x175604u;
    // NOP
    // 0x175608: 0x1810  mfhi        $v1
    ctx->pc = 0x175608u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x17560c: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x17560cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x175610: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x175610u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x175614: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x175614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x175618: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x175618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x17561c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17561Cu;
    {
        const bool branch_taken_0x17561c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17561c) {
            ctx->pc = 0x175628u;
            goto label_175628;
        }
    }
    ctx->pc = 0x175624u;
    // 0x175624: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x175624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_175628:
    // 0x175628: 0x9126024a  lbu         $a2, 0x24A($t1)
    ctx->pc = 0x175628u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 586)));
    // 0x17562c: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x17562cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x175630: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x175630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
    // 0x175634: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x175634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
    // 0x175638: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x175638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x17563c: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x17563cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x175640: 0x0  nop
    ctx->pc = 0x175640u;
    // NOP
    // 0x175644: 0x0  nop
    ctx->pc = 0x175644u;
    // NOP
    // 0x175648: 0x1810  mfhi        $v1
    ctx->pc = 0x175648u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x17564c: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x17564cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x175650: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x175650u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x175654: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x175654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x175658: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x175658u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x17565c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17565Cu;
    {
        const bool branch_taken_0x17565c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17565c) {
            ctx->pc = 0x175668u;
            goto label_175668;
        }
    }
    ctx->pc = 0x175664u;
    // 0x175664: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x175664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_175668:
    // 0x175668: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x175668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17566c: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x17566cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x175670: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x175670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175674: 0x2469000e  addiu       $t1, $v1, 0xE
    ctx->pc = 0x175674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x175678: 0x9063000e  lbu         $v1, 0xE($v1)
    ctx->pc = 0x175678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x17567c: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x17567cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x175680: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x175680u;
    {
        const bool branch_taken_0x175680 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x175684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175680u;
        // 0x175684: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175680) {
            ctx->pc = 0x175694u;
            goto label_175694;
        }
    }
    ctx->pc = 0x175688u;
    // 0x175688: 0x8c234afc  lw          $v1, 0x4AFC($at)
    ctx->pc = 0x175688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
    // 0x17568c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17568Cu;
    {
        const bool branch_taken_0x17568c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17568c) {
            ctx->pc = 0x175698u;
            goto label_175698;
        }
    }
    ctx->pc = 0x175694u;
label_175694:
    // 0x175694: 0xa1280000  sb          $t0, 0x0($t1)
    ctx->pc = 0x175694u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 8));
label_175698:
    // 0x175698: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x175698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17569c: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x17569cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1756a0: 0x2468000f  addiu       $t0, $v1, 0xF
    ctx->pc = 0x1756a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1756a4: 0x9063000f  lbu         $v1, 0xF($v1)
    ctx->pc = 0x1756a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x1756a8: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1756a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1756ac: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1756ACu;
    {
        const bool branch_taken_0x1756ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1756B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756ACu;
        // 0x1756b0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1756ac) {
            ctx->pc = 0x1756C0u;
            goto label_1756c0;
        }
    }
    ctx->pc = 0x1756B4u;
    // 0x1756b4: 0x8c234afc  lw          $v1, 0x4AFC($at)
    ctx->pc = 0x1756b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
    // 0x1756b8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1756B8u;
    {
        const bool branch_taken_0x1756b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1756b8) {
            ctx->pc = 0x1756C4u;
            goto label_1756c4;
        }
    }
    ctx->pc = 0x1756C0u;
label_1756c0:
    // 0x1756c0: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x1756c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
label_1756c4:
    // 0x1756c4: 0x90830039  lbu         $v1, 0x39($a0)
    ctx->pc = 0x1756c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
    // 0x1756c8: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x1756c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x1756cc: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x1756CCu;
    {
        const bool branch_taken_0x1756cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1756D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756CCu;
        // 0x1756d0: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1756cc) {
            ctx->pc = 0x175800u;
            goto label_175800;
        }
    }
    ctx->pc = 0x1756D4u;
    // 0x1756d4: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1756d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x1756d8: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1756d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1756dc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1756dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1756e0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1756e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1756e4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1756e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1756e8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1756e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1756ec: 0x10c00044  beqz        $a2, . + 4 + (0x44 << 2)
    ctx->pc = 0x1756ECu;
    {
        const bool branch_taken_0x1756ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1756ec) {
            ctx->pc = 0x175800u;
            goto label_175800;
        }
    }
    ctx->pc = 0x1756F4u;
    // 0x1756f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1756f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1756f8: 0x9063000e  lbu         $v1, 0xE($v1)
    ctx->pc = 0x1756f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1756fc: 0xa0c3024a  sb          $v1, 0x24A($a2)
    ctx->pc = 0x1756fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 586), (uint8_t)GPR_U32(ctx, 3));
    // 0x175700: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x175700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175704: 0x9063000f  lbu         $v1, 0xF($v1)
    ctx->pc = 0x175704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x175708: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x175708u;
    {
        const bool branch_taken_0x175708 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175708u;
        // 0x17570c: 0xa0c3024b  sb          $v1, 0x24B($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 587), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175708) {
            ctx->pc = 0x175720u;
            goto label_175720;
        }
    }
    ctx->pc = 0x175710u;
    // 0x175710: 0x90c50240  lbu         $a1, 0x240($a2)
    ctx->pc = 0x175710u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 576)));
    // 0x175714: 0x90830047  lbu         $v1, 0x47($a0)
    ctx->pc = 0x175714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 71)));
    // 0x175718: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x175718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x17571c: 0xa0c30240  sb          $v1, 0x240($a2)
    ctx->pc = 0x17571cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 576), (uint8_t)GPR_U32(ctx, 3));
label_175720:
    // 0x175720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175724: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x175724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x175728: 0x3c066666  lui         $a2, 0x6666
    ctx->pc = 0x175728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
    // 0x17572c: 0x34c96667  ori         $t1, $a2, 0x6667
    ctx->pc = 0x17572cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26215);
label_175730:
    // 0x175730: 0x90880039  lbu         $t0, 0x39($a0)
    ctx->pc = 0x175730u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
    // 0x175734: 0x8f8684e0  lw          $a2, -0x7B20($gp)
    ctx->pc = 0x175734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x175738: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x175738u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x17573c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x17573cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x175740: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x175740u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x175744: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x175744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x175748: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x175748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17574c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x17574cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x175750: 0x10c00026  beqz        $a2, . + 4 + (0x26 << 2)
    ctx->pc = 0x175750u;
    {
        const bool branch_taken_0x175750 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x175750) {
            ctx->pc = 0x1757ECu;
            goto label_1757ec;
        }
    }
    ctx->pc = 0x175758u;
    // 0x175758: 0x0  nop
    ctx->pc = 0x175758u;
    // NOP
    // 0x17575c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x17575cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175760: 0x90ea000e  lbu         $t2, 0xE($a3)
    ctx->pc = 0x175760u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x175764: 0xa3840  sll         $a3, $t2, 1
    ctx->pc = 0x175764u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x175768: 0x1270018  mult        $zero, $t1, $a3
    ctx->pc = 0x175768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x17576c: 0x747c2  srl         $t0, $a3, 31
    ctx->pc = 0x17576cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x175770: 0x0  nop
    ctx->pc = 0x175770u;
    // NOP
    // 0x175774: 0x3810  mfhi        $a3
    ctx->pc = 0x175774u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x175778: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x175778u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x17577c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x17577cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x175780: 0x28e10032  slti        $at, $a3, 0x32
    ctx->pc = 0x175780u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x175784: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x175784u;
    {
        const bool branch_taken_0x175784 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x175784) {
            ctx->pc = 0x175794u;
            goto label_175794;
        }
    }
    ctx->pc = 0x17578Cu;
    // 0x17578c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17578Cu;
    {
        const bool branch_taken_0x17578c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17578Cu;
        // 0x175790: 0x1473823  subu        $a3, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17578c) {
            ctx->pc = 0x17579Cu;
            goto label_17579c;
        }
    }
    ctx->pc = 0x175794u;
label_175794:
    // 0x175794: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x175794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x175798: 0x1473823  subu        $a3, $t2, $a3
    ctx->pc = 0x175798u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_17579c:
    // 0x17579c: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x17579cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1757a0: 0xa0c7024a  sb          $a3, 0x24A($a2)
    ctx->pc = 0x1757a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 586), (uint8_t)GPR_U32(ctx, 7));
    // 0x1757a4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1757a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1757a8: 0x90ea000f  lbu         $t2, 0xF($a3)
    ctx->pc = 0x1757a8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 15)));
    // 0x1757ac: 0xa3840  sll         $a3, $t2, 1
    ctx->pc = 0x1757acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1757b0: 0x1270018  mult        $zero, $t1, $a3
    ctx->pc = 0x1757b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1757b4: 0x747c2  srl         $t0, $a3, 31
    ctx->pc = 0x1757b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1757b8: 0x0  nop
    ctx->pc = 0x1757b8u;
    // NOP
    // 0x1757bc: 0x3810  mfhi        $a3
    ctx->pc = 0x1757bcu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1757c0: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x1757c0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x1757c4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1757c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1757c8: 0x28e10032  slti        $at, $a3, 0x32
    ctx->pc = 0x1757c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1757cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1757CCu;
    {
        const bool branch_taken_0x1757cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1757cc) {
            ctx->pc = 0x1757DCu;
            goto label_1757dc;
        }
    }
    ctx->pc = 0x1757D4u;
    // 0x1757d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1757D4u;
    {
        const bool branch_taken_0x1757d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757D4u;
        // 0x1757d8: 0x1473823  subu        $a3, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757d4) {
            ctx->pc = 0x1757E4u;
            goto label_1757e4;
        }
    }
    ctx->pc = 0x1757DCu;
label_1757dc:
    // 0x1757dc: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x1757dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1757e0: 0x1473823  subu        $a3, $t2, $a3
    ctx->pc = 0x1757e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_1757e4:
    // 0x1757e4: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x1757e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1757e8: 0xa0c7024b  sb          $a3, 0x24B($a2)
    ctx->pc = 0x1757e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 587), (uint8_t)GPR_U32(ctx, 7));
label_1757ec:
    // 0x1757ec: 0x0  nop
    ctx->pc = 0x1757ecu;
    // NOP
    // 0x1757f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1757f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1757f4: 0x28660009  slti        $a2, $v1, 0x9
    ctx->pc = 0x1757f4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1757f8: 0x14c0ffcd  bnez        $a2, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1757F8u;
    {
        const bool branch_taken_0x1757f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1757FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757F8u;
        // 0x1757fc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757f8) {
            ctx->pc = 0x175730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175730;
        }
    }
    ctx->pc = 0x175800u;
label_175800:
    // 0x175800: 0x3e00008  jr          $ra
    ctx->pc = 0x175800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175808u;
    // 0x175808: 0x0  nop
    ctx->pc = 0x175808u;
    // NOP
    // 0x17580c: 0x0  nop
    ctx->pc = 0x17580cu;
    // NOP
    ctx->pc = 0x175810u;
}
