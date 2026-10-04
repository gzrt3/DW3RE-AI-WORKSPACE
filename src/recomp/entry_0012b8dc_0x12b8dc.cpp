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

// Function: entry_0012b8dc
// Address: 0x12b8dc - 0x12b968
void entry_0012b8dc_0x12b8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b8dc_0x12b8dc");
#endif

    ctx->pc = 0x12b8dcu;

    // 0x12b8dc: 0x94850d72  lhu         $a1, 0xD72($a0)
    ctx->pc = 0x12b8dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3442)));
    // 0x12b8e0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x12b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x12b8e4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x12b8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x12b8e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x12b8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12b8ec: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x12b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12b8f0: 0xa4830d72  sh          $v1, 0xD72($a0)
    ctx->pc = 0x12b8f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3442), (uint16_t)GPR_U32(ctx, 3));
    // 0x12b8f4: 0xc4810d80  lwc1        $f1, 0xD80($a0)
    ctx->pc = 0x12b8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b8f8: 0xc48000b4  lwc1        $f0, 0xB4($a0)
    ctx->pc = 0x12b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b8fc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12b8fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12b900: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b904: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x12b904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x12b908: 0xc48200b0  lwc1        $f2, 0xB0($a0)
    ctx->pc = 0x12b908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12b90c: 0xc4810d84  lwc1        $f1, 0xD84($a0)
    ctx->pc = 0x12b90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b910: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x12b910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b914: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12b914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12b918: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b91c: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x12b91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x12b920: 0xc48200b4  lwc1        $f2, 0xB4($a0)
    ctx->pc = 0x12b920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12b924: 0xc4810d84  lwc1        $f1, 0xD84($a0)
    ctx->pc = 0x12b924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b928: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x12b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b92c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12b92cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12b930: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b934: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x12b934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x12b938: 0xc48200b8  lwc1        $f2, 0xB8($a0)
    ctx->pc = 0x12b938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12b93c: 0xc4810d84  lwc1        $f1, 0xD84($a0)
    ctx->pc = 0x12b93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b940: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x12b940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b944: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12b944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12b948: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b94c: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x12b94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x12b950: 0x94830d70  lhu         $v1, 0xD70($a0)
    ctx->pc = 0x12b950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3440)));
    // 0x12b954: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B954u;
    {
        const bool branch_taken_0x12b954 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x12B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B954u;
        // 0x12b958: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b954) {
            ctx->pc = 0x12B968u;
            return;
        }
    }
    ctx->pc = 0x12B95Cu;
    // 0x12b95c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12b95cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b960: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12B960u;
    {
        const bool branch_taken_0x12b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B960u;
        // 0x12b964: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b960) {
            ctx->pc = 0x12B980u;
            return;
        }
    }
    ctx->pc = 0x12B968u;
}
