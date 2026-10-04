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

// Function: FUN_00167f00
// Address: 0x167f00 - 0x168038
void FUN_00167f00_0x167f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167f00_0x167f00");
#endif

    switch (ctx->pc) {
        case 0x167f6cu: goto label_167f6c;
        case 0x167f74u: goto label_167f74;
        case 0x167fc4u: goto label_167fc4;
        case 0x167fd0u: goto label_167fd0;
        case 0x167fdcu: goto label_167fdc;
        case 0x167fecu: goto label_167fec;
        default: break;
    }

    ctx->pc = 0x167f00u;

    // 0x167f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x167f04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x167f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x167f08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x167f0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167f14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f18: 0x8c870048  lw          $a3, 0x48($a0)
    ctx->pc = 0x167f18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x167f1c: 0x9084004d  lbu         $a0, 0x4D($a0)
    ctx->pc = 0x167f1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
    // 0x167f20: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x167F20u;
    {
        const bool branch_taken_0x167f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x167F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F20u;
        // 0x167f24: 0x8cf0004c  lw          $s0, 0x4C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f20) {
            ctx->pc = 0x167FF4u;
            goto label_167ff4;
        }
    }
    ctx->pc = 0x167F28u;
    // 0x167f28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x167f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167f2c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x167F2Cu;
    {
        const bool branch_taken_0x167f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x167f2c) {
            ctx->pc = 0x167F3Cu;
            goto label_167f3c;
        }
    }
    ctx->pc = 0x167F34u;
    // 0x167f34: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x167F34u;
    {
        const bool branch_taken_0x167f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F34u;
        // 0x167f38: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f34) {
            ctx->pc = 0x168078u;
            return;
        }
    }
    ctx->pc = 0x167F3Cu;
label_167f3c:
    // 0x167f3c: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x167f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x167f40: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x167f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x167f44: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x167f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x167f48: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x167f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x167f4c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x167f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x167f50: 0x24a55fa0  addiu       $a1, $a1, 0x5FA0
    ctx->pc = 0x167f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24480));
    // 0x167f54: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x167f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x167f58: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x167f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x167f5c: 0x94e20056  lhu         $v0, 0x56($a3)
    ctx->pc = 0x167f5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x167f60: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x167f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x167f64: 0xc066e26  jal         func_19B898
    ctx->pc = 0x167F64u;
    SET_GPR_U32(ctx, 31, 0x167F6Cu);
    ctx->pc = 0x167F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F64u;
    // 0x167f68: 0xa4e20056  sh          $v0, 0x56($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x167F64u, 0x167F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F6Cu;
label_167f6c:
    // 0x167f6c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x167F6Cu;
    SET_GPR_U32(ctx, 31, 0x167F74u);
    ctx->pc = 0x167F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F6Cu;
    // 0x167f70: 0xa6200050  sh          $zero, 0x50($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 80), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x167F6Cu, 0x167F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F74u;
label_167f74:
    // 0x167f74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x167f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f7c: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x167f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x167f80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x167f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x167f84: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x167f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x167f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167f8c: 0x0  nop
    ctx->pc = 0x167f8cu;
    // NOP
    // 0x167f90: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x167f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x167f94: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x167f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x167f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167f9c: 0x0  nop
    ctx->pc = 0x167f9cu;
    // NOP
    // 0x167fa0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x167fa0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x167fa4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x167fa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x167fa8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x167fa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x167fac: 0x0  nop
    ctx->pc = 0x167facu;
    // NOP
    // 0x167fb0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x167fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x167fb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x167fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167fb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167fbc: 0xc066e26  jal         func_19B898
    ctx->pc = 0x167FBCu;
    SET_GPR_U32(ctx, 31, 0x167FC4u);
    ctx->pc = 0x167FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FBCu;
    // 0x167fc0: 0xa6220052  sh          $v0, 0x52($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x167FBCu, 0x167FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FC4u;
label_167fc4:
    // 0x167fc4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x167fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x167fc8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x167FC8u;
    SET_GPR_U32(ctx, 31, 0x167FD0u);
    ctx->pc = 0x167FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FC8u;
    // 0x167fcc: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x167FC8u, 0x167FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FD0u;
label_167fd0:
    // 0x167fd0: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x167fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x167fd4: 0xc066e26  jal         func_19B898
    ctx->pc = 0x167FD4u;
    SET_GPR_U32(ctx, 31, 0x167FDCu);
    ctx->pc = 0x167FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FD4u;
    // 0x167fd8: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x167FD4u, 0x167FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FDCu;
label_167fdc:
    // 0x167fdc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x167fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x167fe0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167fe4: 0xc05cf6c  jal         func_173DB0
    ctx->pc = 0x167FE4u;
    SET_GPR_U32(ctx, 31, 0x167FECu);
    ctx->pc = 0x167FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FE4u;
    // 0x167fe8: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DB0u, 0x167FE4u, 0x167FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FECu;
label_167fec:
    // 0x167fec: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x167FECu;
    {
        const bool branch_taken_0x167fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167fec) {
            ctx->pc = 0x168074u;
            return;
        }
    }
    ctx->pc = 0x167FF4u;
label_167ff4:
    // 0x167ff4: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x167ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x167ff8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x167ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x167ffc: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x167ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x168000: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x168000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x168004: 0x3c020c00  lui         $v0, 0xC00
    ctx->pc = 0x168004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3072 << 16));
    // 0x168008: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x168008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x16800c: 0x24a55fa0  addiu       $a1, $a1, 0x5FA0
    ctx->pc = 0x16800cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24480));
    // 0x168010: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x168010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x168014: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x168014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x168018: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x168018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x16801c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16801cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x168020: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x168020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x168024: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x168024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x168028: 0x94e20056  lhu         $v0, 0x56($a3)
    ctx->pc = 0x168028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x16802c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x16802cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x168030: 0xc066e26  jal         func_19B898
    ctx->pc = 0x168030u;
    SET_GPR_U32(ctx, 31, 0x168038u);
    ctx->pc = 0x168034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168030u;
    // 0x168034: 0xa4e20056  sh          $v0, 0x56($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x168030u, 0x168038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168038u;
}
