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

// Function: FUN_0012cae0
// Address: 0x12cae0 - 0x12cc9c
void FUN_0012cae0_0x12cae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012cae0_0x12cae0");
#endif

    switch (ctx->pc) {
        case 0x12cb14u: goto label_12cb14;
        case 0x12cb34u: goto label_12cb34;
        case 0x12cc3cu: goto label_12cc3c;
        case 0x12cc4cu: goto label_12cc4c;
        case 0x12cc54u: goto label_12cc54;
        case 0x12cc70u: goto label_12cc70;
        default: break;
    }

    ctx->pc = 0x12cae0u;

    // 0x12cae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12cae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12cae4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x12cae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x12cae8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12cae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12caec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12caecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12caf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12caf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12caf4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x12caf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12caf8: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x12caf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x12cafc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CAFCu;
    {
        const bool branch_taken_0x12cafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAFCu;
        // 0x12cb00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cafc) {
            ctx->pc = 0x12CB0Cu;
            goto label_12cb0c;
        }
    }
    ctx->pc = 0x12CB04u;
    // 0x12cb04: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CB04u;
    {
        const bool branch_taken_0x12cb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cb04) {
            ctx->pc = 0x12CB1Cu;
            goto label_12cb1c;
        }
    }
    ctx->pc = 0x12CB0Cu;
label_12cb0c:
    // 0x12cb0c: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12CB0Cu;
    SET_GPR_U32(ctx, 31, 0x12CB14u);
    ctx->pc = 0x12CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB0Cu;
    // 0x12cb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12CB0Cu, 0x12CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB14u;
label_12cb14:
    // 0x12cb14: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x12CB14u;
    {
        const bool branch_taken_0x12cb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB14u;
        // 0x12cb18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb14) {
            ctx->pc = 0x12CC98u;
            goto label_12cc98;
        }
    }
    ctx->pc = 0x12CB1Cu;
label_12cb1c:
    // 0x12cb1c: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x12cb1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12cb20: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x12cb20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x12cb24: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CB24u;
    {
        const bool branch_taken_0x12cb24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB24u;
        // 0x12cb28: 0x2841003c  slti        $at, $v0, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb24) {
            ctx->pc = 0x12CB3Cu;
            goto label_12cb3c;
        }
    }
    ctx->pc = 0x12CB2Cu;
    // 0x12cb2c: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12CB2Cu;
    SET_GPR_U32(ctx, 31, 0x12CB34u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12CB2Cu, 0x12CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB34u;
label_12cb34:
    // 0x12cb34: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x12CB34u;
    {
        const bool branch_taken_0x12cb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cb34) {
            ctx->pc = 0x12CC94u;
            goto label_12cc94;
        }
    }
    ctx->pc = 0x12CB3Cu;
label_12cb3c:
    // 0x12cb3c: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x12CB3Cu;
    {
        const bool branch_taken_0x12cb3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cb3c) {
            ctx->pc = 0x12CB9Cu;
            goto label_12cb9c;
        }
    }
    ctx->pc = 0x12CB44u;
    // 0x12cb44: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x12cb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cb48: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x12cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
    // 0x12cb4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12cb4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cb50: 0x0  nop
    ctx->pc = 0x12cb50u;
    // NOP
    // 0x12cb54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12cb54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cb58: 0x0  nop
    ctx->pc = 0x12cb58u;
    // NOP
    // 0x12cb5c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12CB5Cu;
    {
        const bool branch_taken_0x12cb5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB5Cu;
        // 0x12cb60: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb5c) {
            ctx->pc = 0x12CB74u;
            goto label_12cb74;
        }
    }
    ctx->pc = 0x12CB64u;
    // 0x12cb64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12cb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cb68: 0x0  nop
    ctx->pc = 0x12cb68u;
    // NOP
    // 0x12cb6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12cb6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12cb70: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x12cb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
label_12cb74:
    // 0x12cb74: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x12cb74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12cb78: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x12cb78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x12cb7c: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CB7Cu;
    {
        const bool branch_taken_0x12cb7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cb7c) {
            ctx->pc = 0x12CB9Cu;
            goto label_12cb9c;
        }
    }
    ctx->pc = 0x12CB84u;
    // 0x12cb84: 0x920202e3  lbu         $v0, 0x2E3($s0)
    ctx->pc = 0x12cb84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12cb88: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x12cb88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12cb8c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CB8Cu;
    {
        const bool branch_taken_0x12cb8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cb8c) {
            ctx->pc = 0x12CB9Cu;
            goto label_12cb9c;
        }
    }
    ctx->pc = 0x12CB94u;
    // 0x12cb94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12cb98: 0xa20202e3  sb          $v0, 0x2E3($s0)
    ctx->pc = 0x12cb98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
