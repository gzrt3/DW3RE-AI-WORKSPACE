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

// Function: entry_0011f840
// Address: 0x11f840 - 0x11f8f8
void entry_0011f840_0x11f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f840_0x11f840");
#endif

    switch (ctx->pc) {
        case 0x11f850u: goto label_11f850;
        case 0x11f8b4u: goto label_11f8b4;
        case 0x11f8e8u: goto label_11f8e8;
        default: break;
    }

    ctx->pc = 0x11f840u;

    // 0x11f840: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x11f840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x11f844: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11f848: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x11F848u;
    SET_GPR_U32(ctx, 31, 0x11F850u);
    ctx->pc = 0x11F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F848u;
    // 0x11f84c: 0xa60202e6  sh          $v0, 0x2E6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x11F848u, 0x11F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F850u;
label_11f850:
    // 0x11f850: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11f850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f854: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x11f854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x11f858: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11f858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11f85c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x11f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x11f860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11f860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f864: 0x0  nop
    ctx->pc = 0x11f864u;
    // NOP
    // 0x11f868: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11f868u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11f86c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11f870: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11f870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f874: 0x0  nop
    ctx->pc = 0x11f874u;
    // NOP
    // 0x11f878: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11f878u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x11f87c: 0x0  nop
    ctx->pc = 0x11f87cu;
    // NOP
    // 0x11f880: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11f884: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x11f884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11f888: 0x0  nop
    ctx->pc = 0x11f888u;
    // NOP
    // 0x11f88c: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11F88Cu;
    {
        const bool branch_taken_0x11f88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F88Cu;
        // 0x11f890: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f88c) {
            ctx->pc = 0x11F8ECu;
            goto label_11f8ec;
        }
    }
    ctx->pc = 0x11F894u;
    // 0x11f894: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11f894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11f898: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x11f898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11f89c: 0x2442fb90  addiu       $v0, $v0, -0x470
    ctx->pc = 0x11f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966160));
    // 0x11f8a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11f8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11f8a4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x11f8a4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x24FB90u));
    // 0x11f8a8: 0x26050250  addiu       $a1, $s0, 0x250
    ctx->pc = 0x11f8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x11f8ac: 0xc066e26  jal         func_19B898
    ctx->pc = 0x11F8ACu;
    SET_GPR_U32(ctx, 31, 0x11F8B4u);
    ctx->pc = 0x11F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F8ACu;
    // 0x11f8b0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x11F8ACu, 0x11F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8B4u;
label_11f8b4:
    // 0x11f8b4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x11f8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f8b8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x11f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x11f8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11f8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f8c0: 0xdf868b38  ld          $a2, -0x74C8($gp)
    ctx->pc = 0x11f8c0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x11f8c4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11f8c8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x11f8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11f8cc: 0x3c024148  lui         $v0, 0x4148
    ctx->pc = 0x11f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16712 << 16));
    // 0x11f8d0: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x11f8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x11f8d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11f8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11f8d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11f8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f8dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x11f8dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11f8e0: 0xc05c5dc  jal         func_171770
    ctx->pc = 0x11F8E0u;
    SET_GPR_U32(ctx, 31, 0x11F8E8u);
    ctx->pc = 0x11F8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F8E0u;
    // 0x11f8e4: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x171770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171770u, 0x11F8E0u, 0x11F8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8E8u;
label_11f8e8:
    // 0x11f8e8: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x11f8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_11f8ec:
    // 0x11f8ec: 0x26060330  addiu       $a2, $s0, 0x330
    ctx->pc = 0x11f8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x11f8f0: 0xc066e02  jal         func_19B808
    ctx->pc = 0x11F8F0u;
    SET_GPR_U32(ctx, 31, 0x11F8F8u);
    ctx->pc = 0x11F8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F8F0u;
    // 0x11f8f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x11F8F0u, 0x11F8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8F8u;
}
