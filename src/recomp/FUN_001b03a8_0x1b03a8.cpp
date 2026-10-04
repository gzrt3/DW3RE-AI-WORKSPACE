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

// Function: FUN_001b03a8
// Address: 0x1b03a8 - 0x1b0580
void FUN_001b03a8_0x1b03a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b03a8_0x1b03a8");
#endif

    switch (ctx->pc) {
        case 0x1b03f8u: goto label_1b03f8;
        case 0x1b040cu: goto label_1b040c;
        case 0x1b04a4u: goto label_1b04a4;
        case 0x1b04b8u: goto label_1b04b8;
        case 0x1b04c4u: goto label_1b04c4;
        case 0x1b04d0u: goto label_1b04d0;
        case 0x1b04e4u: goto label_1b04e4;
        case 0x1b0528u: goto label_1b0528;
        case 0x1b0544u: goto label_1b0544;
        case 0x1b0560u: goto label_1b0560;
        default: break;
    }

    ctx->pc = 0x1b03a8u;

    // 0x1b03a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b03a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b03ac: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b03acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1b03b0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b03b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1b03b4: 0x3c150028  lui         $s5, 0x28
    ctx->pc = 0x1b03b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
    // 0x1b03b8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b03b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b03bc: 0x8ea272b4  lw          $v0, 0x72B4($s5)
    ctx->pc = 0x1b03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2872B4u));
    // 0x1b03c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1b03c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03c4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b03c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b03c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b03c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b03cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b03ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b03d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b03d4: 0x24727380  addiu       $s2, $v1, 0x7380
    ctx->pc = 0x1b03d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 29568));
    // 0x1b03d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b03d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b03dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b03dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03e0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b03e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b03e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b03e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b03e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B03E8u;
    {
        const bool branch_taken_0x1b03e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03E8u;
        // 0x1b03ec: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03e8) {
            ctx->pc = 0x1B0404u;
            goto label_1b0404;
        }
    }
    ctx->pc = 0x1B03F0u;
    // 0x1b03f0: 0xc06bebc  jal         func_1AFAF0
    ctx->pc = 0x1B03F0u;
    SET_GPR_U32(ctx, 31, 0x1B03F8u);
    ctx->pc = 0x1AFAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAF0u, 0x1B03F0u, 0x1B03F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B03F8u;
label_1b03f8:
    // 0x1b03f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b03f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b03fc: 0x10430059  beq         $v0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x1B03FCu;
    {
        const bool branch_taken_0x1b03fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03FCu;
        // 0x1b0400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03fc) {
            ctx->pc = 0x1B0564u;
            goto label_1b0564;
        }
    }
    ctx->pc = 0x1B0404u;
label_1b0404:
    // 0x1b0404: 0xc06be60  jal         func_1AF980
    ctx->pc = 0x1B0404u;
    SET_GPR_U32(ctx, 31, 0x1B040Cu);
    ctx->pc = 0x1B0408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0404u;
    // 0x1b0408: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF980u, 0x1B0404u, 0x1B040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B040Cu;
