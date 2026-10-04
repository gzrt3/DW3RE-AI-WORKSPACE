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

// Function: FUN_00111390
// Address: 0x111390 - 0x1116e8
void FUN_00111390_0x111390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00111390_0x111390");
#endif

    ctx->pc = 0x111390u;

    // 0x111390: 0x90880036  lbu         $t0, 0x36($a0)
    ctx->pc = 0x111390u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x111394: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x111394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x111398: 0x110300d3  beq         $t0, $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x111398u;
    {
        const bool branch_taken_0x111398 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x11139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111398u;
        // 0x11139c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111398) {
            ctx->pc = 0x1116E8u;
            return;
        }
    }
    ctx->pc = 0x1113A0u;
    // 0x1113a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1113a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1113a4: 0x110300d0  beq         $t0, $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x1113A4u;
    {
        const bool branch_taken_0x1113a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x1113a4) {
            ctx->pc = 0x1116E8u;
            return;
        }
    }
    ctx->pc = 0x1113ACu;
    // 0x1113ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1113acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1113b0: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1113b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1113b4: 0x106000cc  beqz        $v1, . + 4 + (0xCC << 2)
    ctx->pc = 0x1113B4u;
    {
        const bool branch_taken_0x1113b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1113b4) {
            ctx->pc = 0x1116E8u;
            return;
        }
    }
    ctx->pc = 0x1113BCu;
    // 0x1113bc: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x1113bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1113c0: 0x29230010  slti        $v1, $t1, 0x10
    ctx->pc = 0x1113c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1113c4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1113C4u;
    {
        const bool branch_taken_0x1113c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1113C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113C4u;
        // 0x1113c8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113c4) {
            ctx->pc = 0x1113F4u;
            goto label_1113f4;
        }
    }
    ctx->pc = 0x1113CCu;
    // 0x1113cc: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x1113ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1113d0: 0x3c0a0030  lui         $t2, 0x30
    ctx->pc = 0x1113d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)48 << 16));
    // 0x1113d4: 0x35a00  sll         $t3, $v1, 8
    ctx->pc = 0x1113d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1113d8: 0x254a0dc0  addiu       $t2, $t2, 0xDC0
    ctx->pc = 0x1113d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3520));
    // 0x1113dc: 0x2523fff0  addiu       $v1, $t1, -0x10
    ctx->pc = 0x1113dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x1113e0: 0x14b5821  addu        $t3, $t2, $t3
    ctx->pc = 0x1113e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1113e4: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x1113e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1113e8: 0x25630000  addiu       $v1, $t3, 0x0
    ctx->pc = 0x1113e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 0));
    // 0x1113ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1113ECu;
    {
        const bool branch_taken_0x1113ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113ECu;
        // 0x1113f0: 0x6a1821  addu        $v1, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113ec) {
            ctx->pc = 0x111410u;
            goto label_111410;
        }
    }
    ctx->pc = 0x1113F4u;
label_1113f4:
    // 0x1113f4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1113f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1113f8: 0x55200  sll         $t2, $a1, 8
    ctx->pc = 0x1113f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1113fc: 0x24630dc0  addiu       $v1, $v1, 0xDC0
    ctx->pc = 0x1113fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3520));
    // 0x111400: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x111400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x111404: 0x95100  sll         $t2, $t1, 4
    ctx->pc = 0x111404u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x111408: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x111408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x11140c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x11140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_111410:
    // 0x111410: 0x10c00081  beqz        $a2, . + 4 + (0x81 << 2)
    ctx->pc = 0x111410u;
    {
        const bool branch_taken_0x111410 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x111410) {
            ctx->pc = 0x111618u;
            goto label_111618;
        }
    }
    ctx->pc = 0x111418u;
    // 0x111418: 0x9086003a  lbu         $a2, 0x3A($a0)
    ctx->pc = 0x111418u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x11141c: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x11141cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x111420: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x111420u;
    {
        const bool branch_taken_0x111420 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x111420) {
            ctx->pc = 0x11144Cu;
            goto label_11144c;
        }
    }
    ctx->pc = 0x111428u;
    // 0x111428: 0x906b000c  lbu         $t3, 0xC($v1)
    ctx->pc = 0x111428u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x11142c: 0x906a0004  lbu         $t2, 0x4($v1)
    ctx->pc = 0x11142cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x111430: 0x90660005  lbu         $a2, 0x5($v1)
    ctx->pc = 0x111430u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x111434: 0x29610009  slti        $at, $t3, 0x9
    ctx->pc = 0x111434u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x111438: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x111438u;
    {
        const bool branch_taken_0x111438 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x11143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111438u;
        // 0x11143c: 0x1465021  addu        $t2, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111438) {
            ctx->pc = 0x111444u;
            goto label_111444;
        }
    }
    ctx->pc = 0x111440u;
    // 0x111440: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x111440u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_111444:
    // 0x111444: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x111444u;
    {
        const bool branch_taken_0x111444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111444u;
        // 0x111448: 0x90860026  lbu         $a2, 0x26($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111444) {
            ctx->pc = 0x111470u;
            goto label_111470;
        }
    }
    ctx->pc = 0x11144Cu;
