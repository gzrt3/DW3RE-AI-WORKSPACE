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

// Function: FUN_00187e60
// Address: 0x187e60 - 0x188828
void FUN_00187e60_0x187e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187e60_0x187e60");
#endif

    switch (ctx->pc) {
        case 0x187ec0u: goto label_187ec0;
        case 0x187fd8u: goto label_187fd8;
        case 0x187ff8u: goto label_187ff8;
        case 0x188080u: goto label_188080;
        case 0x18814cu: goto label_18814c;
        case 0x1881b0u: goto label_1881b0;
        case 0x188310u: goto label_188310;
        case 0x188350u: goto label_188350;
        case 0x1883b4u: goto label_1883b4;
        case 0x1883d0u: goto label_1883d0;
        case 0x1883e0u: goto label_1883e0;
        case 0x1885a4u: goto label_1885a4;
        case 0x1885c4u: goto label_1885c4;
        case 0x18864cu: goto label_18864c;
        case 0x18878cu: goto label_18878c;
        case 0x1887ccu: goto label_1887cc;
        default: break;
    }

    ctx->pc = 0x187e60u;

    // 0x187e60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x187e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x187e64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x187e68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187e6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187e70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e74: 0x9086023d  lbu         $a2, 0x23D($a0)
    ctx->pc = 0x187e74u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 573)));
    // 0x187e78: 0x30c30074  andi        $v1, $a2, 0x74
    ctx->pc = 0x187e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)116);
    // 0x187e7c: 0x10600213  beqz        $v1, . + 4 + (0x213 << 2)
    ctx->pc = 0x187E7Cu;
    {
        const bool branch_taken_0x187e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E7Cu;
        // 0x187e80: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e7c) {
            ctx->pc = 0x1886CCu;
            goto label_1886cc;
        }
    }
    ctx->pc = 0x187E84u;
    // 0x187e84: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x187e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x187e88: 0x1060009d  beqz        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x187E88u;
    {
        const bool branch_taken_0x187e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187e88) {
            ctx->pc = 0x188100u;
            goto label_188100;
        }
    }
    ctx->pc = 0x187E90u;
    // 0x187e90: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x187e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187e94: 0x3c034874  lui         $v1, 0x4874
    ctx->pc = 0x187e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18548 << 16));
    // 0x187e98: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x187e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x187e9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187e9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187ea0: 0x0  nop
    ctx->pc = 0x187ea0u;
    // NOP
    // 0x187ea4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x187ea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x187ea8: 0x0  nop
    ctx->pc = 0x187ea8u;
    // NOP
    // 0x187eac: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x187EACu;
    {
        const bool branch_taken_0x187eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x187eac) {
            ctx->pc = 0x187F6Cu;
            goto label_187f6c;
        }
    }
    ctx->pc = 0x187EB4u;
    // 0x187eb4: 0x34c20002  ori         $v0, $a2, 0x2
    ctx->pc = 0x187eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x187eb8: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x187EB8u;
    SET_GPR_U32(ctx, 31, 0x187EC0u);
    ctx->pc = 0x187EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EB8u;
    // 0x187ebc: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x187EB8u, 0x187EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EC0u;
label_187ec0:
    // 0x187ec0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x187ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x187ec4: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x187ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x187ec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187ecc: 0x92250230  lbu         $a1, 0x230($s1)
    ctx->pc = 0x187eccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x187ed0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x187ed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x187ed4: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x187ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x187ed8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x187ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x187edc: 0x24632b15  addiu       $v1, $v1, 0x2B15
    ctx->pc = 0x187edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11029));
    // 0x187ee0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x187ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x187ee4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x187ee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x187ee8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x187eec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x187eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x187ef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187ef4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x187ef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187ef8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x187ef8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187efc: 0x0  nop
    ctx->pc = 0x187efcu;
    // NOP
    // 0x187f00: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x187f00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x187f04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x187f04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x187f08: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x187f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x187f0c: 0x0  nop
    ctx->pc = 0x187f0cu;
    // NOP
    // 0x187f10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187f14: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x187f14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x187f18: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x187f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x187f1c: 0x34638020  ori         $v1, $v1, 0x8020
    ctx->pc = 0x187f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32800);
    // 0x187f20: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x187f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
    // 0x187f24: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x187f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187f28: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x187f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187f2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x187f2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x187f30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x187f30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x187f34: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x187f34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x187f38: 0x0  nop
    ctx->pc = 0x187f38u;
    // NOP
    // 0x187f3c: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x187f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x187f40: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x187f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187f44: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x187f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187f48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x187f48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x187f4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x187f4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x187f50: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x187f50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x187f54: 0x0  nop
    ctx->pc = 0x187f54u;
    // NOP
    // 0x187f58: 0xa623019e  sh          $v1, 0x19E($s1)
    ctx->pc = 0x187f58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
    // 0x187f5c: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x187f5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x187f60: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x187f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x187f64: 0x1000022f  b           . + 4 + (0x22F << 2)
    ctx->pc = 0x187F64u;
    {
        const bool branch_taken_0x187f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F64u;
        // 0x187f68: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f64) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x187F6Cu;
label_187f6c:
    // 0x187f6c: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x187f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x187f70: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x187f70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x187f74: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x187F74u;
    {
        const bool branch_taken_0x187f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F74u;
        // 0x187f78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f74) {
            ctx->pc = 0x187F80u;
            goto label_187f80;
        }
    }
    ctx->pc = 0x187F7Cu;
    // 0x187f7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187f80:
    // 0x187f80: 0x14600228  bnez        $v1, . + 4 + (0x228 << 2)
    ctx->pc = 0x187F80u;
    {
        const bool branch_taken_0x187f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187f80) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x187F88u;
    // 0x187f88: 0x92220233  lbu         $v0, 0x233($s1)
    ctx->pc = 0x187f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 563)));
    // 0x187f8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187F8Cu;
    {
        const bool branch_taken_0x187f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f8c) {
            ctx->pc = 0x187FA4u;
            goto label_187fa4;
        }
    }
    ctx->pc = 0x187F94u;
    // 0x187f94: 0x92230232  lbu         $v1, 0x232($s1)
    ctx->pc = 0x187f94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
    // 0x187f98: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x187f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x187f9c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187F9Cu;
    {
        const bool branch_taken_0x187f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187f9c) {
            ctx->pc = 0x187FB4u;
            goto label_187fb4;
        }
    }
    ctx->pc = 0x187FA4u;
