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

// Function: FUN_0014f6c0
// Address: 0x14f6c0 - 0x14f7c0
void FUN_0014f6c0_0x14f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014f6c0_0x14f6c0");
#endif

    switch (ctx->pc) {
        case 0x14f734u: goto label_14f734;
        default: break;
    }

    ctx->pc = 0x14f6c0u;

    // 0x14f6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f6c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14f6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14f6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f6cc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x14f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x14f6d0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x14f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x14f6d4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x14f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x14f6d8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x14f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x14f6dc: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x14f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x14f6e0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14f6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f6e4: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x14f6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x14f6e8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x14F6E8u;
    {
        const bool branch_taken_0x14f6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6E8u;
        // 0x14f6ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6e8) {
            ctx->pc = 0x14F73Cu;
            goto label_14f73c;
        }
    }
    ctx->pc = 0x14F6F0u;
    // 0x14f6f0: 0xc4800214  lwc1        $f0, 0x214($a0)
    ctx->pc = 0x14f6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f6f4: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x14f6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f6f8: 0x0  nop
    ctx->pc = 0x14f6f8u;
    // NOP
    // 0x14f6fc: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x14f6fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x14f700: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x14f700u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x14f704: 0x4a000138  vcallms     0x20
    ctx->pc = 0x14f704u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
    // 0x14f708: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x14f708u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14f70c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x14f70cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f710: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x14f710u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14f714: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x14f714u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14f718: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14f718u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14f71c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x14f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14f720: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14f720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14f724: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14f724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14f728: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x14f728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14f72c: 0xc0504cc  jal         func_141330
    ctx->pc = 0x14F72Cu;
    SET_GPR_U32(ctx, 31, 0x14F734u);
    ctx->pc = 0x14F730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F72Cu;
    // 0x14f730: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x141330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141330u, 0x14F72Cu, 0x14F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F734u;
label_14f734:
    // 0x14f734: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14F734u;
    {
        const bool branch_taken_0x14f734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F734u;
        // 0x14f738: 0xc6010050  lwc1        $f1, 0x50($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f734) {
            ctx->pc = 0x14F7A0u;
            goto label_14f7a0;
        }
    }
    ctx->pc = 0x14F73Cu;
label_14f73c:
    // 0x14f73c: 0xc60101bc  lwc1        $f1, 0x1BC($s0)
    ctx->pc = 0x14f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f740: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x14f740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14f744: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14f744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x14f748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14f748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f74c: 0x0  nop
    ctx->pc = 0x14f74cu;
    // NOP
    // 0x14f750: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14f750u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f754: 0x0  nop
    ctx->pc = 0x14f754u;
    // NOP
    // 0x14f758: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x14F758u;
    {
        const bool branch_taken_0x14f758 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F758u;
        // 0x14f75c: 0x30a30100  andi        $v1, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f758) {
            ctx->pc = 0x14F79Cu;
            goto label_14f79c;
        }
    }
    ctx->pc = 0x14F760u;
    // 0x14f760: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14F760u;
    {
        const bool branch_taken_0x14f760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f760) {
            ctx->pc = 0x14F79Cu;
            goto label_14f79c;
        }
    }
    ctx->pc = 0x14F768u;
    // 0x14f768: 0xc4800218  lwc1        $f0, 0x218($a0)
    ctx->pc = 0x14f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f76c: 0x0  nop
    ctx->pc = 0x14f76cu;
    // NOP
    // 0x14f770: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x14f770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x14f774: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x14f774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x14f778: 0x4a000138  vcallms     0x20
    ctx->pc = 0x14f778u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
    // 0x14f77c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x14f77cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14f780: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x14f780u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f784: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x14f784u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14f788: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x14f788u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14f78c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14f78cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14f790: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14f790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14f794: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x14f794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14f798: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x14f798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_14f79c:
    // 0x14f79c: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x14f79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14f7a0:
    // 0x14f7a0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x14f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f7a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f7a8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x14f7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x14f7ac: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x14f7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f7b0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x14f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f7b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f7b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f7b8: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x14f7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x14f7bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14f7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x14f7c0u;
}