label_11144c:
    // 0x11144c: 0x906b000d  lbu         $t3, 0xD($v1)
    ctx->pc = 0x11144cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x111450: 0x906a0006  lbu         $t2, 0x6($v1)
    ctx->pc = 0x111450u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x111454: 0x90660007  lbu         $a2, 0x7($v1)
    ctx->pc = 0x111454u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x111458: 0x29610009  slti        $at, $t3, 0x9
    ctx->pc = 0x111458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x11145c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11145Cu;
    {
        const bool branch_taken_0x11145c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x111460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11145Cu;
        // 0x111460: 0x1465021  addu        $t2, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11145c) {
            ctx->pc = 0x11146Cu;
            goto label_11146c;
        }
    }
    ctx->pc = 0x111464u;
    // 0x111464: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x111464u;
    {
        const bool branch_taken_0x111464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111464u;
        // 0x111468: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111464) {
            ctx->pc = 0x11146Cu;
            goto label_11146c;
        }
    }
    ctx->pc = 0x11146Cu;
label_11146c:
    // 0x11146c: 0x90860026  lbu         $a2, 0x26($a0)
    ctx->pc = 0x11146cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
label_111470:
    // 0x111470: 0x14c50004  bne         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111470u;
    {
        const bool branch_taken_0x111470 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x111470) {
            ctx->pc = 0x111484u;
            goto label_111484;
        }
    }
    ctx->pc = 0x111478u;
    // 0x111478: 0x90860027  lbu         $a2, 0x27($a0)
    ctx->pc = 0x111478u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x11147c: 0x10c90038  beq         $a2, $t1, . + 4 + (0x38 << 2)
    ctx->pc = 0x11147Cu;
    {
        const bool branch_taken_0x11147c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x111480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11147Cu;
        // 0x111480: 0x16a082a  slt         $at, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11147c) {
            ctx->pc = 0x111560u;
            goto label_111560;
        }
    }
    ctx->pc = 0x111484u;
label_111484:
    // 0x111484: 0x90860022  lbu         $a2, 0x22($a0)
    ctx->pc = 0x111484u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x111488: 0x14c50004  bne         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111488u;
    {
        const bool branch_taken_0x111488 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x111488) {
            ctx->pc = 0x11149Cu;
            goto label_11149c;
        }
    }
    ctx->pc = 0x111490u;
    // 0x111490: 0x90860023  lbu         $a2, 0x23($a0)
    ctx->pc = 0x111490u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x111494: 0x10c9001b  beq         $a2, $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x111494u;
    {
        const bool branch_taken_0x111494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x111494) {
            ctx->pc = 0x111504u;
            goto label_111504;
        }
    }
    ctx->pc = 0x11149Cu;
