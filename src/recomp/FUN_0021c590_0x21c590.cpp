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

// Function: FUN_0021c590
// Address: 0x21c590 - 0x21c7d0
void FUN_0021c590_0x21c590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021c590_0x21c590");
#endif

    switch (ctx->pc) {
        case 0x21c5dcu: goto label_21c5dc;
        case 0x21c640u: goto label_21c640;
        case 0x21c690u: goto label_21c690;
        case 0x21c6a8u: goto label_21c6a8;
        default: break;
    }

    ctx->pc = 0x21c590u;

    // 0x21c590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21c590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21c594: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21c598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c59c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21c5a0: 0x84228d3c  lh          $v0, -0x72C4($at)
    ctx->pc = 0x21c5a0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x588D3Cu));
    // 0x21c5a4: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x21c5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x21c5a8: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x21C5A8u;
    {
        const bool branch_taken_0x21c5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5A8u;
        // 0x21c5ac: 0x26108d00  addiu       $s0, $s0, -0x7300 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5a8) {
            ctx->pc = 0x21C698u;
            goto label_21c698;
        }
    }
    ctx->pc = 0x21C5B0u;
    // 0x21c5b0: 0x8f8392c4  lw          $v1, -0x6D3C($gp)
    ctx->pc = 0x21c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939332)));
    // 0x21c5b4: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x21c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x21c5b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21c5bc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x21c5bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21c5c0: 0x0  nop
    ctx->pc = 0x21c5c0u;
    // NOP
    // 0x21c5c4: 0x0  nop
    ctx->pc = 0x21c5c4u;
    // NOP
    // 0x21c5c8: 0x1010  mfhi        $v0
    ctx->pc = 0x21c5c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x21c5cc: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x21C5CCu;
    {
        const bool branch_taken_0x21c5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5CCu;
        // 0x21c5d0: 0xaf8392c4  sw          $v1, -0x6D3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5cc) {
            ctx->pc = 0x21C69Cu;
            goto label_21c69c;
        }
    }
    ctx->pc = 0x21C5D4u;
    // 0x21c5d4: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x21C5D4u;
    SET_GPR_U32(ctx, 31, 0x21C5DCu);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x21C5D4u, 0x21C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C5DCu;
label_21c5dc:
    // 0x21c5dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c5e0: 0x0  nop
    ctx->pc = 0x21c5e0u;
    // NOP
    // 0x21c5e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21c5e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21c5e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21c5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21c5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c5f0: 0x0  nop
    ctx->pc = 0x21c5f0u;
    // NOP
    // 0x21c5f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21c5f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21c5f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x21c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x21c5fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c600: 0x0  nop
    ctx->pc = 0x21c600u;
    // NOP
    // 0x21c604: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x21c604u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x21c608: 0x0  nop
    ctx->pc = 0x21c608u;
    // NOP
    // 0x21c60c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21c60cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x21c610: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x21c610u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x21c614: 0x0  nop
    ctx->pc = 0x21c614u;
    // NOP
    // 0x21c618: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x21C618u;
    {
        const bool branch_taken_0x21c618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C618u;
        // 0x21c61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c618) {
            ctx->pc = 0x21C6A0u;
            goto label_21c6a0;
        }
    }
    ctx->pc = 0x21C620u;
    // 0x21c620: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x21c620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x21c624: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x21c624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21c628: 0x2484d930  addiu       $a0, $a0, -0x26D0
    ctx->pc = 0x21c628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957360));
    // 0x21c62c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x21c62cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x28D930u));
    // 0x21c630: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x21c630u;
    { uint32_t bits = FAST_READ32(0x28D938u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c634: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x21c634u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x21c638: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x21C638u;
    SET_GPR_U32(ctx, 31, 0x21C640u);
    ctx->pc = 0x21C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C638u;
    // 0x21c63c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x21C638u, 0x21C640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C640u;
label_21c640:
    // 0x21c640: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c644: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x21c644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x21c648: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x21c648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21c64c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21c64cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21c650: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x21c650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x21c654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21c654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c658: 0x0  nop
    ctx->pc = 0x21c658u;
    // NOP
    // 0x21c65c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21c65cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21c660: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x21c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21c664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c668: 0x0  nop
    ctx->pc = 0x21c668u;
    // NOP
    // 0x21c66c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x21c66cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x21c670: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21c670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x21c674: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x21c674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x21c678: 0x0  nop
    ctx->pc = 0x21c678u;
    // NOP
    // 0x21c67c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21c680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c684: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21c684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c688: 0xc050ed0  jal         func_143B40
    ctx->pc = 0x21C688u;
    SET_GPR_U32(ctx, 31, 0x21C690u);
    ctx->pc = 0x21C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C688u;
    // 0x21c68c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B40u, 0x21C688u, 0x21C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C690u;
label_21c690:
    // 0x21c690: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21C690u;
    {
        const bool branch_taken_0x21c690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c690) {
            ctx->pc = 0x21C69Cu;
            goto label_21c69c;
        }
    }
    ctx->pc = 0x21C698u;
label_21c698:
    // 0x21c698: 0xaf8092c4  sw          $zero, -0x6D3C($gp)
    ctx->pc = 0x21c698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939332), GPR_U32(ctx, 0));
label_21c69c:
    // 0x21c69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21c6a0:
    // 0x21c6a0: 0xc04fe24  jal         func_13F890
    ctx->pc = 0x21C6A0u;
    SET_GPR_U32(ctx, 31, 0x21C6A8u);
    ctx->pc = 0x13F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F890u, 0x21C6A0u, 0x21C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6A8u;
