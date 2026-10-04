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

// Function: FUN_0012f130
// Address: 0x12f130 - 0x12f234
void FUN_0012f130_0x12f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012f130_0x12f130");
#endif

    switch (ctx->pc) {
        case 0x12f15cu: goto label_12f15c;
        case 0x12f17cu: goto label_12f17c;
        default: break;
    }

    ctx->pc = 0x12f130u;

    // 0x12f130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f134: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x12f134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x12f138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f13c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f140: 0x9025a3ea  lbu         $a1, -0x5C16($at)
    ctx->pc = 0x12f140u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x12f144: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F144u;
    {
        const bool branch_taken_0x12f144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f144) {
            ctx->pc = 0x12F154u;
            goto label_12f154;
        }
    }
    ctx->pc = 0x12F14Cu;
    // 0x12f14c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F14Cu;
    {
        const bool branch_taken_0x12f14c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f14c) {
            ctx->pc = 0x12F164u;
            goto label_12f164;
        }
    }
    ctx->pc = 0x12F154u;
label_12f154:
    // 0x12f154: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12F154u;
    SET_GPR_U32(ctx, 31, 0x12F15Cu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12F154u, 0x12F15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F15Cu;
label_12f15c:
    // 0x12f15c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x12F15Cu;
    {
        const bool branch_taken_0x12f15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F15Cu;
        // 0x12f160: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f15c) {
            ctx->pc = 0x12F234u;
            return;
        }
    }
    ctx->pc = 0x12F164u;
label_12f164:
    // 0x12f164: 0x948302e6  lhu         $v1, 0x2E6($a0)
    ctx->pc = 0x12f164u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x12f168: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x12f168u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12f16c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F16Cu;
    {
        const bool branch_taken_0x12f16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f16c) {
            ctx->pc = 0x12F184u;
            goto label_12f184;
        }
    }
    ctx->pc = 0x12F174u;
    // 0x12f174: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12F174u;
    SET_GPR_U32(ctx, 31, 0x12F17Cu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12F174u, 0x12F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F17Cu;
label_12f17c:
    // 0x12f17c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12F17Cu;
    {
        const bool branch_taken_0x12f17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f17c) {
            ctx->pc = 0x12F230u;
            goto label_12f230;
        }
    }
    ctx->pc = 0x12F184u;
label_12f184:
    // 0x12f184: 0xc48202a8  lwc1        $f2, 0x2A8($a0)
    ctx->pc = 0x12f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f188: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x12f188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x12f18c: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x12f18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12f190: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x12f190u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f194: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x12f194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x12f198: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12f198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12f19c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f19cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f1a0: 0x0  nop
    ctx->pc = 0x12f1a0u;
    // NOP
    // 0x12f1a4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x12f1a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x12f1a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12f1a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f1ac: 0x0  nop
    ctx->pc = 0x12f1acu;
    // NOP
    // 0x12f1b0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x12F1B0u;
    {
        const bool branch_taken_0x12f1b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1B0u;
        // 0x12f1b4: 0xe48102a8  swc1        $f1, 0x2A8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1b0) {
            ctx->pc = 0x12F1D4u;
            goto label_12f1d4;
        }
    }
    ctx->pc = 0x12F1B8u;
    // 0x12f1b8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x12f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x12f1bc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12f1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12f1c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f1c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f1c4: 0x0  nop
    ctx->pc = 0x12f1c4u;
    // NOP
    // 0x12f1c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12f1c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12f1cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12F1CCu;
    {
        const bool branch_taken_0x12f1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1CCu;
        // 0x12f1d0: 0xe48002a8  swc1        $f0, 0x2A8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1cc) {
            ctx->pc = 0x12F208u;
            goto label_12f208;
        }
    }
    ctx->pc = 0x12F1D4u;
label_12f1d4:
    // 0x12f1d4: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x12f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x12f1d8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12f1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12f1dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f1dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f1e0: 0x0  nop
    ctx->pc = 0x12f1e0u;
    // NOP
    // 0x12f1e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12f1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f1e8: 0x0  nop
    ctx->pc = 0x12f1e8u;
    // NOP
    // 0x12f1ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x12F1ECu;
    {
        const bool branch_taken_0x12f1ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1ECu;
        // 0x12f1f0: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1ec) {
            ctx->pc = 0x12F208u;
            goto label_12f208;
        }
    }
    ctx->pc = 0x12F1F4u;
    // 0x12f1f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12f1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12f1f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f1f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f1fc: 0x0  nop
    ctx->pc = 0x12f1fcu;
    // NOP
    // 0x12f200: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12f200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12f204: 0xe48002a8  swc1        $f0, 0x2A8($a0)
    ctx->pc = 0x12f204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 680), bits); }
label_12f208:
    // 0x12f208: 0x948602e6  lhu         $a2, 0x2E6($a0)
    ctx->pc = 0x12f208u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x12f20c: 0x278580e4  addiu       $a1, $gp, -0x7F1C
    ctx->pc = 0x12f20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934756));
    // 0x12f210: 0x908302e3  lbu         $v1, 0x2E3($a0)
    ctx->pc = 0x12f210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 739)));
    // 0x12f214: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x12f214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x12f218: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x12f218u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f21c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12f220: 0xa08302e3  sb          $v1, 0x2E3($a0)
    ctx->pc = 0x12f220u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 3));
    // 0x12f224: 0x948302e6  lhu         $v1, 0x2E6($a0)
    ctx->pc = 0x12f224u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x12f228: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12f228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12f22c: 0xa48302e6  sh          $v1, 0x2E6($a0)
    ctx->pc = 0x12f22cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 3));
label_12f230:
    // 0x12f230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x12f234u;
}
