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

// Function: entry_001d5104
// Address: 0x1d5104 - 0x1d5170
void entry_001d5104_0x1d5104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5104_0x1d5104");
#endif

    ctx->pc = 0x1d5104u;

    // 0x1d5104: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1d5104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1d5108: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d5108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d510c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1d510cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5110: 0x24c6c9a4  addiu       $a2, $a2, -0x365C
    ctx->pc = 0x1d5110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953380));
    // 0x1d5114: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d5114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5118: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1d5118u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1d511c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1d511cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d5120: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1d5120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d5124: 0x14c50012  bne         $a2, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5124u;
    {
        const bool branch_taken_0x1d5124 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d5124) {
            ctx->pc = 0x1D5170u;
            return;
        }
    }
    ctx->pc = 0x1D512Cu;
    // 0x1d512c: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x1d512cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d5130: 0x3c0542fe  lui         $a1, 0x42FE
    ctx->pc = 0x1d5130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17150 << 16));
    // 0x1d5134: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1d5134u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d5138: 0xc46001d0  lwc1        $f0, 0x1D0($v1)
    ctx->pc = 0x1d5138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d513c: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1d513cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x1d5140: 0x34a60fdb  ori         $a2, $a1, 0xFDB
    ctx->pc = 0x1d5140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1d5144: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x1d5144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
    // 0x1d5148: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1d5148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1d514c: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x1d514cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[3];
    // 0x1d5150: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1d5150u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d5154: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d5154u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5158: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1d5158u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1d515c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1d515cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1d5160: 0x0  nop
    ctx->pc = 0x1d5160u;
    // NOP
    // 0x1d5164: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d5164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d5168: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D5168u;
    {
        const bool branch_taken_0x1d5168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5168u;
        // 0x1d516c: 0xe46001d0  swc1        $f0, 0x1D0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5168) {
            ctx->pc = 0x1D51ACu;
            return;
        }
    }
    ctx->pc = 0x1D5170u;
}
