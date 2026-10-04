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

// Function: entry_001d5cb4
// Address: 0x1d5cb4 - 0x1d5d00
void entry_001d5cb4_0x1d5cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5cb4_0x1d5cb4");
#endif

    switch (ctx->pc) {
        case 0x1d5cf8u: goto label_1d5cf8;
        default: break;
    }

    ctx->pc = 0x1d5cb4u;

    // 0x1d5cb4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d5cb8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D5CB8u;
    {
        const bool branch_taken_0x1d5cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5cb8) {
            ctx->pc = 0x1D5D00u;
            return;
        }
    }
    ctx->pc = 0x1D5CC0u;
    // 0x1d5cc0: 0xc6020188  lwc1        $f2, 0x188($s0)
    ctx->pc = 0x1d5cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5cc4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1d5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1d5cc8: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x1d5cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5cd0: 0x0  nop
    ctx->pc = 0x1d5cd0u;
    // NOP
    // 0x1d5cd4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1d5cd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1d5cd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d5cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5cdc: 0x0  nop
    ctx->pc = 0x1d5cdcu;
    // NOP
    // 0x1d5ce0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5CE0u;
    {
        const bool branch_taken_0x1d5ce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5ce0) {
            ctx->pc = 0x1D5D00u;
            return;
        }
    }
    ctx->pc = 0x1D5CE8u;
    // 0x1d5ce8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5cec: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1d5cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1d5cf0: 0xc0630c0  jal         func_18C300
    ctx->pc = 0x1D5CF0u;
    SET_GPR_U32(ctx, 31, 0x1D5CF8u);
    ctx->pc = 0x1D5CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CF0u;
    // 0x1d5cf4: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C300u, 0x1D5CF0u, 0x1D5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CF8u;
label_1d5cf8:
    // 0x1d5cf8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5CF8u;
    {
        const bool branch_taken_0x1d5cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CF8u;
        // 0x1d5cfc: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cf8) {
            ctx->pc = 0x1D5D60u;
            return;
        }
    }
    ctx->pc = 0x1D5D00u;
}
