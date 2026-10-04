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

// Function: FUN_00171870
// Address: 0x171870 - 0x1719cc
void FUN_00171870_0x171870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00171870_0x171870");
#endif

    switch (ctx->pc) {
        case 0x171890u: goto label_171890;
        case 0x1718d0u: goto label_1718d0;
        case 0x1718e4u: goto label_1718e4;
        default: break;
    }

    ctx->pc = 0x171870u;

    // 0x171870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171878: 0x94831130  lhu         $v1, 0x1130($a0)
    ctx->pc = 0x171878u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4400)));
    // 0x17187c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x17187cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x171880: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x171880u;
    {
        const bool branch_taken_0x171880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x171884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171880u;
        // 0x171884: 0x2465fffc  addiu       $a1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171880) {
            ctx->pc = 0x171898u;
            goto label_171898;
        }
    }
    ctx->pc = 0x171888u;
    // 0x171888: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x171888u;
    SET_GPR_U32(ctx, 31, 0x171890u);
    ctx->pc = 0x17188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171888u;
    // 0x17188c: 0xa4801130  sh          $zero, 0x1130($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 4400), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x171888u, 0x171890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171890u;
label_171890:
    // 0x171890: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x171890u;
    {
        const bool branch_taken_0x171890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171890u;
        // 0x171894: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171890) {
            ctx->pc = 0x1719CCu;
            return;
        }
    }
    ctx->pc = 0x171898u;
label_171898:
    // 0x171898: 0x3c073e4c  lui         $a3, 0x3E4C
    ctx->pc = 0x171898u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15948 << 16));
    // 0x17189c: 0xa4851130  sh          $a1, 0x1130($a0)
    ctx->pc = 0x17189cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4400), (uint16_t)GPR_U32(ctx, 5));
    // 0x1718a0: 0x34e7cccd  ori         $a3, $a3, 0xCCCD
    ctx->pc = 0x1718a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x1718a4: 0x94891132  lhu         $t1, 0x1132($a0)
    ctx->pc = 0x1718a4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
    // 0x1718a8: 0x3c08bf26  lui         $t0, 0xBF26
    ctx->pc = 0x1718a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48934 << 16));
    // 0x1718ac: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1718acu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1718b0: 0x35086666  ori         $t0, $t0, 0x6666
    ctx->pc = 0x1718b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)26214);
    // 0x1718b4: 0x44881800  mtc1        $t0, $f3
    ctx->pc = 0x1718b4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1718b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1718b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1718bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1718c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718c4: 0x25270001  addiu       $a3, $t1, 0x1
    ctx->pc = 0x1718c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1718c8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1718C8u;
    {
        const bool branch_taken_0x1718c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1718CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718C8u;
        // 0x1718cc: 0xa4871132  sh          $a3, 0x1132($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4402), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718c8) {
            ctx->pc = 0x1719B4u;
            goto label_1719b4;
        }
    }
    ctx->pc = 0x1718D0u;
label_1718d0:
    // 0x1718d0: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1718d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1718d4: 0x24ea1150  addiu       $t2, $a3, 0x1150
    ctx->pc = 0x1718d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 4432));
    // 0x1718d8: 0x25090090  addiu       $t1, $t0, 0x90
    ctx->pc = 0x1718d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
    // 0x1718dc: 0x250b00a0  addiu       $t3, $t0, 0xA0
    ctx->pc = 0x1718dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x1718e0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1718e0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1718e4:
    // 0x1718e4: 0x0  nop
    ctx->pc = 0x1718e4u;
    // NOP
    // 0x1718e8: 0xc481198c  lwc1        $f1, 0x198C($a0)
    ctx->pc = 0x1718e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1718ec: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x1718ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1718f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1718f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1718f4: 0x0  nop
    ctx->pc = 0x1718f4u;
    // NOP
    // 0x1718f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1718F8u;
    {
        const bool branch_taken_0x1718f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1718f8) {
            ctx->pc = 0x171910u;
            goto label_171910;
        }
    }
    ctx->pc = 0x171900u;
    // 0x171900: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x171900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171904: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x171904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x171908: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x171908u;
    {
        const bool branch_taken_0x171908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171908u;
        // 0x17190c: 0xe5400004  swc1        $f0, 0x4($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171908) {
            ctx->pc = 0x17191Cu;
            goto label_17191c;
        }
    }
    ctx->pc = 0x171910u;
