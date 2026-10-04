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

// Function: FUN_00131dc0
// Address: 0x131dc0 - 0x131f2c
void FUN_00131dc0_0x131dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131dc0_0x131dc0");
#endif

    switch (ctx->pc) {
        case 0x131e8cu: goto label_131e8c;
        case 0x131ed0u: goto label_131ed0;
        case 0x131f28u: goto label_131f28;
        default: break;
    }

    ctx->pc = 0x131dc0u;

    // 0x131dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131dc4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x131dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x131dc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x131dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131dd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131dd4: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x131dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x131dd8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x131dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x131ddc: 0x14600052  bnez        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x131DDCu;
    {
        const bool branch_taken_0x131ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x131DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131DDCu;
        // 0x131de0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ddc) {
            ctx->pc = 0x131F28u;
            goto label_131f28;
        }
    }
    ctx->pc = 0x131DE4u;
    // 0x131de4: 0x86270002  lh          $a3, 0x2($s1)
    ctx->pc = 0x131de4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x131de8: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x131de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x131dec: 0x86240004  lh          $a0, 0x4($s1)
    ctx->pc = 0x131decu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x131df0: 0x24a59f20  addiu       $a1, $a1, -0x60E0
    ctx->pc = 0x131df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942496));
    // 0x131df4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x131df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x131df8: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x131df8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x131dfc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x131dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x131e00: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x131e00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x131e04: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x131e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x131e08: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x131E08u;
    {
        const bool branch_taken_0x131e08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x131E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E08u;
        // 0x131e0c: 0x24b000a4  addiu       $s0, $a1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e08) {
            ctx->pc = 0x131E38u;
            goto label_131e38;
        }
    }
    ctx->pc = 0x131E10u;
    // 0x131e10: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x131e10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x131e14: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x131e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x131e18: 0x14830043  bne         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x131E18u;
    {
        const bool branch_taken_0x131e18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x131e18) {
            ctx->pc = 0x131F28u;
            goto label_131f28;
        }
    }
    ctx->pc = 0x131E20u;
    // 0x131e20: 0x8222000a  lb          $v0, 0xA($s1)
    ctx->pc = 0x131e20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x131e24: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x131e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x131e28: 0x8222000a  lb          $v0, 0xA($s1)
    ctx->pc = 0x131e28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x131e2c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x131e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x131e30: 0x82220008  lb          $v0, 0x8($s1)
    ctx->pc = 0x131e30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x131e34: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x131e34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_131e38:
    // 0x131e38: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x131e38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x131e3c: 0x27838108  addiu       $v1, $gp, -0x7EF8
    ctx->pc = 0x131e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934792));
    // 0x131e40: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x131e40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x131e44: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x131e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x131e48: 0x82240004  lb          $a0, 0x4($s1)
    ctx->pc = 0x131e48u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x131e4c: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x131e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x131e50: 0x82240002  lb          $a0, 0x2($s1)
    ctx->pc = 0x131e50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x131e54: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x131e54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x131e58: 0x86240004  lh          $a0, 0x4($s1)
    ctx->pc = 0x131e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x131e5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x131e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x131e60: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x131e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131e64: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x131e64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x131e68: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x131e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x131e6c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x131E6Cu;
    {
        const bool branch_taken_0x131e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x131E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E6Cu;
        // 0x131e70: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e6c) {
            ctx->pc = 0x131EC8u;
            goto label_131ec8;
        }
    }
    ctx->pc = 0x131E74u;
    // 0x131e74: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131E74u;
    {
        const bool branch_taken_0x131e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131e74) {
            ctx->pc = 0x131E84u;
            goto label_131e84;
        }
    }
    ctx->pc = 0x131E7Cu;
    // 0x131e7c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x131E7Cu;
    {
        const bool branch_taken_0x131e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E7Cu;
        // 0x131e80: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e7c) {
            ctx->pc = 0x131F0Cu;
            goto label_131f0c;
        }
    }
    ctx->pc = 0x131E84u;
label_131e84:
    // 0x131e84: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x131E84u;
    SET_GPR_U32(ctx, 31, 0x131E8Cu);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x131E84u, 0x131E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131E8Cu;
label_131e8c:
    // 0x131e8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x131e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x131e90: 0x0  nop
    ctx->pc = 0x131e90u;
    // NOP
    // 0x131e94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x131e94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x131e98: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x131e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x131e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131ea0: 0x0  nop
    ctx->pc = 0x131ea0u;
    // NOP
    // 0x131ea4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x131ea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131ea8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x131ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x131eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131eb0: 0x0  nop
    ctx->pc = 0x131eb0u;
    // NOP
    // 0x131eb4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x131eb4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x131eb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x131eb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x131ebc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x131ebcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x131ec0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x131EC0u;
    {
        const bool branch_taken_0x131ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131EC0u;
        // 0x131ec4: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ec0) {
            ctx->pc = 0x131F0Cu;
            goto label_131f0c;
        }
    }
    ctx->pc = 0x131EC8u;
label_131ec8:
    // 0x131ec8: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x131EC8u;
    SET_GPR_U32(ctx, 31, 0x131ED0u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x131EC8u, 0x131ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131ED0u;
label_131ed0:
    // 0x131ed0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x131ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x131ed4: 0x0  nop
    ctx->pc = 0x131ed4u;
    // NOP
    // 0x131ed8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x131ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x131edc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x131edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x131ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131ee4: 0x0  nop
    ctx->pc = 0x131ee4u;
    // NOP
    // 0x131ee8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x131ee8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131eec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x131eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x131ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131ef4: 0x0  nop
    ctx->pc = 0x131ef4u;
    // NOP
    // 0x131ef8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x131ef8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x131efc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x131efcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x131f00: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x131f00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x131f04: 0x0  nop
    ctx->pc = 0x131f04u;
    // NOP
    // 0x131f08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x131f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_131f0c:
    // 0x131f0c: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x131f0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x131f10: 0x92090001  lbu         $t1, 0x1($s0)
    ctx->pc = 0x131f10u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x131f14: 0x86250006  lh          $a1, 0x6($s1)
    ctx->pc = 0x131f14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x131f18: 0x9226000a  lbu         $a2, 0xA($s1)
    ctx->pc = 0x131f18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x131f1c: 0x92270008  lbu         $a3, 0x8($s1)
    ctx->pc = 0x131f1cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x131f20: 0xc05b024  jal         func_16C090
    ctx->pc = 0x131F20u;
    SET_GPR_U32(ctx, 31, 0x131F28u);
    ctx->pc = 0x131F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F20u;
    // 0x131f24: 0x2448003c  addiu       $t0, $v0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C090u, 0x131F20u, 0x131F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F28u;
label_131f28:
    // 0x131f28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x131f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x131f2cu;
}
