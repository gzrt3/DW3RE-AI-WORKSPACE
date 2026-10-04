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

// Function: FUN_001f9f30
// Address: 0x1f9f30 - 0x1fa078
void FUN_001f9f30_0x1f9f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f9f30_0x1f9f30");
#endif

    switch (ctx->pc) {
        case 0x1f9facu: goto label_1f9fac;
        default: break;
    }

    ctx->pc = 0x1f9f30u;

    // 0x1f9f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f9f34: 0x3c023951  lui         $v0, 0x3951
    ctx->pc = 0x1f9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14673 << 16));
    // 0x1f9f38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f9f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f9f3c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1f9f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x1f9f40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f9f44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f9f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f9f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f9f4c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1f9f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1f9f50: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1f9f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f54: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x1f9f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Du));
    // 0x1f9f58: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1f9f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9f5c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f9f60: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1f9f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1f9f64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f9f64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f9f68: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1f9f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1f9f6c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x1f9f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1f9f70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f9f70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f9f74: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1f9f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1f9f78: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F9F78u;
    {
        const bool branch_taken_0x1f9f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F78u;
        // 0x1f9f7c: 0x3c02479c  lui         $v0, 0x479C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18332 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f78) {
            ctx->pc = 0x1F9FA4u;
            goto label_1f9fa4;
        }
    }
    ctx->pc = 0x1F9F80u;
    // 0x1f9f80: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f9f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f9f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9f88: 0x0  nop
    ctx->pc = 0x1f9f88u;
    // NOP
    // 0x1f9f8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f9f8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9f90: 0x0  nop
    ctx->pc = 0x1f9f90u;
    // NOP
    // 0x1f9f94: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9F94u;
    {
        const bool branch_taken_0x1f9f94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9f94) {
            ctx->pc = 0x1F9FA4u;
            goto label_1f9fa4;
        }
    }
    ctx->pc = 0x1F9F9Cu;
    // 0x1f9f9c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1f9f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1f9fa0: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x1f9fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1f9fa4:
    // 0x1f9fa4: 0xc088d68  jal         func_2235A0
    ctx->pc = 0x1F9FA4u;
    SET_GPR_U32(ctx, 31, 0x1F9FACu);
    ctx->pc = 0x2235A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235A0u, 0x1F9FA4u, 0x1F9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9FACu;
label_1f9fac:
    // 0x1f9fac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9FACu;
    {
        const bool branch_taken_0x1f9fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9fac) {
            ctx->pc = 0x1F9FD4u;
            goto label_1f9fd4;
        }
    }
    ctx->pc = 0x1F9FB4u;
    // 0x1f9fb4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x1f9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x1f9fb8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1f9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1f9fbc: 0x24427b50  addiu       $v0, $v0, 0x7B50
    ctx->pc = 0x1f9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31568));
    // 0x1f9fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9fc4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1f9fc8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f9fcc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9FCCu;
    {
        const bool branch_taken_0x1f9fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FCCu;
        // 0x1f9fd0: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fcc) {
            ctx->pc = 0x1F9FF4u;
            goto label_1f9ff4;
        }
    }
    ctx->pc = 0x1F9FD4u;
label_1f9fd4:
    // 0x1f9fd4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x1f9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x1f9fd8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1f9fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1f9fdc: 0x24427c50  addiu       $v0, $v0, 0x7C50
    ctx->pc = 0x1f9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31824));
    // 0x1f9fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9fe4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1f9fe8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f9fec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f9fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9ff0: 0x0  nop
    ctx->pc = 0x1f9ff0u;
    // NOP
label_1f9ff4:
    // 0x1f9ff4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9ff8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1f9ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f9ffc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9FFCu;
    {
        const bool branch_taken_0x1f9ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FFCu;
        // 0x1fa000: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ffc) {
            ctx->pc = 0x1FA010u;
            goto label_1fa010;
        }
    }
    ctx->pc = 0x1FA004u;
    // 0x1fa004: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1fa004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1fa008: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FA008u;
    {
        const bool branch_taken_0x1fa008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fa008) {
            ctx->pc = 0x1FA074u;
            goto label_1fa074;
        }
    }
    ctx->pc = 0x1FA010u;
label_1fa010:
    // 0x1fa010: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1fa010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1fa014: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1fa014u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    // 0x1fa018: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FA018u;
    {
        const bool branch_taken_0x1fa018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA018u;
        // 0x1fa01c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa018) {
            ctx->pc = 0x1FA070u;
            goto label_1fa070;
        }
    }
    ctx->pc = 0x1FA020u;
    // 0x1fa020: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FA020u;
    {
        const bool branch_taken_0x1fa020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fa020) {
            ctx->pc = 0x1FA068u;
            goto label_1fa068;
        }
    }
    ctx->pc = 0x1FA028u;
    // 0x1fa028: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1fa028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fa02c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FA02Cu;
    {
        const bool branch_taken_0x1fa02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA02Cu;
        // 0x1fa030: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa02c) {
            ctx->pc = 0x1FA060u;
            goto label_1fa060;
        }
    }
    ctx->pc = 0x1FA034u;
    // 0x1fa034: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA034u;
    {
        const bool branch_taken_0x1fa034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fa034) {
            ctx->pc = 0x1FA058u;
            goto label_1fa058;
        }
    }
    ctx->pc = 0x1FA03Cu;
    // 0x1fa03c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1fa03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fa040: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA040u;
    {
        const bool branch_taken_0x1fa040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fa040) {
            ctx->pc = 0x1FA050u;
            goto label_1fa050;
        }
    }
    ctx->pc = 0x1FA048u;
    // 0x1fa048: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FA048u;
    {
        const bool branch_taken_0x1fa048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA048u;
        // 0x1fa04c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa048) {
            ctx->pc = 0x1FA078u;
            return;
        }
    }
    ctx->pc = 0x1FA050u;
label_1fa050:
    // 0x1fa050: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA050u;
    {
        const bool branch_taken_0x1fa050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA050u;
        // 0x1fa054: 0x64020013  daddiu      $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa050) {
            ctx->pc = 0x1FA074u;
            goto label_1fa074;
        }
    }
    ctx->pc = 0x1FA058u;
label_1fa058:
    // 0x1fa058: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA058u;
    {
        const bool branch_taken_0x1fa058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA058u;
        // 0x1fa05c: 0x64020014  daddiu      $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa058) {
            ctx->pc = 0x1FA074u;
            goto label_1fa074;
        }
    }
    ctx->pc = 0x1FA060u;
label_1fa060:
    // 0x1fa060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA060u;
    {
        const bool branch_taken_0x1fa060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA060u;
        // 0x1fa064: 0x64020015  daddiu      $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)21);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa060) {
            ctx->pc = 0x1FA074u;
            goto label_1fa074;
        }
    }
    ctx->pc = 0x1FA068u;
label_1fa068:
    // 0x1fa068: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA068u;
    {
        const bool branch_taken_0x1fa068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA068u;
        // 0x1fa06c: 0x64020016  daddiu      $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa068) {
            ctx->pc = 0x1FA074u;
            goto label_1fa074;
        }
    }
    ctx->pc = 0x1FA070u;
label_1fa070:
    // 0x1fa070: 0x64020017  daddiu      $v0, $zero, 0x17
    ctx->pc = 0x1fa070u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)23);
label_1fa074:
    // 0x1fa074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fa074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1fa078u;
}
