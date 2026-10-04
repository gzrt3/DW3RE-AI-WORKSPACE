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

// Function: FUN_001b2798
// Address: 0x1b2798 - 0x1b2bcc
void FUN_001b2798_0x1b2798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b2798_0x1b2798");
#endif

    switch (ctx->pc) {
        case 0x1b2a34u: goto label_1b2a34;
        case 0x1b2a98u: goto label_1b2a98;
        default: break;
    }

    ctx->pc = 0x1b2798u;

    // 0x1b2798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b279c: 0x460062c6  mov.s       $f11, $f12
    ctx->pc = 0x1b279cu;
    ctx->f[11] = FPU_MOV_S(ctx->f[12]);
    // 0x1b27a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b27a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b27a4: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x1b27a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1b27a8: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1b27a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b27ac: 0x44045800  mfc1        $a0, $f11
    ctx->pc = 0x1b27acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1b27b0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b27b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1b27b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1b27b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b27b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b27bc: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x1b27bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1b27c0: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B27C0u;
    {
        const bool branch_taken_0x1b27c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27C0u;
        // 0x1b27c4: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27c0) {
            ctx->pc = 0x1B27E8u;
            goto label_1b27e8;
        }
    }
    ctx->pc = 0x1B27C8u;
    // 0x1b27c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b27c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b27cc: 0x1c8000fc  bgtz        $a0, . + 4 + (0xFC << 2)
    ctx->pc = 0x1B27CCu;
    {
        const bool branch_taken_0x1b27cc = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1B27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27CCu;
        // 0x1b27d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27cc) {
            ctx->pc = 0x1B2BC0u;
            goto label_1b2bc0;
        }
    }
    ctx->pc = 0x1B27D4u;
    // 0x1b27d4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b27d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1b27d8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b27d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1b27dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b27dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b27e0: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x1B27E0u;
    {
        const bool branch_taken_0x1b27e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27E0u;
        // 0x1b27e4: 0xc7b60028  lwc1        $f22, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27e0) {
            ctx->pc = 0x1B2BC4u;
            goto label_1b2bc4;
        }
    }
    ctx->pc = 0x1B27E8u;
label_1b27e8:
    // 0x1b27e8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1b27e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b27ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B27ECu;
    {
        const bool branch_taken_0x1b27ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27ECu;
        // 0x1b27f0: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27ec) {
            ctx->pc = 0x1B2810u;
            goto label_1b2810;
        }
    }
    ctx->pc = 0x1B27F4u;
    // 0x1b27f4: 0x460b5801  sub.s       $f0, $f11, $f11
    ctx->pc = 0x1b27f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[11]);
    // 0x1b27f8: 0x0  nop
    ctx->pc = 0x1b27f8u;
    // NOP
    // 0x1b27fc: 0x0  nop
    ctx->pc = 0x1b27fcu;
    // NOP
    // 0x1b2800: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1b2800u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x1b2804: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x1B2804u;
    {
        const bool branch_taken_0x1b2804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2804u;
        // 0x1b2808: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2804) {
            ctx->pc = 0x1B2BC0u;
            goto label_1b2bc0;
        }
    }
    ctx->pc = 0x1B280Cu;
    // 0x1b280c: 0x0  nop
    ctx->pc = 0x1b280cu;
    // NOP