label_11149c:
    // 0x11149c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x11149cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1114a0: 0x16a082a  slt         $at, $t3, $t2
    ctx->pc = 0x1114a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1114a4: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1114A4u;
    {
        const bool branch_taken_0x1114a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1114a4) {
            ctx->pc = 0x1114FCu;
            goto label_1114fc;
        }
    }
    ctx->pc = 0x1114ACu;
    // 0x1114ac: 0x9066000e  lbu         $a2, 0xE($v1)
    ctx->pc = 0x1114acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1114b0: 0xca082a  slt         $at, $a2, $t2
    ctx->pc = 0x1114b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1114b4: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1114B4u;
    {
        const bool branch_taken_0x1114b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1114b4) {
            ctx->pc = 0x1114FCu;
            goto label_1114fc;
        }
    }
    ctx->pc = 0x1114BCu;
    // 0x1114bc: 0x908a0034  lbu         $t2, 0x34($a0)
    ctx->pc = 0x1114bcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1114c0: 0x2466000a  addiu       $a2, $v1, 0xA
    ctx->pc = 0x1114c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1114c4: 0x908b002a  lbu         $t3, 0x2A($a0)
    ctx->pc = 0x1114c4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1114c8: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1114c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1114cc: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1114ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1114d0: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x1114d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1114d4: 0x28c1001c  slti        $at, $a2, 0x1C
    ctx->pc = 0x1114d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1114d8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1114D8u;
    {
        const bool branch_taken_0x1114d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1114d8) {
            ctx->pc = 0x1114FCu;
            goto label_1114fc;
        }
    }
    ctx->pc = 0x1114E0u;
    // 0x1114e0: 0x906a000a  lbu         $t2, 0xA($v1)
    ctx->pc = 0x1114e0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1114e4: 0x9066000b  lbu         $a2, 0xB($v1)
    ctx->pc = 0x1114e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x1114e8: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x1114e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1114ec: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x1114ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x1114f0: 0x28c10025  slti        $at, $a2, 0x25
    ctx->pc = 0x1114f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x1114f4: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x1114F4u;
    {
        const bool branch_taken_0x1114f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1114f4) {
            ctx->pc = 0x111618u;
            goto label_111618;
        }
    }
    ctx->pc = 0x1114FCu;
label_1114fc:
    // 0x1114fc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1114FCu;
    {
        const bool branch_taken_0x1114fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114FCu;
        // 0x111500: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114fc) {
            ctx->pc = 0x111618u;
            goto label_111618;
        }
    }
    ctx->pc = 0x111504u;
label_111504:
    // 0x111504: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x111504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x111508: 0x16a082a  slt         $at, $t3, $t2
    ctx->pc = 0x111508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x11150c: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x11150Cu;
    {
        const bool branch_taken_0x11150c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x11150c) {
            ctx->pc = 0x111558u;
            goto label_111558;
        }
    }
    ctx->pc = 0x111514u;
    // 0x111514: 0x9066000e  lbu         $a2, 0xE($v1)
    ctx->pc = 0x111514u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x111518: 0xca082a  slt         $at, $a2, $t2
    ctx->pc = 0x111518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x11151c: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x11151Cu;
    {
        const bool branch_taken_0x11151c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x11151c) {
            ctx->pc = 0x111558u;
            goto label_111558;
        }
    }
    ctx->pc = 0x111524u;
    // 0x111524: 0x908a0034  lbu         $t2, 0x34($a0)
    ctx->pc = 0x111524u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x111528: 0x2466000a  addiu       $a2, $v1, 0xA
    ctx->pc = 0x111528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x11152c: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x11152cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x111530: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x111530u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x111534: 0x28c1001c  slti        $at, $a2, 0x1C
    ctx->pc = 0x111534u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x111538: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x111538u;
    {
        const bool branch_taken_0x111538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x111538) {
            ctx->pc = 0x111558u;
            goto label_111558;
        }
    }
    ctx->pc = 0x111540u;
    // 0x111540: 0x906a000a  lbu         $t2, 0xA($v1)
    ctx->pc = 0x111540u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x111544: 0x9066000b  lbu         $a2, 0xB($v1)
    ctx->pc = 0x111544u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x111548: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x111548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x11154c: 0x28c10025  slti        $at, $a2, 0x25
    ctx->pc = 0x11154cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x111550: 0x14200031  bnez        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x111550u;
    {
        const bool branch_taken_0x111550 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x111550) {
            ctx->pc = 0x111618u;
            goto label_111618;
        }
    }
    ctx->pc = 0x111558u;
label_111558:
    // 0x111558: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x111558u;
    {
        const bool branch_taken_0x111558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111558u;
        // 0x11155c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111558) {
            ctx->pc = 0x111618u;
            goto label_111618;
        }
    }
    ctx->pc = 0x111560u;
label_111560:
    // 0x111560: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x111560u;
    {
        const bool branch_taken_0x111560 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x111560) {
            ctx->pc = 0x111578u;
            goto label_111578;
        }
    }
    ctx->pc = 0x111568u;
    // 0x111568: 0x9066000e  lbu         $a2, 0xE($v1)
    ctx->pc = 0x111568u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x11156c: 0xca082a  slt         $at, $a2, $t2
    ctx->pc = 0x11156cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x111570: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x111570u;
    {
        const bool branch_taken_0x111570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x111570) {
            ctx->pc = 0x111580u;
            goto label_111580;
        }
    }
    ctx->pc = 0x111578u;
