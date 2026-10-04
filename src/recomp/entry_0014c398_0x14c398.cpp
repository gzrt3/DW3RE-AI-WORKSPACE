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

// Function: entry_0014c398
// Address: 0x14c398 - 0x14c684
void entry_0014c398_0x14c398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c398_0x14c398");
#endif

    switch (ctx->pc) {
        case 0x14c41cu: goto label_14c41c;
        case 0x14c450u: goto label_14c450;
        case 0x14c604u: goto label_14c604;
        default: break;
    }

    ctx->pc = 0x14c398u;

    // 0x14c398: 0x846a0232  lh          $t2, 0x232($v1)
    ctx->pc = 0x14c398u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x14c39c: 0xa46818  mult        $t5, $a1, $a0
    ctx->pc = 0x14c39cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x14c3a0: 0x85080232  lh          $t0, 0x232($t0)
    ctx->pc = 0x14c3a0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 562)));
    // 0x14c3a4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x14c3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14c3a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c3ac: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x14c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x14c3b0: 0xa5fc2  srl         $t3, $t2, 31
    ctx->pc = 0x14c3b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x14c3b4: 0x346c851f  ori         $t4, $v1, 0x851F
    ctx->pc = 0x14c3b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x14c3b8: 0x84fc2  srl         $t1, $t0, 31
    ctx->pc = 0x14c3b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x14c3bc: 0x90e3000f  lbu         $v1, 0xF($a3)
    ctx->pc = 0x14c3bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 15)));
    // 0x14c3c0: 0x70631818  mult1       $v1, $v1, $v1
    ctx->pc = 0x14c3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14c3c4: 0x1a3001a  div         $zero, $t5, $v1
    ctx->pc = 0x14c3c4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14c3c8: 0x0  nop
    ctx->pc = 0x14c3c8u;
    // NOP
    // 0x14c3cc: 0x0  nop
    ctx->pc = 0x14c3ccu;
    // NOP
    // 0x14c3d0: 0x1812  mflo        $v1
    ctx->pc = 0x14c3d0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x14c3d4: 0x18a0018  mult        $zero, $t4, $t2
    ctx->pc = 0x14c3d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14c3d8: 0x0  nop
    ctx->pc = 0x14c3d8u;
    // NOP
    // 0x14c3dc: 0x0  nop
    ctx->pc = 0x14c3dcu;
    // NOP
    // 0x14c3e0: 0x5010  mfhi        $t2
    ctx->pc = 0x14c3e0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x14c3e4: 0x1880018  mult        $zero, $t4, $t0
    ctx->pc = 0x14c3e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14c3e8: 0xa4143  sra         $t0, $t2, 5
    ctx->pc = 0x14c3e8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 10), 5));
    // 0x14c3ec: 0x10b5021  addu        $t2, $t0, $t3
    ctx->pc = 0x14c3ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x14c3f0: 0x4010  mfhi        $t0
    ctx->pc = 0x14c3f0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x14c3f4: 0x84143  sra         $t0, $t0, 5
    ctx->pc = 0x14c3f4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 5));
    // 0x14c3f8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x14c3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x14c3fc: 0x1484823  subu        $t1, $t2, $t0
    ctx->pc = 0x14c3fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x14c400: 0x25280002  addiu       $t0, $t1, 0x2
    ctx->pc = 0x14c400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x14c404: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x14c404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x14c408: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x14C408u;
    {
        const bool branch_taken_0x14c408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C408u;
        // 0x14c40c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c408) {
            ctx->pc = 0x14C470u;
            goto label_14c470;
        }
    }
    ctx->pc = 0x14C410u;
    // 0x14c410: 0x29010009  slti        $at, $t0, 0x9
    ctx->pc = 0x14c410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x14c414: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14C414u;
    {
        const bool branch_taken_0x14c414 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C414u;
        // 0x14c418: 0x252afffa  addiu       $t2, $t1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c414) {
            ctx->pc = 0x14C43Cu;
            goto label_14c43c;
        }
    }
    ctx->pc = 0x14C41Cu;
label_14c41c:
    // 0x14c41c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x14c41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x14c420: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x14c420u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x14c424: 0x8a402a  slt         $t0, $a0, $t2
    ctx->pc = 0x14c424u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x14c428: 0x0  nop
    ctx->pc = 0x14c428u;
    // NOP
    // 0x14c42c: 0x0  nop
    ctx->pc = 0x14c42cu;
    // NOP
    // 0x14c430: 0x0  nop
    ctx->pc = 0x14c430u;
    // NOP
    // 0x14c434: 0x1500fff9  bnez        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14C434u;
    {
        const bool branch_taken_0x14c434 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c434) {
            ctx->pc = 0x14C41Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c41c;
        }
    }
    ctx->pc = 0x14C43Cu;
