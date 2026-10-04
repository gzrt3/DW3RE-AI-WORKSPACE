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

// Function: entry_00158a00
// Address: 0x158a00 - 0x158a4c
void entry_00158a00_0x158a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158a00_0x158a00");
#endif

    switch (ctx->pc) {
        case 0x158a14u: goto label_158a14;
        default: break;
    }

    ctx->pc = 0x158a00u;

    // 0x158a00: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x158a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x158a04: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x158A04u;
    {
        const bool branch_taken_0x158a04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A04u;
        // 0x158a08: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a04) {
            ctx->pc = 0x158A4Cu;
            return;
        }
    }
    ctx->pc = 0x158A0Cu;
    // 0x158a0c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x158A0Cu;
    SET_GPR_U32(ctx, 31, 0x158A14u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x158A0Cu, 0x158A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A14u;
label_158a14:
    // 0x158a14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158a18: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x158a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x158a1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158a20: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158a24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x158a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x158a28: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x158a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x158a2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x158a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x158a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158a34: 0x0  nop
    ctx->pc = 0x158a34u;
    // NOP
    // 0x158a38: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x158a38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x158a3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x158a3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x158a40: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158a40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158a44: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x158A44u;
    {
        const bool branch_taken_0x158a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A44u;
        // 0x158a48: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a44) {
            ctx->pc = 0x158AA8u;
            return;
        }
    }
    ctx->pc = 0x158A4Cu;
}
