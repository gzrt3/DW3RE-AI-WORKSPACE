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

// Function: FUN_001162c0
// Address: 0x1162c0 - 0x11642c
void FUN_001162c0_0x1162c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001162c0_0x1162c0");
#endif

    switch (ctx->pc) {
        case 0x116358u: goto label_116358;
        case 0x11639cu: goto label_11639c;
        case 0x1163fcu: goto label_1163fc;
        default: break;
    }

    ctx->pc = 0x1162c0u;

    // 0x1162c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1162c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1162c4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1162c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1162c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1162c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1162cc: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1162ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x1162d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1162d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1162d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1162d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1162d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1162d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1162dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1162dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162e0: 0xa085018e  sb          $a1, 0x18E($a0)
    ctx->pc = 0x1162e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 398), (uint8_t)GPR_U32(ctx, 5));
    // 0x1162e4: 0x2463aec0  addiu       $v1, $v1, -0x5140
    ctx->pc = 0x1162e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946496));
    // 0x1162e8: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1162e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1162ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1162ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1162f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1162f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1162f4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1162f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1162f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1162F8u;
    {
        const bool branch_taken_0x1162f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1162FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162F8u;
        // 0x1162fc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162f8) {
            ctx->pc = 0x116310u;
            goto label_116310;
        }
    }
    ctx->pc = 0x116300u;
    // 0x116300: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x116300u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x116304: 0xa22001a1  sb          $zero, 0x1A1($s1)
    ctx->pc = 0x116304u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 0));
    // 0x116308: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x116308u;
    {
        const bool branch_taken_0x116308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116308u;
        // 0x11630c: 0x261067a0  addiu       $s0, $s0, 0x67A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116308) {
            ctx->pc = 0x1163F0u;
            goto label_1163f0;
        }
    }
    ctx->pc = 0x116310u;
label_116310:
    // 0x116310: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116310u;
    {
        const bool branch_taken_0x116310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x116314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116310u;
        // 0x116314: 0x3c100032  lui         $s0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116310) {
            ctx->pc = 0x116324u;
            goto label_116324;
        }
    }
    ctx->pc = 0x116318u;
    // 0x116318: 0xa22001a1  sb          $zero, 0x1A1($s1)
    ctx->pc = 0x116318u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 0));
    // 0x11631c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x11631Cu;
    {
        const bool branch_taken_0x11631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11631Cu;
        // 0x116320: 0x261067b0  addiu       $s0, $s0, 0x67B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11631c) {
            ctx->pc = 0x1163F0u;
            goto label_1163f0;
        }
    }
    ctx->pc = 0x116324u;
label_116324:
    // 0x116324: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x116324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x116328: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116328u;
    {
        const bool branch_taken_0x116328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116328u;
        // 0x11632c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116328) {
            ctx->pc = 0x116340u;
            goto label_116340;
        }
    }
    ctx->pc = 0x116330u;
    // 0x116330: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x116330u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x116334: 0xa22001a1  sb          $zero, 0x1A1($s1)
    ctx->pc = 0x116334u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 0));
    // 0x116338: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x116338u;
    {
        const bool branch_taken_0x116338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116338u;
        // 0x11633c: 0x2610a4a0  addiu       $s0, $s0, -0x5B60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116338) {
            ctx->pc = 0x1163F0u;
            goto label_1163f0;
        }
    }
    ctx->pc = 0x116340u;
