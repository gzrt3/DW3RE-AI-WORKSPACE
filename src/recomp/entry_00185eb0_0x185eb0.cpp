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

// Function: entry_00185eb0
// Address: 0x185eb0 - 0x18611c
void entry_00185eb0_0x185eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185eb0_0x185eb0");
#endif

    switch (ctx->pc) {
        case 0x185f44u: goto label_185f44;
        case 0x185facu: goto label_185fac;
        case 0x186034u: goto label_186034;
        case 0x1860c0u: goto label_1860c0;
        default: break;
    }

    ctx->pc = 0x185eb0u;

    // 0x185eb0: 0x92230246  lbu         $v1, 0x246($s1)
    ctx->pc = 0x185eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 582)));
    // 0x185eb4: 0x28630007  slti        $v1, $v1, 0x7
    ctx->pc = 0x185eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x185eb8: 0x14600098  bnez        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x185EB8u;
    {
        const bool branch_taken_0x185eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x185EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EB8u;
        // 0x185ebc: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185eb8) {
            ctx->pc = 0x18611Cu;
            return;
        }
    }
    ctx->pc = 0x185EC0u;
    // 0x185ec0: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x185ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x185ec4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x185ec8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x185ec8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x185ecc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185ed0: 0x306300eb  andi        $v1, $v1, 0xEB
    ctx->pc = 0x185ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)235);
    // 0x185ed4: 0xa223023d  sb          $v1, 0x23D($s1)
    ctx->pc = 0x185ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
    // 0x185ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185edc: 0xc6220264  lwc1        $f2, 0x264($s1)
    ctx->pc = 0x185edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185ee0: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x185ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185ee4: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x185ee4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x185ee8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185ee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185eec: 0x0  nop
    ctx->pc = 0x185eecu;
    // NOP
    // 0x185ef0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185EF0u;
    {
        const bool branch_taken_0x185ef0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EF0u;
        // 0x185ef4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ef0) {
            ctx->pc = 0x185F0Cu;
            goto label_185f0c;
        }
    }
    ctx->pc = 0x185EF8u;
    // 0x185ef8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x185efc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185f04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x185F04u;
    {
        const bool branch_taken_0x185f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F04u;
        // 0x185f08: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f04) {
            ctx->pc = 0x185F3Cu;
            goto label_185f3c;
        }
    }
    ctx->pc = 0x185F0Cu;
label_185f0c:
    // 0x185f0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185f14: 0x0  nop
    ctx->pc = 0x185f14u;
    // NOP
    // 0x185f18: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185f1c: 0x0  nop
    ctx->pc = 0x185f1cu;
    // NOP
    // 0x185f20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x185F20u;
    {
        const bool branch_taken_0x185f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185f20) {
            ctx->pc = 0x185F3Cu;
            goto label_185f3c;
        }
    }
    ctx->pc = 0x185F28u;
    // 0x185f28: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x185f2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185f34: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x185F34u;
    {
        const bool branch_taken_0x185f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F34u;
        // 0x185f38: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f34) {
            ctx->pc = 0x185F3Cu;
            goto label_185f3c;
        }
    }
    ctx->pc = 0x185F3Cu;
label_185f3c:
    // 0x185f3c: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x185F3Cu;
    SET_GPR_U32(ctx, 31, 0x185F44u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x185F3Cu, 0x185F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F44u;
label_185f44:
    // 0x185f44: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x185f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x185f48: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x185f48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x185f4c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x185f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x185f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185f54: 0x0  nop
    ctx->pc = 0x185f54u;
    // NOP
    // 0x185f58: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x185f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185f5c: 0x0  nop
    ctx->pc = 0x185f5cu;
    // NOP
    // 0x185f60: 0x45000055  bc1f        . + 4 + (0x55 << 2)
    ctx->pc = 0x185F60u;
    {
        const bool branch_taken_0x185f60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F60u;
        // 0x185f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f60) {
            ctx->pc = 0x1860B8u;
            goto label_1860b8;
        }
    }
    ctx->pc = 0x185F68u;
    // 0x185f68: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x185f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x185f6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x185f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185f70: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x185f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x185f74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185F74u;
    {
        const bool branch_taken_0x185f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F74u;
        // 0x185f78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f74) {
            ctx->pc = 0x185F84u;
            goto label_185f84;
        }
    }
    ctx->pc = 0x185F7Cu;
    // 0x185f7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x185F7Cu;
    {
        const bool branch_taken_0x185f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F7Cu;
        // 0x185f80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f7c) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185F84u;
label_185f84:
    // 0x185f84: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x185f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x185f88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x185F88u;
    {
        const bool branch_taken_0x185f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f88) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185F90u;
    // 0x185f90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x185f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185f94:
    // 0x185f94: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x185F94u;
    {
        const bool branch_taken_0x185f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f94) {
            ctx->pc = 0x1860B4u;
            goto label_1860b4;
        }
    }
    ctx->pc = 0x185F9Cu;
    // 0x185f9c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x185f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x185fa0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x185fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x185fa4: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x185FA4u;
    SET_GPR_U32(ctx, 31, 0x185FACu);
    ctx->pc = 0x185FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FA4u;
    // 0x185fa8: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x185FA4u, 0x185FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FACu;
label_185fac:
    // 0x185fac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185FACu;
    {
        const bool branch_taken_0x185fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185fac) {
            ctx->pc = 0x185FBCu;
            goto label_185fbc;
        }
    }
    ctx->pc = 0x185FB4u;
    // 0x185fb4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x185FB4u;
    {
        const bool branch_taken_0x185fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FB4u;
        // 0x185fb8: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fb4) {
            ctx->pc = 0x186038u;
            goto label_186038;
        }
    }
    ctx->pc = 0x185FBCu;