label_111578:
    // 0x111578: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x111578u;
    {
        const bool branch_taken_0x111578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111578u;
        // 0x11157c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111578) {
            ctx->pc = 0x111618u;
            goto label_111618;
        }
    }
    ctx->pc = 0x111580u;
label_111580:
    // 0x111580: 0x90860022  lbu         $a2, 0x22($a0)
    ctx->pc = 0x111580u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x111584: 0x14c50004  bne         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111584u;
    {
        const bool branch_taken_0x111584 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x111584) {
            ctx->pc = 0x111598u;
            goto label_111598;
        }
    }
    ctx->pc = 0x11158Cu;
    // 0x11158c: 0x90860023  lbu         $a2, 0x23($a0)
    ctx->pc = 0x11158cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x111590: 0x10c90013  beq         $a2, $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x111590u;
    {
        const bool branch_taken_0x111590 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x111590) {
            ctx->pc = 0x1115E0u;
            goto label_1115e0;
        }
    }
    ctx->pc = 0x111598u;
label_111598:
    // 0x111598: 0x908a0034  lbu         $t2, 0x34($a0)
    ctx->pc = 0x111598u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11159c: 0x2466000a  addiu       $a2, $v1, 0xA
    ctx->pc = 0x11159cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1115a0: 0x908b002a  lbu         $t3, 0x2A($a0)
    ctx->pc = 0x1115a0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1115a4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1115a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1115a8: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1115a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1115ac: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x1115acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1115b0: 0x28c1001c  slti        $at, $a2, 0x1C
    ctx->pc = 0x1115b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1115b4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1115B4u;
    {
        const bool branch_taken_0x1115b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1115b4) {
            ctx->pc = 0x1115D8u;
            goto label_1115d8;
        }
    }
    ctx->pc = 0x1115BCu;
    // 0x1115bc: 0x906a000a  lbu         $t2, 0xA($v1)
    ctx->pc = 0x1115bcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1115c0: 0x9066000b  lbu         $a2, 0xB($v1)
    ctx->pc = 0x1115c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x1115c4: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x1115c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1115c8: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x1115c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x1115cc: 0x28c10025  slti        $at, $a2, 0x25
    ctx->pc = 0x1115ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x1115d0: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1115D0u;
    {
        const bool branch_taken_0x1115d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1115d0) {
            ctx->pc = 0x111618u;
            goto label_111618;
        }
    }
    ctx->pc = 0x1115D8u;
label_1115d8:
    // 0x1115d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1115D8u;
    {
        const bool branch_taken_0x1115d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115D8u;
        // 0x1115dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115d8) {
            ctx->pc = 0x111618u;
            goto label_111618;
        }
    }
    ctx->pc = 0x1115E0u;
label_1115e0:
    // 0x1115e0: 0x908a0034  lbu         $t2, 0x34($a0)
    ctx->pc = 0x1115e0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1115e4: 0x2466000a  addiu       $a2, $v1, 0xA
    ctx->pc = 0x1115e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1115e8: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1115e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1115ec: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1115ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1115f0: 0x28c1001c  slti        $at, $a2, 0x1C
    ctx->pc = 0x1115f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1115f4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1115F4u;
    {
        const bool branch_taken_0x1115f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1115f4) {
            ctx->pc = 0x111614u;
            goto label_111614;
        }
    }
    ctx->pc = 0x1115FCu;
    // 0x1115fc: 0x906a000a  lbu         $t2, 0xA($v1)
    ctx->pc = 0x1115fcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x111600: 0x9066000b  lbu         $a2, 0xB($v1)
    ctx->pc = 0x111600u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x111604: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x111604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x111608: 0x28c10025  slti        $at, $a2, 0x25
    ctx->pc = 0x111608u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x11160c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x11160Cu;
    {
        const bool branch_taken_0x11160c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x11160c) {
            ctx->pc = 0x111618u;
            goto label_111618;
        }
    }
    ctx->pc = 0x111614u;