label_1b040c:
    // 0x1b040c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1B040Cu;
    {
        const bool branch_taken_0x1b040c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B040Cu;
        // 0x1b0410: 0x3c080029  lui         $t0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b040c) {
            ctx->pc = 0x1B0544u;
            goto label_1b0544;
        }
    }
    ctx->pc = 0x1B0414u;
    // 0x1b0414: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x1b0414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x1b0418: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x1b0418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x1b041c: 0x3c130029  lui         $s3, 0x29
    ctx->pc = 0x1b041cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)41 << 16));
    // 0x1b0420: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x1b0420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
    // 0x1b0424: 0x26648380  addiu       $a0, $s3, -0x7C80
    ctx->pc = 0x1b0424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935424));
    // 0x1b0428: 0x25058440  addiu       $a1, $t0, -0x7BC0
    ctx->pc = 0x1b0428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935616));
    // 0x1b042c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b042cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0430: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b0430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0434: 0xa242000c  sb          $v0, 0xC($s2)
    ctx->pc = 0x1b0434u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b0438: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b0438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b043c: 0xa243000d  sb          $v1, 0xD($s2)
    ctx->pc = 0x1b043cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b0440: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1b0440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1b0444: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x1b0444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x1b0448: 0xa242000e  sb          $v0, 0xE($s2)
    ctx->pc = 0x1b0448u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b044c: 0xae450014  sw          $a1, 0x14($s2)
    ctx->pc = 0x1b044cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 5));
    // 0x1b0450: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x1b0450u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1b0454: 0x10e60008  beq         $a3, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0454u;
    {
        const bool branch_taken_0x1b0454 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1B0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0454u;
        // 0x1b0458: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0454) {
            ctx->pc = 0x1B0478u;
            goto label_1b0478;
        }
    }
    ctx->pc = 0x1B045Cu;
    // 0x1b045c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B045Cu;
    {
        const bool branch_taken_0x1b045c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B045Cu;
        // 0x1b0460: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b045c) {
            ctx->pc = 0x1B0488u;
            goto label_1b0488;
        }
    }
    ctx->pc = 0x1B0464u;
    // 0x1b0464: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b0464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0468: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0468u;
    {
        const bool branch_taken_0x1b0468 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0468u;
        // 0x1b046c: 0x24020924  addiu       $v0, $zero, 0x924 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0468) {
            ctx->pc = 0x1B0484u;
            goto label_1b0484;
        }
    }
    ctx->pc = 0x1B0470u;
    // 0x1b0470: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0470u;
    {
        const bool branch_taken_0x1b0470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0470) {
            ctx->pc = 0x1B0488u;
            goto label_1b0488;
        }
    }
    ctx->pc = 0x1B0478u;
label_1b0478:
    // 0x1b0478: 0x24020918  addiu       $v0, $zero, 0x918
    ctx->pc = 0x1b0478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2328));
    // 0x1b047c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B047Cu;
    {
        const bool branch_taken_0x1b047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B047Cu;
        // 0x1b0480: 0x2222818  mult        $a1, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b047c) {
            ctx->pc = 0x1B0488u;
            goto label_1b0488;
        }
    }
    ctx->pc = 0x1B0484u;
label_1b0484:
    // 0x1b0484: 0x2222818  mult        $a1, $s1, $v0
    ctx->pc = 0x1b0484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1b0488:
    // 0x1b0488: 0x8ea272b4  lw          $v0, 0x72B4($s5)
    ctx->pc = 0x1b0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29364)));
    // 0x1b048c: 0x25108440  addiu       $s0, $t0, -0x7BC0
    ctx->pc = 0x1b048cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935616));
    // 0x1b0490: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b0490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b0494: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0494u;
    {
        const bool branch_taken_0x1b0494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0494u;
        // 0x1b0498: 0xad008440  sw          $zero, -0x7BC0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294935616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0494) {
            ctx->pc = 0x1B04A4u;
            goto label_1b04a4;
        }
    }
    ctx->pc = 0x1B049Cu;
    // 0x1b049c: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B049Cu;
    SET_GPR_U32(ctx, 31, 0x1B04A4u);
    ctx->pc = 0x1B04A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B049Cu;
    // 0x1b04a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B049Cu, 0x1B04A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04A4u;
label_1b04a4:
    // 0x1b04a4: 0x26738380  addiu       $s3, $s3, -0x7C80
    ctx->pc = 0x1b04a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935424));
    // 0x1b04a8: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1b04a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1b04ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b04acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04b0: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B04B0u;
    SET_GPR_U32(ctx, 31, 0x1B04B8u);
    ctx->pc = 0x1B04B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04B0u;
    // 0x1b04b4: 0x3c140028  lui         $s4, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B04B0u, 0x1B04B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04B8u;
label_1b04b8:
    // 0x1b04b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b04b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04bc: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B04BCu;
    SET_GPR_U32(ctx, 31, 0x1B04C4u);
    ctx->pc = 0x1B04C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04BCu;
    // 0x1b04c0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B04BCu, 0x1B04C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04C4u;