label_187fa4:
    // 0x187fa4: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x187fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x187fa8: 0x34424010  ori         $v0, $v0, 0x4010
    ctx->pc = 0x187fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16400);
    // 0x187fac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x187FACu;
    {
        const bool branch_taken_0x187fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FACu;
        // 0x187fb0: 0xae220194  sw          $v0, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fac) {
            ctx->pc = 0x187FC8u;
            goto label_187fc8;
        }
    }
    ctx->pc = 0x187FB4u;
label_187fb4:
    // 0x187fb4: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x187fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x187fb8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x187fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x187fbc: 0x34424050  ori         $v0, $v0, 0x4050
    ctx->pc = 0x187fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16464);
    // 0x187fc0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x187fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x187fc4: 0xae220194  sw          $v0, 0x194($s1)
    ctx->pc = 0x187fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
label_187fc8:
    // 0x187fc8: 0x26240264  addiu       $a0, $s1, 0x264
    ctx->pc = 0x187fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 612));
    // 0x187fcc: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x187fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x187fd0: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x187FD0u;
    SET_GPR_U32(ctx, 31, 0x187FD8u);
    ctx->pc = 0x187FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187FD0u;
    // 0x187fd4: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x187FD0u, 0x187FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FD8u;
label_187fd8:
    // 0x187fd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187FD8u;
    {
        const bool branch_taken_0x187fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FD8u;
        // 0x187fdc: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fd8) {
            ctx->pc = 0x187FECu;
            goto label_187fec;
        }
    }
    ctx->pc = 0x187FE0u;
    // 0x187fe0: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x187fe0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x187fe4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x187fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x187fe8: 0xa222023d  sb          $v0, 0x23D($s1)
    ctx->pc = 0x187fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
label_187fec:
    // 0x187fec: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x187fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x187ff0: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x187FF0u;
    SET_GPR_U32(ctx, 31, 0x187FF8u);
    ctx->pc = 0x187FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187FF0u;
    // 0x187ff4: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x187FF0u, 0x187FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FF8u;
label_187ff8:
    // 0x187ff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187FF8u;
    {
        const bool branch_taken_0x187ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ff8) {
            ctx->pc = 0x188008u;
            goto label_188008;
        }
    }
    ctx->pc = 0x188000u;
    // 0x188000: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x188000u;
    {
        const bool branch_taken_0x188000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188000u;
        // 0x188004: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188000) {
            ctx->pc = 0x188084u;
            goto label_188084;
        }
    }
    ctx->pc = 0x188008u;
label_188008:
    // 0x188008: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x188008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18800c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18800cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x188010: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x188010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188014: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x188018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18801c: 0x0  nop
    ctx->pc = 0x18801cu;
    // NOP
    // 0x188020: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x188020u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x188024: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x188024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188028: 0x0  nop
    ctx->pc = 0x188028u;
    // NOP
    // 0x18802c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18802Cu;
    {
        const bool branch_taken_0x18802c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x188030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18802Cu;
        // 0x188030: 0xe7ac0038  swc1        $f12, 0x38($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18802c) {
            ctx->pc = 0x188048u;
            goto label_188048;
        }
    }
    ctx->pc = 0x188034u;
    // 0x188034: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x188034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x188038: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18803c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18803cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188040: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x188040u;
    {
        const bool branch_taken_0x188040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188040u;
        // 0x188044: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188040) {
            ctx->pc = 0x188078u;
            goto label_188078;
        }
    }
    ctx->pc = 0x188048u;
label_188048:
    // 0x188048: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x188048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18804c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18804cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x188050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188054: 0x0  nop
    ctx->pc = 0x188054u;
    // NOP
    // 0x188058: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x188058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18805c: 0x0  nop
    ctx->pc = 0x18805cu;
    // NOP
    // 0x188060: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x188060u;
    {
        const bool branch_taken_0x188060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x188064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188060u;
        // 0x188064: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188060) {
            ctx->pc = 0x188078u;
            goto label_188078;
        }
    }
    ctx->pc = 0x188068u;
    // 0x188068: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18806c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18806cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188070: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x188070u;
    {
        const bool branch_taken_0x188070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188070u;
        // 0x188074: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188070) {
            ctx->pc = 0x188078u;
            goto label_188078;
        }
    }
    ctx->pc = 0x188078u;
