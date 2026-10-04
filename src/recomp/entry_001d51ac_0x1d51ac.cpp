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

// Function: entry_001d51ac
// Address: 0x1d51ac - 0x1d5510
void entry_001d51ac_0x1d51ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d51ac_0x1d51ac");
#endif

    ctx->pc = 0x1d51acu;

    // 0x1d51ac: 0xc46001d0  lwc1        $f0, 0x1D0($v1)
    ctx->pc = 0x1d51acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d51b0: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1d51b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x1d51b4: 0xc4620040  lwc1        $f2, 0x40($v1)
    ctx->pc = 0x1d51b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d51b8: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d51b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d51bc: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1d51bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d51c0: 0x0  nop
    ctx->pc = 0x1d51c0u;
    // NOP
    // 0x1d51c4: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x1d51c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1d51c8: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x1d51c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d51cc: 0x0  nop
    ctx->pc = 0x1d51ccu;
    // NOP
    // 0x1d51d0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D51D0u;
    {
        const bool branch_taken_0x1d51d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51D0u;
        // 0x1d51d4: 0x3c05c049  lui         $a1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51d0) {
            ctx->pc = 0x1D51ECu;
            goto label_1d51ec;
        }
    }
    ctx->pc = 0x1D51D8u;
    // 0x1d51d8: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1d51d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
    // 0x1d51dc: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d51dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d51e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d51e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d51e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D51E4u;
    {
        const bool branch_taken_0x1d51e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51E4u;
        // 0x1d51e8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51e4) {
            ctx->pc = 0x1D521Cu;
            goto label_1d521c;
        }
    }
    ctx->pc = 0x1D51ECu;
label_1d51ec:
    // 0x1d51ec: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d51ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d51f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d51f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d51f4: 0x0  nop
    ctx->pc = 0x1d51f4u;
    // NOP
    // 0x1d51f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d51f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d51fc: 0x0  nop
    ctx->pc = 0x1d51fcu;
    // NOP
    // 0x1d5200: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5200u;
    {
        const bool branch_taken_0x1d5200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5200) {
            ctx->pc = 0x1D521Cu;
            goto label_1d521c;
        }
    }
    ctx->pc = 0x1D5208u;
    // 0x1d5208: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1d5208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
    // 0x1d520c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d520cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d5210: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5210u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5214: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D5214u;
    {
        const bool branch_taken_0x1d5214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5214u;
        // 0x1d5218: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5214) {
            ctx->pc = 0x1D521Cu;
            goto label_1d521c;
        }
    }
    ctx->pc = 0x1D521Cu;
label_1d521c:
    // 0x1d521c: 0x3c05bf06  lui         $a1, 0xBF06
    ctx->pc = 0x1d521cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48902 << 16));
    // 0x1d5220: 0x34a50a92  ori         $a1, $a1, 0xA92
    ctx->pc = 0x1d5220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2706);
    // 0x1d5224: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5224u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5228: 0x0  nop
    ctx->pc = 0x1d5228u;
    // NOP
    // 0x1d522c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d522cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5230: 0x0  nop
    ctx->pc = 0x1d5230u;
    // NOP
    // 0x1d5234: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x1D5234u;
    {
        const bool branch_taken_0x1d5234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5234u;
        // 0x1d5238: 0x3c053f06  lui         $a1, 0x3F06 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16134 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5234) {
            ctx->pc = 0x1D52B8u;
            goto label_1d52b8;
        }
    }
    ctx->pc = 0x1D523Cu;
    // 0x1d523c: 0x3c063f06  lui         $a2, 0x3F06
    ctx->pc = 0x1d523cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16134 << 16));
    // 0x1d5240: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1d5240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x1d5244: 0x34c60a92  ori         $a2, $a2, 0xA92
    ctx->pc = 0x1d5244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2706);
    // 0x1d5248: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d5248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d524c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1d524cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5250: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5250u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5254: 0x0  nop
    ctx->pc = 0x1d5254u;
    // NOP
    // 0x1d5258: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1d5258u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1d525c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d525cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5260: 0x0  nop
    ctx->pc = 0x1d5260u;
    // NOP
    // 0x1d5264: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5264u;
    {
        const bool branch_taken_0x1d5264 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5264u;
        // 0x1d5268: 0x3c05c049  lui         $a1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5264) {
            ctx->pc = 0x1D5280u;
            goto label_1d5280;
        }
    }
    ctx->pc = 0x1D526Cu;
    // 0x1d526c: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1d526cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
    // 0x1d5270: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d5270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d5274: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5274u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5278: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D5278u;
    {
        const bool branch_taken_0x1d5278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5278u;
        // 0x1d527c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5278) {
            ctx->pc = 0x1D52B0u;
            goto label_1d52b0;
        }
    }
    ctx->pc = 0x1D5280u;
