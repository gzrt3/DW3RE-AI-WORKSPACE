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

// Function: FUN_001715d0
// Address: 0x1715d0 - 0x17175c
void FUN_001715d0_0x1715d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001715d0_0x1715d0");
#endif

    switch (ctx->pc) {
        case 0x1715fcu: goto label_1715fc;
        case 0x17161cu: goto label_17161c;
        case 0x171628u: goto label_171628;
        default: break;
    }

    ctx->pc = 0x1715d0u;

    // 0x1715d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1715d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1715d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1715d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1715d8: 0x94831132  lhu         $v1, 0x1132($a0)
    ctx->pc = 0x1715d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
    // 0x1715dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1715dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1715e0: 0xa4831132  sh          $v1, 0x1132($a0)
    ctx->pc = 0x1715e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4402), (uint16_t)GPR_U32(ctx, 3));
    // 0x1715e4: 0x94831132  lhu         $v1, 0x1132($a0)
    ctx->pc = 0x1715e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
    // 0x1715e8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1715e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1715ec: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1715ECu;
    {
        const bool branch_taken_0x1715ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1715F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715ECu;
        // 0x1715f0: 0x3c034140  lui         $v1, 0x4140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715ec) {
            ctx->pc = 0x171604u;
            goto label_171604;
        }
    }
    ctx->pc = 0x1715F4u;
    // 0x1715f4: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x1715F4u;
    SET_GPR_U32(ctx, 31, 0x1715FCu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1715F4u, 0x1715FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715FCu;
label_1715fc:
    // 0x1715fc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1715FCu;
    {
        const bool branch_taken_0x1715fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715FCu;
        // 0x171600: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715fc) {
            ctx->pc = 0x17175Cu;
            return;
        }
    }
    ctx->pc = 0x171604u;
label_171604:
    // 0x171604: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x171604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171608: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x171608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17160c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17160cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171610: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x171610u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171614: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x171614u;
    {
        const bool branch_taken_0x171614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171614u;
        // 0x171618: 0x3c063f80  lui         $a2, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171614) {
            ctx->pc = 0x171748u;
            goto label_171748;
        }
    }
    ctx->pc = 0x17161Cu;
label_17161c:
    // 0x17161c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17161cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171620: 0x24670090  addiu       $a3, $v1, 0x90
    ctx->pc = 0x171620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x171624: 0x246800a0  addiu       $t0, $v1, 0xA0
    ctx->pc = 0x171624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_171628:
    // 0x171628: 0x14c6821  addu        $t5, $t2, $t4
    ctx->pc = 0x171628u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x17162c: 0xc4801950  lwc1        $f0, 0x1950($a0)
    ctx->pc = 0x17162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171630: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x171630u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x171634: 0x0  nop
    ctx->pc = 0x171634u;
    // NOP
    // 0x171638: 0x0  nop
    ctx->pc = 0x171638u;
    // NOP
    // 0x17163c: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x17163Cu;
    {
        const bool branch_taken_0x17163c = (GPR_S32(ctx, 13) < 0);
        if (branch_taken_0x17163c) {
            ctx->pc = 0x171650u;
            goto label_171650;
        }
    }
    ctx->pc = 0x171644u;
    // 0x171644: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x171644u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171648: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171648u;
    {
        const bool branch_taken_0x171648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171648u;
        // 0x17164c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171648) {
            ctx->pc = 0x17166Cu;
            goto label_17166c;
        }
    }
    ctx->pc = 0x171650u;
label_171650:
    // 0x171650: 0xd2842  srl         $a1, $t5, 1
    ctx->pc = 0x171650u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x171654: 0x31a30001  andi        $v1, $t5, 0x1
    ctx->pc = 0x171654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x171658: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x171658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x17165c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17165cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171660: 0x0  nop
    ctx->pc = 0x171660u;
    // NOP
    // 0x171664: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x171668: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x171668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17166c:
    // 0x17166c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17166cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171670: 0xc4801120  lwc1        $f0, 0x1120($a0)
    ctx->pc = 0x171670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171674: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x171674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x171678: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x171678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x17167c: 0xc4801954  lwc1        $f0, 0x1954($a0)
    ctx->pc = 0x17167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171680: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x171680u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x171684: 0x0  nop
    ctx->pc = 0x171684u;
    // NOP
    // 0x171688: 0x0  nop
    ctx->pc = 0x171688u;
    // NOP
    // 0x17168c: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x17168Cu;
    {
        const bool branch_taken_0x17168c = (GPR_S32(ctx, 13) < 0);
        if (branch_taken_0x17168c) {
            ctx->pc = 0x1716A0u;
            goto label_1716a0;
        }
    }
    ctx->pc = 0x171694u;
    // 0x171694: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x171694u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171698: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171698u;
    {
        const bool branch_taken_0x171698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171698u;
        // 0x17169c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171698) {
            ctx->pc = 0x1716BCu;
            goto label_1716bc;
        }
    }
    ctx->pc = 0x1716A0u;