label_188078:
    // 0x188078: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x188078u;
    SET_GPR_U32(ctx, 31, 0x188080u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x188078u, 0x188080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188080u;
label_188080:
    // 0x188080: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x188080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_188084:
    // 0x188084: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x188084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188088: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x188088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x18808c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18808cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x188090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188094: 0x0  nop
    ctx->pc = 0x188094u;
    // NOP
    // 0x188098: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18809c: 0x0  nop
    ctx->pc = 0x18809cu;
    // NOP
    // 0x1880a0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1880A0u;
    {
        const bool branch_taken_0x1880a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1880a0) {
            ctx->pc = 0x1880BCu;
            goto label_1880bc;
        }
    }
    ctx->pc = 0x1880A8u;
    // 0x1880a8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1880a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1880ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1880acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1880b0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1880b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1880b4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1880B4u;
    {
        const bool branch_taken_0x1880b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1880b4) {
            ctx->pc = 0x1880F4u;
            goto label_1880f4;
        }
    }
    ctx->pc = 0x1880BCu;
label_1880bc:
    // 0x1880bc: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x1880bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1880c0: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x1880c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1880c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1880c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1880c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1880c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1880cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1880ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1880d0: 0x0  nop
    ctx->pc = 0x1880d0u;
    // NOP
    // 0x1880d4: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x1880d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x1880d8: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x1880d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1880dc: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x1880dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1880e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1880e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1880e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1880e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1880e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1880e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1880ec: 0x100001cd  b           . + 4 + (0x1CD << 2)
    ctx->pc = 0x1880ECu;
    {
        const bool branch_taken_0x1880ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880ECu;
        // 0x1880f0: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880ec) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x1880F4u;
label_1880f4:
    // 0x1880f4: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1880f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x1880f8: 0x100001ca  b           . + 4 + (0x1CA << 2)
    ctx->pc = 0x1880F8u;
    {
        const bool branch_taken_0x1880f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880F8u;
        // 0x1880fc: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880f8) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x188100u;
label_188100:
    // 0x188100: 0x92260244  lbu         $a2, 0x244($s1)
    ctx->pc = 0x188100u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x188104: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x188104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x188108: 0x2442aec4  addiu       $v0, $v0, -0x513C
    ctx->pc = 0x188108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946500));
    // 0x18810c: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x18810cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188110: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x188110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x188114: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x188114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x188118: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x188118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18811c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188120: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x188120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188128: 0x0  nop
    ctx->pc = 0x188128u;
    // NOP
    // 0x18812c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18812cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x188130: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x188130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x188134: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188138: 0x0  nop
    ctx->pc = 0x188138u;
    // NOP
    // 0x18813c: 0x4500009b  bc1f        . + 4 + (0x9B << 2)
    ctx->pc = 0x18813Cu;
    {
        const bool branch_taken_0x18813c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18813c) {
            ctx->pc = 0x1883ACu;
            goto label_1883ac;
        }
    }
    ctx->pc = 0x188144u;
    // 0x188144: 0xc0623cc  jal         func_188F30
    ctx->pc = 0x188144u;
    SET_GPR_U32(ctx, 31, 0x18814Cu);
    ctx->pc = 0x188F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188F30u, 0x188144u, 0x18814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18814Cu;
label_18814c:
    // 0x18814c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x18814Cu;
    {
        const bool branch_taken_0x18814c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18814Cu;
        // 0x188150: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18814c) {
            ctx->pc = 0x18825Cu;
            goto label_18825c;
        }
    }
    ctx->pc = 0x188154u;
    // 0x188154: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x188154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188158: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x188158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18815c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18815cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188160: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188160u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x188164: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x188164u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x188168: 0x0  nop
    ctx->pc = 0x188168u;
    // NOP
    // 0x18816c: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x18816cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x188170: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x188170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188174: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x188174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188178: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18817c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18817cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x188180: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x188180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x188184: 0x0  nop
    ctx->pc = 0x188184u;
    // NOP
    // 0x188188: 0xa623019e  sh          $v1, 0x19E($s1)
    ctx->pc = 0x188188u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
    // 0x18818c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x18818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x188190: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x188190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188194: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x188194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x188198: 0x106001a2  beqz        $v1, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x188198u;
    {
        const bool branch_taken_0x188198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188198) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x1881A0u;
    // 0x1881a0: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x1881a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x1881a4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1881a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1881a8: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1881A8u;
    SET_GPR_U32(ctx, 31, 0x1881B0u);
    ctx->pc = 0x1881ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1881A8u;
    // 0x1881ac: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1881A8u, 0x1881B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881B0u;
label_1881b0:
    // 0x1881b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1881b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1881b4: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1881b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1881b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1881b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1881bc: 0x92250230  lbu         $a1, 0x230($s1)
    ctx->pc = 0x1881bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x1881c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1881c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1881c4: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1881c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x1881c8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1881c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1881cc: 0x24632b15  addiu       $v1, $v1, 0x2B15
    ctx->pc = 0x1881ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11029));
    // 0x1881d0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1881d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1881d4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1881d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1881d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1881d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1881dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1881dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1881e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1881e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1881e4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1881e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1881e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1881e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1881ec: 0x0  nop
    ctx->pc = 0x1881ecu;
    // NOP
    // 0x1881f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1881f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1881f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1881f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1881f8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1881f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1881fc: 0x0  nop
    ctx->pc = 0x1881fcu;
    // NOP
    // 0x188200: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188204: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x188204u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x188208: 0x9224023d  lbu         $a0, 0x23D($s1)
    ctx->pc = 0x188208u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x18820c: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x18820cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x188210: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x188210u;
    {
        const bool branch_taken_0x188210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188210u;
        // 0x188214: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188210) {
            ctx->pc = 0x188228u;
            goto label_188228;
        }
    }
    ctx->pc = 0x188218u;
    // 0x188218: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x188218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x18821c: 0x34630401  ori         $v1, $v1, 0x401
    ctx->pc = 0x18821cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1025);
    // 0x188220: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x188220u;
    {
        const bool branch_taken_0x188220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188220u;
        // 0x188224: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188220) {
            ctx->pc = 0x18824Cu;
            goto label_18824c;
        }
    }
    ctx->pc = 0x188228u;
