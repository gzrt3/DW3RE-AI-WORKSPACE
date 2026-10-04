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

// Function: entry_001b2810
// Address: 0x1b2810 - 0x1b2948
void entry_001b2810_0x1b2810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2810_0x1b2810");
#endif

    ctx->pc = 0x1b2810u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1B2944u;
    // 0x1b2944: 0x0  nop
    ctx->pc = 0x1b2944u;
    // NOP
    ctx->pc = 0x1b2948u;
}
