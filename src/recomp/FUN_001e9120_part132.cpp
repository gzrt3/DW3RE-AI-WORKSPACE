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

// Function: FUN_001e9120
// Address: 0x1e9120 - 0x2291f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001e9120_part132(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x229090u: goto label_229090;
        case 0x229094u: goto label_229094;
        case 0x229098u: goto label_229098;
        case 0x22909cu: goto label_22909c;
        case 0x2290a0u: goto label_2290a0;
        case 0x2290a4u: goto label_2290a4;
        case 0x2290a8u: goto label_2290a8;
        case 0x2290acu: goto label_2290ac;
        case 0x2290b0u: goto label_2290b0;
        case 0x2290b4u: goto label_2290b4;
        case 0x2290b8u: goto label_2290b8;
        case 0x2290bcu: goto label_2290bc;
        case 0x2290c0u: goto label_2290c0;
        case 0x2290c4u: goto label_2290c4;
        case 0x2290c8u: goto label_2290c8;
        case 0x2290ccu: goto label_2290cc;
        case 0x2290d0u: goto label_2290d0;
        case 0x2290d4u: goto label_2290d4;
        case 0x2290d8u: goto label_2290d8;
        case 0x2290dcu: goto label_2290dc;
        case 0x2290e0u: goto label_2290e0;
        case 0x2290e4u: goto label_2290e4;
        case 0x2290e8u: goto label_2290e8;
        case 0x2290ecu: goto label_2290ec;
        case 0x2290f0u: goto label_2290f0;
        case 0x2290f4u: goto label_2290f4;
        case 0x2290f8u: goto label_2290f8;
        case 0x2290fcu: goto label_2290fc;
        case 0x229100u: goto label_229100;
        case 0x229104u: goto label_229104;
        case 0x229108u: goto label_229108;
        case 0x22910cu: goto label_22910c;
        case 0x229110u: goto label_229110;
        case 0x229114u: goto label_229114;
        case 0x229118u: goto label_229118;
        case 0x22911cu: goto label_22911c;
        case 0x229120u: goto label_229120;
        case 0x229124u: goto label_229124;
        case 0x229128u: goto label_229128;
        case 0x22912cu: goto label_22912c;
        case 0x229130u: goto label_229130;
        case 0x229134u: goto label_229134;
        case 0x229138u: goto label_229138;
        case 0x22913cu: goto label_22913c;
        case 0x229140u: goto label_229140;
        case 0x229144u: goto label_229144;
        case 0x229148u: goto label_229148;
        case 0x22914cu: goto label_22914c;
        case 0x229150u: goto label_229150;
        case 0x229154u: goto label_229154;
        case 0x229158u: goto label_229158;
        case 0x22915cu: goto label_22915c;
        case 0x229160u: goto label_229160;
        case 0x229164u: goto label_229164;
        case 0x229168u: goto label_229168;
        case 0x22916cu: goto label_22916c;
        case 0x229170u: goto label_229170;
        case 0x229174u: goto label_229174;
        case 0x229178u: goto label_229178;
        case 0x22917cu: goto label_22917c;
        case 0x229180u: goto label_229180;
        case 0x229184u: goto label_229184;
        case 0x229188u: goto label_229188;
        case 0x22918cu: goto label_22918c;
        case 0x229190u: goto label_229190;
        case 0x229194u: goto label_229194;
        case 0x229198u: goto label_229198;
        case 0x22919cu: goto label_22919c;
        case 0x2291a0u: goto label_2291a0;
        case 0x2291a4u: goto label_2291a4;
        case 0x2291a8u: goto label_2291a8;
        case 0x2291acu: goto label_2291ac;
        case 0x2291b0u: goto label_2291b0;
        case 0x2291b4u: goto label_2291b4;
        case 0x2291b8u: goto label_2291b8;
        case 0x2291bcu: goto label_2291bc;
        case 0x2291c0u: goto label_2291c0;
        case 0x2291c4u: goto label_2291c4;
        case 0x2291c8u: goto label_2291c8;
        case 0x2291ccu: goto label_2291cc;
        case 0x2291d0u: goto label_2291d0;
        case 0x2291d4u: goto label_2291d4;
        case 0x2291d8u: goto label_2291d8;
        case 0x2291dcu: goto label_2291dc;
        case 0x2291e0u: goto label_2291e0;
        case 0x2291e4u: goto label_2291e4;
        case 0x2291e8u: goto label_2291e8;
        case 0x2291ecu: goto label_2291ec;
        case 0x2291f0u: goto label_2291f0;
        default: return;
    }