label_1d5280:
    // 0x1d5280: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d5280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d5284: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5284u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5288: 0x0  nop
    ctx->pc = 0x1d5288u;
    // NOP
    // 0x1d528c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d528cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5290: 0x0  nop
    ctx->pc = 0x1d5290u;
    // NOP
    // 0x1d5294: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5294u;
    {
        const bool branch_taken_0x1d5294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5294) {
            ctx->pc = 0x1D52B0u;
            goto label_1d52b0;
        }
    }
    ctx->pc = 0x1D529Cu;
    // 0x1d529c: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1d529cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
    // 0x1d52a0: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d52a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d52a4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d52a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d52a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D52A8u;
    {
        const bool branch_taken_0x1d52a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52A8u;
        // 0x1d52ac: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52a8) {
            ctx->pc = 0x1D52B0u;
            goto label_1d52b0;
        }
    }
    ctx->pc = 0x1D52B0u;
label_1d52b0:
    // 0x1d52b0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1D52B0u;
    {
        const bool branch_taken_0x1d52b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52B0u;
        // 0x1d52b4: 0xe46101d0  swc1        $f1, 0x1D0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52b0) {
            ctx->pc = 0x1D5340u;
            goto label_1d5340;
        }
    }
    ctx->pc = 0x1D52B8u;
label_1d52b8:
    // 0x1d52b8: 0x34a50a92  ori         $a1, $a1, 0xA92
    ctx->pc = 0x1d52b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2706);
    // 0x1d52bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d52bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d52c0: 0x0  nop
    ctx->pc = 0x1d52c0u;
    // NOP
    // 0x1d52c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d52c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d52c8: 0x0  nop
    ctx->pc = 0x1d52c8u;
    // NOP
    // 0x1d52cc: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x1D52CCu;
    {
        const bool branch_taken_0x1d52cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d52cc) {
            ctx->pc = 0x1D5340u;
            goto label_1d5340;
        }
    }
    ctx->pc = 0x1D52D4u;
    // 0x1d52d4: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1d52d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d52d8: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1d52d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x1d52dc: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d52dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d52e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d52e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d52e4: 0x0  nop
    ctx->pc = 0x1d52e4u;
    // NOP
    // 0x1d52e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d52e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d52ec: 0x0  nop
    ctx->pc = 0x1d52ecu;
    // NOP
    // 0x1d52f0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D52F0u;
    {
        const bool branch_taken_0x1d52f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52F0u;
        // 0x1d52f4: 0x3c05c049  lui         $a1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52f0) {
            ctx->pc = 0x1D530Cu;
            goto label_1d530c;
        }
    }
    ctx->pc = 0x1D52F8u;
    // 0x1d52f8: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1d52f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
    // 0x1d52fc: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d52fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d5300: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5300u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5304: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D5304u;
    {
        const bool branch_taken_0x1d5304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5304u;
        // 0x1d5308: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5304) {
            ctx->pc = 0x1D533Cu;
            goto label_1d533c;
        }
    }
    ctx->pc = 0x1D530Cu;
label_1d530c:
    // 0x1d530c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d530cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d5310: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5310u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5314: 0x0  nop
    ctx->pc = 0x1d5314u;
    // NOP
    // 0x1d5318: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d5318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d531c: 0x0  nop
    ctx->pc = 0x1d531cu;
    // NOP
    // 0x1d5320: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5320u;
    {
        const bool branch_taken_0x1d5320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5320) {
            ctx->pc = 0x1D533Cu;
            goto label_1d533c;
        }
    }
    ctx->pc = 0x1D5328u;
    // 0x1d5328: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1d5328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
    // 0x1d532c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d532cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d5330: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5330u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5334: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D5334u;
    {
        const bool branch_taken_0x1d5334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5334u;
        // 0x1d5338: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5334) {
            ctx->pc = 0x1D533Cu;
            goto label_1d533c;
        }
    }
    ctx->pc = 0x1D533Cu;
label_1d533c:
    // 0x1d533c: 0xe46101d0  swc1        $f1, 0x1D0($v1)
    ctx->pc = 0x1d533cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 464), bits); }
