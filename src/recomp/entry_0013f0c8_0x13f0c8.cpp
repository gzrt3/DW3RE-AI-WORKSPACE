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

// Function: entry_0013f0c8
// Address: 0x13f0c8 - 0x13f5c0
void entry_0013f0c8_0x13f0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f0c8_0x13f0c8");
#endif

    ctx->pc = 0x13f0c8u;

    // 0x13f0c8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x13f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13f0cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13f0d0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x13f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f0d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13f0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f0d8: 0x10600139  beqz        $v1, . + 4 + (0x139 << 2)
    ctx->pc = 0x13F0D8u;
    {
        const bool branch_taken_0x13f0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f0d8) {
            ctx->pc = 0x13F5C0u;
            return;
        }
    }
    ctx->pc = 0x13F0E0u;
    // 0x13f0e0: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x13f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x13f0e4: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x13f0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x13f0e8: 0x14600135  bnez        $v1, . + 4 + (0x135 << 2)
    ctx->pc = 0x13F0E8u;
    {
        const bool branch_taken_0x13f0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0E8u;
        // 0x13f0ec: 0x30830100  andi        $v1, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0e8) {
            ctx->pc = 0x13F5C0u;
            return;
        }
    }
    ctx->pc = 0x13F0F0u;
    // 0x13f0f0: 0x14600133  bnez        $v1, . + 4 + (0x133 << 2)
    ctx->pc = 0x13F0F0u;
    {
        const bool branch_taken_0x13f0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f0f0) {
            ctx->pc = 0x13F5C0u;
            return;
        }
    }
    ctx->pc = 0x13F0F8u;
    // 0x13f0f8: 0xc60001d0  lwc1        $f0, 0x1D0($s0)
    ctx->pc = 0x13f0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f0fc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x13f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x13f100: 0xc60401d8  lwc1        $f4, 0x1D8($s0)
    ctx->pc = 0x13f100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13f104: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f108: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13f108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f10c: 0x0  nop
    ctx->pc = 0x13f10cu;
    // NOP
    // 0x13f110: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x13f110u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x13f114: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x13f114u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f118: 0x0  nop
    ctx->pc = 0x13f118u;
    // NOP
    // 0x13f11c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x13F11Cu;
    {
        const bool branch_taken_0x13f11c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F11Cu;
        // 0x13f120: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f11c) {
            ctx->pc = 0x13F138u;
            goto label_13f138;
        }
    }
    ctx->pc = 0x13F124u;
    // 0x13f124: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x13f124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x13f128: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f12c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f12cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f130: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13F130u;
    {
        const bool branch_taken_0x13f130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F130u;
        // 0x13f134: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f130) {
            ctx->pc = 0x13F168u;
            goto label_13f168;
        }
    }
    ctx->pc = 0x13F138u;
label_13f138:
    // 0x13f138: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f13c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f13cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f140: 0x0  nop
    ctx->pc = 0x13f140u;
    // NOP
    // 0x13f144: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x13f144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f148: 0x0  nop
    ctx->pc = 0x13f148u;
    // NOP
    // 0x13f14c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13F14Cu;
    {
        const bool branch_taken_0x13f14c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f14c) {
            ctx->pc = 0x13F168u;
            goto label_13f168;
        }
    }
    ctx->pc = 0x13F154u;
    // 0x13f154: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x13f154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x13f158: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f15c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f15cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f160: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x13F160u;
    {
        const bool branch_taken_0x13f160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F160u;
        // 0x13f164: 0x460300c0  add.s       $f3, $f0, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f160) {
            ctx->pc = 0x13F168u;
            goto label_13f168;
        }
    }
    ctx->pc = 0x13F168u;
