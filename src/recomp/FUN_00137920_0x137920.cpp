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

// Function: FUN_00137920
// Address: 0x137920 - 0x137ad0
void FUN_00137920_0x137920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137920_0x137920");
#endif

    switch (ctx->pc) {
        case 0x1379a8u: goto label_1379a8;
        case 0x1379b0u: goto label_1379b0;
        case 0x1379e4u: goto label_1379e4;
        case 0x1379ecu: goto label_1379ec;
        case 0x137a4cu: goto label_137a4c;
        case 0x137a64u: goto label_137a64;
        case 0x137a88u: goto label_137a88;
        case 0x137aa0u: goto label_137aa0;
        case 0x137abcu: goto label_137abc;
        case 0x137accu: goto label_137acc;
        default: break;
    }

    ctx->pc = 0x137920u;

    // 0x137920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137924: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137928: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13792c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13792cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137934: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x137934u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x137938: 0x8c900038  lw          $s0, 0x38($a0)
    ctx->pc = 0x137938u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x13793c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x13793cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x137940: 0x14600062  bnez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x137940u;
    {
        const bool branch_taken_0x137940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137940u;
        // 0x137944: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137940) {
            ctx->pc = 0x137ACCu;
            goto label_137acc;
        }
    }
    ctx->pc = 0x137948u;
    // 0x137948: 0x92250237  lbu         $a1, 0x237($s1)
    ctx->pc = 0x137948u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 567)));
    // 0x13794c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x137950: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x137950u;
    {
        const bool branch_taken_0x137950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x137954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137950u;
        // 0x137954: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137950) {
            ctx->pc = 0x1379B8u;
            goto label_1379b8;
        }
    }
    ctx->pc = 0x137958u;
    // 0x137958: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x137958u;
    {
        const bool branch_taken_0x137958 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x137958) {
            ctx->pc = 0x13797Cu;
            goto label_13797c;
        }
    }
    ctx->pc = 0x137960u;
    // 0x137960: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x137960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x137964: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x137964u;
    {
        const bool branch_taken_0x137964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x137964) {
            ctx->pc = 0x137A14u;
            goto label_137a14;
        }
    }
    ctx->pc = 0x13796Cu;
    // 0x13796c: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x13796Cu;
    {
        const bool branch_taken_0x13796c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13796c) {
            ctx->pc = 0x137A14u;
            goto label_137a14;
        }
    }
    ctx->pc = 0x137974u;
    // 0x137974: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x137974u;
    {
        const bool branch_taken_0x137974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137974) {
            ctx->pc = 0x137A14u;
            goto label_137a14;
        }
    }
    ctx->pc = 0x13797Cu;
label_13797c:
    // 0x13797c: 0x92230292  lbu         $v1, 0x292($s1)
    ctx->pc = 0x13797cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 658)));
    // 0x137980: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x137980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x137984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x137984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137988: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x137988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13798c: 0x0  nop
    ctx->pc = 0x13798cu;
    // NOP
    // 0x137990: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x137990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x137994: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x137994u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x137998: 0x0  nop
    ctx->pc = 0x137998u;
    // NOP
    // 0x13799c: 0x0  nop
    ctx->pc = 0x13799cu;
    // NOP
    // 0x1379a0: 0xc04fe24  jal         func_13F890
    ctx->pc = 0x1379A0u;
    SET_GPR_U32(ctx, 31, 0x1379A8u);
    ctx->pc = 0x1379A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379A0u;
    // 0x1379a4: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F890u, 0x1379A0u, 0x1379A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379A8u;
label_1379a8:
    // 0x1379a8: 0xc051054  jal         func_144150
    ctx->pc = 0x1379A8u;
    SET_GPR_U32(ctx, 31, 0x1379B0u);
    ctx->pc = 0x1379ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379A8u;
    // 0x1379ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144150u, 0x1379A8u, 0x1379B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379B0u;
label_1379b0:
    // 0x1379b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1379B0u;
    {
        const bool branch_taken_0x1379b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1379b0) {
            ctx->pc = 0x137A14u;
            goto label_137a14;
        }
    }
    ctx->pc = 0x1379B8u;
label_1379b8:
    // 0x1379b8: 0x92230292  lbu         $v1, 0x292($s1)
    ctx->pc = 0x1379b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 658)));
    // 0x1379bc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1379bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1379c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1379c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1379c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1379c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1379c8: 0x0  nop
    ctx->pc = 0x1379c8u;
    // NOP
    // 0x1379cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1379ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1379d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1379d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1379d4: 0x0  nop
    ctx->pc = 0x1379d4u;
    // NOP
    // 0x1379d8: 0x0  nop
    ctx->pc = 0x1379d8u;
    // NOP
    // 0x1379dc: 0xc04fe24  jal         func_13F890
    ctx->pc = 0x1379DCu;
    SET_GPR_U32(ctx, 31, 0x1379E4u);
    ctx->pc = 0x1379E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379DCu;
    // 0x1379e0: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F890u, 0x1379DCu, 0x1379E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379E4u;
label_1379e4:
    // 0x1379e4: 0xc051054  jal         func_144150
    ctx->pc = 0x1379E4u;
    SET_GPR_U32(ctx, 31, 0x1379ECu);
    ctx->pc = 0x1379E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379E4u;
    // 0x1379e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144150u, 0x1379E4u, 0x1379ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379ECu;
label_1379ec:
    // 0x1379ec: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1379ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1379f0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1379f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1379f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1379f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1379f8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1379f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1379fc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1379fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x137a00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x137a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x137a04: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x137a04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x137a08: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x137A08u;
    {
        const bool branch_taken_0x137a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137a08) {
            ctx->pc = 0x137A14u;
            goto label_137a14;
        }
    }
    ctx->pc = 0x137A10u;
    // 0x137a10: 0xa2200237  sb          $zero, 0x237($s1)
    ctx->pc = 0x137a10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 567), (uint8_t)GPR_U32(ctx, 0));
