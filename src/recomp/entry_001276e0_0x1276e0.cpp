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

// Function: entry_001276e0
// Address: 0x1276e0 - 0x1278c8
void entry_001276e0_0x1276e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001276e0_0x1276e0");
#endif

    ctx->pc = 0x1276e0u;

    // 0x1276e0: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x1276e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    // 0x1276e4: 0x2c610017  sltiu       $at, $v1, 0x17
    ctx->pc = 0x1276e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1276e8: 0x10200077  beqz        $at, . + 4 + (0x77 << 2)
    ctx->pc = 0x1276E8u;
    {
        const bool branch_taken_0x1276e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276E8u;
        // 0x1276ec: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276e8) {
            ctx->pc = 0x1278C8u;
            return;
        }
    }
    ctx->pc = 0x1276F0u;
    // 0x1276f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1276f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1276f4: 0x24845490  addiu       $a0, $a0, 0x5490
    ctx->pc = 0x1276f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21648));
    // 0x1276f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1276f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1276fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1276fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127700: 0x600008  jr          $v1
    ctx->pc = 0x127700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127708u: goto label_127708;
            case 0x127724u: goto label_127724;
            case 0x127740u: goto label_127740;
            case 0x12775Cu: goto label_12775c;
            case 0x127778u: goto label_127778;
            case 0x127794u: goto label_127794;
            case 0x1277B0u: goto label_1277b0;
            case 0x1277CCu: goto label_1277cc;
            case 0x1277E8u: goto label_1277e8;
            case 0x127804u: goto label_127804;
            case 0x127820u: goto label_127820;
            case 0x12783Cu: goto label_12783c;
            case 0x127858u: goto label_127858;
            case 0x127874u: goto label_127874;
            case 0x127890u: goto label_127890;
            case 0x1278ACu: goto label_1278ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127700u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x127708u;
