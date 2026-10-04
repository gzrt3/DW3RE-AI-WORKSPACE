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

// Function: entry_001b2948
// Address: 0x1b2948 - 0x1b2a78
void entry_001b2948_0x1b2948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2948_0x1b2948");
#endif

    switch (ctx->pc) {
        case 0x1b2a34u: goto label_1b2a34;
        default: break;
    }

    ctx->pc = 0x1b2948u;

    // 0x1b2948: 0x481004b  bgez        $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1B2948u;
    {
        const bool branch_taken_0x1b2948 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1b2948) {
            ctx->pc = 0x1B2A78u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x1B2A74u;
    // 0x1b2a74: 0x0  nop
    ctx->pc = 0x1b2a74u;
    // NOP
    ctx->pc = 0x1b2a78u;
}
