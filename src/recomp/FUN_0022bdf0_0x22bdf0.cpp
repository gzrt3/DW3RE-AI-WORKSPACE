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

// Function: FUN_0022bdf0
// Address: 0x22bdf0 - 0x22c088
void FUN_0022bdf0_0x22bdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022bdf0_0x22bdf0");
#endif

    switch (ctx->pc) {
        case 0x22be34u: goto label_22be34;
        case 0x22be5cu: goto label_22be5c;
        case 0x22be6cu: goto label_22be6c;
        case 0x22be7cu: goto label_22be7c;
        case 0x22bea8u: goto label_22bea8;
        case 0x22c014u: goto label_22c014;
        case 0x22c038u: goto label_22c038;
        case 0x22c048u: goto label_22c048;
        case 0x22c058u: goto label_22c058;
        case 0x22c068u: goto label_22c068;
        case 0x22c078u: goto label_22c078;
        case 0x22c084u: goto label_22c084;
        default: break;
    }

    ctx->pc = 0x22bdf0u;

    // 0x22bdf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22bdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22bdf4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22bdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x22bdf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22bdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22bdfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22be00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22be00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22be04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22be04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22be08: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x22be08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x22be0c: 0x8c90005c  lw          $s0, 0x5C($a0)
    ctx->pc = 0x22be0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x22be10: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BE10u;
    {
        const bool branch_taken_0x22be10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE10u;
        // 0x22be14: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be10) {
            ctx->pc = 0x22BE20u;
            goto label_22be20;
        }
    }
    ctx->pc = 0x22BE18u;
    // 0x22be18: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22BE18u;
    {
        const bool branch_taken_0x22be18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be18) {
            ctx->pc = 0x22BE3Cu;
            goto label_22be3c;
        }
    }
    ctx->pc = 0x22BE20u;
label_22be20:
    // 0x22be20: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x22be20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x22be24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22be24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be28: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x22be28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x22be2c: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x22BE2Cu;
    SET_GPR_U32(ctx, 31, 0x22BE34u);
    ctx->pc = 0x22BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE2Cu;
    // 0x22be30: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22BE2Cu, 0x22BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE34u;
label_22be34:
    // 0x22be34: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x22BE34u;
    {
        const bool branch_taken_0x22be34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE34u;
        // 0x22be38: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be34) {
            ctx->pc = 0x22C088u;
            return;
        }
    }
    ctx->pc = 0x22BE3Cu;
label_22be3c:
    // 0x22be3c: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x22be3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x22be40: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x22be40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22be44: 0x1020008d  beqz        $at, . + 4 + (0x8D << 2)
    ctx->pc = 0x22BE44u;
    {
        const bool branch_taken_0x22be44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE44u;
        // 0x22be48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be44) {
            ctx->pc = 0x22C07Cu;
            goto label_22c07c;
        }
    }
    ctx->pc = 0x22BE4Cu;
    // 0x22be4c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x22be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x22be50: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x22be50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x22be54: 0xc066e02  jal         func_19B808
    ctx->pc = 0x22BE54u;
    SET_GPR_U32(ctx, 31, 0x22BE5Cu);
    ctx->pc = 0x22BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE54u;
    // 0x22be58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22BE54u, 0x22BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE5Cu;
label_22be5c:
    // 0x22be5c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x22be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x22be60: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x22be60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x22be64: 0xc066e02  jal         func_19B808
    ctx->pc = 0x22BE64u;
    SET_GPR_U32(ctx, 31, 0x22BE6Cu);
    ctx->pc = 0x22BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE64u;
    // 0x22be68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22BE64u, 0x22BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE6Cu;
label_22be6c:
    // 0x22be6c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x22be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x22be70: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x22be70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x22be74: 0xc066e02  jal         func_19B808
    ctx->pc = 0x22BE74u;
    SET_GPR_U32(ctx, 31, 0x22BE7Cu);
    ctx->pc = 0x22BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE74u;
    // 0x22be78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22BE74u, 0x22BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE7Cu;
