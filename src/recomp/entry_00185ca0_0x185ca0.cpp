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

// Function: entry_00185ca0
// Address: 0x185ca0 - 0x185e88
void entry_00185ca0_0x185ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185ca0_0x185ca0");
#endif

    switch (ctx->pc) {
        case 0x185d80u: goto label_185d80;
        case 0x185e08u: goto label_185e08;
        default: break;
    }

    ctx->pc = 0x185ca0u;

    // 0x185ca0: 0x8224023d  lb          $a0, 0x23D($s1)
    ctx->pc = 0x185ca0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x185ca4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x185ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185ca8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x185cac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185cb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x185cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185cb8: 0x308200cb  andi        $v0, $a0, 0xCB
    ctx->pc = 0x185cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)203);
    // 0x185cbc: 0xa222023d  sb          $v0, 0x23D($s1)
    ctx->pc = 0x185cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    // 0x185cc0: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x185cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185cc4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x185cc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x185cc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185ccc: 0x0  nop
    ctx->pc = 0x185cccu;
    // NOP
    // 0x185cd0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185CD0u;
    {
        const bool branch_taken_0x185cd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CD0u;
        // 0x185cd4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cd0) {
            ctx->pc = 0x185CECu;
            goto label_185cec;
        }
    }
    ctx->pc = 0x185CD8u;
    // 0x185cd8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x185cdc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185ce4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x185CE4u;
    {
        const bool branch_taken_0x185ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CE4u;
        // 0x185ce8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ce4) {
            ctx->pc = 0x185D1Cu;
            goto label_185d1c;
        }
    }
    ctx->pc = 0x185CECu;
label_185cec:
    // 0x185cec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185cf4: 0x0  nop
    ctx->pc = 0x185cf4u;
    // NOP
    // 0x185cf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185cfc: 0x0  nop
    ctx->pc = 0x185cfcu;
    // NOP
    // 0x185d00: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x185D00u;
    {
        const bool branch_taken_0x185d00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185d00) {
            ctx->pc = 0x185D1Cu;
            goto label_185d1c;
        }
    }
    ctx->pc = 0x185D08u;
    // 0x185d08: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x185d0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185d10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185d14: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x185D14u;
    {
        const bool branch_taken_0x185d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D14u;
        // 0x185d18: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d14) {
            ctx->pc = 0x185D1Cu;
            goto label_185d1c;
        }
    }
    ctx->pc = 0x185D1Cu;
label_185d1c:
    // 0x185d1c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x185d1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x185d20: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x185d20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x185d24: 0x4a000138  vcallms     0x20
    ctx->pc = 0x185d24u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
    // 0x185d28: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x185d28u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x185d2c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x185d2cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185d30: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x185d30u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x185d34: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x185d34u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x185d38: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x185d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x185d3c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x185d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x185d40: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x185d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x185d44: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x185d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x185d48: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x185d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d4c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x185d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x185d50: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x185d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x185d54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x185d54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185d58: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x185d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x185d5c: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x185d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d60: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x185d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x185d64: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x185d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x185d68: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x185d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185d70: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x185d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x185d74: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x185d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185d78: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x185D78u;
    SET_GPR_U32(ctx, 31, 0x185D80u);
    ctx->pc = 0x185D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D78u;
    // 0x185d7c: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x185D78u, 0x185D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D80u;
label_185d80:
    // 0x185d80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185D80u;
    {
        const bool branch_taken_0x185d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185d80) {
            ctx->pc = 0x185D90u;
            goto label_185d90;
        }
    }
    ctx->pc = 0x185D88u;
    // 0x185d88: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x185D88u;
    {
        const bool branch_taken_0x185d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D88u;
        // 0x185d8c: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d88) {
            ctx->pc = 0x185E0Cu;
            goto label_185e0c;
        }
    }
    ctx->pc = 0x185D90u;
label_185d90:
    // 0x185d90: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x185d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185d94: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x185d98: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x185d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185da4: 0x0  nop
    ctx->pc = 0x185da4u;
    // NOP
    // 0x185da8: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x185da8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x185dac: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185dacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185db0: 0x0  nop
    ctx->pc = 0x185db0u;
    // NOP
    // 0x185db4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185DB4u;
    {
        const bool branch_taken_0x185db4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DB4u;
        // 0x185db8: 0xe7ac007c  swc1        $f12, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x185db4) {
            ctx->pc = 0x185DD0u;
            goto label_185dd0;
        }
    }
    ctx->pc = 0x185DBCu;
    // 0x185dbc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x185dc0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185dc8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x185DC8u;
    {
        const bool branch_taken_0x185dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DC8u;
        // 0x185dcc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185dc8) {
            ctx->pc = 0x185E00u;
            goto label_185e00;
        }
    }
    ctx->pc = 0x185DD0u;
label_185dd0:
    // 0x185dd0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x185dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x185dd4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185ddc: 0x0  nop
    ctx->pc = 0x185ddcu;
    // NOP
    // 0x185de0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185de0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185de4: 0x0  nop
    ctx->pc = 0x185de4u;
    // NOP
    // 0x185de8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x185DE8u;
    {
        const bool branch_taken_0x185de8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DE8u;
        // 0x185dec: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185de8) {
            ctx->pc = 0x185E00u;
            goto label_185e00;
        }
    }
    ctx->pc = 0x185DF0u;
    // 0x185df0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185df4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185df8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x185DF8u;
    {
        const bool branch_taken_0x185df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DF8u;
        // 0x185dfc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185df8) {
            ctx->pc = 0x185E00u;
            goto label_185e00;
        }
    }
    ctx->pc = 0x185E00u;
label_185e00:
    // 0x185e00: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x185E00u;
    SET_GPR_U32(ctx, 31, 0x185E08u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x185E00u, 0x185E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E08u;
label_185e08:
    // 0x185e08: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x185e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_185e0c:
    // 0x185e0c: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x185e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185e10: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x185e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x185e14: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x185e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x185e18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185e1c: 0x0  nop
    ctx->pc = 0x185e1cu;
    // NOP
    // 0x185e20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185e24: 0x0  nop
    ctx->pc = 0x185e24u;
    // NOP
    // 0x185e28: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185E28u;
    {
        const bool branch_taken_0x185e28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185e28) {
            ctx->pc = 0x185E44u;
            goto label_185e44;
        }
    }
    ctx->pc = 0x185E30u;
    // 0x185e30: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x185e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x185e34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x185e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185e38: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x185e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x185e3c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x185E3Cu;
    {
        const bool branch_taken_0x185e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185e3c) {
            ctx->pc = 0x185E7Cu;
            goto label_185e7c;
        }
    }
    ctx->pc = 0x185E44u;
label_185e44:
    // 0x185e44: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x185e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185e48: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x185e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185e4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x185e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x185e50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185e50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x185e54: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x185e54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x185e58: 0x0  nop
    ctx->pc = 0x185e58u;
    // NOP
    // 0x185e5c: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x185e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x185e60: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x185e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185e64: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x185e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185e68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x185e68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x185e6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185e6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x185e70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x185e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x185e74: 0x100002a3  b           . + 4 + (0x2A3 << 2)
    ctx->pc = 0x185E74u;
    {
        const bool branch_taken_0x185e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E74u;
        // 0x185e78: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e74) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x185E7Cu;
label_185e7c:
    // 0x185e7c: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x185e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x185e80: 0x100002a0  b           . + 4 + (0x2A0 << 2)
    ctx->pc = 0x185E80u;
    {
        const bool branch_taken_0x185e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E80u;
        // 0x185e84: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e80) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x185E88u;
}
