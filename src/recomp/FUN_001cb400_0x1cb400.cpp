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

// Function: FUN_001cb400
// Address: 0x1cb400 - 0x1cb590
void FUN_001cb400_0x1cb400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cb400_0x1cb400");
#endif

    switch (ctx->pc) {
        case 0x1cb4e8u: goto label_1cb4e8;
        case 0x1cb58cu: goto label_1cb58c;
        default: break;
    }

    ctx->pc = 0x1cb400u;

    // 0x1cb400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb408: 0x80860238  lb          $a2, 0x238($a0)
    ctx->pc = 0x1cb408u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 568)));
    // 0x1cb40c: 0x90a30233  lbu         $v1, 0x233($a1)
    ctx->pc = 0x1cb40cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 563)));
    // 0x1cb410: 0x24c6ffb8  addiu       $a2, $a2, -0x48
    ctx->pc = 0x1cb410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967224));
    // 0x1cb414: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB414u;
    {
        const bool branch_taken_0x1cb414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB414u;
        // 0x1cb418: 0x30c900ff  andi        $t1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb414) {
            ctx->pc = 0x1CB45Cu;
            goto label_1cb45c;
        }
    }
    ctx->pc = 0x1CB41Cu;
    // 0x1cb41c: 0x90a80234  lbu         $t0, 0x234($a1)
    ctx->pc = 0x1cb41cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 564)));
    // 0x1cb420: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x1cb420u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x1cb424: 0x90a60239  lbu         $a2, 0x239($a1)
    ctx->pc = 0x1cb424u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 569)));
    // 0x1cb428: 0x24e725b5  addiu       $a3, $a3, 0x25B5
    ctx->pc = 0x1cb428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9653));
    // 0x1cb42c: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x1cb42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1cb430: 0x684023  subu        $t0, $v1, $t0
    ctx->pc = 0x1cb430u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1cb434: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1cb434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1cb438: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1cb438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1cb43c: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x1cb43cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1cb440: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1cb440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1cb444: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1cb444u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cb448: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x1cb448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1cb44c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1cb44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1cb450: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1cb450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x1cb454: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1cb454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1cb458: 0xa0690000  sb          $t1, 0x0($v1)
    ctx->pc = 0x1cb458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 9));
