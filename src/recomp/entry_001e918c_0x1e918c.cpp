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

// Function: entry_001e918c
// Address: 0x1e918c - 0x1e9260
void entry_001e918c_0x1e918c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e918c_0x1e918c");
#endif

    switch (ctx->pc) {
        case 0x1e922cu: goto label_1e922c;
        default: break;
    }

    ctx->pc = 0x1e918cu;

    // 0x1e918c: 0x0  nop
    ctx->pc = 0x1e918cu;
    // NOP
    // 0x1e9190: 0x9623005c  lhu         $v1, 0x5C($s1)
    ctx->pc = 0x1e9190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1e9194: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1e9194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1e9198: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1E9198u;
    {
        const bool branch_taken_0x1e9198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9198) {
            ctx->pc = 0x1E93A4u;
            return;
        }
    }
    ctx->pc = 0x1E91A0u;
    // 0x1e91a0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1e91a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e91a4: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1e91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1e91a8: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x1e91a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x1e91ac: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1e91acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e91b0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1e91b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1e91b4: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x1e91b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e91b8: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x1e91b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x1e91bc: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x1e91bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e91c0: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x1e91c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x1e91c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e91c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e91c8: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e91cc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e91ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e91d0: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e91d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e91d4: 0x4a0002ff  vnop
    ctx->pc = 0x1e91d4u;
    // NOP operation, no action needed for VU0
    // 0x1e91d8: 0x4a0002ff  vnop
    ctx->pc = 0x1e91d8u;
    // NOP operation, no action needed for VU0
    // 0x1e91dc: 0x4a0002ff  vnop
    ctx->pc = 0x1e91dcu;
    // NOP operation, no action needed for VU0
    // 0x1e91e0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e91e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e91e4: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x1e91e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1e91e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e91e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e91ec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E91ECu;
    {
        const bool branch_taken_0x1e91ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e91ec) {
            ctx->pc = 0x1E9260u;
            return;
        }
    }
    ctx->pc = 0x1E91F4u;
    // 0x1e91f4: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x1e91f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e91f8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1e91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1e91fc: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x1e91fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e9200: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e9200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1e9204: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1e9204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e920c: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x1e920cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x1e9210: 0x4602109c  madd.s      $f2, $f2, $f2
    ctx->pc = 0x1e9210u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e9214: 0x46020344  c1          0x20344
    ctx->pc = 0x1e9214u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e9218: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e9218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e921c: 0x0  nop
    ctx->pc = 0x1e921cu;
    // NOP
    // 0x1e9220: 0x0  nop
    ctx->pc = 0x1e9220u;
    // NOP
    // 0x1e9224: 0xc06d51e  jal         func_1B5478
    ctx->pc = 0x1E9224u;
    SET_GPR_U32(ctx, 31, 0x1E922Cu);
    ctx->pc = 0x1E9228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9224u;
    // 0x1e9228: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5478u, 0x1E9224u, 0x1E922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E922Cu;
label_1e922c:
    // 0x1e922c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1e922cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1e9230: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1e9230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e9234: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e9234u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e9238: 0x4a000238  vcallms     0x40
    ctx->pc = 0x1e9238u;
    {     ctx->vu0_tpc = 0x40;     runtime->executeVU0Microprogram(rdram, ctx, 0x40); }
    // 0x1e923c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x1e923cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9240: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x1e9240u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x1e9244: 0xf8510010  sqc2        $vf17, 0x10($v0)
    ctx->pc = 0x1e9244u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x1e9248: 0xf8520020  sqc2        $vf18, 0x20($v0)
    ctx->pc = 0x1e9248u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x1e924c: 0xf8530030  sqc2        $vf19, 0x30($v0)
    ctx->pc = 0x1e924cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x1e9250: 0xc62c0048  lwc1        $f12, 0x48($s1)
    ctx->pc = 0x1e9250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e9254: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1e9254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e9258: 0xc066e14  jal         func_19B850
    ctx->pc = 0x1E9258u;
    SET_GPR_U32(ctx, 31, 0x1E9260u);
    ctx->pc = 0x1E925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9258u;
    // 0x1e925c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1E9258u, 0x1E9260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9260u;
}