label_12cb9c:
    // 0x12cb9c: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x12cb9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12cba0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CBA0u;
    {
        const bool branch_taken_0x12cba0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBA0u;
        // 0x12cba4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cba0) {
            ctx->pc = 0x12CBB4u;
            goto label_12cbb4;
        }
    }
    ctx->pc = 0x12CBA8u;
    // 0x12cba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12cba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cbac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12CBACu;
    {
        const bool branch_taken_0x12cbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBACu;
        // 0x12cbb0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbac) {
            ctx->pc = 0x12CBCCu;
            goto label_12cbcc;
        }
    }
    ctx->pc = 0x12CBB4u;
label_12cbb4:
    // 0x12cbb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12cbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12cbb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12cbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12cbbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12cbbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cbc0: 0x0  nop
    ctx->pc = 0x12cbc0u;
    // NOP
    // 0x12cbc4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x12cbc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12cbc8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x12cbc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_12cbcc:
    // 0x12cbcc: 0xc6000304  lwc1        $f0, 0x304($s0)
    ctx->pc = 0x12cbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cbd0: 0x960202f8  lhu         $v0, 0x2F8($s0)
    ctx->pc = 0x12cbd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x12cbd4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CBD4u;
    {
        const bool branch_taken_0x12cbd4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBD4u;
        // 0x12cbd8: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbd4) {
            ctx->pc = 0x12CBE8u;
            goto label_12cbe8;
        }
    }
    ctx->pc = 0x12CBDCu;
    // 0x12cbdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12cbdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cbe0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12CBE0u;
    {
        const bool branch_taken_0x12cbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBE0u;
        // 0x12cbe4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbe0) {
            ctx->pc = 0x12CC04u;
            goto label_12cc04;
        }
    }
    ctx->pc = 0x12CBE8u;
label_12cbe8:
    // 0x12cbe8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x12cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x12cbec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12cbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12cbf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12cbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12cbf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12cbf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cbf8: 0x0  nop
    ctx->pc = 0x12cbf8u;
    // NOP
    // 0x12cbfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12cbfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12cc00: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x12cc00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_12cc04:
    // 0x12cc04: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x12cc04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12cc08: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x12cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x12cc0c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x12cc10: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x12cc10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12cc14: 0x3c023daa  lui         $v0, 0x3DAA
    ctx->pc = 0x12cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15786 << 16));
    // 0x12cc18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12cc18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12cc1c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x12cc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x12cc20: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x12cc20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12cc24: 0x0  nop
    ctx->pc = 0x12cc24u;
    // NOP
    // 0x12cc28: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12cc28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x12cc2c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12cc2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12cc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12cc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cc34: 0xc064aa4  jal         func_192A90
    ctx->pc = 0x12CC34u;
    SET_GPR_U32(ctx, 31, 0x12CC3Cu);
    ctx->pc = 0x12CC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC34u;
    // 0x12cc38: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A90u, 0x12CC34u, 0x12CC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC3Cu;
label_12cc3c:
    // 0x12cc3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12cc3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x12cc40: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x12cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x12cc44: 0xc066e26  jal         func_19B898
    ctx->pc = 0x12CC44u;
    SET_GPR_U32(ctx, 31, 0x12CC4Cu);
    ctx->pc = 0x12CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC44u;
    // 0x12cc48: 0x26050330  addiu       $a1, $s0, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x12CC44u, 0x12CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC4Cu;
label_12cc4c:
    // 0x12cc4c: 0xc06d4c0  jal         func_1B5300
    ctx->pc = 0x12CC4Cu;
    SET_GPR_U32(ctx, 31, 0x12CC54u);
    ctx->pc = 0x12CC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC4Cu;
    // 0x12cc50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5300u, 0x12CC4Cu, 0x12CC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC54u;
label_12cc54:
    // 0x12cc54: 0xc6020300  lwc1        $f2, 0x300($s0)
    ctx->pc = 0x12cc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12cc58: 0xc6010250  lwc1        $f1, 0x250($s0)
    ctx->pc = 0x12cc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cc5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12cc5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12cc60: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x12cc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12cc64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12cc64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12cc68: 0xc06d412  jal         func_1B5048
    ctx->pc = 0x12CC68u;
    SET_GPR_U32(ctx, 31, 0x12CC70u);
    ctx->pc = 0x12CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC68u;
    // 0x12cc6c: 0xe6000250  swc1        $f0, 0x250($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5048u, 0x12CC68u, 0x12CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC70u;
label_12cc70:
    // 0x12cc70: 0xc6020300  lwc1        $f2, 0x300($s0)
    ctx->pc = 0x12cc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12cc74: 0xc6010258  lwc1        $f1, 0x258($s0)
    ctx->pc = 0x12cc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cc78: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x12cc78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12cc7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12cc7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12cc80: 0xe6000258  swc1        $f0, 0x258($s0)
    ctx->pc = 0x12cc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x12cc84: 0xe61402a4  swc1        $f20, 0x2A4($s0)
    ctx->pc = 0x12cc84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x12cc88: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x12cc88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12cc8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12cc90: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x12cc90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
label_12cc94:
    // 0x12cc94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12cc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12cc98:
    // 0x12cc98: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12cc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x12cc9cu;
}