label_13f168:
    // 0x13f168: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f16c: 0x0  nop
    ctx->pc = 0x13f16cu;
    // NOP
    // 0x13f170: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x13f170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f174: 0x0  nop
    ctx->pc = 0x13f174u;
    // NOP
    // 0x13f178: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x13F178u;
    {
        const bool branch_taken_0x13f178 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f178) {
            ctx->pc = 0x13F26Cu;
            goto label_13f26c;
        }
    }
    ctx->pc = 0x13F180u;
    // 0x13f180: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x13f180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13f184: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x13f184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x13f188: 0x34640a92  ori         $a0, $v1, 0xA92
    ctx->pc = 0x13f188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x13f18c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x13f18cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f190: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x13f190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x13f194: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f19c: 0x0  nop
    ctx->pc = 0x13f19cu;
    // NOP
    // 0x13f1a0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x13f1a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x13f1a4: 0x46040881  sub.s       $f2, $f1, $f4
    ctx->pc = 0x13f1a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x13f1a8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x13f1a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f1ac: 0x0  nop
    ctx->pc = 0x13f1acu;
    // NOP
    // 0x13f1b0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x13F1B0u;
    {
        const bool branch_taken_0x13f1b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1B0u;
        // 0x13f1b4: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1b0) {
            ctx->pc = 0x13F1CCu;
            goto label_13f1cc;
        }
    }
    ctx->pc = 0x13F1B8u;
    // 0x13f1b8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x13f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x13f1bc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f1c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f1c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f1c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13F1C4u;
    {
        const bool branch_taken_0x13f1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1C4u;
        // 0x13f1c8: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1c4) {
            ctx->pc = 0x13F1FCu;
            goto label_13f1fc;
        }
    }
    ctx->pc = 0x13F1CCu;
label_13f1cc:
    // 0x13f1cc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f1d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f1d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f1d4: 0x0  nop
    ctx->pc = 0x13f1d4u;
    // NOP
    // 0x13f1d8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x13f1d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f1dc: 0x0  nop
    ctx->pc = 0x13f1dcu;
    // NOP
    // 0x13f1e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13F1E0u;
    {
        const bool branch_taken_0x13f1e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f1e0) {
            ctx->pc = 0x13F1FCu;
            goto label_13f1fc;
        }
    }
    ctx->pc = 0x13F1E8u;
    // 0x13f1e8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x13f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x13f1ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f1f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f1f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f1f4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x13F1F4u;
    {
        const bool branch_taken_0x13f1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1F4u;
        // 0x13f1f8: 0x46020080  add.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1f4) {
            ctx->pc = 0x13F1FCu;
            goto label_13f1fc;
        }
    }
    ctx->pc = 0x13F1FCu;
label_13f1fc:
    // 0x13f1fc: 0x3c03bd0e  lui         $v1, 0xBD0E
    ctx->pc = 0x13f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48398 << 16));
    // 0x13f200: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x13f200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x13f204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f208: 0x0  nop
    ctx->pc = 0x13f208u;
    // NOP
    // 0x13f20c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13f20cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f210: 0x0  nop
    ctx->pc = 0x13f210u;
    // NOP
    // 0x13f214: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13F214u;
    {
        const bool branch_taken_0x13f214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f214) {
            ctx->pc = 0x13F224u;
            goto label_13f224;
        }
    }
    ctx->pc = 0x13F21Cu;
    // 0x13f21c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F21Cu;
    {
        const bool branch_taken_0x13f21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f21c) {
            ctx->pc = 0x13F228u;
            goto label_13f228;
        }
    }
    ctx->pc = 0x13F224u;
label_13f224:
    // 0x13f224: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x13f224u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_13f228:
    // 0x13f228: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x13f228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f22c: 0x0  nop
    ctx->pc = 0x13f22cu;
    // NOP
    // 0x13f230: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x13F230u;
    {
        const bool branch_taken_0x13f230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F230u;
        // 0x13f234: 0x3c03bd0e  lui         $v1, 0xBD0E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48398 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f230) {
            ctx->pc = 0x13F260u;
            goto label_13f260;
        }
    }
    ctx->pc = 0x13F238u;
    // 0x13f238: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x13f238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x13f23c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f240: 0x0  nop
    ctx->pc = 0x13f240u;
    // NOP
    // 0x13f244: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13f244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f248: 0x0  nop
    ctx->pc = 0x13f248u;
    // NOP
    // 0x13f24c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13F24Cu;
    {
        const bool branch_taken_0x13f24c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f24c) {
            ctx->pc = 0x13F258u;
            goto label_13f258;
        }
    }
    ctx->pc = 0x13F254u;
    // 0x13f254: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x13f254u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_13f258:
    // 0x13f258: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F258u;
    {
        const bool branch_taken_0x13f258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f258) {
            ctx->pc = 0x13F264u;
            goto label_13f264;
        }
    }
    ctx->pc = 0x13F260u;