label_137a14:
    // 0x137a14: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x137A14u;
    {
        const bool branch_taken_0x137a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x137a14) {
            ctx->pc = 0x137A64u;
            goto label_137a64;
        }
    }
    ctx->pc = 0x137A1Cu;
    // 0x137a1c: 0x92230292  lbu         $v1, 0x292($s1)
    ctx->pc = 0x137a1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 658)));
    // 0x137a20: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x137a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x137a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x137a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x137a2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137a30: 0x0  nop
    ctx->pc = 0x137a30u;
    // NOP
    // 0x137a34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x137a34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x137a38: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x137a38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x137a3c: 0x0  nop
    ctx->pc = 0x137a3cu;
    // NOP
    // 0x137a40: 0x0  nop
    ctx->pc = 0x137a40u;
    // NOP
    // 0x137a44: 0xc053bec  jal         func_14EFB0
    ctx->pc = 0x137A44u;
    SET_GPR_U32(ctx, 31, 0x137A4Cu);
    ctx->pc = 0x137A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137A44u;
    // 0x137a48: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EFB0u, 0x137A44u, 0x137A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A4Cu;
label_137a4c:
    // 0x137a4c: 0x8604020a  lh          $a0, 0x20A($s0)
    ctx->pc = 0x137a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 522)));
    // 0x137a50: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x137a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x137a54: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x137A54u;
    {
        const bool branch_taken_0x137a54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x137A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A54u;
        // 0x137a58: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a54) {
            ctx->pc = 0x137A64u;
            goto label_137a64;
        }
    }
    ctx->pc = 0x137A5Cu;
    // 0x137a5c: 0xc08c0f8  jal         func_2303E0
    ctx->pc = 0x137A5Cu;
    SET_GPR_U32(ctx, 31, 0x137A64u);
    ctx->pc = 0x2303E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2303E0u, 0x137A5Cu, 0x137A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A64u;
label_137a64:
    // 0x137a64: 0x92240237  lbu         $a0, 0x237($s1)
    ctx->pc = 0x137a64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 567)));
    // 0x137a68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x137a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x137a6c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x137A6Cu;
    {
        const bool branch_taken_0x137a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x137a6c) {
            ctx->pc = 0x137AA0u;
            goto label_137aa0;
        }
    }
    ctx->pc = 0x137A74u;
    // 0x137a74: 0x922301a2  lbu         $v1, 0x1A2($s1)
    ctx->pc = 0x137a74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 418)));
    // 0x137a78: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x137A78u;
    {
        const bool branch_taken_0x137a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A78u;
        // 0x137a7c: 0x26240150  addiu       $a0, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a78) {
            ctx->pc = 0x137AA0u;
            goto label_137aa0;
        }
    }
    ctx->pc = 0x137A80u;
    // 0x137a80: 0xc0451f8  jal         func_1147E0
    ctx->pc = 0x137A80u;
    SET_GPR_U32(ctx, 31, 0x137A88u);
    ctx->pc = 0x1147E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1147E0u, 0x137A80u, 0x137A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A88u;
label_137a88:
    // 0x137a88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x137A88u;
    {
        const bool branch_taken_0x137a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137a88) {
            ctx->pc = 0x137AA0u;
            goto label_137aa0;
        }
    }
    ctx->pc = 0x137A90u;
    // 0x137a90: 0x92250290  lbu         $a1, 0x290($s1)
    ctx->pc = 0x137a90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x137a94: 0x92260291  lbu         $a2, 0x291($s1)
    ctx->pc = 0x137a94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 657)));
    // 0x137a98: 0xc045404  jal         func_115010
    ctx->pc = 0x137A98u;
    SET_GPR_U32(ctx, 31, 0x137AA0u);
    ctx->pc = 0x137A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137A98u;
    // 0x137a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115010u, 0x137A98u, 0x137AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AA0u;
label_137aa0:
    // 0x137aa0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x137AA0u;
    {
        const bool branch_taken_0x137aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x137aa0) {
            ctx->pc = 0x137ACCu;
            goto label_137acc;
        }
    }
    ctx->pc = 0x137AA8u;
    // 0x137aa8: 0x920301a2  lbu         $v1, 0x1A2($s0)
    ctx->pc = 0x137aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
    // 0x137aac: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x137AACu;
    {
        const bool branch_taken_0x137aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AACu;
        // 0x137ab0: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137aac) {
            ctx->pc = 0x137ACCu;
            goto label_137acc;
        }
    }
    ctx->pc = 0x137AB4u;
    // 0x137ab4: 0xc045094  jal         func_114250
    ctx->pc = 0x137AB4u;
    SET_GPR_U32(ctx, 31, 0x137ABCu);
    ctx->pc = 0x114250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114250u, 0x137AB4u, 0x137ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137ABCu;
label_137abc:
    // 0x137abc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137ABCu;
    {
        const bool branch_taken_0x137abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137ABCu;
        // 0x137ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137abc) {
            ctx->pc = 0x137ACCu;
            goto label_137acc;
        }
    }
    ctx->pc = 0x137AC4u;
    // 0x137ac4: 0xc045338  jal         func_114CE0
    ctx->pc = 0x137AC4u;
    SET_GPR_U32(ctx, 31, 0x137ACCu);
    ctx->pc = 0x114CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CE0u, 0x137AC4u, 0x137ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137ACCu;
label_137acc:
    // 0x137acc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x137ad0u;
}
