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

// Function: entry_0014134c
// Address: 0x14134c - 0x1413e4
void entry_0014134c_0x14134c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014134c_0x14134c");
#endif

    ctx->pc = 0x14134cu;

    // 0x14134c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x14134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x141350: 0x9026490d  lbu         $a2, 0x490D($at)
    ctx->pc = 0x141350u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    // 0x141354: 0x14c30023  bne         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x141354u;
    {
        const bool branch_taken_0x141354 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x141354) {
            ctx->pc = 0x1413E4u;
            return;
        }
    }
    ctx->pc = 0x14135Cu;
    // 0x14135c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x14135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141360: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x141360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x141364: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x141364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x141368: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x141368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14136c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x14136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141370: 0x8c2309d0  lw          $v1, 0x9D0($at)
    ctx->pc = 0x141370u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2509D0u));
    // 0x141374: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x141374u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x141378: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x141378u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x14137c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14137cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x141380: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x141380u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x141384: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x141384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x141388: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x141388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x14138c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x14138cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x141390: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x141390u;
    {
        const bool branch_taken_0x141390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x141394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141390u;
        // 0x141394: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141390) {
            ctx->pc = 0x1413E4u;
            return;
        }
    }
    ctx->pc = 0x141398u;
    // 0x141398: 0x8c2309d4  lw          $v1, 0x9D4($at)
    ctx->pc = 0x141398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2516)));
    // 0x14139c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x14139cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1413a0: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1413A0u;
    {
        const bool branch_taken_0x1413a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1413a0) {
            ctx->pc = 0x1413E4u;
            return;
        }
    }
    ctx->pc = 0x1413A8u;
    // 0x1413a8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1413a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1413ac: 0x8c2309d8  lw          $v1, 0x9D8($at)
    ctx->pc = 0x1413acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2509D8u));
    // 0x1413b0: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x1413b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1413b4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1413B4u;
    {
        const bool branch_taken_0x1413b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1413B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413B4u;
        // 0x1413b8: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413b4) {
            ctx->pc = 0x1413E4u;
            return;
        }
    }
    ctx->pc = 0x1413BCu;
    // 0x1413bc: 0x8c2309dc  lw          $v1, 0x9DC($at)
    ctx->pc = 0x1413bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2524)));
    // 0x1413c0: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1413c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1413c4: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1413C4u;
    {
        const bool branch_taken_0x1413c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1413c4) {
            ctx->pc = 0x1413E4u;
            return;
        }
    }
    ctx->pc = 0x1413CCu;
    // 0x1413cc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1413ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1413d0: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x1413d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x1413d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1413d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1413d8: 0x0  nop
    ctx->pc = 0x1413d8u;
    // NOP
    // 0x1413dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1413dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1413e0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1413e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    ctx->pc = 0x1413e4u;
}