label_13f260:
    // 0x13f260: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x13f260u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_13f264:
    // 0x13f264: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x13F264u;
    {
        const bool branch_taken_0x13f264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F264u;
        // 0x13f268: 0xc60101d8  lwc1        $f1, 0x1D8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f264) {
            ctx->pc = 0x13F354u;
            goto label_13f354;
        }
    }
    ctx->pc = 0x13F26Cu;
label_13f26c:
    // 0x13f26c: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x13f26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13f270: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x13f270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x13f274: 0x34640a92  ori         $a0, $v1, 0xA92
    ctx->pc = 0x13f274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x13f278: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x13f278u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f27c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x13f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x13f280: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f284: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f288: 0x0  nop
    ctx->pc = 0x13f288u;
    // NOP
    // 0x13f28c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x13f28cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13f290: 0x46040881  sub.s       $f2, $f1, $f4
    ctx->pc = 0x13f290u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x13f294: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x13f294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f298: 0x0  nop
    ctx->pc = 0x13f298u;
    // NOP
    // 0x13f29c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x13F29Cu;
    {
        const bool branch_taken_0x13f29c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F29Cu;
        // 0x13f2a0: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f29c) {
            ctx->pc = 0x13F2B8u;
            goto label_13f2b8;
        }
    }
    ctx->pc = 0x13F2A4u;
    // 0x13f2a4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x13f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x13f2a8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f2ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f2acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f2b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13F2B0u;
    {
        const bool branch_taken_0x13f2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2B0u;
        // 0x13f2b4: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2b0) {
            ctx->pc = 0x13F2E8u;
            goto label_13f2e8;
        }
    }
    ctx->pc = 0x13F2B8u;
label_13f2b8:
    // 0x13f2b8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f2bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f2bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f2c0: 0x0  nop
    ctx->pc = 0x13f2c0u;
    // NOP
    // 0x13f2c4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x13f2c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f2c8: 0x0  nop
    ctx->pc = 0x13f2c8u;
    // NOP
    // 0x13f2cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13F2CCu;
    {
        const bool branch_taken_0x13f2cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f2cc) {
            ctx->pc = 0x13F2E8u;
            goto label_13f2e8;
        }
    }
    ctx->pc = 0x13F2D4u;
    // 0x13f2d4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x13f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x13f2d8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f2dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f2dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f2e0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x13F2E0u;
    {
        const bool branch_taken_0x13f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2E0u;
        // 0x13f2e4: 0x46020080  add.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2e0) {
            ctx->pc = 0x13F2E8u;
            goto label_13f2e8;
        }
    }
    ctx->pc = 0x13F2E8u;
label_13f2e8:
    // 0x13f2e8: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x13f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
    // 0x13f2ec: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x13f2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x13f2f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f2f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f2f4: 0x0  nop
    ctx->pc = 0x13f2f4u;
    // NOP
    // 0x13f2f8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x13f2f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f2fc: 0x0  nop
    ctx->pc = 0x13f2fcu;
    // NOP
    // 0x13f300: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13F300u;
    {
        const bool branch_taken_0x13f300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f300) {
            ctx->pc = 0x13F310u;
            goto label_13f310;
        }
    }
    ctx->pc = 0x13F308u;
    // 0x13f308: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F308u;
    {
        const bool branch_taken_0x13f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f308) {
            ctx->pc = 0x13F314u;
            goto label_13f314;
        }
    }
    ctx->pc = 0x13F310u;
label_13f310:
    // 0x13f310: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x13f310u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_13f314:
    // 0x13f314: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x13f314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f318: 0x0  nop
    ctx->pc = 0x13f318u;
    // NOP
    // 0x13f31c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x13F31Cu;
    {
        const bool branch_taken_0x13f31c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F31Cu;
        // 0x13f320: 0x3c033d0e  lui         $v1, 0x3D0E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f31c) {
            ctx->pc = 0x13F34Cu;
            goto label_13f34c;
        }
    }
    ctx->pc = 0x13F324u;
    // 0x13f324: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x13f324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x13f328: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f32c: 0x0  nop
    ctx->pc = 0x13f32cu;
    // NOP
    // 0x13f330: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x13f330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f334: 0x0  nop
    ctx->pc = 0x13f334u;
    // NOP
    // 0x13f338: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13F338u;
    {
        const bool branch_taken_0x13f338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f338) {
            ctx->pc = 0x13F344u;
            goto label_13f344;
        }
    }
    ctx->pc = 0x13F340u;
    // 0x13f340: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x13f340u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_13f344:
    // 0x13f344: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F344u;
    {
        const bool branch_taken_0x13f344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f344) {
            ctx->pc = 0x13F350u;
            goto label_13f350;
        }
    }
    ctx->pc = 0x13F34Cu;
