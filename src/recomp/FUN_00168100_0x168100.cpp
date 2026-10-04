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

// Function: FUN_00168100
// Address: 0x168100 - 0x168288
void FUN_00168100_0x168100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168100_0x168100");
#endif

    switch (ctx->pc) {
        case 0x168134u: goto label_168134;
        case 0x1681acu: goto label_1681ac;
        default: break;
    }

    ctx->pc = 0x168100u;

    // 0x168100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168104: 0x248e0008  addiu       $t6, $a0, 0x8
    ctx->pc = 0x168104u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x168108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16810c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16810cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168114: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x168114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168118: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x168118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16811c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x16811cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x168120: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x168120u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168124: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x168124u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x168128: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x168128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16812c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x16812Cu;
    {
        const bool branch_taken_0x16812c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16812Cu;
        // 0x168130: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16812c) {
            ctx->pc = 0x168278u;
            goto label_168278;
        }
    }
    ctx->pc = 0x168134u;
label_168134:
    // 0x168134: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x168134u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x168138: 0xf6a02  srl         $t5, $t7, 8
    ctx->pc = 0x168138u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 8));
    // 0x16813c: 0xf3b42  srl         $a3, $t7, 13
    ctx->pc = 0x16813cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 15), 13));
    // 0x168140: 0x31b8001f  andi        $t8, $t5, 0x1F
    ctx->pc = 0x168140u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31);
    // 0x168144: 0x30f90007  andi        $t9, $a3, 0x7
    ctx->pc = 0x168144u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x168148: 0xf6c82  srl         $t5, $t7, 18
    ctx->pc = 0x168148u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 18));
    // 0x16814c: 0x31e700ff  andi        $a3, $t7, 0xFF
    ctx->pc = 0x16814cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x168150: 0x31af3fff  andi        $t7, $t5, 0x3FFF
    ctx->pc = 0x168150u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16383);
    // 0x168154: 0x14e00044  bnez        $a3, . + 4 + (0x44 << 2)
    ctx->pc = 0x168154u;
    {
        const bool branch_taken_0x168154 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x168158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168154u;
        // 0x168158: 0x25ce0004  addiu       $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168154) {
            ctx->pc = 0x168268u;
            goto label_168268;
        }
    }
    ctx->pc = 0x16815Cu;
    // 0x16815c: 0x2f070003  sltiu       $a3, $t8, 0x3
    ctx->pc = 0x16815cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x168160: 0x14e00041  bnez        $a3, . + 4 + (0x41 << 2)
    ctx->pc = 0x168160u;
    {
        const bool branch_taken_0x168160 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x168164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168160u;
        // 0x168164: 0x2f010006  sltiu       $at, $t8, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168160) {
            ctx->pc = 0x168268u;
            goto label_168268;
        }
    }
    ctx->pc = 0x168168u;
    // 0x168168: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x168168u;
    {
        const bool branch_taken_0x168168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x168168) {
            ctx->pc = 0x168268u;
            goto label_168268;
        }
    }
    ctx->pc = 0x168170u;
    // 0x168170: 0x17200004  bnez        $t9, . + 4 + (0x4 << 2)
    ctx->pc = 0x168170u;
    {
        const bool branch_taken_0x168170 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x168170) {
            ctx->pc = 0x168184u;
            goto label_168184;
        }
    }
    ctx->pc = 0x168178u;
    // 0x168178: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x168178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16817c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x16817Cu;
    {
        const bool branch_taken_0x16817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16817c) {
            ctx->pc = 0x168218u;
            goto label_168218;
        }
    }
    ctx->pc = 0x168184u;
label_168184:
    // 0x168184: 0x0  nop
    ctx->pc = 0x168184u;
    // NOP
    // 0x168188: 0x172c0003  bne         $t9, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x168188u;
    {
        const bool branch_taken_0x168188 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 12));
        if (branch_taken_0x168188) {
            ctx->pc = 0x168198u;
            goto label_168198;
        }
    }
    ctx->pc = 0x168190u;
    // 0x168190: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x168190u;
    {
        const bool branch_taken_0x168190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168190u;
        // 0x168194: 0xc5c00000  lwc1        $f0, 0x0($t6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168190) {
            ctx->pc = 0x168218u;
            goto label_168218;
        }
    }
    ctx->pc = 0x168198u;
label_168198:
    // 0x168198: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x168198u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16819c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x16819cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1681a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1681a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1681A4u;
    {
        const bool branch_taken_0x1681a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1681A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1681A4u;
        // 0x1681a8: 0x198880  sll         $s1, $t9, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1681a4) {
            ctx->pc = 0x1681BCu;
            goto label_1681bc;
        }
    }
    ctx->pc = 0x1681ACu;