label_1b2810:
    // 0x1b2810: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b2810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b2814: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b2814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b2818: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1B2818u;
    {
        const bool branch_taken_0x1b2818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2818u;
        // 0x1b281c: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2818) {
            ctx->pc = 0x1B2948u;
            goto label_1b2948;
        }
    }
    ctx->pc = 0x1B2820u;
    // 0x1b2820: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b2820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1b2824: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b2824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1b2828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b282c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b282cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b2830: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x1B2830u;
    {
        const bool branch_taken_0x1b2830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2830u;
        // 0x1b2834: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2830) {
            ctx->pc = 0x1B2BC0u;
            goto label_1b2bc0;
        }
    }
    ctx->pc = 0x1B2838u;
    // 0x1b2838: 0x460b5d42  mul.s       $f21, $f11, $f11
    ctx->pc = 0x1b2838u;
    ctx->f[21] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x1b283c: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x1b283cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x1b2840: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x1b2840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x1b2844: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2848: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x1b2848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x1b284c: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x1b284cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x1b2850: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b2850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b2854: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x1b2854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x1b2858: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x1b2858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x1b285c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1b285cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1b2860: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x1b2860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x1b2864: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x1b2864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x1b2868: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b286c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b286cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b2870: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x1b2870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x1b2874: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x1b2874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x1b2878: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b287c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1b287cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1b2880: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x1b2880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x1b2884: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x1b2884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x1b2888: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1b2888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1b288c: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x1b288cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x1b2890: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x1b2890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x1b2894: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b2894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b2898: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x1b2898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x1b289c: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x1b289cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x1b28a0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1b28a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1b28a4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1b28a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1b28a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b28a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b28ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b28acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b28b0: 0x0  nop
    ctx->pc = 0x1b28b0u;
    // NOP
    // 0x1b28b4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1b28b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b28b8: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x1b28b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x1b28bc: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1b28bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1b28c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b28c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b28c4: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x1b28c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x1b28c8: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x1b28c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x1b28cc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b28ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b28d0: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1b28d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x1b28d4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b28d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1b28d8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1b28d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1b28dc: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b28dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b28e0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b28e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1b28e4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1b28e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1b28e8: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1b28e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1b28ec: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1b28ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1b28f0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1b28f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x1b28f4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1b28f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1b28f8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b28f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b28fc: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1b28fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1b2900: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1b2900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x1b2904: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1b2904u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1b2908: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2908u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b290c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1b290cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1b2910: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x1b2910u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x1b2914: 0x46031580  add.s       $f22, $f2, $f3
    ctx->pc = 0x1b2914u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1b2918: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b291c: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x1b291cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x1b2920: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x1b2920u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b2924: 0x0  nop
    ctx->pc = 0x1b2924u;
    // NOP
    // 0x1b2928: 0x0  nop
    ctx->pc = 0x1b2928u;
    // NOP
    // 0x1b292c: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x1b292cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x1b2930: 0x460c5842  mul.s       $f1, $f11, $f12
    ctx->pc = 0x1b2930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x1b2934: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b2934u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b2938: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x1b2938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x1b293c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1B293Cu;
    {
        const bool branch_taken_0x1b293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B293Cu;
        // 0x1b2940: 0x46005001  sub.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b293c) {
            ctx->pc = 0x1B2BC0u;
            goto label_1b2bc0;
        }
    }
    ctx->pc = 0x1B2944u;
    // 0x1b2944: 0x0  nop
    ctx->pc = 0x1b2944u;
    // NOP
label_1b2948:
    // 0x1b2948: 0x481004b  bgez        $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1B2948u;
    {
        const bool branch_taken_0x1b2948 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1b2948) {
            ctx->pc = 0x1B2A78u;
            goto label_1b2a78;
        }
    }
    ctx->pc = 0x1B2950u;
    // 0x1b2950: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2954: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1b2954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1b2958: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b2958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b295c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b295cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b2960: 0x460a5880  add.s       $f2, $f11, $f10
    ctx->pc = 0x1b2960u;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x1b2964: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x1b2964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x1b2968: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x1b2968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x1b296c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b296cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2970: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x1b2970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x1b2974: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x1b2974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x1b2978: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b2978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b297c: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x1b297cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x1b2980: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x1b2980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x1b2984: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1b2984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1b2988: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x1b2988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x1b298c: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x1b298cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x1b2990: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2994: 0x46031542  mul.s       $f21, $f2, $f3
    ctx->pc = 0x1b2994u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1b2998: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x1b2998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x1b299c: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x1b299cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x1b29a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b29a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b29a4: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x1b29a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x1b29a8: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x1b29a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x1b29ac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b29acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b29b0: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x1b29b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x1b29b4: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x1b29b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x1b29b8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1b29b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1b29bc: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x1b29bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x1b29c0: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x1b29c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x1b29c4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1b29c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1b29c8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b29c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b29cc: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x1b29ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x1b29d0: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x1b29d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x1b29d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b29d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b29d8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b29d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b29dc: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1b29dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x1b29e0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b29e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1b29e4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1b29e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1b29e8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1b29e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1b29ec: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1b29ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1b29f0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1b29f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1b29f4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b29f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b29f8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b29f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b29fc: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1b29fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1b2a00: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b2a00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b2a04: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b2a08: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b2a0c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x1b2a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x1b2a10: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1b2a10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1b2a14: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b2a18: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2a18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b2a1c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x1b2a1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x1b2a20: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x1b2a20u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x1b2a24: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b2a28: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1b2a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1b2a2c: 0xc06cf7a  jal         func_1B3DE8
    ctx->pc = 0x1B2A2Cu;
    SET_GPR_U32(ctx, 31, 0x1B2A34u);
    ctx->pc = 0x1B2A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A2Cu;
    // 0x1b2a30: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3DE8u, 0x1B2A2Cu, 0x1B2A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A34u;
label_1b2a34:
    // 0x1b2a34: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1b2a34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1b2a38: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x1b2a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x1b2a3c: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1b2a3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1b2a40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2a44: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b2a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1b2a48: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1b2a48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1b2a4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2a50: 0x0  nop
    ctx->pc = 0x1b2a50u;
    // NOP
    // 0x1b2a54: 0x0  nop
    ctx->pc = 0x1b2a54u;
    // NOP
    // 0x1b2a58: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x1b2a58u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x1b2a5c: 0x460d6002  mul.s       $f0, $f12, $f13
    ctx->pc = 0x1b2a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x1b2a60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b2a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b2a64: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x1b2a64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1b2a68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b2a68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1b2a6c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1B2A6Cu;
    {
        const bool branch_taken_0x1b2a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A6Cu;
        // 0x1b2a70: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a6c) {
            ctx->pc = 0x1B2BBCu;
            goto label_1b2bbc;
        }
    }
    ctx->pc = 0x1B2A74u;
    // 0x1b2a74: 0x0  nop
    ctx->pc = 0x1b2a74u;
    // NOP