label_13f34c:
    // 0x13f34c: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x13f34cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_13f350:
    // 0x13f350: 0xc60101d8  lwc1        $f1, 0x1D8($s0)
    ctx->pc = 0x13f350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13f354:
    // 0x13f354: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x13f354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x13f358: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f35c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f35cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f360: 0x0  nop
    ctx->pc = 0x13f360u;
    // NOP
    // 0x13f364: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x13f364u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13f368: 0xe60101d8  swc1        $f1, 0x1D8($s0)
    ctx->pc = 0x13f368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 472), bits); }
    // 0x13f36c: 0xc60101d4  lwc1        $f1, 0x1D4($s0)
    ctx->pc = 0x13f36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13f370: 0xc60301dc  lwc1        $f3, 0x1DC($s0)
    ctx->pc = 0x13f370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13f374: 0x46030901  sub.s       $f4, $f1, $f3
    ctx->pc = 0x13f374u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x13f378: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x13f378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f37c: 0x0  nop
    ctx->pc = 0x13f37cu;
    // NOP
    // 0x13f380: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x13F380u;
    {
        const bool branch_taken_0x13f380 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F380u;
        // 0x13f384: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f380) {
            ctx->pc = 0x13F39Cu;
            goto label_13f39c;
        }
    }
    ctx->pc = 0x13F388u;
    // 0x13f388: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x13f388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x13f38c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f390: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f394: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13F394u;
    {
        const bool branch_taken_0x13f394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F394u;
        // 0x13f398: 0x46002101  sub.s       $f4, $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f394) {
            ctx->pc = 0x13F3CCu;
            goto label_13f3cc;
        }
    }
    ctx->pc = 0x13F39Cu;
label_13f39c:
    // 0x13f39c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f3a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f3a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f3a4: 0x0  nop
    ctx->pc = 0x13f3a4u;
    // NOP
    // 0x13f3a8: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x13f3a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f3ac: 0x0  nop
    ctx->pc = 0x13f3acu;
    // NOP
    // 0x13f3b0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13F3B0u;
    {
        const bool branch_taken_0x13f3b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f3b0) {
            ctx->pc = 0x13F3CCu;
            goto label_13f3cc;
        }
    }
    ctx->pc = 0x13F3B8u;
    // 0x13f3b8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x13f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x13f3bc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f3c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f3c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f3c4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x13F3C4u;
    {
        const bool branch_taken_0x13f3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F3C4u;
        // 0x13f3c8: 0x46040100  add.s       $f4, $f0, $f4 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3c4) {
            ctx->pc = 0x13F3CCu;
            goto label_13f3cc;
        }
    }
    ctx->pc = 0x13F3CCu;
label_13f3cc:
    // 0x13f3cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f3ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f3d0: 0x0  nop
    ctx->pc = 0x13f3d0u;
    // NOP
    // 0x13f3d4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x13f3d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f3d8: 0x0  nop
    ctx->pc = 0x13f3d8u;
    // NOP
    // 0x13f3dc: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x13F3DCu;
    {
        const bool branch_taken_0x13f3dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f3dc) {
            ctx->pc = 0x13F4D0u;
            goto label_13f4d0;
        }
    }
    ctx->pc = 0x13F3E4u;
    // 0x13f3e4: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x13f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13f3e8: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x13f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x13f3ec: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x13f3ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f3f0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x13f3f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f3f4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x13f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x13f3f8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f3fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f3fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f400: 0x0  nop
    ctx->pc = 0x13f400u;
    // NOP
    // 0x13f404: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x13f404u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x13f408: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x13f408u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x13f40c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13f40cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f410: 0x0  nop
    ctx->pc = 0x13f410u;
    // NOP
    // 0x13f414: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x13F414u;
    {
        const bool branch_taken_0x13f414 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F414u;
        // 0x13f418: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f414) {
            ctx->pc = 0x13F430u;
            goto label_13f430;
        }
    }
    ctx->pc = 0x13F41Cu;
    // 0x13f41c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x13f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x13f420: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f428: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13F428u;
    {
        const bool branch_taken_0x13f428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F428u;
        // 0x13f42c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f428) {
            ctx->pc = 0x13F460u;
            goto label_13f460;
        }
    }
    ctx->pc = 0x13F430u;