label_22be7c:
    // 0x22be7c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x22be7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22be80: 0x3c023f4d  lui         $v0, 0x3F4D
    ctx->pc = 0x22be80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16205 << 16));
    // 0x22be84: 0x3442a4a8  ori         $v0, $v0, 0xA4A8
    ctx->pc = 0x22be84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42152);
    // 0x22be88: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x22be88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x22be8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22be8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22be90: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x22be90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22be94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22be94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22be98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22be9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22be9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22bea0: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x22BEA0u;
    SET_GPR_U32(ctx, 31, 0x22BEA8u);
    ctx->pc = 0x22BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BEA0u;
    // 0x22bea4: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x22BEA0u, 0x22BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEA8u;
label_22bea8:
    // 0x22bea8: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x22bea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22beac: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x22beacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x22beb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22beb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22beb4: 0x0  nop
    ctx->pc = 0x22beb4u;
    // NOP
    // 0x22beb8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22beb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x22bebc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22bebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bec0: 0x0  nop
    ctx->pc = 0x22bec0u;
    // NOP
    // 0x22bec4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x22BEC4u;
    {
        const bool branch_taken_0x22bec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bec4) {
            ctx->pc = 0x22BF18u;
            goto label_22bf18;
        }
    }
    ctx->pc = 0x22BECCu;
    // 0x22becc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x22beccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bed0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x22bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x22bed4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x22bed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22bed8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22bed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22bedc: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x22bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x22bee0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22bee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22bee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22bee8: 0x0  nop
    ctx->pc = 0x22bee8u;
    // NOP
    // 0x22beec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22beecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x22bef0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x22bef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x22bef4: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x22bef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bef8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22bef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22befc: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x22befcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x22bf00: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x22bf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bf04: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22bf04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x22bf08: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x22bf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x22bf0c: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x22bf0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x22bf10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22bf14: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x22bf14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
label_22bf18:
    // 0x22bf18: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x22bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bf1c: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x22bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
    // 0x22bf20: 0x3443b8c3  ori         $v1, $v0, 0xB8C3
    ctx->pc = 0x22bf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
    // 0x22bf24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22bf24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22bf28: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x22bf2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22bf30: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22bf30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22bf34: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x22bf34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22bf38: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x22bf38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bf3c: 0x0  nop
    ctx->pc = 0x22bf3cu;
    // NOP
    // 0x22bf40: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22BF40u;
    {
        const bool branch_taken_0x22bf40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF40u;
        // 0x22bf44: 0xe6010050  swc1        $f1, 0x50($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf40) {
            ctx->pc = 0x22BF5Cu;
            goto label_22bf5c;
        }
    }
    ctx->pc = 0x22BF48u;
    // 0x22bf48: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x22bf4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22bf50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bf54: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22BF54u;
    {
        const bool branch_taken_0x22bf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF54u;
        // 0x22bf58: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf54) {
            ctx->pc = 0x22BF8Cu;
            goto label_22bf8c;
        }
    }
    ctx->pc = 0x22BF5Cu;
label_22bf5c:
    // 0x22bf5c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x22bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x22bf60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22bf64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bf64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bf68: 0x0  nop
    ctx->pc = 0x22bf68u;
    // NOP
    // 0x22bf6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bf6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bf70: 0x0  nop
    ctx->pc = 0x22bf70u;
    // NOP
    // 0x22bf74: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x22BF74u;
    {
        const bool branch_taken_0x22bf74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF74u;
        // 0x22bf78: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf74) {
            ctx->pc = 0x22BF8Cu;
            goto label_22bf8c;
        }
    }
    ctx->pc = 0x22BF7Cu;
    // 0x22bf7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22bf80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bf80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bf84: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x22BF84u;
    {
        const bool branch_taken_0x22bf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF84u;
        // 0x22bf88: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf84) {
            ctx->pc = 0x22BF8Cu;
            goto label_22bf8c;
        }
    }
    ctx->pc = 0x22BF8Cu;
