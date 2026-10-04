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

// Function: entry_001b2a78
// Address: 0x1b2a78 - 0x1b2bbc
void entry_001b2a78_0x1b2a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2a78_0x1b2a78");
#endif

    switch (ctx->pc) {
        case 0x1b2a98u: goto label_1b2a98;
        default: break;
    }

    ctx->pc = 0x1b2a78u;

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
    ctx->pc = 0x1b2bbcu;
}