label_116340:
    // 0x116340: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x116340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116344: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x116344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x116348: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x116348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x11634c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x11634cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x116350: 0x24a52470  addiu       $a1, $a1, 0x2470
    ctx->pc = 0x116350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9328));
    // 0x116354: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x116354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_116358:
    // 0x116358: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x116358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11635c: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11635Cu;
    {
        const bool branch_taken_0x11635c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x11635c) {
            ctx->pc = 0x116384u;
            goto label_116384;
        }
    }
    ctx->pc = 0x116364u;
    // 0x116364: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116364u;
    {
        const bool branch_taken_0x116364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x116364) {
            ctx->pc = 0x116374u;
            goto label_116374;
        }
    }
    ctx->pc = 0x11636Cu;
    // 0x11636c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11636Cu;
    {
        const bool branch_taken_0x11636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11636Cu;
        // 0x116370: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11636c) {
            ctx->pc = 0x116384u;
            goto label_116384;
        }
    }
    ctx->pc = 0x116374u;
label_116374:
    // 0x116374: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x116374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x116378: 0x28e20014  slti        $v0, $a3, 0x14
    ctx->pc = 0x116378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x11637c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11637Cu;
    {
        const bool branch_taken_0x11637c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11637Cu;
        // 0x116380: 0xa71021  addu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11637c) {
            ctx->pc = 0x116358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116358;
        }
    }
    ctx->pc = 0x116384u;
label_116384:
    // 0x116384: 0x0  nop
    ctx->pc = 0x116384u;
    // NOP
    // 0x116388: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x116388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x11638c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x11638cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x116390: 0x24423ac0  addiu       $v0, $v0, 0x3AC0
    ctx->pc = 0x116390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15040));
    // 0x116394: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x116394u;
    SET_GPR_U32(ctx, 31, 0x11639Cu);
    ctx->pc = 0x116398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116394u;
    // 0x116398: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x116394u, 0x11639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11639Cu;
label_11639c:
    // 0x11639c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11639cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1163a0: 0x0  nop
    ctx->pc = 0x1163a0u;
    // NOP
    // 0x1163a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1163a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1163a8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1163a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1163ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1163acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1163b0: 0x0  nop
    ctx->pc = 0x1163b0u;
    // NOP
    // 0x1163b4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1163b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1163b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1163b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1163bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1163bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1163c0: 0x0  nop
    ctx->pc = 0x1163c0u;
    // NOP
    // 0x1163c4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1163c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1163c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1163c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1163cc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1163ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1163d0: 0x0  nop
    ctx->pc = 0x1163d0u;
    // NOP
    // 0x1163d4: 0xa22201a1  sb          $v0, 0x1A1($s1)
    ctx->pc = 0x1163d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 2));
    // 0x1163d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1163d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1163dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1163DCu;
    {
        const bool branch_taken_0x1163dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1163E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163DCu;
        // 0x1163e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163dc) {
            ctx->pc = 0x1163F4u;
            goto label_1163f4;
        }
    }
    ctx->pc = 0x1163E4u;
    // 0x1163e4: 0x922201a1  lbu         $v0, 0x1A1($s1)
    ctx->pc = 0x1163e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x1163e8: 0x24420085  addiu       $v0, $v0, 0x85
    ctx->pc = 0x1163e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 133));
    // 0x1163ec: 0xa22201a1  sb          $v0, 0x1A1($s1)
    ctx->pc = 0x1163ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 2));
label_1163f0:
    // 0x1163f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1163f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1163f4:
    // 0x1163f4: 0xc050564  jal         func_141590
    ctx->pc = 0x1163F4u;
    SET_GPR_U32(ctx, 31, 0x1163FCu);
    ctx->pc = 0x141590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141590u, 0x1163F4u, 0x1163FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163FCu;
label_1163fc:
    // 0x1163fc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1163fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x116400: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x116400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x116404: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x116404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x116408: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x116408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x11640c: 0x8624003c  lh          $a0, 0x3C($s1)
    ctx->pc = 0x11640cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x116410: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x116410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x116414: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x116414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x116418: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x116418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11641c: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x11641cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x116420: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x116420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116424: 0xa623018c  sh          $v1, 0x18C($s1)
    ctx->pc = 0x116424u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 396), (uint16_t)GPR_U32(ctx, 3));
    // 0x116428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x116428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11642cu;
}