label_13f430:
    // 0x13f430: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f434: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f438: 0x0  nop
    ctx->pc = 0x13f438u;
    // NOP
    // 0x13f43c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13f43cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f440: 0x0  nop
    ctx->pc = 0x13f440u;
    // NOP
    // 0x13f444: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13F444u;
    {
        const bool branch_taken_0x13f444 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f444) {
            ctx->pc = 0x13F460u;
            goto label_13f460;
        }
    }
    ctx->pc = 0x13F44Cu;
    // 0x13f44c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x13f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x13f450: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f458: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x13F458u;
    {
        const bool branch_taken_0x13f458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F458u;
        // 0x13f45c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f458) {
            ctx->pc = 0x13F460u;
            goto label_13f460;
        }
    }
    ctx->pc = 0x13F460u;
label_13f460:
    // 0x13f460: 0x3c03bd0e  lui         $v1, 0xBD0E
    ctx->pc = 0x13f460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48398 << 16));
    // 0x13f464: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x13f464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x13f468: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f46c: 0x0  nop
    ctx->pc = 0x13f46cu;
    // NOP
    // 0x13f470: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13f470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f474: 0x0  nop
    ctx->pc = 0x13f474u;
    // NOP
    // 0x13f478: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13F478u;
    {
        const bool branch_taken_0x13f478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f478) {
            ctx->pc = 0x13F488u;
            goto label_13f488;
        }
    }
    ctx->pc = 0x13F480u;
    // 0x13f480: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F480u;
    {
        const bool branch_taken_0x13f480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f480) {
            ctx->pc = 0x13F48Cu;
            goto label_13f48c;
        }
    }
    ctx->pc = 0x13F488u;
label_13f488:
    // 0x13f488: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x13f488u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_13f48c:
    // 0x13f48c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x13f48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f490: 0x0  nop
    ctx->pc = 0x13f490u;
    // NOP
    // 0x13f494: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x13F494u;
    {
        const bool branch_taken_0x13f494 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F494u;
        // 0x13f498: 0x3c03bd0e  lui         $v1, 0xBD0E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48398 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f494) {
            ctx->pc = 0x13F4C4u;
            goto label_13f4c4;
        }
    }
    ctx->pc = 0x13F49Cu;
    // 0x13f49c: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x13f49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x13f4a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f4a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f4a4: 0x0  nop
    ctx->pc = 0x13f4a4u;
    // NOP
    // 0x13f4a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13f4a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f4ac: 0x0  nop
    ctx->pc = 0x13f4acu;
    // NOP
    // 0x13f4b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13F4B0u;
    {
        const bool branch_taken_0x13f4b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f4b0) {
            ctx->pc = 0x13F4BCu;
            goto label_13f4bc;
        }
    }
    ctx->pc = 0x13F4B8u;
    // 0x13f4b8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13f4b8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13f4bc:
    // 0x13f4bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F4BCu;
    {
        const bool branch_taken_0x13f4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f4bc) {
            ctx->pc = 0x13F4C8u;
            goto label_13f4c8;
        }
    }
    ctx->pc = 0x13F4C4u;
label_13f4c4:
    // 0x13f4c4: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x13f4c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
label_13f4c8:
    // 0x13f4c8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x13F4C8u;
    {
        const bool branch_taken_0x13f4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4C8u;
        // 0x13f4cc: 0xc60001dc  lwc1        $f0, 0x1DC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4c8) {
            ctx->pc = 0x13F5B8u;
            goto label_13f5b8;
        }
    }
    ctx->pc = 0x13F4D0u;
