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

// Function: FUN_001491f0
// Address: 0x1491f0 - 0x14936c
void FUN_001491f0_0x1491f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001491f0_0x1491f0");
#endif

    switch (ctx->pc) {
        case 0x14932cu: goto label_14932c;
        case 0x14934cu: goto label_14934c;
        default: break;
    }

    ctx->pc = 0x1491f0u;

    // 0x1491f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1491f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1491f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1491f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1491f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1491f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1491fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1491fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149204: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149208: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14920c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14920cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149210: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x149210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x149214: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149214u;
    {
        const bool branch_taken_0x149214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x149218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149214u;
        // 0x149218: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149214) {
            ctx->pc = 0x149234u;
            goto label_149234;
        }
    }
    ctx->pc = 0x14921Cu;
    // 0x14921c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x149220: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149220u;
    {
        const bool branch_taken_0x149220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x149220) {
            ctx->pc = 0x149234u;
            goto label_149234;
        }
    }
    ctx->pc = 0x149228u;
    // 0x149228: 0x8622002c  lh          $v0, 0x2C($s1)
    ctx->pc = 0x149228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x14922c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x14922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x149230: 0xa622002c  sh          $v0, 0x2C($s1)
    ctx->pc = 0x149230u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
label_149234:
    // 0x149234: 0x8622002c  lh          $v0, 0x2C($s1)
    ctx->pc = 0x149234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x149238: 0x28411771  slti        $at, $v0, 0x1771
    ctx->pc = 0x149238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6001) ? 1 : 0);
    // 0x14923c: 0x14200040  bnez        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x14923Cu;
    {
        const bool branch_taken_0x14923c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14923c) {
            ctx->pc = 0x149340u;
            goto label_149340;
        }
    }
    ctx->pc = 0x149244u;
    // 0x149244: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x149244u;
    {
        const bool branch_taken_0x149244 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x149244) {
            ctx->pc = 0x149260u;
            goto label_149260;
        }
    }
    ctx->pc = 0x14924Cu;
    // 0x14924c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149250: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x149250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x149254: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x149254u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x149258: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x149258u;
    {
        const bool branch_taken_0x149258 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x149258) {
            ctx->pc = 0x149274u;
            goto label_149274;
        }
    }
    ctx->pc = 0x149260u;
label_149260:
    // 0x149260: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x149260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x149264: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x149264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x149268: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x149268u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x14926c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14926Cu;
    {
        const bool branch_taken_0x14926c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x149270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14926Cu;
        // 0x149270: 0x24031770  addiu       $v1, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14926c) {
            ctx->pc = 0x14927Cu;
            goto label_14927c;
        }
    }
    ctx->pc = 0x149274u;
label_149274:
    // 0x149274: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x149274u;
    {
        const bool branch_taken_0x149274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149274u;
        // 0x149278: 0xa620002c  sh          $zero, 0x2C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149274) {
            ctx->pc = 0x149364u;
            goto label_149364;
        }
    }
    ctx->pc = 0x14927Cu;
label_14927c:
    // 0x14927c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149280: 0xa623002c  sh          $v1, 0x2C($s1)
    ctx->pc = 0x149280u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x149284: 0xa2220036  sb          $v0, 0x36($s1)
    ctx->pc = 0x149284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 2));
    // 0x149288: 0x92220037  lbu         $v0, 0x37($s1)
    ctx->pc = 0x149288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x14928c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14928Cu;
    {
        const bool branch_taken_0x14928c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14928c) {
            ctx->pc = 0x1492BCu;
            goto label_1492bc;
        }
    }
    ctx->pc = 0x149294u;
    // 0x149294: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x149294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14929c: 0x90630014  lbu         $v1, 0x14($v1)
    ctx->pc = 0x14929cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1492a0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1492A0u;
    {
        const bool branch_taken_0x1492a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1492A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1492A0u;
        // 0x1492a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1492a0) {
            ctx->pc = 0x1492BCu;
            goto label_1492bc;
        }
    }
    ctx->pc = 0x1492A8u;
    // 0x1492a8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1492A8u;
    {
        const bool branch_taken_0x1492a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1492a8) {
            ctx->pc = 0x1492BCu;
            goto label_1492bc;
        }
    }
    ctx->pc = 0x1492B0u;
    // 0x1492b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1492b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1492b4: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1492B4u;
    {
        const bool branch_taken_0x1492b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1492B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1492B4u;
        // 0x1492b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1492b4) {
            ctx->pc = 0x149368u;
            goto label_149368;
        }
    }
    ctx->pc = 0x1492BCu;
