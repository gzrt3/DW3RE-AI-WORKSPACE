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

// Function: FUN_00148e90
// Address: 0x148e90 - 0x14900c
void FUN_00148e90_0x148e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148e90_0x148e90");
#endif

    switch (ctx->pc) {
        case 0x148fd0u: goto label_148fd0;
        case 0x148fe8u: goto label_148fe8;
        case 0x148ff8u: goto label_148ff8;
        default: break;
    }

    ctx->pc = 0x148e90u;

    // 0x148e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x148e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x148e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x148e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x148e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148ea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x148ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ea4: 0x10a0004c  beqz        $a1, . + 4 + (0x4C << 2)
    ctx->pc = 0x148EA4u;
    {
        const bool branch_taken_0x148ea4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x148EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EA4u;
        // 0x148ea8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ea4) {
            ctx->pc = 0x148FD8u;
            goto label_148fd8;
        }
    }
    ctx->pc = 0x148EACu;
    // 0x148eac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x148eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148eb0: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x148eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x148eb4: 0x90640006  lbu         $a0, 0x6($v1)
    ctx->pc = 0x148eb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x148eb8: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x148eb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x148ebc: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x148EBCu;
    {
        const bool branch_taken_0x148ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x148ebc) {
            ctx->pc = 0x148EF8u;
            goto label_148ef8;
        }
    }
    ctx->pc = 0x148EC4u;
    // 0x148ec4: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x148ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x148ec8: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x148ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x148ecc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x148ECCu;
    {
        const bool branch_taken_0x148ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x148ecc) {
            ctx->pc = 0x148EF8u;
            goto label_148ef8;
        }
    }
    ctx->pc = 0x148ED4u;
    // 0x148ed4: 0x92230039  lbu         $v1, 0x39($s1)
    ctx->pc = 0x148ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
    // 0x148ed8: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x148ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x148edc: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x148EDCu;
    {
        const bool branch_taken_0x148edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x148EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EDCu;
        // 0x148ee0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148edc) {
            ctx->pc = 0x149008u;
            goto label_149008;
        }
    }
    ctx->pc = 0x148EE4u;
    // 0x148ee4: 0xa220002a  sb          $zero, 0x2A($s1)
    ctx->pc = 0x148ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x148ee8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x148ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x148eec: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x148eecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x148ef0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x148EF0u;
    {
        const bool branch_taken_0x148ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EF0u;
        // 0x148ef4: 0xa2220038  sb          $v0, 0x38($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 56), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ef0) {
            ctx->pc = 0x149004u;
            goto label_149004;
        }
    }
    ctx->pc = 0x148EF8u;
label_148ef8:
    // 0x148ef8: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x148ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x148efc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x148EFCu;
    {
        const bool branch_taken_0x148efc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x148F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EFCu;
        // 0x148f00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148efc) {
            ctx->pc = 0x148F10u;
            goto label_148f10;
        }
    }
    ctx->pc = 0x148F04u;
    // 0x148f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148f08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x148F08u;
    {
        const bool branch_taken_0x148f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F08u;
        // 0x148f0c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f08) {
            ctx->pc = 0x148F28u;
            goto label_148f28;
        }
    }
    ctx->pc = 0x148F10u;
