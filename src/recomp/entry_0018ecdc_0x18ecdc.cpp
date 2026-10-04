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

// Function: entry_0018ecdc
// Address: 0x18ecdc - 0x18ed24
void entry_0018ecdc_0x18ecdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ecdc_0x18ecdc");
#endif

    ctx->pc = 0x18ecdcu;

    // 0x18ecdc: 0x0  nop
    ctx->pc = 0x18ecdcu;
    // NOP
    // 0x18ece0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x18ece0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ece4: 0x0  nop
    ctx->pc = 0x18ece4u;
    // NOP
    // 0x18ece8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x18ECE8u;
    {
        const bool branch_taken_0x18ece8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ece8) {
            ctx->pc = 0x18ED38u;
            return;
        }
    }
    ctx->pc = 0x18ECF0u;
    // 0x18ecf0: 0xc6800090  lwc1        $f0, 0x90($s4)
    ctx->pc = 0x18ecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ecf4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x18ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x18ecf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18ecf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18ecfc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x18ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x18ed00: 0x4616b8c0  add.s       $f3, $f23, $f22
    ctx->pc = 0x18ed00u;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x18ed04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ed04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18ed08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed0c: 0x26860080  addiu       $a2, $s4, 0x80
    ctx->pc = 0x18ed0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x18ed10: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x18ed10u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x18ed14: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18ed14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18ed18: 0x0  nop
    ctx->pc = 0x18ed18u;
    // NOP
    // 0x18ed1c: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x18ed1cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x18ed20: 0x0  nop
    ctx->pc = 0x18ed20u;
    // NOP
    ctx->pc = 0x18ed24u;
}