label_1d5340:
    // 0x1d5340: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x1d5340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d5344: 0xc46001d4  lwc1        $f0, 0x1D4($v1)
    ctx->pc = 0x1d5344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5348: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1d5348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1d534c: 0x3c0442fe  lui         $a0, 0x42FE
    ctx->pc = 0x1d534cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17150 << 16));
    // 0x1d5350: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1d5350u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d5354: 0x0  nop
    ctx->pc = 0x1d5354u;
    // NOP
    // 0x1d5358: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x1d5358u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[2] = ctx->f[4] / ctx->f[2];
    // 0x1d535c: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x1d535cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x1d5360: 0x34850fdb  ori         $a1, $a0, 0xFDB
    ctx->pc = 0x1d5360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1d5364: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x1d5364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
    // 0x1d5368: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1d5368u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d536c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1d536cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5370: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1d5370u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1d5374: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1d5374u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1d5378: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d5378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d537c: 0xe46001d4  swc1        $f0, 0x1D4($v1)
    ctx->pc = 0x1d537cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 468), bits); }
    // 0x1d5380: 0xc4620044  lwc1        $f2, 0x44($v1)
    ctx->pc = 0x1d5380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5384: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x1d5384u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1d5388: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x1d5388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d538c: 0x0  nop
    ctx->pc = 0x1d538cu;
    // NOP
    // 0x1d5390: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5390u;
    {
        const bool branch_taken_0x1d5390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5390) {
            ctx->pc = 0x1D53ACu;
            goto label_1d53ac;
        }
    }
    ctx->pc = 0x1D5398u;
    // 0x1d5398: 0x3c0440c9  lui         $a0, 0x40C9
    ctx->pc = 0x1d5398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
    // 0x1d539c: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d539cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1d53a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d53a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d53a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D53A4u;
    {
        const bool branch_taken_0x1d53a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53A4u;
        // 0x1d53a8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53a4) {
            ctx->pc = 0x1D53DCu;
            goto label_1d53dc;
        }
    }
    ctx->pc = 0x1D53ACu;
label_1d53ac:
    // 0x1d53ac: 0x3c04c049  lui         $a0, 0xC049
    ctx->pc = 0x1d53acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
    // 0x1d53b0: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d53b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1d53b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d53b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d53b8: 0x0  nop
    ctx->pc = 0x1d53b8u;
    // NOP
    // 0x1d53bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d53bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d53c0: 0x0  nop
    ctx->pc = 0x1d53c0u;
    // NOP
    // 0x1d53c4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D53C4u;
    {
        const bool branch_taken_0x1d53c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C4u;
        // 0x1d53c8: 0x3c0440c9  lui         $a0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53c4) {
            ctx->pc = 0x1D53DCu;
            goto label_1d53dc;
        }
    }
    ctx->pc = 0x1D53CCu;
    // 0x1d53cc: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d53ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1d53d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d53d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d53d4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D53D4u;
    {
        const bool branch_taken_0x1d53d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53D4u;
        // 0x1d53d8: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53d4) {
            ctx->pc = 0x1D53DCu;
            goto label_1d53dc;
        }
    }
    ctx->pc = 0x1D53DCu;
label_1d53dc:
    // 0x1d53dc: 0x3c04bf49  lui         $a0, 0xBF49
    ctx->pc = 0x1d53dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48969 << 16));
    // 0x1d53e0: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d53e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1d53e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d53e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d53e8: 0x0  nop
    ctx->pc = 0x1d53e8u;
    // NOP
    // 0x1d53ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d53ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d53f0: 0x0  nop
    ctx->pc = 0x1d53f0u;
    // NOP
    // 0x1d53f4: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x1D53F4u;
    {
        const bool branch_taken_0x1d53f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53F4u;
        // 0x1d53f8: 0x3c043f49  lui         $a0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53f4) {
            ctx->pc = 0x1D5478u;
            goto label_1d5478;
        }
    }
    ctx->pc = 0x1D53FCu;
    // 0x1d53fc: 0x3c053f49  lui         $a1, 0x3F49
    ctx->pc = 0x1d53fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16201 << 16));
    // 0x1d5400: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x1d5400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x1d5404: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d5404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d5408: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d5408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1d540c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d540cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5410: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d5410u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5414: 0x0  nop
    ctx->pc = 0x1d5414u;
    // NOP
    // 0x1d5418: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1d5418u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1d541c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d541cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5420: 0x0  nop
    ctx->pc = 0x1d5420u;
    // NOP
    // 0x1d5424: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5424u;
    {
        const bool branch_taken_0x1d5424 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5424u;
        // 0x1d5428: 0x3c04c049  lui         $a0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5424) {
            ctx->pc = 0x1D5440u;
            goto label_1d5440;
        }
    }
    ctx->pc = 0x1D542Cu;
    // 0x1d542c: 0x3c0440c9  lui         $a0, 0x40C9
    ctx->pc = 0x1d542cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
    // 0x1d5430: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d5430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1d5434: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d5434u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5438: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D5438u;
    {
        const bool branch_taken_0x1d5438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5438u;
        // 0x1d543c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5438) {
            ctx->pc = 0x1D5470u;
            goto label_1d5470;
        }
    }
    ctx->pc = 0x1D5440u;