label_127708:
    // 0x127708: 0x240300cf  addiu       $v1, $zero, 0xCF
    ctx->pc = 0x127708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x12770c: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x12770cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x127710: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127710u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127714: 0x24030099  addiu       $v1, $zero, 0x99
    ctx->pc = 0x127714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x127718: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127718u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x12771c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x12771Cu;
    {
        const bool branch_taken_0x12771c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12771Cu;
        // 0x127720: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12771c) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127724u;
label_127724:
    // 0x127724: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x127724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x127728: 0x2404008d  addiu       $a0, $zero, 0x8D
    ctx->pc = 0x127728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x12772c: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x12772cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127730: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x127730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x127734: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127734u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127738: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x127738u;
    {
        const bool branch_taken_0x127738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127738u;
        // 0x12773c: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127738) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127740u;
label_127740:
    // 0x127740: 0x240300c3  addiu       $v1, $zero, 0xC3
    ctx->pc = 0x127740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    // 0x127744: 0x240400bb  addiu       $a0, $zero, 0xBB
    ctx->pc = 0x127744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x127748: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127748u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x12774c: 0x240300a6  addiu       $v1, $zero, 0xA6
    ctx->pc = 0x12774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x127750: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127750u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127754: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x127754u;
    {
        const bool branch_taken_0x127754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127754u;
        // 0x127758: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127754) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x12775Cu;
label_12775c:
    // 0x12775c: 0x24030097  addiu       $v1, $zero, 0x97
    ctx->pc = 0x12775cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x127760: 0x2404008b  addiu       $a0, $zero, 0x8B
    ctx->pc = 0x127760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x127764: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127764u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127768: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x127768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x12776c: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x12776cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127770: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x127770u;
    {
        const bool branch_taken_0x127770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127770u;
        // 0x127774: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127770) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127778u;
label_127778:
    // 0x127778: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x127778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x12777c: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x12777cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x127780: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127780u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127784: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x127784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x127788: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127788u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x12778c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x12778Cu;
    {
        const bool branch_taken_0x12778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12778Cu;
        // 0x127790: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12778c) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127794u;
label_127794:
    // 0x127794: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x127794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x127798: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x127798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x12779c: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x12779cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1277a0: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x1277a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1277a4: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1277a4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1277a8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1277A8u;
    {
        const bool branch_taken_0x1277a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277A8u;
        // 0x1277ac: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277a8) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1277B0u;
label_1277b0:
    // 0x1277b0: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1277b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1277b4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1277b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1277b8: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1277b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1277bc: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1277bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1277c0: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1277c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1277c4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1277C4u;
    {
        const bool branch_taken_0x1277c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277C4u;
        // 0x1277c8: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277c4) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1277CCu;
label_1277cc:
    // 0x1277cc: 0x240300cf  addiu       $v1, $zero, 0xCF
    ctx->pc = 0x1277ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x1277d0: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x1277d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1277d4: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1277d4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1277d8: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x1277d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1277dc: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1277dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1277e0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1277E0u;
    {
        const bool branch_taken_0x1277e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277E0u;
        // 0x1277e4: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277e0) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1277E8u;
label_1277e8:
    // 0x1277e8: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x1277e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1277ec: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x1277ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1277f0: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1277f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1277f4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1277f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1277f8: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1277f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1277fc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1277FCu;
    {
        const bool branch_taken_0x1277fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277FCu;
        // 0x127800: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277fc) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127804u;
label_127804:
    // 0x127804: 0x240300af  addiu       $v1, $zero, 0xAF
    ctx->pc = 0x127804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x127808: 0x2404009e  addiu       $a0, $zero, 0x9E
    ctx->pc = 0x127808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x12780c: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x12780cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127810: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x127810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x127814: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127814u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127818: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x127818u;
    {
        const bool branch_taken_0x127818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127818u;
        // 0x12781c: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127818) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127820u;
label_127820:
    // 0x127820: 0x24030097  addiu       $v1, $zero, 0x97
    ctx->pc = 0x127820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x127824: 0x2404008b  addiu       $a0, $zero, 0x8B
    ctx->pc = 0x127824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x127828: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127828u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x12782c: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x12782cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x127830: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127830u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127834: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x127834u;
    {
        const bool branch_taken_0x127834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127834u;
        // 0x127838: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127834) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x12783Cu;
label_12783c:
    // 0x12783c: 0x24030097  addiu       $v1, $zero, 0x97
    ctx->pc = 0x12783cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x127840: 0x2404008b  addiu       $a0, $zero, 0x8B
    ctx->pc = 0x127840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x127844: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127844u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127848: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x127848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12784c: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x12784cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127850: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x127850u;
    {
        const bool branch_taken_0x127850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127850u;
        // 0x127854: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127850) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127858u;
label_127858:
    // 0x127858: 0x24030089  addiu       $v1, $zero, 0x89
    ctx->pc = 0x127858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x12785c: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x12785cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x127860: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127860u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127864: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x127864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x127868: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127868u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x12786c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x12786Cu;
    {
        const bool branch_taken_0x12786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12786Cu;
        // 0x127870: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12786c) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127874u;
label_127874:
    // 0x127874: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x127874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x127878: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x127878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x12787c: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x12787cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x127880: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x127880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x127884: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x127884u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x127888: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x127888u;
    {
        const bool branch_taken_0x127888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127888u;
        // 0x12788c: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127888) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x127890u;
label_127890:
    // 0x127890: 0x240300af  addiu       $v1, $zero, 0xAF
    ctx->pc = 0x127890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x127894: 0x2404009b  addiu       $a0, $zero, 0x9B
    ctx->pc = 0x127894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x127898: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x127898u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x12789c: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x12789cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x1278a0: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1278a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1278a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1278A4u;
    {
        const bool branch_taken_0x1278a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1278A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278A4u;
        // 0x1278a8: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278a4) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1278ACu;
label_1278ac:
    // 0x1278ac: 0x240300bc  addiu       $v1, $zero, 0xBC
    ctx->pc = 0x1278acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x1278b0: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x1278b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1278b4: 0xa38384f4  sb          $v1, -0x7B0C($gp)
    ctx->pc = 0x1278b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1278b8: 0x240300b5  addiu       $v1, $zero, 0xB5
    ctx->pc = 0x1278b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
    // 0x1278bc: 0xa38484f0  sb          $a0, -0x7B10($gp)
    ctx->pc = 0x1278bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935792), (uint8_t)GPR_U32(ctx, 4));
    // 0x1278c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1278C0u;
    {
        const bool branch_taken_0x1278c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1278C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278C0u;
        // 0x1278c4: 0xa38384ec  sb          $v1, -0x7B14($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278c0) {
            ctx->pc = 0x1278E0u;
            return;
        }
    }
    ctx->pc = 0x1278C8u;
}
