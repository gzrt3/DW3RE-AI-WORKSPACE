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

// Function: entry_001ce6f4
// Address: 0x1ce6f4 - 0x1ce810
void entry_001ce6f4_0x1ce6f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce6f4_0x1ce6f4");
#endif

    switch (ctx->pc) {
        case 0x1ce700u: goto label_1ce700;
        case 0x1ce70cu: goto label_1ce70c;
        case 0x1ce718u: goto label_1ce718;
        default: break;
    }

    ctx->pc = 0x1ce6f4u;

    // 0x1ce6f4: 0x26060330  addiu       $a2, $s0, 0x330
    ctx->pc = 0x1ce6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x1ce6f8: 0xc066e02  jal         func_19B808
    ctx->pc = 0x1CE6F8u;
    SET_GPR_U32(ctx, 31, 0x1CE700u);
    ctx->pc = 0x1CE6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6F8u;
    // 0x1ce6fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1CE6F8u, 0x1CE700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE700u;
label_1ce700:
    // 0x1ce700: 0x920402e4  lbu         $a0, 0x2E4($s0)
    ctx->pc = 0x1ce700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x1ce704: 0xc06468c  jal         func_191A30
    ctx->pc = 0x1CE704u;
    SET_GPR_U32(ctx, 31, 0x1CE70Cu);
    ctx->pc = 0x1CE708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE704u;
    // 0x1ce708: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A30u, 0x1CE704u, 0x1CE70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE70Cu;
label_1ce70c:
    // 0x1ce70c: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1ce70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1ce710: 0xc0646f8  jal         func_191BE0
    ctx->pc = 0x1CE710u;
    SET_GPR_U32(ctx, 31, 0x1CE718u);
    ctx->pc = 0x1CE714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE710u;
    // 0x1ce714: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191BE0u, 0x1CE710u, 0x1CE718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE718u;
label_1ce718:
    // 0x1ce718: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1ce718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x1ce71c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ce71cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce720: 0x0  nop
    ctx->pc = 0x1ce720u;
    // NOP
    // 0x1ce724: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ce724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce728: 0x0  nop
    ctx->pc = 0x1ce728u;
    // NOP
    // 0x1ce72c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1CE72Cu;
    {
        const bool branch_taken_0x1ce72c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce72c) {
            ctx->pc = 0x1CE7A0u;
            goto label_1ce7a0;
        }
    }
    ctx->pc = 0x1CE734u;
    // 0x1ce734: 0xc6030300  lwc1        $f3, 0x300($s0)
    ctx->pc = 0x1ce734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ce738: 0x3c033586  lui         $v1, 0x3586
    ctx->pc = 0x1ce738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13702 << 16));
    // 0x1ce73c: 0x346437bd  ori         $a0, $v1, 0x37BD
    ctx->pc = 0x1ce73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14269);
    // 0x1ce740: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1ce740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1ce744: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1ce744u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ce748: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ce748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce74c: 0x0  nop
    ctx->pc = 0x1ce74cu;
    // NOP
    // 0x1ce750: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1ce750u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1ce754: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ce754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1ce758: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ce758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ce75c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ce75cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce760: 0x0  nop
    ctx->pc = 0x1ce760u;
    // NOP
    // 0x1ce764: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE764u;
    {
        const bool branch_taken_0x1ce764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce764) {
            ctx->pc = 0x1CE77Cu;
            goto label_1ce77c;
        }
    }
    ctx->pc = 0x1CE76Cu;
    // 0x1ce76c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce76cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ce770: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1ce770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ce774: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE774u;
    {
        const bool branch_taken_0x1ce774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE774u;
        // 0x1ce778: 0xa20402e3  sb          $a0, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce774) {
            ctx->pc = 0x1CE798u;
            goto label_1ce798;
        }
    }
    ctx->pc = 0x1CE77Cu;
label_1ce77c:
    // 0x1ce77c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ce77cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ce780: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ce780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ce784: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce784u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ce788: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1ce788u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ce78c: 0x0  nop
    ctx->pc = 0x1ce78cu;
    // NOP
    // 0x1ce790: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ce790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ce794: 0xa20402e3  sb          $a0, 0x2E3($s0)
    ctx->pc = 0x1ce794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 4));
label_1ce798:
    // 0x1ce798: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1CE798u;
    {
        const bool branch_taken_0x1ce798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE798u;
        // 0x1ce79c: 0x960302e6  lhu         $v1, 0x2E6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce798) {
            ctx->pc = 0x1CE7F0u;
            goto label_1ce7f0;
        }
    }
    ctx->pc = 0x1CE7A0u;
label_1ce7a0:
    // 0x1ce7a0: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x1ce7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce7a4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1ce7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1ce7a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce7a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce7ac: 0x0  nop
    ctx->pc = 0x1ce7acu;
    // NOP
    // 0x1ce7b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ce7b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce7b4: 0x0  nop
    ctx->pc = 0x1ce7b4u;
    // NOP
    // 0x1ce7b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE7B8u;
    {
        const bool branch_taken_0x1ce7b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce7b8) {
            ctx->pc = 0x1CE7D0u;
            goto label_1ce7d0;
        }
    }
    ctx->pc = 0x1CE7C0u;
    // 0x1ce7c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce7c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ce7c4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1ce7c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ce7c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE7C8u;
    {
        const bool branch_taken_0x1ce7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7C8u;
        // 0x1ce7cc: 0xa20402e3  sb          $a0, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7c8) {
            ctx->pc = 0x1CE7ECu;
            goto label_1ce7ec;
        }
    }
    ctx->pc = 0x1CE7D0u;
label_1ce7d0:
    // 0x1ce7d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ce7d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ce7d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ce7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ce7d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce7d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ce7dc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1ce7dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ce7e0: 0x0  nop
    ctx->pc = 0x1ce7e0u;
    // NOP
    // 0x1ce7e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ce7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ce7e8: 0xa20402e3  sb          $a0, 0x2E3($s0)
    ctx->pc = 0x1ce7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 4));
label_1ce7ec:
    // 0x1ce7ec: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x1ce7ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
label_1ce7f0:
    // 0x1ce7f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ce7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ce7f4: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x1ce7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ce7f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce7fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ce7fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce800: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE800u;
        // 0x1ce804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE808u;
    // 0x1ce808: 0x0  nop
    ctx->pc = 0x1ce808u;
    // NOP
    // 0x1ce80c: 0x0  nop
    ctx->pc = 0x1ce80cu;
    // NOP
    ctx->pc = 0x1ce810u;
}
