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

// Function: FUN_00176450
// Address: 0x176450 - 0x1765b0
void FUN_00176450_0x176450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00176450_0x176450");
#endif

    switch (ctx->pc) {
        case 0x176480u: goto label_176480;
        case 0x1764c0u: goto label_1764c0;
        default: break;
    }

    ctx->pc = 0x176450u;

    // 0x176450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17645c: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x17645cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x176460: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x176460u;
    {
        const bool branch_taken_0x176460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176460u;
        // 0x176464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176460) {
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x176468u;
    // 0x176468: 0xa200003d  sb          $zero, 0x3D($s0)
    ctx->pc = 0x176468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 0));
    // 0x17646c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176470: 0xa0400015  sb          $zero, 0x15($v0)
    ctx->pc = 0x176470u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x176474: 0x92050023  lbu         $a1, 0x23($s0)
    ctx->pc = 0x176474u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x176478: 0xc0449d4  jal         func_112750
    ctx->pc = 0x176478u;
    SET_GPR_U32(ctx, 31, 0x176480u);
    ctx->pc = 0x17647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176478u;
    // 0x17647c: 0x92040022  lbu         $a0, 0x22($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112750u, 0x176478u, 0x176480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176480u;
label_176480:
    // 0x176480: 0x92050034  lbu         $a1, 0x34($s0)
    ctx->pc = 0x176480u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x176484: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x176484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x176488: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x176488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x17648c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17648cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x176490: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x176490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176494: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176498: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x176498u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17649c: 0x92040034  lbu         $a0, 0x34($s0)
    ctx->pc = 0x17649cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1764a0: 0x9202002a  lbu         $v0, 0x2A($s0)
    ctx->pc = 0x1764a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1764a4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1764a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1764a8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1764a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1764ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1764acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1764b0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1764b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1764b4: 0x92050027  lbu         $a1, 0x27($s0)
    ctx->pc = 0x1764b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
    // 0x1764b8: 0xc0449d4  jal         func_112750
    ctx->pc = 0x1764B8u;
    SET_GPR_U32(ctx, 31, 0x1764C0u);
    ctx->pc = 0x1764BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1764B8u;
    // 0x1764bc: 0x92040026  lbu         $a0, 0x26($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112750u, 0x1764B8u, 0x1764C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1764C0u;
label_1764c0:
    // 0x1764c0: 0x92060034  lbu         $a2, 0x34($s0)
    ctx->pc = 0x1764c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1764c4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1764c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1764c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1764c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1764cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1764ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1764d0: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x1764d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1764d4: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x1764d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1764d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1764d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1764dc: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x1764dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1764e0: 0x9206002b  lbu         $a2, 0x2B($s0)
    ctx->pc = 0x1764e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x1764e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1764e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1764e8: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x1764e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x1764ec: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1764ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1764f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1764f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1764f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1764f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1764f8: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x1764f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1764fc: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1764FCu;
    {
        const bool branch_taken_0x1764fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1764fc) {
            ctx->pc = 0x17652Cu;
            goto label_17652c;
        }
    }
    ctx->pc = 0x176504u;
    // 0x176504: 0x9205003f  lbu         $a1, 0x3F($s0)
    ctx->pc = 0x176504u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 63)));
    // 0x176508: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x17650c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x17650cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x176510: 0x8c264900  lw          $a2, 0x4900($at)
    ctx->pc = 0x176510u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x334900u));
    // 0x176514: 0x246324b4  addiu       $v1, $v1, 0x24B4
    ctx->pc = 0x176514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9396));
    // 0x176518: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x176518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x17651c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17651cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x176520: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x176520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x176524: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176528: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x176528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_17652c:
    // 0x17652c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x17652cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x176530: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x176530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x176534: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x176534u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x176538: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x176538u;
    {
        const bool branch_taken_0x176538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176538u;
        // 0x17653c: 0x24030041  addiu       $v1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176538) {
            ctx->pc = 0x176574u;
            goto label_176574;
        }
    }
    ctx->pc = 0x176540u;
    // 0x176540: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x176540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x176544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176548: 0x90a40012  lbu         $a0, 0x12($a1)
    ctx->pc = 0x176548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x17654c: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x17654Cu;
    {
        const bool branch_taken_0x17654c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17654c) {
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x176554u;
    // 0x176554: 0x90a40015  lbu         $a0, 0x15($a1)
    ctx->pc = 0x176554u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
    // 0x176558: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x176558u;
    {
        const bool branch_taken_0x176558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176558u;
        // 0x17655c: 0x24a60015  addiu       $a2, $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176558) {
            ctx->pc = 0x17656Cu;
            goto label_17656c;
        }
    }
    ctx->pc = 0x176560u;
    // 0x176560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176564: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x176564u;
    {
        const bool branch_taken_0x176564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176564) {
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x17656Cu;
label_17656c:
    // 0x17656c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17656Cu;
    {
        const bool branch_taken_0x17656c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17656Cu;
        // 0x176570: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17656c) {
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x176574u;
label_176574:
    // 0x176574: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x176574u;
    {
        const bool branch_taken_0x176574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176574) {
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x17657Cu;
    // 0x17657c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17657cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176580: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x176580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176584: 0x90a40012  lbu         $a0, 0x12($a1)
    ctx->pc = 0x176584u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x176588: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x176588u;
    {
        const bool branch_taken_0x176588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176588) {
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x176590u;
    // 0x176590: 0x90a40015  lbu         $a0, 0x15($a1)
    ctx->pc = 0x176590u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
    // 0x176594: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x176594u;
    {
        const bool branch_taken_0x176594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x176598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176594u;
        // 0x176598: 0x24a60015  addiu       $a2, $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176594) {
            ctx->pc = 0x1765A8u;
            goto label_1765a8;
        }
    }
    ctx->pc = 0x17659Cu;
    // 0x17659c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17659cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1765a0: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1765A0u;
    {
        const bool branch_taken_0x1765a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1765a0) {
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x1765A8u;
label_1765a8:
    // 0x1765a8: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x1765a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_1765ac:
    // 0x1765ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1765acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1765b0u;
}