label_188228:
    // 0x188228: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x188228u;
    {
        const bool branch_taken_0x188228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188228) {
            ctx->pc = 0x188240u;
            goto label_188240;
        }
    }
    ctx->pc = 0x188230u;
    // 0x188230: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x188230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x188234: 0x34630802  ori         $v1, $v1, 0x802
    ctx->pc = 0x188234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2050);
    // 0x188238: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x188238u;
    {
        const bool branch_taken_0x188238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188238u;
        // 0x18823c: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188238) {
            ctx->pc = 0x18824Cu;
            goto label_18824c;
        }
    }
    ctx->pc = 0x188240u;
label_188240:
    // 0x188240: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x188240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x188244: 0x34631004  ori         $v1, $v1, 0x1004
    ctx->pc = 0x188244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4100);
    // 0x188248: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x188248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
label_18824c:
    // 0x18824c: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x18824cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x188250: 0x3063008f  andi        $v1, $v1, 0x8F
    ctx->pc = 0x188250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)143);
    // 0x188254: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x188254u;
    {
        const bool branch_taken_0x188254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188254u;
        // 0x188258: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188254) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x18825Cu;
label_18825c:
    // 0x18825c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x18825cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x188260: 0xa6240224  sh          $a0, 0x224($s1)
    ctx->pc = 0x188260u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 4));
    // 0x188264: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x188264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x188268: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x188268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x18826c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18826cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x188270: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x188270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
    // 0x188274: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x188274u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x188278: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x188278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x18827c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18827Cu;
    {
        const bool branch_taken_0x18827c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18827Cu;
        // 0x188280: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18827c) {
            ctx->pc = 0x188288u;
            goto label_188288;
        }
    }
    ctx->pc = 0x188284u;
    // 0x188284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188288:
    // 0x188288: 0x14600166  bnez        $v1, . + 4 + (0x166 << 2)
    ctx->pc = 0x188288u;
    {
        const bool branch_taken_0x188288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188288) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x188290u;
    // 0x188290: 0x92230232  lbu         $v1, 0x232($s1)
    ctx->pc = 0x188290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
    // 0x188294: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x188294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188298: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x188298u;
    {
        const bool branch_taken_0x188298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x188298) {
            ctx->pc = 0x1882F4u;
            goto label_1882f4;
        }
    }
    ctx->pc = 0x1882A0u;
    // 0x1882a0: 0x92240238  lbu         $a0, 0x238($s1)
    ctx->pc = 0x1882a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1882a4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1882a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1882a8: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1882a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    // 0x1882ac: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x1882acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
    // 0x1882b0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1882b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1882b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1882b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1882b8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1882b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1882bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1882bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1882c0: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x1882c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
    // 0x1882c4: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x1882c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
    // 0x1882c8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1882C8u;
    {
        const bool branch_taken_0x1882c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882c8) {
            ctx->pc = 0x1882F4u;
            goto label_1882f4;
        }
    }
    ctx->pc = 0x1882D0u;
    // 0x1882d0: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x1882d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
    // 0x1882d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1882d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1882d8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1882D8u;
    {
        const bool branch_taken_0x1882d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1882DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882D8u;
        // 0x1882dc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882d8) {
            ctx->pc = 0x1882F4u;
            goto label_1882f4;
        }
    }
    ctx->pc = 0x1882E0u;
    // 0x1882e0: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1882e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1882e4: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x1882e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x1882e8: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1882E8u;
    {
        const bool branch_taken_0x1882e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1882e8) {
            ctx->pc = 0x1882F4u;
            goto label_1882f4;
        }
    }
    ctx->pc = 0x1882F0u;
    // 0x1882f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1882f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1882f4:
    // 0x1882f4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1882F4u;
    {
        const bool branch_taken_0x1882f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882f4) {
            ctx->pc = 0x188318u;
            goto label_188318;
        }
    }
    ctx->pc = 0x1882FCu;
    // 0x1882fc: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x1882fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x188300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x188300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188304: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x188304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x188308: 0xc062948  jal         func_18A520
    ctx->pc = 0x188308u;
    SET_GPR_U32(ctx, 31, 0x188310u);
    ctx->pc = 0x18830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188308u;
    // 0x18830c: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x188308u, 0x188310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188310u;
label_188310:
    // 0x188310: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x188310u;
    {
        const bool branch_taken_0x188310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188310u;
        // 0x188314: 0x86230224  lh          $v1, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188310) {
            ctx->pc = 0x188338u;
            goto label_188338;
        }
    }
    ctx->pc = 0x188318u;
