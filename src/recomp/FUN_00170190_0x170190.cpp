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

// Function: FUN_00170190
// Address: 0x170190 - 0x1703f4
void FUN_00170190_0x170190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00170190_0x170190");
#endif

    switch (ctx->pc) {
        case 0x1701a4u: goto label_1701a4;
        case 0x170204u: goto label_170204;
        case 0x1702b8u: goto label_1702b8;
        case 0x170384u: goto label_170384;
        default: break;
    }

    ctx->pc = 0x170190u;

    // 0x170190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170194: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170194u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17019c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17019cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1701a0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1701a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1701a4:
    // 0x1701a4: 0x894021  addu        $t0, $a0, $t1
    ctx->pc = 0x1701a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1701a8: 0x2093821  addu        $a3, $s0, $t1
    ctx->pc = 0x1701a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1701ac: 0x91030008  lbu         $v1, 0x8($t0)
    ctx->pc = 0x1701acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1701b0: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1701b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1701b4: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x1701b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1701b8: 0xa0e30015  sb          $v1, 0x15($a3)
    ctx->pc = 0x1701b8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x1701bc: 0x91030009  lbu         $v1, 0x9($t0)
    ctx->pc = 0x1701bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x1701c0: 0xa0e30016  sb          $v1, 0x16($a3)
    ctx->pc = 0x1701c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 22), (uint8_t)GPR_U32(ctx, 3));
    // 0x1701c4: 0x9103000a  lbu         $v1, 0xA($t0)
    ctx->pc = 0x1701c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x1701c8: 0xa0e30017  sb          $v1, 0x17($a3)
    ctx->pc = 0x1701c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 23), (uint8_t)GPR_U32(ctx, 3));
    // 0x1701cc: 0x9103000b  lbu         $v1, 0xB($t0)
    ctx->pc = 0x1701ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 11)));
    // 0x1701d0: 0xa0e30018  sb          $v1, 0x18($a3)
    ctx->pc = 0x1701d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x1701d4: 0x9103000c  lbu         $v1, 0xC($t0)
    ctx->pc = 0x1701d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1701d8: 0xa0e30019  sb          $v1, 0x19($a3)
    ctx->pc = 0x1701d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x1701dc: 0x9103000d  lbu         $v1, 0xD($t0)
    ctx->pc = 0x1701dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x1701e0: 0xa0e3001a  sb          $v1, 0x1A($a3)
    ctx->pc = 0x1701e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x1701e4: 0x9103000e  lbu         $v1, 0xE($t0)
    ctx->pc = 0x1701e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 14)));
    // 0x1701e8: 0xa0e3001b  sb          $v1, 0x1B($a3)
    ctx->pc = 0x1701e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 27), (uint8_t)GPR_U32(ctx, 3));
    // 0x1701ec: 0x9103000f  lbu         $v1, 0xF($t0)
    ctx->pc = 0x1701ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 15)));
    // 0x1701f0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1701F0u;
    {
        const bool branch_taken_0x1701f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1701F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701F0u;
        // 0x1701f4: 0xa0e3001c  sb          $v1, 0x1C($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701f0) {
            ctx->pc = 0x1701A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1701a4;
        }
    }
    ctx->pc = 0x1701F8u;
    // 0x1701f8: 0x2921000c  slti        $at, $t1, 0xC
    ctx->pc = 0x1701f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1701fc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1701FCu;
    {
        const bool branch_taken_0x1701fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1701fc) {
            ctx->pc = 0x170224u;
            goto label_170224;
        }
    }
    ctx->pc = 0x170204u;
label_170204:
    // 0x170204: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x170204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x170208: 0x2091821  addu        $v1, $s0, $t1
    ctx->pc = 0x170208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x17020c: 0x90470008  lbu         $a3, 0x8($v0)
    ctx->pc = 0x17020cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x170210: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x170210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x170214: 0x2922000c  slti        $v0, $t1, 0xC
    ctx->pc = 0x170214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x170218: 0xa0670015  sb          $a3, 0x15($v1)
    ctx->pc = 0x170218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 7));
    // 0x17021c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17021Cu;
    {
        const bool branch_taken_0x17021c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17021c) {
            ctx->pc = 0x170204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170204;
        }
    }
    ctx->pc = 0x170224u;