label_1b04c4:
    // 0x1b04c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b04c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04c8: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B04C8u;
    SET_GPR_U32(ctx, 31, 0x1B04D0u);
    ctx->pc = 0x1B04CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04C8u;
    // 0x1b04cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B04C8u, 0x1B04D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04D0u;
label_1b04d0:
    // 0x1b04d0: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1b04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
    // 0x1b04d4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B04D4u;
    {
        const bool branch_taken_0x1b04d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04D4u;
        // 0x1b04d8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04d4) {
            ctx->pc = 0x1B04E4u;
            goto label_1b04e4;
        }
    }
    ctx->pc = 0x1B04DCu;
    // 0x1b04dc: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B04DCu;
    SET_GPR_U32(ctx, 31, 0x1B04E4u);
    ctx->pc = 0x1B04E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04DCu;
    // 0x1b04e0: 0x2484ab00  addiu       $a0, $a0, -0x5500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B04DCu, 0x1B04E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04E4u;
label_1b04e4:
    // 0x1b04e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b04e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b04e8: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1b04e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1b04ec: 0xae0272d4  sw          $v0, 0x72D4($s0)
    ctx->pc = 0x1b04ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2872D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872D4u, _value); } while (0);
    // 0x1b04f0: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x1b04f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    // 0x1b04f4: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b04f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1b04f8: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b04f8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
    // 0x1b04fc: 0xae2272b0  sw          $v0, 0x72B0($s1)
    ctx->pc = 0x1b04fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2872B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872B0u, _value); } while (0);
    // 0x1b0500: 0x24848450  addiu       $a0, $a0, -0x7BB0
    ctx->pc = 0x1b0500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
    // 0x1b0504: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1b0504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x1b0508: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b0508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b050c: 0x256bf348  addiu       $t3, $t3, -0xCB8
    ctx->pc = 0x1b050cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294964040));
    // 0x1b0510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0514: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b0514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0518: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1b0518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b051c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b051cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0520: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B0520u;
    SET_GPR_U32(ctx, 31, 0x1B0528u);
    ctx->pc = 0x1B0524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0520u;
    // 0x1b0524: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B0520u, 0x1B0528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0528u;
label_1b0528:
    // 0x1b0528: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0528u;
    {
        const bool branch_taken_0x1b0528 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0528) {
            ctx->pc = 0x1B052Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0528u;
            // 0x1b052c: 0x8e827290  lw          $v0, 0x7290($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B054Cu;
            goto label_1b054c;
        }
    }
    ctx->pc = 0x1B0530u;
    // 0x1b0530: 0xae0072d4  sw          $zero, 0x72D4($s0)
    ctx->pc = 0x1b0530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 0));
    // 0x1b0534: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b0538: 0xae2072b0  sw          $zero, 0x72B0($s1)
    ctx->pc = 0x1b0538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29360), GPR_U32(ctx, 0));
    // 0x1b053c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B053Cu;
    SET_GPR_U32(ctx, 31, 0x1B0544u);
    ctx->pc = 0x1B0540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B053Cu;
    // 0x1b0540: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B053Cu, 0x1B0544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0544u;
label_1b0544:
    // 0x1b0544: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0544u;
    {
        const bool branch_taken_0x1b0544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0544u;
        // 0x1b0548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0544) {
            ctx->pc = 0x1B0564u;
            goto label_1b0564;
        }
    }
    ctx->pc = 0x1B054Cu;
label_1b054c:
    // 0x1b054c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B054Cu;
    {
        const bool branch_taken_0x1b054c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B054Cu;
        // 0x1b0550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b054c) {
            ctx->pc = 0x1B0564u;
            goto label_1b0564;
        }
    }
    ctx->pc = 0x1B0554u;
    // 0x1b0554: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1b0558: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0558u;
    SET_GPR_U32(ctx, 31, 0x1B0560u);
    ctx->pc = 0x1B055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0558u;
    // 0x1b055c: 0x2484ab18  addiu       $a0, $a0, -0x54E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0558u, 0x1B0560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0560u;
label_1b0560:
    // 0x1b0560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0564:
    // 0x1b0564: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b0564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0568: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b0568u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b056c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b056cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0570: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b0570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0574: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b0574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0578: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b0578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b057c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b057cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b0580u;
}