label_229090:
    // 0x229090: 0x747c2  srl         $t0, $a3, 31
    ctx->pc = 0x229090u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_229094:
    // 0x229094: 0x0  nop
    ctx->pc = 0x229094u;
    // NOP
label_229098:
    // 0x229098: 0x3810  mfhi        $a3
    ctx->pc = 0x229098u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_22909c:
    // 0x22909c: 0x73ac3  sra         $a3, $a3, 11
    ctx->pc = 0x22909cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 11));
label_2290a0:
    // 0x2290a0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2290a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2290a4:
    // 0x2290a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2290a8:
    if (ctx->pc == 0x2290A8u) {
        ctx->pc = 0x2290A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290A4u;
        // 0x2290a8: 0xa0c70219  sb          $a3, 0x219($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 537), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2290ACu;
        goto label_2290ac;
    }
    ctx->pc = 0x2290A4u;
    {
        const bool branch_taken_0x2290a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2290A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290A4u;
        // 0x2290a8: 0xa0c70219  sb          $a3, 0x219($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 537), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2290a4) {
            ctx->pc = 0x2290C0u;
            goto label_2290c0;
        }
    }
    ctx->pc = 0x2290ACu;
label_2290ac:
    // 0x2290ac: 0x0  nop
    ctx->pc = 0x2290acu;
    // NOP
label_2290b0:
    // 0x2290b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2290b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2290b4:
    // 0x2290b4: 0x29070006  slti        $a3, $t0, 0x6
    ctx->pc = 0x2290b4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)6) ? 1 : 0);
label_2290b8:
    // 0x2290b8: 0x14e0ffc0  bnez        $a3, . + 4 + (-0x40 << 2)
label_2290bc:
    if (ctx->pc == 0x2290BCu) {
        ctx->pc = 0x2290BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290B8u;
        // 0x2290bc: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2290C0u;
        goto label_2290c0;
    }
    ctx->pc = 0x2290B8u;
    {
        const bool branch_taken_0x2290b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2290BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290B8u;
        // 0x2290bc: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2290b8) {
            ctx->pc = 0x228FBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x228fbc; return; }
        }
    }
    ctx->pc = 0x2290C0u;
label_2290c0:
    // 0x2290c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2290c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2290c4:
    // 0x2290c4: 0x28860009  slti        $a2, $a0, 0x9
    ctx->pc = 0x2290c4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_2290c8:
    // 0x2290c8: 0x14c0ffb5  bnez        $a2, . + 4 + (-0x4B << 2)
label_2290cc:
    if (ctx->pc == 0x2290CCu) {
        ctx->pc = 0x2290CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290C8u;
        // 0x2290cc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2290D0u;
        goto label_2290d0;
    }
    ctx->pc = 0x2290C8u;
    {
        const bool branch_taken_0x2290c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2290CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290C8u;
        // 0x2290cc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2290c8) {
            ctx->pc = 0x228FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x228fa0; return; }
        }
    }
    ctx->pc = 0x2290D0u;
label_2290d0:
    // 0x2290d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2290d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2290d4:
    // 0x2290d4: 0x2862004a  slti        $v0, $v1, 0x4A
    ctx->pc = 0x2290d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_2290d8:
    // 0x2290d8: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
label_2290dc:
    if (ctx->pc == 0x2290DCu) {
        ctx->pc = 0x2290DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290D8u;
        // 0x2290dc: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2290E0u;
        goto label_2290e0;
    }
    ctx->pc = 0x2290D8u;
    {
        const bool branch_taken_0x2290d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2290DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290D8u;
        // 0x2290dc: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2290d8) {
            ctx->pc = 0x228F7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x228f7c; return; }
        }
    }
    ctx->pc = 0x2290E0u;
label_2290e0:
    // 0x2290e0: 0x3c0a004b  lui         $t2, 0x4B
    ctx->pc = 0x2290e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)75 << 16));
label_2290e4:
    // 0x2290e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2290e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2290e8:
    // 0x2290e8: 0x254a03a0  addiu       $t2, $t2, 0x3A0
    ctx->pc = 0x2290e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 928));
label_2290ec:
    // 0x2290ec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2290ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2290f0:
    // 0x2290f0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2290f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2290f4:
    // 0x2290f4: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x2290f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2290f8:
    // 0x2290f8: 0x0  nop
    ctx->pc = 0x2290f8u;
    // NOP