label_188318:
    // 0x188318: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x188318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x18831c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x18831cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x188320: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x188320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x188324: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x188324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x188328: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x188328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
    // 0x18832c: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x18832cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x188330: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x188330u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
    // 0x188334: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x188334u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_188338:
    // 0x188338: 0x1c60013a  bgtz        $v1, . + 4 + (0x13A << 2)
    ctx->pc = 0x188338u;
    {
        const bool branch_taken_0x188338 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x188338) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x188340u;
    // 0x188340: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x188340u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x188344: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x188344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x188348: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x188348u;
    SET_GPR_U32(ctx, 31, 0x188350u);
    ctx->pc = 0x18834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188348u;
    // 0x18834c: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x188348u, 0x188350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188350u;
label_188350:
    // 0x188350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188354: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x188354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x188358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18835c: 0x92250230  lbu         $a1, 0x230($s1)
    ctx->pc = 0x18835cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x188360: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x188364: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x188364u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x188368: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x188368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x18836c: 0x24632b15  addiu       $v1, $v1, 0x2B15
    ctx->pc = 0x18836cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11029));
    // 0x188370: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x188370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x188374: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x188374u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x188378: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x188378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18837c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18837cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x188380: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188384: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x188384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188388: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x188388u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18838c: 0x0  nop
    ctx->pc = 0x18838cu;
    // NOP
    // 0x188390: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x188390u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x188394: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188394u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x188398: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x188398u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18839c: 0x0  nop
    ctx->pc = 0x18839cu;
    // NOP
    // 0x1883a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1883a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1883a4: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x1883A4u;
    {
        const bool branch_taken_0x1883a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1883A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883A4u;
        // 0x1883a8: 0xa6230224  sh          $v1, 0x224($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883a4) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x1883ACu;
label_1883ac:
    // 0x1883ac: 0xc0626d0  jal         func_189B40
    ctx->pc = 0x1883ACu;
    SET_GPR_U32(ctx, 31, 0x1883B4u);
    ctx->pc = 0x1883B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883ACu;
    // 0x1883b0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189B40u, 0x1883ACu, 0x1883B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883B4u;
label_1883b4:
    // 0x1883b4: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1883B4u;
    {
        const bool branch_taken_0x1883b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1883b4) {
            ctx->pc = 0x188538u;
            goto label_188538;
        }
    }
    ctx->pc = 0x1883BCu;
    // 0x1883bc: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x1883bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x1883c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1883c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1883c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1883c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1883c8: 0xc062948  jal         func_18A520
    ctx->pc = 0x1883C8u;
    SET_GPR_U32(ctx, 31, 0x1883D0u);
    ctx->pc = 0x1883CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883C8u;
    // 0x1883cc: 0xae220194  sw          $v0, 0x194($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x1883C8u, 0x1883D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883D0u;
label_1883d0:
    // 0x1883d0: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x1883d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1883d4: 0x26240264  addiu       $a0, $s1, 0x264
    ctx->pc = 0x1883d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 612));
    // 0x1883d8: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x1883D8u;
    SET_GPR_U32(ctx, 31, 0x1883E0u);
    ctx->pc = 0x1883DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883D8u;
    // 0x1883dc: 0x26250150  addiu       $a1, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x1883D8u, 0x1883E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883E0u;
label_1883e0:
    // 0x1883e0: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1883E0u;
    {
        const bool branch_taken_0x1883e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1883e0) {
            ctx->pc = 0x188528u;
            goto label_188528;
        }
    }
    ctx->pc = 0x1883E8u;
    // 0x1883e8: 0xc6230264  lwc1        $f3, 0x264($s1)
    ctx->pc = 0x1883e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1883ec: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1883ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1883f0: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x1883f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1883f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1883f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1883f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1883f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1883fc: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x1883fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x188400: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188400u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188404: 0x0  nop
    ctx->pc = 0x188404u;
    // NOP
    // 0x188408: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x188408u;
    {
        const bool branch_taken_0x188408 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188408u;
        // 0x18840c: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188408) {
            ctx->pc = 0x188424u;
            goto label_188424;
        }
    }
    ctx->pc = 0x188410u;
    // 0x188410: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x188410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x188414: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x188414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x188418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18841c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18841Cu;
    {
        const bool branch_taken_0x18841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18841Cu;
        // 0x188420: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18841c) {
            ctx->pc = 0x188454u;
            goto label_188454;
        }
    }
    ctx->pc = 0x188424u;
label_188424:
    // 0x188424: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x188424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x188428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18842c: 0x0  nop
    ctx->pc = 0x18842cu;
    // NOP
    // 0x188430: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188434: 0x0  nop
    ctx->pc = 0x188434u;
    // NOP
    // 0x188438: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x188438u;
    {
        const bool branch_taken_0x188438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188438) {
            ctx->pc = 0x188454u;
            goto label_188454;
        }
    }
    ctx->pc = 0x188440u;
    // 0x188440: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x188440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x188444: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x188444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x188448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18844c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x18844Cu;
    {
        const bool branch_taken_0x18844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18844Cu;
        // 0x188450: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18844c) {
            ctx->pc = 0x188454u;
            goto label_188454;
        }
    }
    ctx->pc = 0x188454u;
