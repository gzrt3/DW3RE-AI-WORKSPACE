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

// Function: entry_001b4aac
// Address: 0x1b4aac - 0x1b4d68
void entry_001b4aac_0x1b4aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4aac_0x1b4aac");
#endif

    ctx->pc = 0x1b4aacu;

    // 0x1b4aac: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x1b4aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
    // 0x1b4ab0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1b4ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b4ab4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B4AB4u;
    {
        const bool branch_taken_0x1b4ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ab4) {
            ctx->pc = 0x1B4AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4AB4u;
            // 0x1b4ab8: 0x461083c2  mul.s       $f15, $f16, $f16 (Delay Slot)
            ctx->f[15] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4AFCu;
            goto label_1b4afc;
        }
    }
    ctx->pc = 0x1B4ABCu;
    // 0x1b4abc: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4ABCu;
    {
        const bool branch_taken_0x1b4abc = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1b4abc) {
            ctx->pc = 0x1B4ACCu;
            goto label_1b4acc;
        }
    }
    ctx->pc = 0x1B4AC4u;
    // 0x1b4ac4: 0x46008407  neg.s       $f16, $f16
    ctx->pc = 0x1b4ac4u;
    ctx->f[16] = FPU_NEG_S(ctx->f[16]);
    // 0x1b4ac8: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x1b4ac8u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_1b4acc:
    // 0x1b4acc: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x1b4accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x1b4ad0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1b4ad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1b4ad4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4ad8: 0x3c013322  lui         $at, 0x3322
    ctx->pc = 0x1b4ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13090 << 16));
    // 0x1b4adc: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1b4adcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1b4ae0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4ae4: 0x0  nop
    ctx->pc = 0x1b4ae4u;
    // NOP
    // 0x1b4ae8: 0x461003c1  sub.s       $f15, $f0, $f16
    ctx->pc = 0x1b4ae8u;
    ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[16]);
    // 0x1b4aec: 0x460d0b81  sub.s       $f14, $f1, $f13
    ctx->pc = 0x1b4aecu;
    ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x1b4af0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b4af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b4af4: 0x460e7c00  add.s       $f16, $f15, $f14
    ctx->pc = 0x1b4af4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x1b4af8: 0x461083c2  mul.s       $f15, $f16, $f16
    ctx->pc = 0x1b4af8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