label_2290fc:
    // 0x2290fc: 0x85420012  lh          $v0, 0x12($t2)
    ctx->pc = 0x2290fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 18)));
label_229100:
    // 0x229100: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_229104:
    if (ctx->pc == 0x229104u) {
        ctx->pc = 0x229108u;
        goto label_229108;
    }
    ctx->pc = 0x229100u;
    {
        const bool branch_taken_0x229100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229100) {
            ctx->pc = 0x2291C8u;
            goto label_2291c8;
        }
    }
    ctx->pc = 0x229108u;
label_229108:
    // 0x229108: 0x8d4b0030  lw          $t3, 0x30($t2)
    ctx->pc = 0x229108u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
label_22910c:
    // 0x22910c: 0x1160002e  beqz        $t3, . + 4 + (0x2E << 2)
label_229110:
    if (ctx->pc == 0x229110u) {
        ctx->pc = 0x229110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22910Cu;
        // 0x229110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229114u;
        goto label_229114;
    }
    ctx->pc = 0x22910Cu;
    {
        const bool branch_taken_0x22910c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x229110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22910Cu;
        // 0x229110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22910c) {
            ctx->pc = 0x2291C8u;
            goto label_2291c8;
        }
    }
    ctx->pc = 0x229114u;
label_229114:
    // 0x229114: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x229114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229118:
    // 0x229118: 0xc5610150  lwc1        $f1, 0x150($t3)
    ctx->pc = 0x229118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22911c:
    // 0x22911c: 0x0  nop
    ctx->pc = 0x22911cu;
    // NOP
label_229120:
    // 0x229120: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x229120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_229124:
    // 0x229124: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x229124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229128:
    // 0x229128: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x229128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22912c:
    // 0x22912c: 0x0  nop
    ctx->pc = 0x22912cu;
    // NOP
label_229130:
    // 0x229130: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_229134:
    if (ctx->pc == 0x229134u) {
        ctx->pc = 0x229134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229130u;
        // 0x229134: 0x874021  addu        $t0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229138u;
        goto label_229138;
    }
    ctx->pc = 0x229130u;
    {
        const bool branch_taken_0x229130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x229134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229130u;
        // 0x229134: 0x874021  addu        $t0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229130) {
            ctx->pc = 0x2291B4u;
            goto label_2291b4;
        }
    }
    ctx->pc = 0x229138u;
label_229138:
    // 0x229138: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x229138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22913c:
    // 0x22913c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22913cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_229140:
    // 0x229140: 0x0  nop
    ctx->pc = 0x229140u;
    // NOP
label_229144:
    // 0x229144: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_229148:
    if (ctx->pc == 0x229148u) {
        ctx->pc = 0x22914Cu;
        goto label_22914c;
    }
    ctx->pc = 0x229144u;
    {
        const bool branch_taken_0x229144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229144) {
            ctx->pc = 0x2291B4u;
            goto label_2291b4;
        }
    }
    ctx->pc = 0x22914Cu;
label_22914c:
    // 0x22914c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229150:
    // 0x229150: 0xc5620158  lwc1        $f2, 0x158($t3)
    ctx->pc = 0x229150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_229154:
    // 0x229154: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x229154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_229158:
    // 0x229158: 0x0  nop
    ctx->pc = 0x229158u;
    // NOP
label_22915c:
    // 0x22915c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_229160:
    if (ctx->pc == 0x229160u) {
        ctx->pc = 0x229164u;
        goto label_229164;
    }
    ctx->pc = 0x22915Cu;
    {
        const bool branch_taken_0x22915c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22915c) {
            ctx->pc = 0x2291B4u;
            goto label_2291b4;
        }
    }
    ctx->pc = 0x229164u;
label_229164:
    // 0x229164: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x229164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229168:
    // 0x229168: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x229168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22916c:
    // 0x22916c: 0x0  nop
    ctx->pc = 0x22916cu;
    // NOP
label_229170:
    // 0x229170: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_229174:
    if (ctx->pc == 0x229174u) {
        ctx->pc = 0x229174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229170u;
        // 0x229174: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229178u;
        goto label_229178;
    }
    ctx->pc = 0x229170u;
    {
        const bool branch_taken_0x229170 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x229174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229170u;
        // 0x229174: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229170) {
            ctx->pc = 0x2291B4u;
            goto label_2291b4;
        }
    }
    ctx->pc = 0x229178u;