label_14c43c:
    // 0x14c43c: 0x0  nop
    ctx->pc = 0x14c43cu;
    // NOP
    // 0x14c440: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x14c440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x14c444: 0x89082a  slt         $at, $a0, $t1
    ctx->pc = 0x14c444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x14c448: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14C448u;
    {
        const bool branch_taken_0x14c448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c448) {
            ctx->pc = 0x14C470u;
            goto label_14c470;
        }
    }
    ctx->pc = 0x14C450u;
label_14c450:
    // 0x14c450: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14c450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14c454: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x14c454u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14c458: 0x89402a  slt         $t0, $a0, $t1
    ctx->pc = 0x14c458u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x14c45c: 0x0  nop
    ctx->pc = 0x14c45cu;
    // NOP
    // 0x14c460: 0x0  nop
    ctx->pc = 0x14c460u;
    // NOP
    // 0x14c464: 0x0  nop
    ctx->pc = 0x14c464u;
    // NOP
    // 0x14c468: 0x1500fff9  bnez        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14C468u;
    {
        const bool branch_taken_0x14c468 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c468) {
            ctx->pc = 0x14C450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c450;
        }
    }
    ctx->pc = 0x14C470u;
label_14c470:
    // 0x14c470: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x14c470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14c474: 0x1280a  movz        $a1, $zero, $at
    ctx->pc = 0x14c474u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x14c478: 0x28a10030  slti        $at, $a1, 0x30
    ctx->pc = 0x14c478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x14c47c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C47Cu;
    {
        const bool branch_taken_0x14c47c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c47c) {
            ctx->pc = 0x14C48Cu;
            goto label_14c48c;
        }
    }
    ctx->pc = 0x14C484u;
    // 0x14c484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14C484u;
    {
        const bool branch_taken_0x14c484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C484u;
        // 0x14c488: 0x651818  mult        $v1, $v1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c484) {
            ctx->pc = 0x14C494u;
            goto label_14c494;
        }
    }
    ctx->pc = 0x14C48Cu;
label_14c48c:
    // 0x14c48c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x14c48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x14c490: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x14c490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_14c494:
    // 0x14c494: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14c494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c498: 0x90c50012  lbu         $a1, 0x12($a2)
    ctx->pc = 0x14c498u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x14c49c: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C49Cu;
    {
        const bool branch_taken_0x14c49c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x14C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C49Cu;
        // 0x14c4a0: 0x28a10006  slti        $at, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c49c) {
            ctx->pc = 0x14C4B4u;
            goto label_14c4b4;
        }
    }
    ctx->pc = 0x14C4A4u;
    // 0x14c4a4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x14c4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14c4a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14C4A8u;
    {
        const bool branch_taken_0x14c4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4A8u;
        // 0x14c4ac: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c4a8) {
            ctx->pc = 0x14C4C0u;
            goto label_14c4c0;
        }
    }
    ctx->pc = 0x14C4B0u;
    // 0x14c4b0: 0x28a10006  slti        $at, $a1, 0x6
    ctx->pc = 0x14c4b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
label_14c4b4:
    // 0x14c4b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14C4B4u;
    {
        const bool branch_taken_0x14c4b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4b4) {
            ctx->pc = 0x14C4C0u;
            goto label_14c4c0;
        }
    }
    ctx->pc = 0x14C4BCu;
    // 0x14c4bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14c4c0:
    // 0x14c4c0: 0x90c50014  lbu         $a1, 0x14($a2)
    ctx->pc = 0x14c4c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x14c4c4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x14c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14c4c8: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14C4C8u;
    {
        const bool branch_taken_0x14c4c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x14c4c8) {
            ctx->pc = 0x14C4D4u;
            goto label_14c4d4;
        }
    }
    ctx->pc = 0x14C4D0u;
    // 0x14c4d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14c4d4:
    // 0x14c4d4: 0x90e60014  lbu         $a2, 0x14($a3)
    ctx->pc = 0x14c4d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x14c4d8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x14c4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14c4dc: 0x14c40003  bne         $a2, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C4DCu;
    {
        const bool branch_taken_0x14c4dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x14C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4DCu;
        // 0x14c4e0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c4dc) {
            ctx->pc = 0x14C4ECu;
            goto label_14c4ec;
        }
    }
    ctx->pc = 0x14C4E4u;
    // 0x14c4e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c4e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14c4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14c4ec:
    // 0x14c4ec: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x14C4ECu;
    {
        const bool branch_taken_0x14c4ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x14C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4ECu;
        // 0x14c4f0: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c4ec) {
            ctx->pc = 0x14C51Cu;
            goto label_14c51c;
        }
    }
    ctx->pc = 0x14C4F4u;
    // 0x14c4f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x14c4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c4f8: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C4F8u;
    {
        const bool branch_taken_0x14c4f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x14c4f8) {
            ctx->pc = 0x14C518u;
            goto label_14c518;
        }
    }
    ctx->pc = 0x14C500u;
    // 0x14c500: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x14c500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14c504: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C504u;
    {
        const bool branch_taken_0x14c504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x14c504) {
            ctx->pc = 0x14C518u;
            goto label_14c518;
        }
    }
    ctx->pc = 0x14C50Cu;
    // 0x14c50c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x14c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14c510: 0x14a40008  bne         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C510u;
    {
        const bool branch_taken_0x14c510 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x14C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C510u;
        // 0x14c514: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c510) {
            ctx->pc = 0x14C534u;
            goto label_14c534;
        }
    }
    ctx->pc = 0x14C518u;