label_148f10:
    // 0x148f10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x148f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x148f14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x148f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x148f18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x148f18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148f1c: 0x0  nop
    ctx->pc = 0x148f1cu;
    // NOP
    // 0x148f20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x148f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x148f24: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x148f24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_148f28:
    // 0x148f28: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x148f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x148f2c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x148f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x148f30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x148f30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148f34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x148f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x148f38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x148f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x148f3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x148f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x148f40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148f44: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x148f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x148f48: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x148f48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x148f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148f50: 0x0  nop
    ctx->pc = 0x148f50u;
    // NOP
    // 0x148f54: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x148f54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x148f58: 0x0  nop
    ctx->pc = 0x148f58u;
    // NOP
    // 0x148f5c: 0x0  nop
    ctx->pc = 0x148f5cu;
    // NOP
    // 0x148f60: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x148f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148f64: 0x0  nop
    ctx->pc = 0x148f64u;
    // NOP
    // 0x148f68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x148F68u;
    {
        const bool branch_taken_0x148f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148f68) {
            ctx->pc = 0x148F74u;
            goto label_148f74;
        }
    }
    ctx->pc = 0x148F70u;
    // 0x148f70: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x148f70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148f74:
    // 0x148f74: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x148F74u;
    {
        const bool branch_taken_0x148f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F74u;
        // 0x148f78: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f74) {
            ctx->pc = 0x148F90u;
            goto label_148f90;
        }
    }
    ctx->pc = 0x148F7Cu;
    // 0x148f7c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x148f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x148f80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x148f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x148f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148f88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x148F88u;
    {
        const bool branch_taken_0x148f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F88u;
        // 0x148f8c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f88) {
            ctx->pc = 0x148FC0u;
            goto label_148fc0;
        }
    }
    ctx->pc = 0x148F90u;
label_148f90:
    // 0x148f90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x148f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x148f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148f98: 0x0  nop
    ctx->pc = 0x148f98u;
    // NOP
    // 0x148f9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x148f9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148fa0: 0x0  nop
    ctx->pc = 0x148fa0u;
    // NOP
    // 0x148fa4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x148FA4u;
    {
        const bool branch_taken_0x148fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148fa4) {
            ctx->pc = 0x148FC0u;
            goto label_148fc0;
        }
    }
    ctx->pc = 0x148FACu;
    // 0x148fac: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x148facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x148fb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x148fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x148fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148fb8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x148FB8u;
    {
        const bool branch_taken_0x148fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148FB8u;
        // 0x148fbc: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148fb8) {
            ctx->pc = 0x148FC0u;
            goto label_148fc0;
        }
    }
    ctx->pc = 0x148FC0u;
label_148fc0:
    // 0x148fc0: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x148fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x148fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x148fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fc8: 0xc0528fc  jal         func_14A3F0
    ctx->pc = 0x148FC8u;
    SET_GPR_U32(ctx, 31, 0x148FD0u);
    ctx->pc = 0x148FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148FC8u;
    // 0x148fcc: 0x26250028  addiu       $a1, $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3F0u, 0x148FC8u, 0x148FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FD0u;
label_148fd0:
    // 0x148fd0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x148FD0u;
    {
        const bool branch_taken_0x148fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148fd0) {
            ctx->pc = 0x149004u;
            goto label_149004;
        }
    }
    ctx->pc = 0x148FD8u;
label_148fd8:
    // 0x148fd8: 0x9226003a  lbu         $a2, 0x3A($s1)
    ctx->pc = 0x148fd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x148fdc: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x148fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x148fe0: 0xc052808  jal         func_14A020
    ctx->pc = 0x148FE0u;
    SET_GPR_U32(ctx, 31, 0x148FE8u);
    ctx->pc = 0x148FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148FE0u;
    // 0x148fe4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A020u, 0x148FE0u, 0x148FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FE8u;
label_148fe8:
    // 0x148fe8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x148FE8u;
    {
        const bool branch_taken_0x148fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148FE8u;
        // 0x148fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148fe8) {
            ctx->pc = 0x149000u;
            goto label_149000;
        }
    }
    ctx->pc = 0x148FF0u;
    // 0x148ff0: 0xc0528fc  jal         func_14A3F0
    ctx->pc = 0x148FF0u;
    SET_GPR_U32(ctx, 31, 0x148FF8u);
    ctx->pc = 0x148FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148FF0u;
    // 0x148ff4: 0x26250022  addiu       $a1, $s1, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3F0u, 0x148FF0u, 0x148FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FF8u;
label_148ff8:
    // 0x148ff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x148FF8u;
    {
        const bool branch_taken_0x148ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ff8) {
            ctx->pc = 0x149004u;
            goto label_149004;
        }
    }
    ctx->pc = 0x149000u;
label_149000:
    // 0x149000: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x149000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149004:
    // 0x149004: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x149004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_149008:
    // 0x149008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x149008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x14900cu;
}