label_229178:
    // 0x229178: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x229178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22917c:
    // 0x22917c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_229180:
    // 0x229180: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x229180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_229184:
    // 0x229184: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x229184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_229188:
    // 0x229188: 0xc5600050  lwc1        $f0, 0x50($t3)
    ctx->pc = 0x229188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22918c:
    // 0x22918c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x22918cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_229190:
    // 0x229190: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x229190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_229194:
    // 0x229194: 0xe5600050  swc1        $f0, 0x50($t3)
    ctx->pc = 0x229194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 80), bits); }
label_229198:
    // 0x229198: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x229198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22919c:
    // 0x22919c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22919cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2291a0:
    // 0x2291a0: 0xc5600058  lwc1        $f0, 0x58($t3)
    ctx->pc = 0x2291a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2291a4:
    // 0x2291a4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2291a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2291a8:
    // 0x2291a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2291a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2291ac:
    // 0x2291ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_2291b0:
    if (ctx->pc == 0x2291B0u) {
        ctx->pc = 0x2291B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291ACu;
        // 0x2291b0: 0xe5600058  swc1        $f0, 0x58($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2291B4u;
        goto label_2291b4;
    }
    ctx->pc = 0x2291ACu;
    {
        const bool branch_taken_0x2291ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2291B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291ACu;
        // 0x2291b0: 0xe5600058  swc1        $f0, 0x58($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291ac) {
            ctx->pc = 0x2291C8u;
            goto label_2291c8;
        }
    }
    ctx->pc = 0x2291B4u;
label_2291b4:
    // 0x2291b4: 0x0  nop
    ctx->pc = 0x2291b4u;
    // NOP
label_2291b8:
    // 0x2291b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2291b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2291bc:
    // 0x2291bc: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x2291bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
label_2291c0:
    // 0x2291c0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_2291c4:
    if (ctx->pc == 0x2291C4u) {
        ctx->pc = 0x2291C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291C0u;
        // 0x2291c4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2291C8u;
        goto label_2291c8;
    }
    ctx->pc = 0x2291C0u;
    {
        const bool branch_taken_0x2291c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2291C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291C0u;
        // 0x2291c4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291c0) {
            ctx->pc = 0x229120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229120;
        }
    }
    ctx->pc = 0x2291C8u;
label_2291c8:
    // 0x2291c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2291c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2291cc:
    // 0x2291cc: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x2291ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
label_2291d0:
    // 0x2291d0: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_2291d4:
    if (ctx->pc == 0x2291D4u) {
        ctx->pc = 0x2291D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291D0u;
        // 0x2291d4: 0x254a0070  addiu       $t2, $t2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2291D8u;
        goto label_2291d8;
    }
    ctx->pc = 0x2291D0u;
    {
        const bool branch_taken_0x2291d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2291D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291D0u;
        // 0x2291d4: 0x254a0070  addiu       $t2, $t2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2291d0) {
            ctx->pc = 0x2290F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2290f8;
        }
    }
    ctx->pc = 0x2291D8u;
label_2291d8:
    // 0x2291d8: 0xc06e45c  jal         func_1B9170
label_2291dc:
    if (ctx->pc == 0x2291DCu) {
        ctx->pc = 0x2291DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2291D8u;
        // 0x2291dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2291E0u;
        goto label_2291e0;
    }
    ctx->pc = 0x2291D8u;
    SET_GPR_U32(ctx, 31, 0x2291E0u);
    ctx->pc = 0x2291DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291D8u;
    // 0x2291dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9170u, 0x2291D8u, 0x2291E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291E0u;
label_2291e0:
    // 0x2291e0: 0xc05dd08  jal         func_177420
label_2291e4:
    if (ctx->pc == 0x2291E4u) {
        ctx->pc = 0x2291E8u;
        goto label_2291e8;
    }
    ctx->pc = 0x2291E0u;
    SET_GPR_U32(ctx, 31, 0x2291E8u);
    ctx->pc = 0x177420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177420u, 0x2291E0u, 0x2291E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291E8u;
label_2291e8:
    // 0x2291e8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2291e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2291ec:
    // 0x2291ec: 0xac2051f0  sw          $zero, 0x51F0($at)
    ctx->pc = 0x2291ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20976), GPR_U32(ctx, 0));
label_2291f0:
    // 0x2291f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2291f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x2291f4u;
}
