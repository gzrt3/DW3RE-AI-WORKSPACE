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

// Function: FUN_001bc750
// Address: 0x1bc750 - 0x1bc8f4
void FUN_001bc750_0x1bc750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bc750_0x1bc750");
#endif

    switch (ctx->pc) {
        case 0x1bc784u: goto label_1bc784;
        case 0x1bc7a4u: goto label_1bc7a4;
        default: break;
    }

    ctx->pc = 0x1bc750u;

    // 0x1bc750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bc750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bc754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bc754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bc758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bc75c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc764: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC764u;
    {
        const bool branch_taken_0x1bc764 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC764u;
        // 0x1bc768: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc764) {
            ctx->pc = 0x1BC78Cu;
            goto label_1bc78c;
        }
    }
    ctx->pc = 0x1BC76Cu;
    // 0x1bc76c: 0x92270074  lbu         $a3, 0x74($s1)
    ctx->pc = 0x1bc76cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x1bc770: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1bc770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bc774: 0x92290075  lbu         $t1, 0x75($s1)
    ctx->pc = 0x1bc774u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 117)));
    // 0x1bc778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc77c: 0xc0804a0  jal         func_201280
    ctx->pc = 0x1BC77Cu;
    SET_GPR_U32(ctx, 31, 0x1BC784u);
    ctx->pc = 0x1BC780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC77Cu;
    // 0x1bc780: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201280u, 0x1BC77Cu, 0x1BC784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC784u;
label_1bc784:
    // 0x1bc784: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC784u;
    {
        const bool branch_taken_0x1bc784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC784u;
        // 0x1bc788: 0x92250063  lbu         $a1, 0x63($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc784) {
            ctx->pc = 0x1BC7A8u;
            goto label_1bc7a8;
        }
    }
    ctx->pc = 0x1BC78Cu;
label_1bc78c:
    // 0x1bc78c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1bc78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bc790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc794: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1bc794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bc798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bc798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc79c: 0xc0804a0  jal         func_201280
    ctx->pc = 0x1BC79Cu;
    SET_GPR_U32(ctx, 31, 0x1BC7A4u);
    ctx->pc = 0x1BC7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC79Cu;
    // 0x1bc7a0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201280u, 0x1BC79Cu, 0x1BC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7A4u;
label_1bc7a4:
    // 0x1bc7a4: 0x92250063  lbu         $a1, 0x63($s1)
    ctx->pc = 0x1bc7a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 99)));
label_1bc7a8:
    // 0x1bc7a8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bc7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bc7ac: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bc7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1bc7b0: 0x246353a0  addiu       $v1, $v1, 0x53A0
    ctx->pc = 0x1bc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21408));
    // 0x1bc7b4: 0x24845374  addiu       $a0, $a0, 0x5374
    ctx->pc = 0x1bc7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21364));
    // 0x1bc7b8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1bc7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1bc7bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bc7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bc7c0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1bc7c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc7c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bc7c8: 0x92250067  lbu         $a1, 0x67($s1)
    ctx->pc = 0x1bc7c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 103)));
    // 0x1bc7cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bc7d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bc7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bc7d4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1bc7d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bc7d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bc7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bc7dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bc7e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bc7e4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1bc7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1bc7e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bc7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bc7ec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1bc7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc7f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bc7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bc7f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bc7f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bc7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bc7fc: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x1bc7fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x1bc800: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC800u;
    {
        const bool branch_taken_0x1bc800 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc800) {
            ctx->pc = 0x1BC80Cu;
            goto label_1bc80c;
        }
    }
    ctx->pc = 0x1BC808u;
    // 0x1bc808: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x1bc808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1bc80c:
    // 0x1bc80c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bc810: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1bc810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bc814: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1bc814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1bc818: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bc818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bc81c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1bc81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1bc820: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1bc820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bc824: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x1bc824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x1bc828: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC828u;
    {
        const bool branch_taken_0x1bc828 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc828) {
            ctx->pc = 0x1BC834u;
            goto label_1bc834;
        }
    }
    ctx->pc = 0x1BC830u;
    // 0x1bc830: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x1bc830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1bc834:
    // 0x1bc834: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1bc834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1bc838: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bc838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1bc83c: 0x92250064  lbu         $a1, 0x64($s1)
    ctx->pc = 0x1bc83cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1bc840: 0x248453b8  addiu       $a0, $a0, 0x53B8
    ctx->pc = 0x1bc840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21432));
    // 0x1bc844: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bc844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bc848: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1bc848u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1bc84c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bc84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bc850: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1bc850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bc854: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bc854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bc858: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1bc858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1bc85c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bc85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bc860: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bc860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bc864: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC864u;
    {
        const bool branch_taken_0x1bc864 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc864) {
            ctx->pc = 0x1BC870u;
            goto label_1bc870;
        }
    }
    ctx->pc = 0x1BC86Cu;
    // 0x1bc86c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bc86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bc870:
    // 0x1bc870: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1bc870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1bc874: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bc874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1bc878: 0x92250065  lbu         $a1, 0x65($s1)
    ctx->pc = 0x1bc878u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 101)));
    // 0x1bc87c: 0x248453e8  addiu       $a0, $a0, 0x53E8
    ctx->pc = 0x1bc87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21480));
    // 0x1bc880: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bc880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc884: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1bc884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1bc888: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bc888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bc88c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1bc88cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bc890: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1bc890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1bc894: 0x9224006b  lbu         $a0, 0x6B($s1)
    ctx->pc = 0x1bc894u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 107)));
    // 0x1bc898: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC898u;
    {
        const bool branch_taken_0x1bc898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc898) {
            ctx->pc = 0x1BC8C8u;
            goto label_1bc8c8;
        }
    }
    ctx->pc = 0x1BC8A0u;
    // 0x1bc8a0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1bc8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc8a4: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1bc8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1bc8a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc8a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc8ac: 0x0  nop
    ctx->pc = 0x1bc8acu;
    // NOP
    // 0x1bc8b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bc8b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bc8b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bc8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bc8b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bc8b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bc8bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1bc8bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1bc8c0: 0x0  nop
    ctx->pc = 0x1bc8c0u;
    // NOP
    // 0x1bc8c4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1bc8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1bc8c8:
    // 0x1bc8c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1bc8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bc8cc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1bc8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bc8d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bc8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bc8d4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1bc8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1bc8d8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1bc8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bc8dc: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bc8dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bc8e0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC8E0u;
    {
        const bool branch_taken_0x1bc8e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8e0) {
            ctx->pc = 0x1BC8ECu;
            goto label_1bc8ec;
        }
    }
    ctx->pc = 0x1BC8E8u;
    // 0x1bc8e8: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bc8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bc8ec:
    // 0x1bc8ec: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1bc8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1bc8f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1bc8f4u;
}