label_1d5440:
    // 0x1d5440: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d5440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1d5444: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d5444u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5448: 0x0  nop
    ctx->pc = 0x1d5448u;
    // NOP
    // 0x1d544c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d544cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5450: 0x0  nop
    ctx->pc = 0x1d5450u;
    // NOP
    // 0x1d5454: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5454u;
    {
        const bool branch_taken_0x1d5454 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5454) {
            ctx->pc = 0x1D5470u;
            goto label_1d5470;
        }
    }
    ctx->pc = 0x1D545Cu;
    // 0x1d545c: 0x3c0440c9  lui         $a0, 0x40C9
    ctx->pc = 0x1d545cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
    // 0x1d5460: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d5460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1d5464: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d5464u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5468: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D5468u;
    {
        const bool branch_taken_0x1d5468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5468u;
        // 0x1d546c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5468) {
            ctx->pc = 0x1D5470u;
            goto label_1d5470;
        }
    }
    ctx->pc = 0x1D5470u;
label_1d5470:
    // 0x1d5470: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1D5470u;
    {
        const bool branch_taken_0x1d5470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5470u;
        // 0x1d5474: 0xe46101d4  swc1        $f1, 0x1D4($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5470) {
            ctx->pc = 0x1D5500u;
            goto label_1d5500;
        }
    }
    ctx->pc = 0x1D5478u;
label_1d5478:
    // 0x1d5478: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d5478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1d547c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d547cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5480: 0x0  nop
    ctx->pc = 0x1d5480u;
    // NOP
    // 0x1d5484: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d5484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5488: 0x0  nop
    ctx->pc = 0x1d5488u;
    // NOP
    // 0x1d548c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x1D548Cu;
    {
        const bool branch_taken_0x1d548c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d548c) {
            ctx->pc = 0x1D5500u;
            goto label_1d5500;
        }
    }
    ctx->pc = 0x1D5494u;
    // 0x1d5494: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1d5494u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d5498: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x1d5498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x1d549c: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d549cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1d54a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d54a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d54a4: 0x0  nop
    ctx->pc = 0x1d54a4u;
    // NOP
    // 0x1d54a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d54a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d54ac: 0x0  nop
    ctx->pc = 0x1d54acu;
    // NOP
    // 0x1d54b0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D54B0u;
    {
        const bool branch_taken_0x1d54b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54B0u;
        // 0x1d54b4: 0x3c04c049  lui         $a0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54b0) {
            ctx->pc = 0x1D54CCu;
            goto label_1d54cc;
        }
    }
    ctx->pc = 0x1D54B8u;
    // 0x1d54b8: 0x3c0440c9  lui         $a0, 0x40C9
    ctx->pc = 0x1d54b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
    // 0x1d54bc: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d54bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1d54c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d54c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d54c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D54C4u;
    {
        const bool branch_taken_0x1d54c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54C4u;
        // 0x1d54c8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54c4) {
            ctx->pc = 0x1D54FCu;
            goto label_1d54fc;
        }
    }
    ctx->pc = 0x1D54CCu;
label_1d54cc:
    // 0x1d54cc: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d54ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1d54d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d54d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d54d4: 0x0  nop
    ctx->pc = 0x1d54d4u;
    // NOP
    // 0x1d54d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d54d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d54dc: 0x0  nop
    ctx->pc = 0x1d54dcu;
    // NOP
    // 0x1d54e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D54E0u;
    {
        const bool branch_taken_0x1d54e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d54e0) {
            ctx->pc = 0x1D54FCu;
            goto label_1d54fc;
        }
    }
    ctx->pc = 0x1D54E8u;
    // 0x1d54e8: 0x3c0440c9  lui         $a0, 0x40C9
    ctx->pc = 0x1d54e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
    // 0x1d54ec: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d54ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1d54f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d54f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d54f4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D54F4u;
    {
        const bool branch_taken_0x1d54f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54F4u;
        // 0x1d54f8: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54f4) {
            ctx->pc = 0x1D54FCu;
            goto label_1d54fc;
        }
    }
    ctx->pc = 0x1D54FCu;
label_1d54fc:
    // 0x1d54fc: 0xe46101d4  swc1        $f1, 0x1D4($v1)
    ctx->pc = 0x1d54fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 468), bits); }
label_1d5500:
    // 0x1d5500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5504: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5504u;
        // 0x1d5508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D550Cu;
    // 0x1d550c: 0x0  nop
    ctx->pc = 0x1d550cu;
    // NOP
    ctx->pc = 0x1d5510u;
}