label_111614:
    // 0x111614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x111614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_111618:
    // 0x111618: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x111618u;
    {
        const bool branch_taken_0x111618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111618) {
            ctx->pc = 0x1116E8u;
            return;
        }
    }
    ctx->pc = 0x111620u;
    // 0x111620: 0x90860022  lbu         $a2, 0x22($a0)
    ctx->pc = 0x111620u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x111624: 0x14c50004  bne         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111624u;
    {
        const bool branch_taken_0x111624 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x111624) {
            ctx->pc = 0x111638u;
            goto label_111638;
        }
    }
    ctx->pc = 0x11162Cu;
    // 0x11162c: 0x90850023  lbu         $a1, 0x23($a0)
    ctx->pc = 0x11162cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x111630: 0x10a9002d  beq         $a1, $t1, . + 4 + (0x2D << 2)
    ctx->pc = 0x111630u;
    {
        const bool branch_taken_0x111630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x111630) {
            ctx->pc = 0x1116E8u;
            return;
        }
    }
    ctx->pc = 0x111638u;
label_111638:
    // 0x111638: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x111638u;
    {
        const bool branch_taken_0x111638 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111638u;
        // 0x11163c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111638) {
            ctx->pc = 0x111698u;
            goto label_111698;
        }
    }
    ctx->pc = 0x111640u;
    // 0x111640: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111644: 0x1105000a  beq         $t0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x111644u;
    {
        const bool branch_taken_0x111644 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x111644) {
            ctx->pc = 0x111670u;
            goto label_111670;
        }
    }
    ctx->pc = 0x11164Cu;
    // 0x11164c: 0x90870034  lbu         $a3, 0x34($a0)
    ctx->pc = 0x11164cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x111650: 0x2466000a  addiu       $a2, $v1, 0xA
    ctx->pc = 0x111650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x111654: 0x9085002a  lbu         $a1, 0x2A($a0)
    ctx->pc = 0x111654u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x111658: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x111658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x11165c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x11165cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x111660: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x111660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x111664: 0x28a10025  slti        $at, $a1, 0x25
    ctx->pc = 0x111664u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x111668: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x111668u;
    {
        const bool branch_taken_0x111668 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x111668) {
            ctx->pc = 0x111690u;
            goto label_111690;
        }
    }
    ctx->pc = 0x111670u;
label_111670:
    // 0x111670: 0x9065000a  lbu         $a1, 0xA($v1)
    ctx->pc = 0x111670u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x111674: 0x9084002a  lbu         $a0, 0x2A($a0)
    ctx->pc = 0x111674u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x111678: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x111678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x11167c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x11167cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x111680: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x111680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x111684: 0x2861002e  slti        $at, $v1, 0x2E
    ctx->pc = 0x111684u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x111688: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x111688u;
    {
        const bool branch_taken_0x111688 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x111688) {
            ctx->pc = 0x1116E8u;
            return;
        }
    }
    ctx->pc = 0x111690u;
label_111690:
    // 0x111690: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x111690u;
    {
        const bool branch_taken_0x111690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111690u;
        // 0x111694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111690) {
            ctx->pc = 0x1116E8u;
            return;
        }
    }
    ctx->pc = 0x111698u;
label_111698:
    // 0x111698: 0x1105000a  beq         $t0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x111698u;
    {
        const bool branch_taken_0x111698 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x111698) {
            ctx->pc = 0x1116C4u;
            goto label_1116c4;
        }
    }
    ctx->pc = 0x1116A0u;
    // 0x1116a0: 0x90870034  lbu         $a3, 0x34($a0)
    ctx->pc = 0x1116a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1116a4: 0x2466000a  addiu       $a2, $v1, 0xA
    ctx->pc = 0x1116a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1116a8: 0x9085002a  lbu         $a1, 0x2A($a0)
    ctx->pc = 0x1116a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1116ac: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1116acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1116b0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1116b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1116b4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1116b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1116b8: 0x28a1001c  slti        $at, $a1, 0x1C
    ctx->pc = 0x1116b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1116bc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1116BCu;
    {
        const bool branch_taken_0x1116bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1116bc) {
            ctx->pc = 0x1116E4u;
            goto label_1116e4;
        }
    }
    ctx->pc = 0x1116C4u;
label_1116c4:
    // 0x1116c4: 0x9065000a  lbu         $a1, 0xA($v1)
    ctx->pc = 0x1116c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1116c8: 0x9084002a  lbu         $a0, 0x2A($a0)
    ctx->pc = 0x1116c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1116cc: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x1116ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x1116d0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1116d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1116d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1116d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1116d8: 0x28610025  slti        $at, $v1, 0x25
    ctx->pc = 0x1116d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x1116dc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1116DCu;
    {
        const bool branch_taken_0x1116dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1116dc) {
            ctx->pc = 0x1116E8u;
            return;
        }
    }
    ctx->pc = 0x1116E4u;
label_1116e4:
    // 0x1116e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1116e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1116e8u;
}