label_22bf8c:
    // 0x22bf8c: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x22bf8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x22bf90: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x22bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
    // 0x22bf94: 0xc6020054  lwc1        $f2, 0x54($s0)
    ctx->pc = 0x22bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22bf98: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x22bf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
    // 0x22bf9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bf9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22bfa0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x22bfa4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22bfa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bfac: 0x0  nop
    ctx->pc = 0x22bfacu;
    // NOP
    // 0x22bfb0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x22bfb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x22bfb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bfb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bfb8: 0x0  nop
    ctx->pc = 0x22bfb8u;
    // NOP
    // 0x22bfbc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22BFBCu;
    {
        const bool branch_taken_0x22bfbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFBCu;
        // 0x22bfc0: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfbc) {
            ctx->pc = 0x22BFD8u;
            goto label_22bfd8;
        }
    }
    ctx->pc = 0x22BFC4u;
    // 0x22bfc4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x22bfc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22bfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bfd0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22BFD0u;
    {
        const bool branch_taken_0x22bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFD0u;
        // 0x22bfd4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfd0) {
            ctx->pc = 0x22C008u;
            goto label_22c008;
        }
    }
    ctx->pc = 0x22BFD8u;
label_22bfd8:
    // 0x22bfd8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x22bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x22bfdc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22bfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bfe4: 0x0  nop
    ctx->pc = 0x22bfe4u;
    // NOP
    // 0x22bfe8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bfe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bfec: 0x0  nop
    ctx->pc = 0x22bfecu;
    // NOP
    // 0x22bff0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x22BFF0u;
    {
        const bool branch_taken_0x22bff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFF0u;
        // 0x22bff4: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bff0) {
            ctx->pc = 0x22C008u;
            goto label_22c008;
        }
    }
    ctx->pc = 0x22BFF8u;
    // 0x22bff8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22bff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22bffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22bffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c000: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x22C000u;
    {
        const bool branch_taken_0x22c000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C000u;
        // 0x22c004: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c000) {
            ctx->pc = 0x22C008u;
            goto label_22c008;
        }
    }
    ctx->pc = 0x22C008u;
label_22c008:
    // 0x22c008: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x22c008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x22c00c: 0xc066e44  jal         func_19B910
    ctx->pc = 0x22C00Cu;
    SET_GPR_U32(ctx, 31, 0x22C014u);
    ctx->pc = 0x22C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C00Cu;
    // 0x22c010: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x22C00Cu, 0x22C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C014u;
label_22c014:
    // 0x22c014: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x22c014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x22c018: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22c018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22c01c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x22c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x22c020: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22c020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22c024: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x22c024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x22c028: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x22c028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22c02c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x22c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x22c030: 0xc064f38  jal         func_193CE0
    ctx->pc = 0x22C030u;
    SET_GPR_U32(ctx, 31, 0x22C038u);
    ctx->pc = 0x22C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C030u;
    // 0x22c034: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CE0u, 0x22C030u, 0x22C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C038u;
label_22c038:
    // 0x22c038: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x22c038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22c03c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22c03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22c040: 0xc066e96  jal         func_19BA58
    ctx->pc = 0x22C040u;
    SET_GPR_U32(ctx, 31, 0x22C048u);
    ctx->pc = 0x22C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C040u;
    // 0x22c044: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA58u, 0x22C040u, 0x22C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C048u;
label_22c048:
    // 0x22c048: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x22c048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22c04c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22c050: 0xc066e6c  jal         func_19B9B0
    ctx->pc = 0x22C050u;
    SET_GPR_U32(ctx, 31, 0x22C058u);
    ctx->pc = 0x22C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C050u;
    // 0x22c054: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B9B0u, 0x22C050u, 0x22C058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C058u;
label_22c058:
    // 0x22c058: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x22c058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22c05c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22c060: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x22C060u;
    SET_GPR_U32(ctx, 31, 0x22C068u);
    ctx->pc = 0x22C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C060u;
    // 0x22c064: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x22C060u, 0x22C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C068u;
label_22c068:
    // 0x22c068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c06c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22c06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22c070: 0xc066e1a  jal         func_19B868
    ctx->pc = 0x22C070u;
    SET_GPR_U32(ctx, 31, 0x22C078u);
    ctx->pc = 0x22C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C070u;
    // 0x22c074: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x22C070u, 0x22C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C078u;
label_22c078:
    // 0x22c078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c07c:
    // 0x22c07c: 0xc05ff64  jal         func_17FD90
    ctx->pc = 0x22C07Cu;
    SET_GPR_U32(ctx, 31, 0x22C084u);
    ctx->pc = 0x17FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FD90u, 0x22C07Cu, 0x22C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C084u;
label_22c084:
    // 0x22c084: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22c084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x22c088u;
}