label_188454:
    // 0x188454: 0x3c03be32  lui         $v1, 0xBE32
    ctx->pc = 0x188454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48690 << 16));
    // 0x188458: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x188458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
    // 0x18845c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18845cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188460: 0x0  nop
    ctx->pc = 0x188460u;
    // NOP
    // 0x188464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188468: 0x0  nop
    ctx->pc = 0x188468u;
    // NOP
    // 0x18846c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18846Cu;
    {
        const bool branch_taken_0x18846c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x188470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18846Cu;
        // 0x188470: 0x3c033e32  lui         $v1, 0x3E32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18846c) {
            ctx->pc = 0x188490u;
            goto label_188490;
        }
    }
    ctx->pc = 0x188474u;
    // 0x188474: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x188474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
    // 0x188478: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x188478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
    // 0x18847c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18847cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188480: 0x0  nop
    ctx->pc = 0x188480u;
    // NOP
    // 0x188484: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x188484u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x188488: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x188488u;
    {
        const bool branch_taken_0x188488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188488u;
        // 0x18848c: 0xe6200044  swc1        $f0, 0x44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188488) {
            ctx->pc = 0x1884BCu;
            goto label_1884bc;
        }
    }
    ctx->pc = 0x188490u;
label_188490:
    // 0x188490: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x188490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
    // 0x188494: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188498: 0x0  nop
    ctx->pc = 0x188498u;
    // NOP
    // 0x18849c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18849cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1884a0: 0x0  nop
    ctx->pc = 0x1884a0u;
    // NOP
    // 0x1884a4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1884A4u;
    {
        const bool branch_taken_0x1884a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1884a4) {
            ctx->pc = 0x1884B8u;
            goto label_1884b8;
        }
    }
    ctx->pc = 0x1884ACu;
    // 0x1884ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1884acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1884b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1884B0u;
    {
        const bool branch_taken_0x1884b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1884B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884B0u;
        // 0x1884b4: 0xe6200044  swc1        $f0, 0x44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884b0) {
            ctx->pc = 0x1884BCu;
            goto label_1884bc;
        }
    }
    ctx->pc = 0x1884B8u;
label_1884b8:
    // 0x1884b8: 0xe6230044  swc1        $f3, 0x44($s1)
    ctx->pc = 0x1884b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_1884bc:
    // 0x1884bc: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x1884bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1884c0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1884c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1884c4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1884c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1884c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1884c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1884cc: 0x0  nop
    ctx->pc = 0x1884ccu;
    // NOP
    // 0x1884d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1884d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1884d4: 0x0  nop
    ctx->pc = 0x1884d4u;
    // NOP
    // 0x1884d8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1884D8u;
    {
        const bool branch_taken_0x1884d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1884DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884D8u;
        // 0x1884dc: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884d8) {
            ctx->pc = 0x1884F4u;
            goto label_1884f4;
        }
    }
    ctx->pc = 0x1884E0u;
    // 0x1884e0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1884e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1884e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1884e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1884e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1884e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1884ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1884ECu;
    {
        const bool branch_taken_0x1884ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1884F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884ECu;
        // 0x1884f0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884ec) {
            ctx->pc = 0x188524u;
            goto label_188524;
        }
    }
    ctx->pc = 0x1884F4u;
label_1884f4:
    // 0x1884f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1884f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1884f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1884f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1884fc: 0x0  nop
    ctx->pc = 0x1884fcu;
    // NOP
    // 0x188500: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188504: 0x0  nop
    ctx->pc = 0x188504u;
    // NOP
    // 0x188508: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x188508u;
    {
        const bool branch_taken_0x188508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188508) {
            ctx->pc = 0x188524u;
            goto label_188524;
        }
    }
    ctx->pc = 0x188510u;
    // 0x188510: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x188510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x188514: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x188514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x188518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18851c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x18851Cu;
    {
        const bool branch_taken_0x18851c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18851Cu;
        // 0x188520: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18851c) {
            ctx->pc = 0x188524u;
            goto label_188524;
        }
    }
    ctx->pc = 0x188524u;
label_188524:
    // 0x188524: 0xe6210044  swc1        $f1, 0x44($s1)
    ctx->pc = 0x188524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_188528:
    // 0x188528: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x188528u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x18852c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x18852cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x188530: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x188530u;
    {
        const bool branch_taken_0x188530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188530u;
        // 0x188534: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188530) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x188538u;
label_188538:
    // 0x188538: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x188538u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x18853c: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x18853cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x188540: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x188540u;
    {
        const bool branch_taken_0x188540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188540u;
        // 0x188544: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188540) {
            ctx->pc = 0x18854Cu;
            goto label_18854c;
        }
    }
    ctx->pc = 0x188548u;
    // 0x188548: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18854c:
    // 0x18854c: 0x146000b5  bnez        $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x18854Cu;
    {
        const bool branch_taken_0x18854c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18854c) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x188554u;
    // 0x188554: 0x92220233  lbu         $v0, 0x233($s1)
    ctx->pc = 0x188554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 563)));
    // 0x188558: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x188558u;
    {
        const bool branch_taken_0x188558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188558) {
            ctx->pc = 0x188570u;
            goto label_188570;
        }
    }
    ctx->pc = 0x188560u;
    // 0x188560: 0x92230232  lbu         $v1, 0x232($s1)
    ctx->pc = 0x188560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
    // 0x188564: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x188564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x188568: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x188568u;
    {
        const bool branch_taken_0x188568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188568) {
            ctx->pc = 0x188580u;
            goto label_188580;
        }
    }
    ctx->pc = 0x188570u;
label_188570:
    // 0x188570: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x188570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x188574: 0x34424010  ori         $v0, $v0, 0x4010
    ctx->pc = 0x188574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16400);
    // 0x188578: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x188578u;
    {
        const bool branch_taken_0x188578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188578u;
        // 0x18857c: 0xae220194  sw          $v0, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188578) {
            ctx->pc = 0x188594u;
            goto label_188594;
        }
    }
    ctx->pc = 0x188580u;