label_1cb45c:
    // 0x1cb45c: 0x312700ff  andi        $a3, $t1, 0xFF
    ctx->pc = 0x1cb45cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x1cb460: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1cb460u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1cb464: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1cb464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1cb468: 0x24c64944  addiu       $a2, $a2, 0x4944
    ctx->pc = 0x1cb468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18756));
    // 0x1cb46c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1cb46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1cb470: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cb470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cb474: 0xc34021  addu        $t0, $a2, $v1
    ctx->pc = 0x1cb474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cb478: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x1cb478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cb47c: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1cb47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cb480: 0x28e12710  slti        $at, $a3, 0x2710
    ctx->pc = 0x1cb480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x1cb484: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB484u;
    {
        const bool branch_taken_0x1cb484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB484u;
        // 0x1cb488: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb484) {
            ctx->pc = 0x1CB4B8u;
            goto label_1cb4b8;
        }
    }
    ctx->pc = 0x1CB48Cu;
    // 0x1cb48c: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x1cb48cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cb490: 0x0  nop
    ctx->pc = 0x1cb490u;
    // NOP
    // 0x1cb494: 0x0  nop
    ctx->pc = 0x1cb494u;
    // NOP
    // 0x1cb498: 0x3010  mfhi        $a2
    ctx->pc = 0x1cb498u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1cb49c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB49Cu;
    {
        const bool branch_taken_0x1cb49c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB49Cu;
        // 0x1cb4a0: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb49c) {
            ctx->pc = 0x1CB4B8u;
            goto label_1cb4b8;
        }
    }
    ctx->pc = 0x1CB4A4u;
    // 0x1cb4a4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1cb4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1cb4a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb4ac: 0x24c64948  addiu       $a2, $a2, 0x4948
    ctx->pc = 0x1cb4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18760));
    // 0x1cb4b0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cb4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cb4b4: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1cb4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_1cb4b8:
    // 0x1cb4b8: 0x90a70232  lbu         $a3, 0x232($a1)
    ctx->pc = 0x1cb4b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
    // 0x1cb4bc: 0x28e10006  slti        $at, $a3, 0x6
    ctx->pc = 0x1cb4bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cb4c0: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x1CB4C0u;
    {
        const bool branch_taken_0x1cb4c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4C0u;
        // 0x1cb4c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4c0) {
            ctx->pc = 0x1CB58Cu;
            goto label_1cb58c;
        }
    }
    ctx->pc = 0x1CB4C8u;
    // 0x1cb4c8: 0x10e60030  beq         $a3, $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CB4C8u;
    {
        const bool branch_taken_0x1cb4c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1CB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4C8u;
        // 0x1cb4cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4c8) {
            ctx->pc = 0x1CB58Cu;
            goto label_1cb58c;
        }
    }
    ctx->pc = 0x1CB4D0u;
    // 0x1cb4d0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1cb4d4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1cb4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cb4d8: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1cb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1cb4dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb4e0: 0x24480000  addiu       $t0, $v0, 0x0
    ctx->pc = 0x1cb4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1cb4e4: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x1cb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1cb4e8:
    // 0x1cb4e8: 0x90473630  lbu         $a3, 0x3630($v0)
    ctx->pc = 0x1cb4e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x1cb4ec: 0x14e60009  bne         $a3, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB4ECu;
    {
        const bool branch_taken_0x1cb4ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x1cb4ec) {
            ctx->pc = 0x1CB514u;
            goto label_1cb514;
        }
    }
    ctx->pc = 0x1CB4F4u;
    // 0x1cb4f4: 0x90a50241  lbu         $a1, 0x241($a1)
    ctx->pc = 0x1cb4f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 577)));
    // 0x1cb4f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cb4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1cb4fc: 0x24424930  addiu       $v0, $v0, 0x4930
    ctx->pc = 0x1cb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18736));
    // 0x1cb500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb504: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cb504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1cb508: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1cb508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1cb50c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB50Cu;
    {
        const bool branch_taken_0x1cb50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB50Cu;
        // 0x1cb510: 0xa0450000  sb          $a1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb50c) {
            ctx->pc = 0x1CB530u;
            goto label_1cb530;
        }
    }
    ctx->pc = 0x1CB514u;
label_1cb514:
    // 0x1cb514: 0x90a20241  lbu         $v0, 0x241($a1)
    ctx->pc = 0x1cb514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 577)));
    // 0x1cb518: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB518u;
    {
        const bool branch_taken_0x1cb518 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb518) {
            ctx->pc = 0x1CB530u;
            goto label_1cb530;
        }
    }
    ctx->pc = 0x1CB520u;
    // 0x1cb520: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cb520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cb524: 0x29220014  slti        $v0, $t1, 0x14
    ctx->pc = 0x1cb524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1cb528: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1CB528u;
    {
        const bool branch_taken_0x1cb528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB528u;
        // 0x1cb52c: 0x1091021  addu        $v0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb528) {
            ctx->pc = 0x1CB4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb4e8;
        }
    }
    ctx->pc = 0x1CB530u;
label_1cb530:
    // 0x1cb530: 0x908a0234  lbu         $t2, 0x234($a0)
    ctx->pc = 0x1cb530u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x1cb534: 0x90830239  lbu         $v1, 0x239($a0)
    ctx->pc = 0x1cb534u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 569)));
    // 0x1cb538: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x1cb538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x1cb53c: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x1cb53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
    // 0x1cb540: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x1cb540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1cb544: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb548: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb54c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb54cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb550: 0xa1200  sll         $v0, $t2, 8
    ctx->pc = 0x1cb550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1cb554: 0x4a2023  subu        $a0, $v0, $t2
    ctx->pc = 0x1cb554u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1cb558: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1cb558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cb55c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb560: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1cb560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cb564: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1cb564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cb568: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cb568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cb56c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1cb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cb570: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1cb570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cb574: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cb574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1cb578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb57c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cb580: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1cb580u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1cb584: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CB584u;
    SET_GPR_U32(ctx, 31, 0x1CB58Cu);
    ctx->pc = 0x1CB588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB584u;
    // 0x1cb588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB584u, 0x1CB58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB58Cu;
label_1cb58c:
    // 0x1cb58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1cb590u;
}