label_170224:
    // 0x170224: 0x0  nop
    ctx->pc = 0x170224u;
    // NOP
    // 0x170228: 0x94870002  lhu         $a3, 0x2($a0)
    ctx->pc = 0x170228u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17022c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x17022cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x170230: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x170230u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x170234: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x170234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x170238: 0xe83826  xor         $a3, $a3, $t0
    ctx->pc = 0x170238u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
    // 0x17023c: 0x30eaffff  andi        $t2, $a3, 0xFFFF
    ctx->pc = 0x17023cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x170240: 0x3863ffff  xori        $v1, $v1, 0xFFFF
    ctx->pc = 0x170240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65535);
    // 0x170244: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x170244u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x170248: 0x38e3ffff  xori        $v1, $a3, 0xFFFF
    ctx->pc = 0x170248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)65535);
    // 0x17024c: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x17024cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x170250: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x170250u;
    {
        const bool branch_taken_0x170250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170250u;
        // 0x170254: 0x3068ffff  andi        $t0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170250) {
            ctx->pc = 0x17029Cu;
            goto label_17029c;
        }
    }
    ctx->pc = 0x170258u;
    // 0x170258: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x170258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x17025c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17025cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x170260: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170260u;
    {
        const bool branch_taken_0x170260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170260) {
            ctx->pc = 0x170274u;
            goto label_170274;
        }
    }
    ctx->pc = 0x170268u;
    // 0x170268: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x170268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x17026c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x17026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x170270: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x170270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_170274:
    // 0x170274: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x170274u;
    {
        const bool branch_taken_0x170274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170274) {
            ctx->pc = 0x170298u;
            goto label_170298;
        }
    }
    ctx->pc = 0x17027Cu;
    // 0x17027c: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x17027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x170280: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x170280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x170284: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x170284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x170288: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170288u;
    {
        const bool branch_taken_0x170288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170288) {
            ctx->pc = 0x170298u;
            goto label_170298;
        }
    }
    ctx->pc = 0x170290u;
    // 0x170290: 0x31420008  andi        $v0, $t2, 0x8
    ctx->pc = 0x170290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)8);
    // 0x170294: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x170294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_170298:
    // 0x170298: 0xaf828730  sw          $v0, -0x78D0($gp)
    ctx->pc = 0x170298u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U32(ctx, 2));
label_17029c:
    // 0x17029c: 0x1471024  and         $v0, $t2, $a3
    ctx->pc = 0x17029cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1702a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1702a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1702a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1702a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1702a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1702acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1702b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1702b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1702b4: 0xe37004  sllv        $t6, $v1, $a3
    ctx->pc = 0x1702b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_1702b8:
    // 0x1702b8: 0x4e5824  and         $t3, $v0, $t6
    ctx->pc = 0x1702b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x1702bc: 0x1160001d  beqz        $t3, . + 4 + (0x1D << 2)
    ctx->pc = 0x1702BCu;
    {
        const bool branch_taken_0x1702bc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1702C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702BCu;
        // 0x1702c0: 0xc77821  addu        $t7, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702bc) {
            ctx->pc = 0x170334u;
            goto label_170334;
        }
    }
    ctx->pc = 0x1702C4u;
    // 0x1702c4: 0x8f8c8740  lw          $t4, -0x78C0($gp)
    ctx->pc = 0x1702c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936384)));
    // 0x1702c8: 0x91eb0100  lbu         $t3, 0x100($t7)
    ctx->pc = 0x1702c8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 256)));
    // 0x1702cc: 0x16c082b  sltu        $at, $t3, $t4
    ctx->pc = 0x1702ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1702d0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1702D0u;
    {
        const bool branch_taken_0x1702d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1702D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702D0u;
        // 0x1702d4: 0x25ed0100  addiu       $t5, $t7, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702d0) {
            ctx->pc = 0x170300u;
            goto label_170300;
        }
    }
    ctx->pc = 0x1702D8u;
    // 0x1702d8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1702d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1702dc: 0xa1ab0000  sb          $t3, 0x0($t5)
    ctx->pc = 0x1702dcu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x1702e0: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x1702e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x1702e4: 0x16c582b  sltu        $t3, $t3, $t4
    ctx->pc = 0x1702e4u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1702e8: 0x15600016  bnez        $t3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1702E8u;
    {
        const bool branch_taken_0x1702e8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1702e8) {
            ctx->pc = 0x170344u;
            goto label_170344;
        }
    }
    ctx->pc = 0x1702F0u;
    // 0x1702f0: 0x31cbffff  andi        $t3, $t6, 0xFFFF
    ctx->pc = 0x1702f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x1702f4: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x1702f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x1702f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1702F8u;
    {
        const bool branch_taken_0x1702f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1702FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702F8u;
        // 0x1702fc: 0x3129ffff  andi        $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702f8) {
            ctx->pc = 0x170344u;
            goto label_170344;
        }
    }
    ctx->pc = 0x170300u;
