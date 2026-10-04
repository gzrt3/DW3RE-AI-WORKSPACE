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

// Function: entry_001d4fec
// Address: 0x1d4fec - 0x1d5048
void entry_001d4fec_0x1d4fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4fec_0x1d4fec");
#endif

    ctx->pc = 0x1d4fecu;

    // 0x1d4fec: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x1d4fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4ff0: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x1d4ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x1d4ff4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d4ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d4ff8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d4ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4ffc: 0x0  nop
    ctx->pc = 0x1d4ffcu;
    // NOP
    // 0x1d5000: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d5000u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1d5004: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d5004u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d5008: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d5008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d500c: 0x0  nop
    ctx->pc = 0x1d500cu;
    // NOP
    // 0x1d5010: 0xa6230018  sh          $v1, 0x18($s1)
    ctx->pc = 0x1d5010u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d5014: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x1d5014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5018: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d5018u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1d501c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d501cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d5020: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d5020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d5024: 0x0  nop
    ctx->pc = 0x1d5024u;
    // NOP
    // 0x1d5028: 0xa623001a  sh          $v1, 0x1A($s1)
    ctx->pc = 0x1d5028u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d502c: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1d502cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d5030: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1d5030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1d5034: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5034u;
    {
        const bool branch_taken_0x1d5034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5034u;
        // 0x1d5038: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5034) {
            ctx->pc = 0x1D5048u;
            return;
        }
    }
    ctx->pc = 0x1D503Cu;
    // 0x1d503c: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x1d503cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1d5040: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D5040u;
    {
        const bool branch_taken_0x1d5040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5040) {
            ctx->pc = 0x1D50A4u;
            return;
        }
    }
    ctx->pc = 0x1D5048u;
}
