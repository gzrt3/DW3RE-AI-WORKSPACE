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

// Function: entry_001ca7e8
// Address: 0x1ca7e8 - 0x1ca888
void entry_001ca7e8_0x1ca7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca7e8_0x1ca7e8");
#endif

    switch (ctx->pc) {
        case 0x1ca7f0u: goto label_1ca7f0;
        case 0x1ca838u: goto label_1ca838;
        default: break;
    }

    ctx->pc = 0x1ca7e8u;

    // 0x1ca7e8: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CA7E8u;
    SET_GPR_U32(ctx, 31, 0x1CA7F0u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CA7E8u, 0x1CA7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7F0u;
label_1ca7f0:
    // 0x1ca7f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca7f4: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1ca7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1ca7f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ca7f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca7fc: 0x0  nop
    ctx->pc = 0x1ca7fcu;
    // NOP
    // 0x1ca800: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ca800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ca804: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1ca804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1ca808: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ca808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ca80c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ca80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca810: 0x0  nop
    ctx->pc = 0x1ca810u;
    // NOP
    // 0x1ca814: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1ca814u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1ca818: 0x0  nop
    ctx->pc = 0x1ca818u;
    // NOP
    // 0x1ca81c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ca81cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ca820: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ca820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ca824: 0x0  nop
    ctx->pc = 0x1ca824u;
    // NOP
    // 0x1ca828: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CA828u;
    {
        const bool branch_taken_0x1ca828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca828) {
            ctx->pc = 0x1CA888u;
            return;
        }
    }
    ctx->pc = 0x1CA830u;
    // 0x1ca830: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CA830u;
    SET_GPR_U32(ctx, 31, 0x1CA838u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CA830u, 0x1CA838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA838u;
label_1ca838:
    // 0x1ca838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca83c: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x1ca83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
    // 0x1ca840: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ca840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca844: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ca844u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca848: 0x0  nop
    ctx->pc = 0x1ca848u;
    // NOP
    // 0x1ca84c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1ca84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ca850: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ca850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ca854: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca858: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca85c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca85cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca860: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca860u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca864: 0x9466000a  lhu         $a2, 0xA($v1)
    ctx->pc = 0x1ca864u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1ca868: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ca868u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ca86c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca870: 0x0  nop
    ctx->pc = 0x1ca870u;
    // NOP
    // 0x1ca874: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ca874u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1ca878: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ca878u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ca87c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ca87cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ca880: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CA880u;
    SET_GPR_U32(ctx, 31, 0x1CA888u);
    ctx->pc = 0x1CA884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA880u;
    // 0x1ca884: 0x2445002c  addiu       $a1, $v0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA880u, 0x1CA888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA888u;
}