label_1b2a78:
    // 0x1b2a78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2a7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b2a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b2a80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b2a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b2a84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2a88: 0x460ba001  sub.s       $f0, $f20, $f11
    ctx->pc = 0x1b2a88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[11]);
    // 0x1b2a8c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1b2a8cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2a90: 0xc06cf7a  jal         func_1B3DE8
    ctx->pc = 0x1B2A90u;
    SET_GPR_U32(ctx, 31, 0x1B2A98u);
    ctx->pc = 0x1B2A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A90u;
    // 0x1b2a94: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3DE8u, 0x1B2A90u, 0x1B2A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A98u;
label_1b2a98:
    // 0x1b2a98: 0x460002c6  mov.s       $f11, $f0
    ctx->pc = 0x1b2a98u;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
    // 0x1b2a9c: 0x46005b46  mov.s       $f13, $f11
    ctx->pc = 0x1b2a9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[11]);
    // 0x1b2aa0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b2aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b2aa4: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x1b2aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1b2aa8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2aac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b2aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b2ab0: 0x44835800  mtc1        $v1, $f11
    ctx->pc = 0x1b2ab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1b2ab4: 0x0  nop
    ctx->pc = 0x1b2ab4u;
    // NOP
    // 0x1b2ab8: 0x460b58c2  mul.s       $f3, $f11, $f11
    ctx->pc = 0x1b2ab8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x1b2abc: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x1b2abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x1b2ac0: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x1b2ac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x1b2ac4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2ac8: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x1b2ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x1b2acc: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x1b2accu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x1b2ad0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b2ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b2ad4: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x1b2ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x1b2ad8: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x1b2ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x1b2adc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1b2adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1b2ae0: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x1b2ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x1b2ae4: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x1b2ae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x1b2ae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2aec: 0x0  nop
    ctx->pc = 0x1b2aecu;
    // NOP
    // 0x1b2af0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b2af4: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x1b2af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x1b2af8: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x1b2af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x1b2afc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b2afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b2b00: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2b00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b2b04: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x1b2b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x1b2b08: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x1b2b08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x1b2b0c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1b2b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1b2b10: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x1b2b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x1b2b14: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x1b2b14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x1b2b18: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1b2b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1b2b1c: 0x4603a8c1  sub.s       $f3, $f21, $f3
    ctx->pc = 0x1b2b1cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
    // 0x1b2b20: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x1b2b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x1b2b24: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x1b2b24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x1b2b28: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1b2b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1b2b2c: 0x0  nop
    ctx->pc = 0x1b2b2cu;
    // NOP
    // 0x1b2b30: 0x460b6880  add.s       $f2, $f13, $f11
    ctx->pc = 0x1b2b30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[13], ctx->f[11]);
    // 0x1b2b34: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1b2b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1b2b38: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1b2b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x1b2b3c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b2b3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1b2b40: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b2b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b2b44: 0x0  nop
    ctx->pc = 0x1b2b44u;
    // NOP
    // 0x1b2b48: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1b2b48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1b2b4c: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x1b2b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x1b2b50: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x1b2b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x1b2b54: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1b2b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1b2b58: 0x0  nop
    ctx->pc = 0x1b2b58u;
    // NOP
    // 0x1b2b5c: 0x0  nop
    ctx->pc = 0x1b2b5cu;
    // NOP
    // 0x1b2b60: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x1b2b60u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[2];
    // 0x1b2b64: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b2b68: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b2b6c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x1b2b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x1b2b70: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1b2b70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x1b2b74: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b2b78: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b2b7c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1b2b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1b2b80: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1b2b80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x1b2b84: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b2b88: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2b88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b2b8c: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x1b2b8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x1b2b90: 0x46140d80  add.s       $f22, $f1, $f20
    ctx->pc = 0x1b2b90u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1b2b94: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b2b98: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1b2b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1b2b9c: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x1b2b9cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b2ba0: 0x0  nop
    ctx->pc = 0x1b2ba0u;
    // NOP
    // 0x1b2ba4: 0x0  nop
    ctx->pc = 0x1b2ba4u;
    // NOP
    // 0x1b2ba8: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x1b2ba8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x1b2bac: 0x460d6002  mul.s       $f0, $f12, $f13
    ctx->pc = 0x1b2bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x1b2bb0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1b2bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1b2bb4: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x1b2bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x1b2bb8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b2bb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b2bbc:
    // 0x1b2bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2bc0:
    // 0x1b2bc0: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x1b2bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b2bc4:
    // 0x1b2bc4: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x1b2bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b2bc8: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1b2bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x1b2bccu;
}