label_188580:
    // 0x188580: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x188580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x188584: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x188584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x188588: 0x34424050  ori         $v0, $v0, 0x4050
    ctx->pc = 0x188588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16464);
    // 0x18858c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x188590: 0xae220194  sw          $v0, 0x194($s1)
    ctx->pc = 0x188590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
label_188594:
    // 0x188594: 0x26240264  addiu       $a0, $s1, 0x264
    ctx->pc = 0x188594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 612));
    // 0x188598: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x188598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x18859c: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x18859Cu;
    SET_GPR_U32(ctx, 31, 0x1885A4u);
    ctx->pc = 0x1885A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18859Cu;
    // 0x1885a0: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x18859Cu, 0x1885A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885A4u;
label_1885a4:
    // 0x1885a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1885A4u;
    {
        const bool branch_taken_0x1885a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1885A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885A4u;
        // 0x1885a8: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885a4) {
            ctx->pc = 0x1885B8u;
            goto label_1885b8;
        }
    }
    ctx->pc = 0x1885ACu;
    // 0x1885ac: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x1885acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x1885b0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1885b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1885b4: 0xa222023d  sb          $v0, 0x23D($s1)
    ctx->pc = 0x1885b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
label_1885b8:
    // 0x1885b8: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1885b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1885bc: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x1885BCu;
    SET_GPR_U32(ctx, 31, 0x1885C4u);
    ctx->pc = 0x1885C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1885BCu;
    // 0x1885c0: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x1885BCu, 0x1885C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885C4u;
label_1885c4:
    // 0x1885c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1885C4u;
    {
        const bool branch_taken_0x1885c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1885c4) {
            ctx->pc = 0x1885D4u;
            goto label_1885d4;
        }
    }
    ctx->pc = 0x1885CCu;
    // 0x1885cc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1885CCu;
    {
        const bool branch_taken_0x1885cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1885D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885CCu;
        // 0x1885d0: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885cc) {
            ctx->pc = 0x188650u;
            goto label_188650;
        }
    }
    ctx->pc = 0x1885D4u;
label_1885d4:
    // 0x1885d4: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x1885d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1885d8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1885d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1885dc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1885dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1885e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1885e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1885e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1885e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1885e8: 0x0  nop
    ctx->pc = 0x1885e8u;
    // NOP
    // 0x1885ec: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x1885ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1885f0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1885f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1885f4: 0x0  nop
    ctx->pc = 0x1885f4u;
    // NOP
    // 0x1885f8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1885F8u;
    {
        const bool branch_taken_0x1885f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1885FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885F8u;
        // 0x1885fc: 0xe7ac003c  swc1        $f12, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885f8) {
            ctx->pc = 0x188614u;
            goto label_188614;
        }
    }
    ctx->pc = 0x188600u;
    // 0x188600: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x188600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x188604: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x188608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18860c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18860Cu;
    {
        const bool branch_taken_0x18860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18860Cu;
        // 0x188610: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18860c) {
            ctx->pc = 0x188644u;
            goto label_188644;
        }
    }
    ctx->pc = 0x188614u;
label_188614:
    // 0x188614: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x188614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x188618: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18861c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18861cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188620: 0x0  nop
    ctx->pc = 0x188620u;
    // NOP
    // 0x188624: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x188624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188628: 0x0  nop
    ctx->pc = 0x188628u;
    // NOP
    // 0x18862c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x18862Cu;
    {
        const bool branch_taken_0x18862c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x188630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18862Cu;
        // 0x188630: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18862c) {
            ctx->pc = 0x188644u;
            goto label_188644;
        }
    }
    ctx->pc = 0x188634u;
    // 0x188634: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x188638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18863c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x18863Cu;
    {
        const bool branch_taken_0x18863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18863Cu;
        // 0x188640: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18863c) {
            ctx->pc = 0x188644u;
            goto label_188644;
        }
    }
    ctx->pc = 0x188644u;
label_188644:
    // 0x188644: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x188644u;
    SET_GPR_U32(ctx, 31, 0x18864Cu);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x188644u, 0x18864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18864Cu;
label_18864c:
    // 0x18864c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x18864cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_188650:
    // 0x188650: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x188650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188654: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x188654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x188658: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x188658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18865c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18865cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188660: 0x0  nop
    ctx->pc = 0x188660u;
    // NOP
    // 0x188664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188668: 0x0  nop
    ctx->pc = 0x188668u;
    // NOP
    // 0x18866c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18866Cu;
    {
        const bool branch_taken_0x18866c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18866c) {
            ctx->pc = 0x188688u;
            goto label_188688;
        }
    }
    ctx->pc = 0x188674u;
    // 0x188674: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x188674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x188678: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x188678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18867c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x18867cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x188680: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x188680u;
    {
        const bool branch_taken_0x188680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188680) {
            ctx->pc = 0x1886C0u;
            goto label_1886c0;
        }
    }
    ctx->pc = 0x188688u;