label_1b4afc:
    // 0x1b4afc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b4b00: 0x2442b220  addiu       $v0, $v0, -0x4DE0
    ctx->pc = 0x1b4b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947360));
    // 0x1b4b04: 0x3c033f2c  lui         $v1, 0x3F2C
    ctx->pc = 0x1b4b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16172 << 16));
    // 0x1b4b08: 0xc4480030  lwc1        $f8, 0x30($v0)
    ctx->pc = 0x1b4b08u;
    { uint32_t bits = FAST_READ32(0x2CB250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1b4b0c: 0x3463a13f  ori         $v1, $v1, 0xA13F
    ctx->pc = 0x1b4b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41279);
    // 0x1b4b10: 0xc449002c  lwc1        $f9, 0x2C($v0)
    ctx->pc = 0x1b4b10u;
    { uint32_t bits = FAST_READ32(0x2CB24Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1b4b14: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1b4b14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b4b18: 0x460f7b82  mul.s       $f14, $f15, $f15
    ctx->pc = 0x1b4b18u;
    ctx->f[14] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x1b4b1c: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x1b4b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4b20: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1b4b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4b24: 0x46107b02  mul.s       $f12, $f15, $f16
    ctx->pc = 0x1b4b24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[15], ctx->f[16]);
    // 0x1b4b28: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x1b4b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4b2c: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x1b4b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b4b30: 0x46087202  mul.s       $f8, $f14, $f8
    ctx->pc = 0x1b4b30u;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x1b4b34: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x1b4b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b4b38: 0x46097242  mul.s       $f9, $f14, $f9
    ctx->pc = 0x1b4b38u;
    ctx->f[9] = FPU_MUL_S(ctx->f[14], ctx->f[9]);
    // 0x1b4b3c: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x1b4b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b4b40: 0xc4460010  lwc1        $f6, 0x10($v0)
    ctx->pc = 0x1b4b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1b4b44: 0xc447000c  lwc1        $f7, 0xC($v0)
    ctx->pc = 0x1b4b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1b4b48: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1b4b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1b4b4c: 0xc4480000  lwc1        $f8, 0x0($v0)
    ctx->pc = 0x1b4b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1b4b50: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x1b4b50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x1b4b54: 0xc44a0008  lwc1        $f10, 0x8($v0)
    ctx->pc = 0x1b4b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1b4b58: 0xc44b0004  lwc1        $f11, 0x4($v0)
    ctx->pc = 0x1b4b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1b4b5c: 0x460c4202  mul.s       $f8, $f8, $f12
    ctx->pc = 0x1b4b5cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x1b4b60: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1b4b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x1b4b64: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x1b4b64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x1b4b68: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1b4b68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b4b6c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1b4b6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1b4b70: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x1b4b70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x1b4b74: 0x460370c2  mul.s       $f3, $f14, $f3
    ctx->pc = 0x1b4b74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
    // 0x1b4b78: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x1b4b78u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x1b4b7c: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x1b4b7cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1b4b80: 0x46057142  mul.s       $f5, $f14, $f5
    ctx->pc = 0x1b4b80u;
    ctx->f[5] = FPU_MUL_S(ctx->f[14], ctx->f[5]);
    // 0x1b4b84: 0x46047102  mul.s       $f4, $f14, $f4
    ctx->pc = 0x1b4b84u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x1b4b88: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x1b4b88u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1b4b8c: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x1b4b8cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x1b4b90: 0x46067182  mul.s       $f6, $f14, $f6
    ctx->pc = 0x1b4b90u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x1b4b94: 0x460771c2  mul.s       $f7, $f14, $f7
    ctx->pc = 0x1b4b94u;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
    // 0x1b4b98: 0x46065280  add.s       $f10, $f10, $f6
    ctx->pc = 0x1b4b98u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x1b4b9c: 0x460758c0  add.s       $f3, $f11, $f7
    ctx->pc = 0x1b4b9cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[11], ctx->f[7]);
    // 0x1b4ba0: 0x460a7942  mul.s       $f5, $f15, $f10
    ctx->pc = 0x1b4ba0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[15], ctx->f[10]);
    // 0x1b4ba4: 0x46051800  add.s       $f0, $f3, $f5
    ctx->pc = 0x1b4ba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x1b4ba8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b4ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1b4bac: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x1b4bacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x1b4bb0: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x1b4bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x1b4bb4: 0x460068c0  add.s       $f3, $f13, $f0
    ctx->pc = 0x1b4bb4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1b4bb8: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x1b4bb8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x1b4bbc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B4BBCu;
    {
        const bool branch_taken_0x1b4bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BBCu;
        // 0x1b4bc0: 0x46038380  add.s       $f14, $f16, $f3 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[16], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4bbc) {
            ctx->pc = 0x1B4C18u;
            goto label_1b4c18;
        }
    }
    ctx->pc = 0x1B4BC4u;
    // 0x1b4bc4: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x1b4bc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b4bc8: 0x0  nop
    ctx->pc = 0x1b4bc8u;
    // NOP
    // 0x1b4bcc: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1b4bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1b4bd0: 0x61f83  sra         $v1, $a2, 30
    ctx->pc = 0x1b4bd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 30));
    // 0x1b4bd4: 0x460e7002  mul.s       $f0, $f14, $f14
    ctx->pc = 0x1b4bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x1b4bd8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1b4bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1b4bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4be0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4be4: 0x46057040  add.s       $f1, $f14, $f5
    ctx->pc = 0x1b4be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[14], ctx->f[5]);
    // 0x1b4be8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b4be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4bec: 0x0  nop
    ctx->pc = 0x1b4becu;
    // NOP
    // 0x1b4bf0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b4bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b4bf4: 0x0  nop
    ctx->pc = 0x1b4bf4u;
    // NOP
    // 0x1b4bf8: 0x0  nop
    ctx->pc = 0x1b4bf8u;
    // NOP
    // 0x1b4bfc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b4bfcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1b4c00: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b4c00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1b4c04: 0x46008001  sub.s       $f0, $f16, $f0
    ctx->pc = 0x1b4c04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[0]);
    // 0x1b4c08: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b4c08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1b4c0c: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x1b4c0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1b4c10: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B4C10u;
    {
        const bool branch_taken_0x1b4c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C10u;
        // 0x1b4c14: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c10) {
            ctx->pc = 0x1B4C98u;
            goto label_1b4c98;
        }
    }
    ctx->pc = 0x1B4C18u;
