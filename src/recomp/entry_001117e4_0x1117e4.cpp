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

// Function: entry_001117e4
// Address: 0x1117e4 - 0x111858
void entry_001117e4_0x1117e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001117e4_0x1117e4");
#endif

    ctx->pc = 0x1117e4u;

    // 0x1117e4: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x1117e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x1117e8: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x1117e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1117ec: 0x34664000  ori         $a2, $v1, 0x4000
    ctx->pc = 0x1117ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1117f0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1117f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1117f4: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1117f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1117f8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1117f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x1117fc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1117fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111800: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x111800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x111804: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x111804u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x111808: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x111808u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x11180c: 0x312500ff  andi        $a1, $t1, 0xFF
    ctx->pc = 0x11180cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x111810: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x111810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x111814: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x111814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111818: 0x0  nop
    ctx->pc = 0x111818u;
    // NOP
    // 0x11181c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11181cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x111820: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x111820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x111824: 0x346b6667  ori         $t3, $v1, 0x6667
    ctx->pc = 0x111824u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x111828: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x111828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11182c: 0x655021  addu        $t2, $v1, $a1
    ctx->pc = 0x11182cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x111830: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x111830u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x111834: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x111834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x111838: 0x0  nop
    ctx->pc = 0x111838u;
    // NOP
    // 0x11183c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11183cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x111840: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x111840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x111844: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x111844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x111848: 0x1680018  mult        $zero, $t3, $t0
    ctx->pc = 0x111848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11184c: 0x82fc2  srl         $a1, $t0, 31
    ctx->pc = 0x11184cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x111850: 0x0  nop
    ctx->pc = 0x111850u;
    // NOP
    // 0x111854: 0x1810  mfhi        $v1
    ctx->pc = 0x111854u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    ctx->pc = 0x111858u;
}