label_14c518:
    // 0x14c518: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x14c518u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
label_14c51c:
    // 0x14c51c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C51Cu;
    {
        const bool branch_taken_0x14c51c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x14c51c) {
            ctx->pc = 0x14C52Cu;
            goto label_14c52c;
        }
    }
    ctx->pc = 0x14C524u;
    // 0x14c524: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x14c524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x14c528: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x14c528u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
label_14c52c:
    // 0x14c52c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14c52cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c530: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14c530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14c534:
    // 0x14c534: 0x10c4000b  beq         $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x14C534u;
    {
        const bool branch_taken_0x14c534 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x14C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C534u;
        // 0x14c538: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c534) {
            ctx->pc = 0x14C564u;
            goto label_14c564;
        }
    }
    ctx->pc = 0x14C53Cu;
    // 0x14c53c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x14c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c540: 0x10c40007  beq         $a2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C540u;
    {
        const bool branch_taken_0x14c540 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x14c540) {
            ctx->pc = 0x14C560u;
            goto label_14c560;
        }
    }
    ctx->pc = 0x14C548u;
    // 0x14c548: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x14c548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14c54c: 0x10c40004  beq         $a2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C54Cu;
    {
        const bool branch_taken_0x14c54c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x14c54c) {
            ctx->pc = 0x14C560u;
            goto label_14c560;
        }
    }
    ctx->pc = 0x14C554u;
    // 0x14c554: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x14c554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14c558: 0x14c40007  bne         $a2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C558u;
    {
        const bool branch_taken_0x14c558 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x14c558) {
            ctx->pc = 0x14C578u;
            goto label_14c578;
        }
    }
    ctx->pc = 0x14C560u;
label_14c560:
    // 0x14c560: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x14c560u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
label_14c564:
    // 0x14c564: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C564u;
    {
        const bool branch_taken_0x14c564 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x14c564) {
            ctx->pc = 0x14C574u;
            goto label_14c574;
        }
    }
    ctx->pc = 0x14C56Cu;
    // 0x14c56c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x14c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x14c570: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x14c570u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
label_14c574:
    // 0x14c574: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14c574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14c578:
    // 0x14c578: 0x90e40012  lbu         $a0, 0x12($a3)
    ctx->pc = 0x14c578u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x14c57c: 0x28810006  slti        $at, $a0, 0x6
    ctx->pc = 0x14c57cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14c580: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C580u;
    {
        const bool branch_taken_0x14c580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c580) {
            ctx->pc = 0x14C59Cu;
            goto label_14c59c;
        }
    }
    ctx->pc = 0x14C588u;
    // 0x14c588: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C588u;
    {
        const bool branch_taken_0x14c588 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C588u;
        // 0x14c58c: 0x320c3  sra         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c588) {
            ctx->pc = 0x14C598u;
            goto label_14c598;
        }
    }
    ctx->pc = 0x14C590u;
    // 0x14c590: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x14c590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x14c594: 0x320c3  sra         $a0, $v1, 3
    ctx->pc = 0x14c594u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
label_14c598:
    // 0x14c598: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14c598u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14c59c:
    // 0x14c59c: 0x1860003a  blez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x14C59Cu;
    {
        const bool branch_taken_0x14c59c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x14c59c) {
            ctx->pc = 0x14C688u;
            return;
        }
    }
    ctx->pc = 0x14C5A4u;
    // 0x14c5a4: 0x86040032  lh          $a0, 0x32($s0)
    ctx->pc = 0x14c5a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x14c5a8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x14c5a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x14c5ac: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C5ACu;
    {
        const bool branch_taken_0x14c5ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c5ac) {
            ctx->pc = 0x14C5BCu;
            goto label_14c5bc;
        }
    }
    ctx->pc = 0x14C5B4u;
    // 0x14c5b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14C5B4u;
    {
        const bool branch_taken_0x14c5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5B4u;
        // 0x14c5b8: 0xa6000032  sh          $zero, 0x32($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5b4) {
            ctx->pc = 0x14C5C4u;
            goto label_14c5c4;
        }
    }
    ctx->pc = 0x14C5BCu;