label_170300:
    // 0x170300: 0x91eb0110  lbu         $t3, 0x110($t7)
    ctx->pc = 0x170300u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 272)));
    // 0x170304: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x170304u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x170308: 0xa1eb0110  sb          $t3, 0x110($t7)
    ctx->pc = 0x170308u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 272), (uint8_t)GPR_U32(ctx, 11));
    // 0x17030c: 0x316c00ff  andi        $t4, $t3, 0xFF
    ctx->pc = 0x17030cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x170310: 0x8f8b873c  lw          $t3, -0x78C4($gp)
    ctx->pc = 0x170310u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x170314: 0x18b582b  sltu        $t3, $t4, $t3
    ctx->pc = 0x170314u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x170318: 0x1560000a  bnez        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x170318u;
    {
        const bool branch_taken_0x170318 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x17031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170318u;
        // 0x17031c: 0x25ed0110  addiu       $t5, $t7, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170318) {
            ctx->pc = 0x170344u;
            goto label_170344;
        }
    }
    ctx->pc = 0x170320u;
    // 0x170320: 0x31cbffff  andi        $t3, $t6, 0xFFFF
    ctx->pc = 0x170320u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x170324: 0xa1a00000  sb          $zero, 0x0($t5)
    ctx->pc = 0x170324u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x170328: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x170328u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x17032c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17032Cu;
    {
        const bool branch_taken_0x17032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17032Cu;
        // 0x170330: 0x3129ffff  andi        $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17032c) {
            ctx->pc = 0x170344u;
            goto label_170344;
        }
    }
    ctx->pc = 0x170334u;
label_170334:
    // 0x170334: 0x0  nop
    ctx->pc = 0x170334u;
    // NOP
    // 0x170338: 0xc75821  addu        $t3, $a2, $a3
    ctx->pc = 0x170338u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x17033c: 0xa1600100  sb          $zero, 0x100($t3)
    ctx->pc = 0x17033cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x170340: 0xa1600110  sb          $zero, 0x110($t3)
    ctx->pc = 0x170340u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 272), (uint8_t)GPR_U32(ctx, 0));
label_170344:
    // 0x170344: 0x0  nop
    ctx->pc = 0x170344u;
    // NOP
    // 0x170348: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x170348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17034c: 0x28eb0010  slti        $t3, $a3, 0x10
    ctx->pc = 0x17034cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x170350: 0x1560ffd9  bnez        $t3, . + 4 + (-0x27 << 2)
    ctx->pc = 0x170350u;
    {
        const bool branch_taken_0x170350 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x170354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170350u;
        // 0x170354: 0xe37004  sllv        $t6, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170350) {
            ctx->pc = 0x1702B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1702b8;
        }
    }
    ctx->pc = 0x170358u;
    // 0x170358: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x170358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17035c: 0x1281825  or          $v1, $t1, $t0
    ctx->pc = 0x17035cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x170360: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x170360u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x170364: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x170364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170368: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x170368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x17036c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x17036cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x170370: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x170370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x170374: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x170374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x170378: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x170378u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x17037c: 0xc05c100  jal         func_170400
    ctx->pc = 0x17037Cu;
    SET_GPR_U32(ctx, 31, 0x170384u);
    ctx->pc = 0x170380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17037Cu;
    // 0x170380: 0xa60a0000  sh          $t2, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170400u, 0x17037Cu, 0x170384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170384u;
label_170384:
    // 0x170384: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x170384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x170388: 0x92050006  lbu         $a1, 0x6($s0)
    ctx->pc = 0x170388u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x17038c: 0x92070008  lbu         $a3, 0x8($s0)
    ctx->pc = 0x17038cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x170390: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x170390u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x170394: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x170394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x170398: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x170398u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17039c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x17039cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1703a0: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x1703a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1703a4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1703a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1703a8: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x1703a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1703ac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1703acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1703b0: 0x30a7000f  andi        $a3, $a1, 0xF
    ctx->pc = 0x1703b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x1703b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1703b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1703b8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1703b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1703bc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1703bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1703c0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x1703c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1703c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1703c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1703c8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1703c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1703cc: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1703ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1703d0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1703d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1703d4: 0xa6060000  sh          $a2, 0x0($s0)
    ctx->pc = 0x1703d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1703d8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1703d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1703dc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1703dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1703e0: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x1703e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1703e4: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1703e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1703e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1703e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1703ec: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1703ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1703f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1703f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1703f4u;
}
