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

// Function: entry_001bc870
// Address: 0x1bc870 - 0x1bc8c8
void entry_001bc870_0x1bc870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc870_0x1bc870");
#endif

    ctx->pc = 0x1bc870u;

    // 0x1bc870: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1bc870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1bc874: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bc874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1bc878: 0x92250065  lbu         $a1, 0x65($s1)
    ctx->pc = 0x1bc878u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 101)));
    // 0x1bc87c: 0x248453e8  addiu       $a0, $a0, 0x53E8
    ctx->pc = 0x1bc87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21480));
    // 0x1bc880: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bc880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc884: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1bc884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1bc888: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bc888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bc88c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1bc88cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bc890: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1bc890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1bc894: 0x9224006b  lbu         $a0, 0x6B($s1)
    ctx->pc = 0x1bc894u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 107)));
    // 0x1bc898: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC898u;
    {
        const bool branch_taken_0x1bc898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc898) {
            ctx->pc = 0x1BC8C8u;
            return;
        }
    }
    ctx->pc = 0x1BC8A0u;
    // 0x1bc8a0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1bc8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc8a4: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1bc8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1bc8a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc8a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc8ac: 0x0  nop
    ctx->pc = 0x1bc8acu;
    // NOP
    // 0x1bc8b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bc8b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bc8b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bc8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bc8b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bc8b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bc8bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1bc8bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1bc8c0: 0x0  nop
    ctx->pc = 0x1bc8c0u;
    // NOP
    // 0x1bc8c4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1bc8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x1bc8c8u;
}
