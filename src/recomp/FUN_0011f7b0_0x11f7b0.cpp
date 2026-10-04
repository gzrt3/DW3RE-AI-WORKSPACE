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

// Function: FUN_0011f7b0
// Address: 0x11f7b0 - 0x11f8fc
void FUN_0011f7b0_0x11f7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011f7b0_0x11f7b0");
#endif

    switch (ctx->pc) {
        case 0x11f7d4u: goto label_11f7d4;
        case 0x11f808u: goto label_11f808;
        case 0x11f830u: goto label_11f830;
        case 0x11f850u: goto label_11f850;
        case 0x11f8b4u: goto label_11f8b4;
        case 0x11f8e8u: goto label_11f8e8;
        case 0x11f8f8u: goto label_11f8f8;
        default: break;
    }

    ctx->pc = 0x11f7b0u;

    // 0x11f7b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11f7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11f7b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11f7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11f7b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11f7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11f7bc: 0x948202e6  lhu         $v0, 0x2E6($a0)
    ctx->pc = 0x11f7bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x11f7c0: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x11f7c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x11f7c4: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F7C4u;
    {
        const bool branch_taken_0x11f7c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7C4u;
        // 0x11f7c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7c4) {
            ctx->pc = 0x11F7DCu;
            goto label_11f7dc;
        }
    }
    ctx->pc = 0x11F7CCu;
    // 0x11f7cc: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x11F7CCu;
    SET_GPR_U32(ctx, 31, 0x11F7D4u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x11F7CCu, 0x11F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F7D4u;
label_11f7d4:
    // 0x11f7d4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x11F7D4u;
    {
        const bool branch_taken_0x11f7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7D4u;
        // 0x11f7d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7d4) {
            ctx->pc = 0x11F8FCu;
            return;
        }
    }
    ctx->pc = 0x11F7DCu;
label_11f7dc:
    // 0x11f7dc: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x11f7dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11f7e0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F7E0u;
    {
        const bool branch_taken_0x11f7e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f7e0) {
            ctx->pc = 0x11F808u;
            goto label_11f808;
        }
    }
    ctx->pc = 0x11F7E8u;
    // 0x11f7e8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11f7ec: 0x260402d0  addiu       $a0, $s0, 0x2D0
    ctx->pc = 0x11f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x11f7f0: 0x2442fb80  addiu       $v0, $v0, -0x480
    ctx->pc = 0x11f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966144));
    // 0x11f7f4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x11f7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11f7f8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x11f7f8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x24FB80u));
    // 0x11f7fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11f7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f800: 0xc066e02  jal         func_19B808
    ctx->pc = 0x11F800u;
    SET_GPR_U32(ctx, 31, 0x11F808u);
    ctx->pc = 0x11F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F800u;
    // 0x11f804: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x11F800u, 0x11F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F808u;
label_11f808:
    // 0x11f808: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x11f808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x11f80c: 0x28410015  slti        $at, $v0, 0x15
    ctx->pc = 0x11f80cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x11f810: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x11F810u;
    {
        const bool branch_taken_0x11f810 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f810) {
            ctx->pc = 0x11F840u;
            goto label_11f840;
        }
    }
    ctx->pc = 0x11F818u;
    // 0x11f818: 0x920202e3  lbu         $v0, 0x2E3($s0)
    ctx->pc = 0x11f818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x11f81c: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x11f81cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x11f820: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F820u;
    {
        const bool branch_taken_0x11f820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F820u;
        // 0x11f824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f820) {
            ctx->pc = 0x11F838u;
            goto label_11f838;
        }
    }
    ctx->pc = 0x11F828u;
    // 0x11f828: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x11F828u;
    SET_GPR_U32(ctx, 31, 0x11F830u);
    ctx->pc = 0x11F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F828u;
    // 0x11f82c: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x11F828u, 0x11F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F830u;
label_11f830:
    // 0x11f830: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x11F830u;
    {
        const bool branch_taken_0x11f830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f830) {
            ctx->pc = 0x11F8F8u;
            goto label_11f8f8;
        }
    }
    ctx->pc = 0x11F838u;
label_11f838:
    // 0x11f838: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x11f838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x11f83c: 0xa20202e3  sb          $v0, 0x2E3($s0)
    ctx->pc = 0x11f83cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
label_11f840:
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
label_11f8f8:
    // 0x11f8f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11f8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x11f8fcu;
}