label_1492bc:
    // 0x1492bc: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x1492bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x1492c0: 0x92270026  lbu         $a3, 0x26($s1)
    ctx->pc = 0x1492c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x1492c4: 0x14470027  bne         $v0, $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x1492C4u;
    {
        const bool branch_taken_0x1492c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1492c4) {
            ctx->pc = 0x149364u;
            goto label_149364;
        }
    }
    ctx->pc = 0x1492CCu;
    // 0x1492cc: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x1492ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x1492d0: 0x92220027  lbu         $v0, 0x27($s1)
    ctx->pc = 0x1492d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x1492d4: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1492D4u;
    {
        const bool branch_taken_0x1492d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1492d4) {
            ctx->pc = 0x149364u;
            goto label_149364;
        }
    }
    ctx->pc = 0x1492DCu;
    // 0x1492dc: 0x92260020  lbu         $a2, 0x20($s1)
    ctx->pc = 0x1492dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1492e0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1492e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1492e4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1492e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1492e8: 0x2442f210  addiu       $v0, $v0, -0xDF0
    ctx->pc = 0x1492e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
    // 0x1492ec: 0x2463f212  addiu       $v1, $v1, -0xDEE
    ctx->pc = 0x1492ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963730));
    // 0x1492f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1492f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492f4: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x1492f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1492f8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1492f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1492fc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1492fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x149300: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x149300u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149304: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x149304u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x149308: 0xa3a2003c  sb          $v0, 0x3C($sp)
    ctx->pc = 0x149308u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 2));
    // 0x14930c: 0x92260020  lbu         $a2, 0x20($s1)
    ctx->pc = 0x14930cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x149310: 0x82220027  lb          $v0, 0x27($s1)
    ctx->pc = 0x149310u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x149314: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x149314u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x149318: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x149318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14931c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x14931cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149320: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x149320u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149324: 0xc0528fc  jal         func_14A3F0
    ctx->pc = 0x149324u;
    SET_GPR_U32(ctx, 31, 0x14932Cu);
    ctx->pc = 0x149328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149324u;
    // 0x149328: 0xa3a2003d  sb          $v0, 0x3D($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 61), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3F0u, 0x149324u, 0x14932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14932Cu;
label_14932c:
    // 0x14932c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14932Cu;
    {
        const bool branch_taken_0x14932c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14932c) {
            ctx->pc = 0x149364u;
            goto label_149364;
        }
    }
    ctx->pc = 0x149334u;
    // 0x149334: 0xa620002c  sh          $zero, 0x2C($s1)
    ctx->pc = 0x149334u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x149338: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x149338u;
    {
        const bool branch_taken_0x149338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149338u;
        // 0x14933c: 0xa2200036  sb          $zero, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149338) {
            ctx->pc = 0x149364u;
            goto label_149364;
        }
    }
    ctx->pc = 0x149340u;
label_149340:
    // 0x149340: 0x92250038  lbu         $a1, 0x38($s1)
    ctx->pc = 0x149340u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x149344: 0xc05257c  jal         func_1495F0
    ctx->pc = 0x149344u;
    SET_GPR_U32(ctx, 31, 0x14934Cu);
    ctx->pc = 0x149348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149344u;
    // 0x149348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1495F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1495F0u, 0x149344u, 0x14934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14934Cu;
label_14934c:
    // 0x14934c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14934Cu;
    {
        const bool branch_taken_0x14934c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14934c) {
            ctx->pc = 0x14935Cu;
            goto label_14935c;
        }
    }
    ctx->pc = 0x149354u;
    // 0x149354: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149354u;
    {
        const bool branch_taken_0x149354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149354u;
        // 0x149358: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149354) {
            ctx->pc = 0x149364u;
            goto label_149364;
        }
    }
    ctx->pc = 0x14935Cu;
label_14935c:
    // 0x14935c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149360: 0xa2220036  sb          $v0, 0x36($s1)
    ctx->pc = 0x149360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 2));
label_149364:
    // 0x149364: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x149364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_149368:
    // 0x149368: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x149368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x14936cu;
}