label_21c6a8:
    // 0x21c6a8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x21c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x21c6ac: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x21c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x21c6b0: 0xdf8387d0  ld          $v1, -0x7830($gp)
    ctx->pc = 0x21c6b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
    // 0x21c6b4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x21c6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x21c6b8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x21C6B8u;
    {
        const bool branch_taken_0x21c6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c6b8) {
            ctx->pc = 0x21C740u;
            goto label_21c740;
        }
    }
    ctx->pc = 0x21C6C0u;
    // 0x21c6c0: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x21c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21c6c4: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x21c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
    // 0x21c6c8: 0x3464fa35  ori         $a0, $v1, 0xFA35
    ctx->pc = 0x21c6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x21c6cc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21c6ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c6d0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x21c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x21c6d4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c6d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c6d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c6dc: 0x0  nop
    ctx->pc = 0x21c6dcu;
    // NOP
    // 0x21c6e0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x21c6e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x21c6e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21c6e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c6e8: 0x0  nop
    ctx->pc = 0x21c6e8u;
    // NOP
    // 0x21c6ec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x21C6ECu;
    {
        const bool branch_taken_0x21c6ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6ECu;
        // 0x21c6f0: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6ec) {
            ctx->pc = 0x21C708u;
            goto label_21c708;
        }
    }
    ctx->pc = 0x21C6F4u;
    // 0x21c6f4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x21c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x21c6f8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c6fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c6fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c700: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21C700u;
    {
        const bool branch_taken_0x21c700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C700u;
        // 0x21c704: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c700) {
            ctx->pc = 0x21C738u;
            goto label_21c738;
        }
    }
    ctx->pc = 0x21C708u;
label_21c708:
    // 0x21c708: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c70c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c70cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c710: 0x0  nop
    ctx->pc = 0x21c710u;
    // NOP
    // 0x21c714: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21c714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c718: 0x0  nop
    ctx->pc = 0x21c718u;
    // NOP
    // 0x21c71c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x21C71Cu;
    {
        const bool branch_taken_0x21c71c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21c71c) {
            ctx->pc = 0x21C738u;
            goto label_21c738;
        }
    }
    ctx->pc = 0x21C724u;
    // 0x21c724: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x21c724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x21c728: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c72c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c72cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c730: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x21C730u;
    {
        const bool branch_taken_0x21c730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C730u;
        // 0x21c734: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c730) {
            ctx->pc = 0x21C738u;
            goto label_21c738;
        }
    }
    ctx->pc = 0x21C738u;
label_21c738:
    // 0x21c738: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x21C738u;
    {
        const bool branch_taken_0x21c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C738u;
        // 0x21c73c: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c738) {
            ctx->pc = 0x21C7CCu;
            goto label_21c7cc;
        }
    }
    ctx->pc = 0x21C740u;
label_21c740:
    // 0x21c740: 0xdf8387d0  ld          $v1, -0x7830($gp)
    ctx->pc = 0x21c740u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
    // 0x21c744: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x21c744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x21c748: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x21C748u;
    {
        const bool branch_taken_0x21c748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c748) {
            ctx->pc = 0x21C7CCu;
            goto label_21c7cc;
        }
    }
    ctx->pc = 0x21C750u;
    // 0x21c750: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x21c750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21c754: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x21c754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
    // 0x21c758: 0x3464fa35  ori         $a0, $v1, 0xFA35
    ctx->pc = 0x21c758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x21c75c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21c75cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c760: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x21c760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x21c764: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c76c: 0x0  nop
    ctx->pc = 0x21c76cu;
    // NOP
    // 0x21c770: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x21c770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21c774: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21c774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c778: 0x0  nop
    ctx->pc = 0x21c778u;
    // NOP
    // 0x21c77c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x21C77Cu;
    {
        const bool branch_taken_0x21c77c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C77Cu;
        // 0x21c780: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c77c) {
            ctx->pc = 0x21C798u;
            goto label_21c798;
        }
    }
    ctx->pc = 0x21C784u;
    // 0x21c784: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x21c784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x21c788: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c78c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c78cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c790: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21C790u;
    {
        const bool branch_taken_0x21c790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C790u;
        // 0x21c794: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c790) {
            ctx->pc = 0x21C7C8u;
            goto label_21c7c8;
        }
    }
    ctx->pc = 0x21C798u;
label_21c798:
    // 0x21c798: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c79c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c7a0: 0x0  nop
    ctx->pc = 0x21c7a0u;
    // NOP
    // 0x21c7a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21c7a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c7a8: 0x0  nop
    ctx->pc = 0x21c7a8u;
    // NOP
    // 0x21c7ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x21C7ACu;
    {
        const bool branch_taken_0x21c7ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21c7ac) {
            ctx->pc = 0x21C7C8u;
            goto label_21c7c8;
        }
    }
    ctx->pc = 0x21C7B4u;
    // 0x21c7b4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x21c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x21c7b8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c7bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c7bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c7c0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x21C7C0u;
    {
        const bool branch_taken_0x21c7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7C0u;
        // 0x21c7c4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7c0) {
            ctx->pc = 0x21C7C8u;
            goto label_21c7c8;
        }
    }
    ctx->pc = 0x21C7C8u;
label_21c7c8:
    // 0x21c7c8: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x21c7c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_21c7cc:
    // 0x21c7cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x21c7d0u;
}
