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

// Function: entry_001573f8
// Address: 0x1573f8 - 0x157460
void entry_001573f8_0x1573f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001573f8_0x1573f8");
#endif

    ctx->pc = 0x1573f8u;

    // 0x1573f8: 0xcb1821  addu        $v1, $a2, $t3
    ctx->pc = 0x1573f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1573fc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1573fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157400: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x157400u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x157404: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x157404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x157408: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x157408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x15740c: 0x254afff0  addiu       $t2, $t2, -0x10
    ctx->pc = 0x15740cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
    // 0x157410: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x157410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x157414: 0x10b1821  addu        $v1, $t0, $t3
    ctx->pc = 0x157414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x157418: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x157418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15741c: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x15741cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x157420: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x157420u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x157424: 0x0  nop
    ctx->pc = 0x157424u;
    // NOP
    // 0x157428: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x157428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x15742c: 0x581ffe1  bgez        $t4, . + 4 + (-0x1F << 2)
    ctx->pc = 0x15742Cu;
    {
        const bool branch_taken_0x15742c = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x157430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15742Cu;
        // 0x157430: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15742c) {
            ctx->pc = 0x1573B4u;
            return;
        }
    }
    ctx->pc = 0x157434u;
    // 0x157434: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x157434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157438: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x157438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x15743c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x15743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157440: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x157440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x157444: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x157444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157448: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x157448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x15744c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x15744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157450: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x157450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x157454: 0x3e00008  jr          $ra
    ctx->pc = 0x157454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157454u;
        // 0x157458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15745Cu;
    // 0x15745c: 0x0  nop
    ctx->pc = 0x15745cu;
    // NOP
    ctx->pc = 0x157460u;
}