label_171910:
    // 0x171910: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x171910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171914: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x171914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x171918: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x171918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_17191c:
    // 0x17191c: 0x0  nop
    ctx->pc = 0x17191cu;
    // NOP
    // 0x171920: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x171920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171924: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x171924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171928: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x171928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17192c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x17192cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x171930: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x171930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171934: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x171934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171938: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x171938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17193c: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x17193cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x171940: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x171940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171944: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x171944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171948: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x171948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17194c: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x17194cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x171950: 0x94871132  lhu         $a3, 0x1132($a0)
    ctx->pc = 0x171950u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
    // 0x171954: 0x28e1002e  slti        $at, $a3, 0x2E
    ctx->pc = 0x171954u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x171958: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x171958u;
    {
        const bool branch_taken_0x171958 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x171958) {
            ctx->pc = 0x171984u;
            goto label_171984;
        }
    }
    ctx->pc = 0x171960u;
    // 0x171960: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x171960u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x171964: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x171964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x171968: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x171968u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x17196c: 0x8d670004  lw          $a3, 0x4($t3)
    ctx->pc = 0x17196cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x171970: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x171970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x171974: 0xad670004  sw          $a3, 0x4($t3)
    ctx->pc = 0x171974u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 7));
    // 0x171978: 0x8d670008  lw          $a3, 0x8($t3)
    ctx->pc = 0x171978u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x17197c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x17197cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x171980: 0xad670008  sw          $a3, 0x8($t3)
    ctx->pc = 0x171980u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 7));
label_171984:
    // 0x171984: 0x0  nop
    ctx->pc = 0x171984u;
    // NOP
    // 0x171988: 0x94881130  lhu         $t0, 0x1130($a0)
    ctx->pc = 0x171988u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4400)));
    // 0x17198c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x17198cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x171990: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x171990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x171994: 0x29870040  slti        $a3, $t4, 0x40
    ctx->pc = 0x171994u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x171998: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x171998u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x17199c: 0xad68000c  sw          $t0, 0xC($t3)
    ctx->pc = 0x17199cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 8));
    // 0x1719a0: 0x14e0ffd0  bnez        $a3, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1719A0u;
    {
        const bool branch_taken_0x1719a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1719A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719A0u;
        // 0x1719a4: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1719a0) {
            ctx->pc = 0x1718E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1718e4;
        }
    }
    ctx->pc = 0x1719A8u;
    // 0x1719a8: 0x24a50820  addiu       $a1, $a1, 0x820
    ctx->pc = 0x1719a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
    // 0x1719ac: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x1719acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x1719b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1719b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1719b4:
    // 0x1719b4: 0x0  nop
    ctx->pc = 0x1719b4u;
    // NOP
    // 0x1719b8: 0x94871138  lhu         $a3, 0x1138($a0)
    ctx->pc = 0x1719b8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4408)));
    // 0x1719bc: 0x67382b  sltu        $a3, $v1, $a3
    ctx->pc = 0x1719bcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1719c0: 0x14e0ffc3  bnez        $a3, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1719C0u;
    {
        const bool branch_taken_0x1719c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1719C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719C0u;
        // 0x1719c4: 0x854021  addu        $t0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1719c0) {
            ctx->pc = 0x1718D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1718d0;
        }
    }
    ctx->pc = 0x1719C8u;
    // 0x1719c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1719c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1719ccu;
}