label_13f4d0:
    // 0x13f4d0: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x13f4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13f4d4: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x13f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x13f4d8: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x13f4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f4dc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x13f4dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f4e0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x13f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x13f4e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f4e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f4ec: 0x0  nop
    ctx->pc = 0x13f4ecu;
    // NOP
    // 0x13f4f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x13f4f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13f4f4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x13f4f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x13f4f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13f4f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f4fc: 0x0  nop
    ctx->pc = 0x13f4fcu;
    // NOP
    // 0x13f500: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x13F500u;
    {
        const bool branch_taken_0x13f500 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F500u;
        // 0x13f504: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f500) {
            ctx->pc = 0x13F51Cu;
            goto label_13f51c;
        }
    }
    ctx->pc = 0x13F508u;
    // 0x13f508: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x13f508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x13f50c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f510: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f514: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13F514u;
    {
        const bool branch_taken_0x13f514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F514u;
        // 0x13f518: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f514) {
            ctx->pc = 0x13F54Cu;
            goto label_13f54c;
        }
    }
    ctx->pc = 0x13F51Cu;
label_13f51c:
    // 0x13f51c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f524: 0x0  nop
    ctx->pc = 0x13f524u;
    // NOP
    // 0x13f528: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13f528u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f52c: 0x0  nop
    ctx->pc = 0x13f52cu;
    // NOP
    // 0x13f530: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13F530u;
    {
        const bool branch_taken_0x13f530 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f530) {
            ctx->pc = 0x13F54Cu;
            goto label_13f54c;
        }
    }
    ctx->pc = 0x13F538u;
    // 0x13f538: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x13f538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x13f53c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x13f53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x13f540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f544: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x13F544u;
    {
        const bool branch_taken_0x13f544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F544u;
        // 0x13f548: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f544) {
            ctx->pc = 0x13F54Cu;
            goto label_13f54c;
        }
    }
    ctx->pc = 0x13F54Cu;
label_13f54c:
    // 0x13f54c: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x13f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
    // 0x13f550: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x13f550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x13f554: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f558: 0x0  nop
    ctx->pc = 0x13f558u;
    // NOP
    // 0x13f55c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13f55cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f560: 0x0  nop
    ctx->pc = 0x13f560u;
    // NOP
    // 0x13f564: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13F564u;
    {
        const bool branch_taken_0x13f564 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f564) {
            ctx->pc = 0x13F574u;
            goto label_13f574;
        }
    }
    ctx->pc = 0x13F56Cu;
    // 0x13f56c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F56Cu;
    {
        const bool branch_taken_0x13f56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f56c) {
            ctx->pc = 0x13F578u;
            goto label_13f578;
        }
    }
    ctx->pc = 0x13F574u;
label_13f574:
    // 0x13f574: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x13f574u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_13f578:
    // 0x13f578: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x13f578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f57c: 0x0  nop
    ctx->pc = 0x13f57cu;
    // NOP
    // 0x13f580: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x13F580u;
    {
        const bool branch_taken_0x13f580 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F580u;
        // 0x13f584: 0x3c033d0e  lui         $v1, 0x3D0E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f580) {
            ctx->pc = 0x13F5B0u;
            goto label_13f5b0;
        }
    }
    ctx->pc = 0x13F588u;
    // 0x13f588: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x13f588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x13f58c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13f58cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f590: 0x0  nop
    ctx->pc = 0x13f590u;
    // NOP
    // 0x13f594: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13f594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f598: 0x0  nop
    ctx->pc = 0x13f598u;
    // NOP
    // 0x13f59c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13F59Cu;
    {
        const bool branch_taken_0x13f59c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f59c) {
            ctx->pc = 0x13F5A8u;
            goto label_13f5a8;
        }
    }
    ctx->pc = 0x13F5A4u;
    // 0x13f5a4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13f5a4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13f5a8:
    // 0x13f5a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F5A8u;
    {
        const bool branch_taken_0x13f5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f5a8) {
            ctx->pc = 0x13F5B4u;
            goto label_13f5b4;
        }
    }
    ctx->pc = 0x13F5B0u;
label_13f5b0:
    // 0x13f5b0: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x13f5b0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
label_13f5b4:
    // 0x13f5b4: 0xc60001dc  lwc1        $f0, 0x1DC($s0)
    ctx->pc = 0x13f5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13f5b8:
    // 0x13f5b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13f5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13f5bc: 0xe60001dc  swc1        $f0, 0x1DC($s0)
    ctx->pc = 0x13f5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 476), bits); }
    ctx->pc = 0x13f5c0u;
}