label_185fbc:
    // 0x185fbc: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x185fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185fc0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x185fc4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x185fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185fc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185fd0: 0x0  nop
    ctx->pc = 0x185fd0u;
    // NOP
    // 0x185fd4: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x185fd4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x185fd8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185fdc: 0x0  nop
    ctx->pc = 0x185fdcu;
    // NOP
    // 0x185fe0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185FE0u;
    {
        const bool branch_taken_0x185fe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FE0u;
        // 0x185fe4: 0xe7ac0080  swc1        $f12, 0x80($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fe0) {
            ctx->pc = 0x185FFCu;
            goto label_185ffc;
        }
    }
    ctx->pc = 0x185FE8u;
    // 0x185fe8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x185fec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185ff4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x185FF4u;
    {
        const bool branch_taken_0x185ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FF4u;
        // 0x185ff8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ff4) {
            ctx->pc = 0x18602Cu;
            goto label_18602c;
        }
    }
    ctx->pc = 0x185FFCu;
label_185ffc:
    // 0x185ffc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x185ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x186000: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186008: 0x0  nop
    ctx->pc = 0x186008u;
    // NOP
    // 0x18600c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18600cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186010: 0x0  nop
    ctx->pc = 0x186010u;
    // NOP
    // 0x186014: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x186014u;
    {
        const bool branch_taken_0x186014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x186018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186014u;
        // 0x186018: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186014) {
            ctx->pc = 0x18602Cu;
            goto label_18602c;
        }
    }
    ctx->pc = 0x18601Cu;
    // 0x18601c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18601cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186024: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x186024u;
    {
        const bool branch_taken_0x186024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186024u;
        // 0x186028: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186024) {
            ctx->pc = 0x18602Cu;
            goto label_18602c;
        }
    }
    ctx->pc = 0x18602Cu;
label_18602c:
    // 0x18602c: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x18602Cu;
    SET_GPR_U32(ctx, 31, 0x186034u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x18602Cu, 0x186034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186034u;
label_186034:
    // 0x186034: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x186034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_186038:
    // 0x186038: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x186038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18603c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x18603cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x186040: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x186044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186048: 0x0  nop
    ctx->pc = 0x186048u;
    // NOP
    // 0x18604c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18604cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186050: 0x0  nop
    ctx->pc = 0x186050u;
    // NOP
    // 0x186054: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x186054u;
    {
        const bool branch_taken_0x186054 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186054) {
            ctx->pc = 0x186070u;
            goto label_186070;
        }
    }
    ctx->pc = 0x18605Cu;
    // 0x18605c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x18605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x186060: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186064: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x186064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x186068: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x186068u;
    {
        const bool branch_taken_0x186068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186068) {
            ctx->pc = 0x1860A8u;
            goto label_1860a8;
        }
    }
    ctx->pc = 0x186070u;
label_186070:
    // 0x186070: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x186070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186074: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x186074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186078: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18607c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18607cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186080: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x186084: 0x0  nop
    ctx->pc = 0x186084u;
    // NOP
    // 0x186088: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x186088u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x18608c: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x18608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186090: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x186090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186094: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x186098: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186098u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18609c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18609cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1860a0: 0x10000218  b           . + 4 + (0x218 << 2)
    ctx->pc = 0x1860A0u;
    {
        const bool branch_taken_0x1860a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860A0u;
        // 0x1860a4: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860a0) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x1860A8u;
label_1860a8:
    // 0x1860a8: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1860a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x1860ac: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x1860ACu;
    {
        const bool branch_taken_0x1860ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860ACu;
        // 0x1860b0: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860ac) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x1860B4u;
label_1860b4:
    // 0x1860b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1860b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1860b8:
    // 0x1860b8: 0xc06237c  jal         func_188DF0
    ctx->pc = 0x1860B8u;
    SET_GPR_U32(ctx, 31, 0x1860C0u);
    ctx->pc = 0x188DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188DF0u, 0x1860B8u, 0x1860C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860C0u;
label_1860c0:
    // 0x1860c0: 0x14400210  bnez        $v0, . + 4 + (0x210 << 2)
    ctx->pc = 0x1860C0u;
    {
        const bool branch_taken_0x1860c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1860c0) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x1860C8u;
    // 0x1860c8: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x1860c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1860cc: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x1860ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1860d0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1860D0u;
    {
        const bool branch_taken_0x1860d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1860D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860D0u;
        // 0x1860d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860d0) {
            ctx->pc = 0x1860DCu;
            goto label_1860dc;
        }
    }
    ctx->pc = 0x1860D8u;
    // 0x1860d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1860d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1860dc:
    // 0x1860dc: 0x14600209  bnez        $v1, . + 4 + (0x209 << 2)
    ctx->pc = 0x1860DCu;
    {
        const bool branch_taken_0x1860dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1860dc) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x1860E4u;
    // 0x1860e4: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x1860e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1860e8: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x1860e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1860ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1860ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1860f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1860f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1860f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1860f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1860f8: 0x0  nop
    ctx->pc = 0x1860f8u;
    // NOP
    // 0x1860fc: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x1860fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x186100: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x186100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186104: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x186104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186108: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18610c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18610cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186110: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x186114: 0x100001fb  b           . + 4 + (0x1FB << 2)
    ctx->pc = 0x186114u;
    {
        const bool branch_taken_0x186114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186114u;
        // 0x186118: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186114) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x18611Cu;
}
