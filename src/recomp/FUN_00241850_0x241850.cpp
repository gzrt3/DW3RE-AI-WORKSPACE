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

// Function: FUN_00241850
// Address: 0x241850 - 0x2419c4
void FUN_00241850_0x241850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00241850_0x241850");
#endif

    ctx->pc = 0x241850u;

    // 0x241850: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x241850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x241854: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
    ctx->pc = 0x241854u;
    {
        const bool branch_taken_0x241854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x241858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241854u;
        // 0x241858: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241854) {
            ctx->pc = 0x2419C4u;
            return;
        }
    }
    ctx->pc = 0x24185Cu;
    // 0x24185c: 0x34632384  ori         $v1, $v1, 0x2384
    ctx->pc = 0x24185cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9092);
    // 0x241860: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x241860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x241864: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x241864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241868: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x241868u;
    {
        const bool branch_taken_0x241868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241868u;
        // 0x24186c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241868) {
            ctx->pc = 0x241898u;
            goto label_241898;
        }
    }
    ctx->pc = 0x241870u;
    // 0x241870: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x241870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x241874: 0x34212388  ori         $at, $at, 0x2388
    ctx->pc = 0x241874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9096);
    // 0x241878: 0x812821  addu        $a1, $a0, $at
    ctx->pc = 0x241878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x24187c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x24187cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x241880: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x241880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x241884: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x241884u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x241888: 0x0  nop
    ctx->pc = 0x241888u;
    // NOP
    // 0x24188c: 0x0  nop
    ctx->pc = 0x24188cu;
    // NOP
    // 0x241890: 0x1810  mfhi        $v1
    ctx->pc = 0x241890u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x241894: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x241894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_241898:
    // 0x241898: 0x8f8592f8  lw          $a1, -0x6D08($gp)
    ctx->pc = 0x241898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x24189c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24189cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2418a0: 0x34642380  ori         $a0, $v1, 0x2380
    ctx->pc = 0x2418a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9088);
    // 0x2418a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2418a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2418a8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2418a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2418ac: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2418acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2418b0: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2418B0u;
    {
        const bool branch_taken_0x2418b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2418B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418B0u;
        // 0x2418b4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418b0) {
            ctx->pc = 0x241940u;
            goto label_241940;
        }
    }
    ctx->pc = 0x2418B8u;
    // 0x2418b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2418b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2418bc: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2418bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2418c0: 0x8c242384  lw          $a0, 0x2384($at)
    ctx->pc = 0x2418c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
    // 0x2418c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2418c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2418c8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2418c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2418cc: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2418ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2418d0: 0xac232384  sw          $v1, 0x2384($at)
    ctx->pc = 0x2418d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 3));
    // 0x2418d4: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x2418d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2418d8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2418D8u;
    {
        const bool branch_taken_0x2418d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2418d8) {
            ctx->pc = 0x241904u;
            goto label_241904;
        }
    }
    ctx->pc = 0x2418E0u;
    // 0x2418e0: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x2418e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x2418e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2418e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2418e8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2418e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2418ec: 0x8c252384  lw          $a1, 0x2384($at)
    ctx->pc = 0x2418ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
    // 0x2418f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2418f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2418f4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2418f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2418f8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2418f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2418fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2418FCu;
    {
        const bool branch_taken_0x2418fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418FCu;
        // 0x241900: 0xac232384  sw          $v1, 0x2384($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418fc) {
            ctx->pc = 0x241908u;
            goto label_241908;
        }
    }
    ctx->pc = 0x241904u;
label_241904:
    // 0x241904: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x241904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_241908:
    // 0x241908: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x241908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x24190c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24190cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x241910: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241910u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x241914: 0xac252384  sw          $a1, 0x2384($at)
    ctx->pc = 0x241914u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 5));
    // 0x241918: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x241918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x24191c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24191cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x241920: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x241920u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x241924: 0x8c232384  lw          $v1, 0x2384($at)
    ctx->pc = 0x241924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
    // 0x241928: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x241928u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x24192c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x24192Cu;
    {
        const bool branch_taken_0x24192c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x241930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24192Cu;
        // 0x241930: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24192c) {
            ctx->pc = 0x2419C4u;
            return;
        }
    }
    ctx->pc = 0x241934u;
    // 0x241934: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x241934u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x241938: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x241938u;
    {
        const bool branch_taken_0x241938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241938u;
        // 0x24193c: 0xac202380  sw          $zero, 0x2380($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241938) {
            ctx->pc = 0x2419C4u;
            return;
        }
    }
    ctx->pc = 0x241940u;
label_241940:
    // 0x241940: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x241940u;
    {
        const bool branch_taken_0x241940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x241944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241940u;
        // 0x241944: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241940) {
            ctx->pc = 0x2419C4u;
            return;
        }
    }
    ctx->pc = 0x241948u;
    // 0x241948: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x241948u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x24194c: 0x8c242384  lw          $a0, 0x2384($at)
    ctx->pc = 0x24194cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
    // 0x241950: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x241954: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x241954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x241958: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x241958u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x24195c: 0xac232384  sw          $v1, 0x2384($at)
    ctx->pc = 0x24195cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 3));
    // 0x241960: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x241960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x241964: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x241964u;
    {
        const bool branch_taken_0x241964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x241964) {
            ctx->pc = 0x241990u;
            goto label_241990;
        }
    }
    ctx->pc = 0x24196Cu;
    // 0x24196c: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x24196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x241970: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x241974: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x241974u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x241978: 0x8c252384  lw          $a1, 0x2384($at)
    ctx->pc = 0x241978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
    // 0x24197c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x241980: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x241980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x241984: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x241984u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x241988: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x241988u;
    {
        const bool branch_taken_0x241988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241988u;
        // 0x24198c: 0xac232384  sw          $v1, 0x2384($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241988) {
            ctx->pc = 0x241994u;
            goto label_241994;
        }
    }
    ctx->pc = 0x241990u;
label_241990:
    // 0x241990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241994:
    // 0x241994: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x241994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x241998: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x24199c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x24199cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2419a0: 0xac252384  sw          $a1, 0x2384($at)
    ctx->pc = 0x2419a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 5));
    // 0x2419a4: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x2419a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x2419a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2419a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2419ac: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2419acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2419b0: 0x8c232384  lw          $v1, 0x2384($at)
    ctx->pc = 0x2419b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
    // 0x2419b4: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2419B4u;
    {
        const bool branch_taken_0x2419b4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2419B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419B4u;
        // 0x2419b8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419b4) {
            ctx->pc = 0x2419C4u;
            return;
        }
    }
    ctx->pc = 0x2419BCu;
    // 0x2419bc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2419bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2419c0: 0xac202380  sw          $zero, 0x2380($at)
    ctx->pc = 0x2419c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9088), GPR_U32(ctx, 0));
    ctx->pc = 0x2419c4u;
}
