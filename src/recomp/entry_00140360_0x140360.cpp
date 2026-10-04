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

// Function: entry_00140360
// Address: 0x140360 - 0x1403d0
void entry_00140360_0x140360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140360_0x140360");
#endif

    ctx->pc = 0x140360u;

    // 0x140360: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x140360u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x140364: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x140364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x140368: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x140368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14036c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14036cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140370: 0x0  nop
    ctx->pc = 0x140370u;
    // NOP
    // 0x140374: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x140374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x140378: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x140378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x14037c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14037cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140380: 0x0  nop
    ctx->pc = 0x140380u;
    // NOP
    // 0x140384: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
    ctx->pc = 0x140384u;
    {
        const bool branch_taken_0x140384 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x140384) {
            ctx->pc = 0x14053Cu;
            return;
        }
    }
    ctx->pc = 0x14038Cu;
    // 0x14038c: 0x9082000d  lbu         $v0, 0xD($a0)
    ctx->pc = 0x14038cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x140390: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x140390u;
    {
        const bool branch_taken_0x140390 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x140394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140390u;
        // 0x140394: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140390) {
            ctx->pc = 0x1403A8u;
            goto label_1403a8;
        }
    }
    ctx->pc = 0x140398u;
    // 0x140398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14039c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14039Cu;
    {
        const bool branch_taken_0x14039c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1403A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14039Cu;
        // 0x1403a0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14039c) {
            ctx->pc = 0x1403C0u;
            goto label_1403c0;
        }
    }
    ctx->pc = 0x1403A4u;
    // 0x1403a4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1403a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1403a8:
    // 0x1403a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1403a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1403ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1403acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1403b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1403b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1403b4: 0x0  nop
    ctx->pc = 0x1403b4u;
    // NOP
    // 0x1403b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1403b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1403bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1403bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1403c0:
    // 0x1403c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1403c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1403c4: 0x0  nop
    ctx->pc = 0x1403c4u;
    // NOP
    // 0x1403c8: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x1403C8u;
    {
        const bool branch_taken_0x1403c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1403c8) {
            ctx->pc = 0x14053Cu;
            return;
        }
    }
    ctx->pc = 0x1403D0u;
}