label_14c5bc:
    // 0x14c5bc: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x14c5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14c5c0: 0xa6040032  sh          $a0, 0x32($s0)
    ctx->pc = 0x14c5c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 4));
label_14c5c4:
    // 0x14c5c4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14c5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14c5c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14c5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c5cc: 0x90a50013  lbu         $a1, 0x13($a1)
    ctx->pc = 0x14c5ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
    // 0x14c5d0: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C5D0u;
    {
        const bool branch_taken_0x14c5d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x14c5d0) {
            ctx->pc = 0x14C5F0u;
            goto label_14c5f0;
        }
    }
    ctx->pc = 0x14C5D8u;
    // 0x14c5d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14c5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c5dc: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C5DCu;
    {
        const bool branch_taken_0x14c5dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x14c5dc) {
            ctx->pc = 0x14C5F0u;
            goto label_14c5f0;
        }
    }
    ctx->pc = 0x14C5E4u;
    // 0x14c5e4: 0x8604002c  lh          $a0, 0x2C($s0)
    ctx->pc = 0x14c5e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x14c5e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14c5ec: 0xa603002c  sh          $v1, 0x2C($s0)
    ctx->pc = 0x14c5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 3));
label_14c5f0:
    // 0x14c5f0: 0x86030032  lh          $v1, 0x32($s0)
    ctx->pc = 0x14c5f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x14c5f4: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x14C5F4u;
    {
        const bool branch_taken_0x14c5f4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x14c5f4) {
            ctx->pc = 0x14C644u;
            goto label_14c644;
        }
    }
    ctx->pc = 0x14C5FCu;
    // 0x14c5fc: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x14C5FCu;
    SET_GPR_U32(ctx, 31, 0x14C604u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x14C5FCu, 0x14C604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C604u;
label_14c604:
    // 0x14c604: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14c604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14c608: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x14c608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x14c60c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14c60cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c610: 0x0  nop
    ctx->pc = 0x14c610u;
    // NOP
    // 0x14c614: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14c614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14c618: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x14c618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x14c61c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14c61cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14c620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14c620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c624: 0x0  nop
    ctx->pc = 0x14c624u;
    // NOP
    // 0x14c628: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14c628u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x14c62c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14c62cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14c630: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14c630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14c634: 0x0  nop
    ctx->pc = 0x14c634u;
    // NOP
    // 0x14c638: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x14c638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x14c63c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C63Cu;
    {
        const bool branch_taken_0x14c63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c63c) {
            ctx->pc = 0x14C64Cu;
            goto label_14c64c;
        }
    }
    ctx->pc = 0x14C644u;
label_14c644:
    // 0x14c644: 0x92230035  lbu         $v1, 0x35($s1)
    ctx->pc = 0x14c644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
    // 0x14c648: 0xa2030038  sb          $v1, 0x38($s0)
    ctx->pc = 0x14c648u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 3));
label_14c64c:
    // 0x14c64c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14c64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14c650: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14c650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c654: 0x90840015  lbu         $a0, 0x15($a0)
    ctx->pc = 0x14c654u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x14c658: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14C658u;
    {
        const bool branch_taken_0x14c658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14c658) {
            ctx->pc = 0x14C688u;
            return;
        }
    }
    ctx->pc = 0x14C660u;
    // 0x14c660: 0x92030036  lbu         $v1, 0x36($s0)
    ctx->pc = 0x14c660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x14c664: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C664u;
    {
        const bool branch_taken_0x14c664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c664) {
            ctx->pc = 0x14C688u;
            return;
        }
    }
    ctx->pc = 0x14C66Cu;
    // 0x14c66c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c670: 0xa2030036  sb          $v1, 0x36($s0)
    ctx->pc = 0x14c670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 3));
    // 0x14c674: 0x92230035  lbu         $v1, 0x35($s1)
    ctx->pc = 0x14c674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
    // 0x14c678: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14C678u;
    {
        const bool branch_taken_0x14c678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C678u;
        // 0x14c67c: 0xa2030038  sb          $v1, 0x38($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c678) {
            ctx->pc = 0x14C688u;
            return;
        }
    }
    ctx->pc = 0x14C680u;
    // 0x14c680: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x14c680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->pc = 0x14c684u;
}