label_1681ac:
    // 0x1681ac: 0x0  nop
    ctx->pc = 0x1681acu;
    // NOP
    // 0x1681b0: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1681b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1681b4: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x1681b4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x1681b8: 0x1b96821  addu        $t5, $t5, $t9
    ctx->pc = 0x1681b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 25)));
label_1681bc:
    // 0x1681bc: 0x0  nop
    ctx->pc = 0x1681bcu;
    // NOP
    // 0x1681c0: 0x1d03821  addu        $a3, $t6, $s0
    ctx->pc = 0x1681c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x1681c4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1681c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1681c8: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1681c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1681cc: 0x0  nop
    ctx->pc = 0x1681ccu;
    // NOP
    // 0x1681d0: 0x4501fff6  bc1t        . + 4 + (-0xA << 2)
    ctx->pc = 0x1681D0u;
    {
        const bool branch_taken_0x1681d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1681D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1681D0u;
        // 0x1681d4: 0xd3880  sll         $a3, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1681d0) {
            ctx->pc = 0x1681ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1681ac;
        }
    }
    ctx->pc = 0x1681D8u;
    // 0x1681d8: 0x1c73821  addu        $a3, $t6, $a3
    ctx->pc = 0x1681d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x1681dc: 0xc4e50000  lwc1        $f5, 0x0($a3)
    ctx->pc = 0x1681dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1681e0: 0x46066101  sub.s       $f4, $f12, $f6
    ctx->pc = 0x1681e0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x1681e4: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x1681e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1681e8: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x1681e8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x1681ec: 0x46052143  div.s       $f5, $f4, $f5
    ctx->pc = 0x1681ecu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[5] = ctx->f[4] / ctx->f[5];
    // 0x1681f0: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x1681f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1681f4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1681f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1681f8: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x1681f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1681fc: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x1681fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x168200: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x168200u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x168204: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x168204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168208: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x168208u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
    // 0x16820c: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x16820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168210: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x168210u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x168214: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x168214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_168218:
    // 0x168218: 0x130b000e  beq         $t8, $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x168218u;
    {
        const bool branch_taken_0x168218 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 11));
        if (branch_taken_0x168218) {
            ctx->pc = 0x168254u;
            goto label_168254;
        }
    }
    ctx->pc = 0x168220u;
    // 0x168220: 0x130a0008  beq         $t8, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x168220u;
    {
        const bool branch_taken_0x168220 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 10));
        if (branch_taken_0x168220) {
            ctx->pc = 0x168244u;
            goto label_168244;
        }
    }
    ctx->pc = 0x168228u;
    // 0x168228: 0x13090003  beq         $t8, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168228u;
    {
        const bool branch_taken_0x168228 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 9));
        if (branch_taken_0x168228) {
            ctx->pc = 0x168238u;
            goto label_168238;
        }
    }
    ctx->pc = 0x168230u;
    // 0x168230: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x168230u;
    {
        const bool branch_taken_0x168230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168230) {
            ctx->pc = 0x168260u;
            goto label_168260;
        }
    }
    ctx->pc = 0x168238u;
label_168238:
    // 0x168238: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x168238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x16823c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16823Cu;
    {
        const bool branch_taken_0x16823c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16823Cu;
        // 0x168240: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16823c) {
            ctx->pc = 0x168260u;
            goto label_168260;
        }
    }
    ctx->pc = 0x168244u;
label_168244:
    // 0x168244: 0x0  nop
    ctx->pc = 0x168244u;
    // NOP
    // 0x168248: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x168248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x16824c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16824Cu;
    {
        const bool branch_taken_0x16824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16824Cu;
        // 0x168250: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16824c) {
            ctx->pc = 0x168260u;
            goto label_168260;
        }
    }
    ctx->pc = 0x168254u;
label_168254:
    // 0x168254: 0x0  nop
    ctx->pc = 0x168254u;
    // NOP
    // 0x168258: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x168258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x16825c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x16825cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_168260:
    // 0x168260: 0x10c80008  beq         $a2, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168260u;
    {
        const bool branch_taken_0x168260 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x168260) {
            ctx->pc = 0x168284u;
            goto label_168284;
        }
    }
    ctx->pc = 0x168268u;
label_168268:
    // 0x168268: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x168268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16826c: 0x32f3818  mult        $a3, $t9, $t7
    ctx->pc = 0x16826cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x168270: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x168270u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x168274: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x168274u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
label_168278:
    // 0x168278: 0x83382b  sltu        $a3, $a0, $v1
    ctx->pc = 0x168278u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16827c: 0x14e0ffad  bnez        $a3, . + 4 + (-0x53 << 2)
    ctx->pc = 0x16827Cu;
    {
        const bool branch_taken_0x16827c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x16827c) {
            ctx->pc = 0x168134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168134;
        }
    }
    ctx->pc = 0x168284u;
label_168284:
    // 0x168284: 0x0  nop
    ctx->pc = 0x168284u;
    // NOP
    ctx->pc = 0x168288u;
}