label_188688:
    // 0x188688: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x188688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18868c: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x18868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188690: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188694: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188694u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x188698: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x188698u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18869c: 0x0  nop
    ctx->pc = 0x18869cu;
    // NOP
    // 0x1886a0: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x1886a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x1886a4: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x1886a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1886a8: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x1886a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1886ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1886acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1886b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1886b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1886b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1886b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1886b8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1886B8u;
    {
        const bool branch_taken_0x1886b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1886BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886B8u;
        // 0x1886bc: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886b8) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x1886C0u;
label_1886c0:
    // 0x1886c0: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1886c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x1886c4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1886C4u;
    {
        const bool branch_taken_0x1886c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1886C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886C4u;
        // 0x1886c8: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886c4) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x1886CCu;
label_1886cc:
    // 0x1886cc: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x1886ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x1886d0: 0x18600054  blez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1886D0u;
    {
        const bool branch_taken_0x1886d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1886D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886D0u;
        // 0x1886d4: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886d0) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x1886D8u;
    // 0x1886d8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1886d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1886dc: 0xa6240224  sh          $a0, 0x224($s1)
    ctx->pc = 0x1886dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 4));
    // 0x1886e0: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1886e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1886e4: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x1886e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x1886e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1886e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1886ec: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x1886ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
    // 0x1886f0: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x1886f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1886f4: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x1886f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1886f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1886F8u;
    {
        const bool branch_taken_0x1886f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886F8u;
        // 0x1886fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886f8) {
            ctx->pc = 0x188704u;
            goto label_188704;
        }
    }
    ctx->pc = 0x188700u;
    // 0x188700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188704:
    // 0x188704: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x188704u;
    {
        const bool branch_taken_0x188704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188704) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x18870Cu;
    // 0x18870c: 0x92230232  lbu         $v1, 0x232($s1)
    ctx->pc = 0x18870cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
    // 0x188710: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x188710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188714: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x188714u;
    {
        const bool branch_taken_0x188714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x188714) {
            ctx->pc = 0x188770u;
            goto label_188770;
        }
    }
    ctx->pc = 0x18871Cu;
    // 0x18871c: 0x92240238  lbu         $a0, 0x238($s1)
    ctx->pc = 0x18871cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x188720: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x188720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x188724: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x188724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    // 0x188728: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x188728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
    // 0x18872c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18872cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x188730: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x188730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x188734: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x188734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x188738: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18873c: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x18873cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
    // 0x188740: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x188740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
    // 0x188744: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x188744u;
    {
        const bool branch_taken_0x188744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188744) {
            ctx->pc = 0x188770u;
            goto label_188770;
        }
    }
    ctx->pc = 0x18874Cu;
    // 0x18874c: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x18874cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
    // 0x188750: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x188750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x188754: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x188754u;
    {
        const bool branch_taken_0x188754 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x188758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188754u;
        // 0x188758: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188754) {
            ctx->pc = 0x188770u;
            goto label_188770;
        }
    }
    ctx->pc = 0x18875Cu;
    // 0x18875c: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x18875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x188760: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x188760u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x188764: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x188764u;
    {
        const bool branch_taken_0x188764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188764) {
            ctx->pc = 0x188770u;
            goto label_188770;
        }
    }
    ctx->pc = 0x18876Cu;
    // 0x18876c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18876cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188770:
    // 0x188770: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x188770u;
    {
        const bool branch_taken_0x188770 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x188770) {
            ctx->pc = 0x188794u;
            goto label_188794;
        }
    }
    ctx->pc = 0x188778u;
    // 0x188778: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x188778u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x18877c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18877cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188780: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x188780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x188784: 0xc062948  jal         func_18A520
    ctx->pc = 0x188784u;
    SET_GPR_U32(ctx, 31, 0x18878Cu);
    ctx->pc = 0x188788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188784u;
    // 0x188788: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x188784u, 0x18878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18878Cu;
label_18878c:
    // 0x18878c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18878Cu;
    {
        const bool branch_taken_0x18878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18878Cu;
        // 0x188790: 0x86230224  lh          $v1, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18878c) {
            ctx->pc = 0x1887B4u;
            goto label_1887b4;
        }
    }
    ctx->pc = 0x188794u;
label_188794:
    // 0x188794: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x188794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x188798: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x188798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x18879c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x18879cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1887a0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1887a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1887a4: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x1887a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
    // 0x1887a8: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1887a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x1887ac: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x1887acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
    // 0x1887b0: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x1887b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_1887b4:
    // 0x1887b4: 0x1c60001b  bgtz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1887B4u;
    {
        const bool branch_taken_0x1887b4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1887b4) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x1887BCu;
    // 0x1887bc: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x1887bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x1887c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1887c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1887c4: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1887C4u;
    SET_GPR_U32(ctx, 31, 0x1887CCu);
    ctx->pc = 0x1887C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887C4u;
    // 0x1887c8: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1887C4u, 0x1887CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1887CCu;
label_1887cc:
    // 0x1887cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1887ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1887d0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1887d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1887d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1887d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1887d8: 0x92250230  lbu         $a1, 0x230($s1)
    ctx->pc = 0x1887d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x1887dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1887dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1887e0: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1887e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x1887e4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1887e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1887e8: 0x24632b15  addiu       $v1, $v1, 0x2B15
    ctx->pc = 0x1887e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11029));
    // 0x1887ec: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1887ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1887f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1887f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1887f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1887f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1887f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1887f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1887fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1887fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188800: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x188800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188804: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x188804u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188808: 0x0  nop
    ctx->pc = 0x188808u;
    // NOP
    // 0x18880c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18880cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x188810: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x188814: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x188814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x188818: 0x0  nop
    ctx->pc = 0x188818u;
    // NOP
    // 0x18881c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188820: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x188820u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
label_188824:
    // 0x188824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x188824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x188828u;
}