label_1716a0:
    // 0x1716a0: 0xd2842  srl         $a1, $t5, 1
    ctx->pc = 0x1716a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x1716a4: 0x31a30001  andi        $v1, $t5, 0x1
    ctx->pc = 0x1716a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x1716a8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1716a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1716ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1716acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1716b0: 0x0  nop
    ctx->pc = 0x1716b0u;
    // NOP
    // 0x1716b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1716b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1716b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1716b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1716bc:
    // 0x1716bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1716bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1716c0: 0xc4801124  lwc1        $f0, 0x1124($a0)
    ctx->pc = 0x1716c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1716c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1716c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1716c8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1716c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1716cc: 0xc4801958  lwc1        $f0, 0x1958($a0)
    ctx->pc = 0x1716ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1716d0: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x1716d0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x1716d4: 0x0  nop
    ctx->pc = 0x1716d4u;
    // NOP
    // 0x1716d8: 0x0  nop
    ctx->pc = 0x1716d8u;
    // NOP
    // 0x1716dc: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1716DCu;
    {
        const bool branch_taken_0x1716dc = (GPR_S32(ctx, 13) < 0);
        if (branch_taken_0x1716dc) {
            ctx->pc = 0x1716F0u;
            goto label_1716f0;
        }
    }
    ctx->pc = 0x1716E4u;
    // 0x1716e4: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x1716e4u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1716e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1716E8u;
    {
        const bool branch_taken_0x1716e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1716ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1716E8u;
        // 0x1716ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1716e8) {
            ctx->pc = 0x17170Cu;
            goto label_17170c;
        }
    }
    ctx->pc = 0x1716F0u;
label_1716f0:
    // 0x1716f0: 0xd2842  srl         $a1, $t5, 1
    ctx->pc = 0x1716f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x1716f4: 0x31a30001  andi        $v1, $t5, 0x1
    ctx->pc = 0x1716f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x1716f8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1716f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1716fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1716fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171700: 0x0  nop
    ctx->pc = 0x171700u;
    // NOP
    // 0x171704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x171708: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x171708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17170c:
    // 0x17170c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17170cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171710: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x171710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x171714: 0x2d430040  sltiu       $v1, $t2, 0x40
    ctx->pc = 0x171714u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x171718: 0xc4801128  lwc1        $f0, 0x1128($a0)
    ctx->pc = 0x171718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17171c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17171cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x171720: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x171720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x171724: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x171724u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x171728: 0x94851130  lhu         $a1, 0x1130($a0)
    ctx->pc = 0x171728u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4400)));
    // 0x17172c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x17172cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x171730: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x171730u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x171734: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x171734u;
    {
        const bool branch_taken_0x171734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171734u;
        // 0x171738: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171734) {
            ctx->pc = 0x171628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171628;
        }
    }
    ctx->pc = 0x17173Cu;
    // 0x17173c: 0x256b0820  addiu       $t3, $t3, 0x820
    ctx->pc = 0x17173cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2080));
    // 0x171740: 0x258c0040  addiu       $t4, $t4, 0x40
    ctx->pc = 0x171740u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x171744: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x171744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_171748:
    // 0x171748: 0x94831138  lhu         $v1, 0x1138($a0)
    ctx->pc = 0x171748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4408)));
    // 0x17174c: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x17174cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x171750: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x171750u;
    {
        const bool branch_taken_0x171750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171750u;
        // 0x171754: 0x8b1821  addu        $v1, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171750) {
            ctx->pc = 0x17161Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17161c;
        }
    }
    ctx->pc = 0x171758u;
    // 0x171758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x17175cu;
}