label_1b4c18:
    // 0x1b4c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4c1c: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B4C1Cu;
    {
        const bool branch_taken_0x1b4c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C1Cu;
        // 0x1b4c20: 0x46007006  mov.s       $f0, $f14 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c1c) {
            ctx->pc = 0x1B4C98u;
            goto label_1b4c98;
        }
    }
    ctx->pc = 0x1B4C24u;
    // 0x1b4c24: 0x44037000  mfc1        $v1, $f14
    ctx->pc = 0x1b4c24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b4c28: 0x0  nop
    ctx->pc = 0x1b4c28u;
    // NOP
    // 0x1b4c2c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b4c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c30: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x1b4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1b4c34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b4c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b4c38: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b4c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1b4c3c: 0x0  nop
    ctx->pc = 0x1b4c3cu;
    // NOP
    // 0x1b4c40: 0x46107841  sub.s       $f1, $f15, $f16
    ctx->pc = 0x1b4c40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[16]);
    // 0x1b4c44: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b4c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b4c48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4c4c: 0x0  nop
    ctx->pc = 0x1b4c4cu;
    // NOP
    // 0x1b4c50: 0x0  nop
    ctx->pc = 0x1b4c50u;
    // NOP
    // 0x1b4c54: 0x460e0003  div.s       $f0, $f0, $f14
    ctx->pc = 0x1b4c54u;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[14];
    // 0x1b4c58: 0x46011941  sub.s       $f5, $f3, $f1
    ctx->pc = 0x1b4c58u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1b4c5c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1b4c5cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1b4c60: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b4c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b4c64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b4c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b4c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b4c6c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b4c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b4c70: 0x0  nop
    ctx->pc = 0x1b4c70u;
    // NOP
    // 0x1b4c74: 0x460f1902  mul.s       $f4, $f3, $f15
    ctx->pc = 0x1b4c74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
    // 0x1b4c78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4c7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4c80: 0x0  nop
    ctx->pc = 0x1b4c80u;
    // NOP
    // 0x1b4c84: 0x46051842  mul.s       $f1, $f3, $f5
    ctx->pc = 0x1b4c84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1b4c88: 0x46022300  add.s       $f12, $f4, $f2
    ctx->pc = 0x1b4c88u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1b4c8c: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x1b4c8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x1b4c90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b4c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b4c94: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1b4c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1b4c98:
    // 0x1b4c98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C9Cu;
        // 0x1b4ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4CA4u;
    // 0x1b4ca4: 0x0  nop
    ctx->pc = 0x1b4ca4u;
    // NOP
    // 0x1b4ca8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b4ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4cac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b4cacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b4cb0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b4cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1b4cb4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1b4cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1b4cb8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b4cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1b4cbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b4cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b4cc0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1b4cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1b4cc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b4cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b4cc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4ccc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1b4cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b4cd0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b4cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4CDCu;
    // 0x1b4cdc: 0x0  nop
    ctx->pc = 0x1b4cdcu;
    // NOP
    // 0x1b4ce0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1b4ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b4ce4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b4ce4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b4ce8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b4ce8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b4cec: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b4cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b4cf0: 0x3c067ff0  lui         $a2, 0x7FF0
    ctx->pc = 0x1b4cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32752 << 16));
    // 0x1b4cf4: 0x32823  negu        $a1, $v1
    ctx->pc = 0x1b4cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1b4cf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b4cfc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1b4cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1b4d00: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1b4d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1b4d04: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1b4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1b4d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4d0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b4d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b4d10: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x1b4d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1b4d14: 0x41823  negu        $v1, $a0
    ctx->pc = 0x1b4d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1b4d18: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b4d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b4d1c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1b4d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1b4d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D20u;
        // 0x1b4d24: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4D28u;
    // 0x1b4d28: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b4d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d2c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b4d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b4d30: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b4d30u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b4d34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b4d34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b4d38: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b4d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1b4d3c: 0x3c067ff0  lui         $a2, 0x7FF0
    ctx->pc = 0x1b4d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32752 << 16));
    // 0x1b4d40: 0x42823  negu        $a1, $a0
    ctx->pc = 0x1b4d40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1b4d44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b4d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b4d48: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1b4d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1b4d4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b4d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b4d50: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1b4d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1b4d54: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1b4d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1b4d58: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1b4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1b4d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D5Cu;
        // 0x1b4d60: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4D64u;
    // 0x1b4d64: 0x0  nop
    ctx->pc = 0x1b4d64u;
    // NOP
    ctx->pc = 0x1b4d68u;
}
