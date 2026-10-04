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

// Function: FUN_001ac750
// Address: 0x1ac750 - 0x1ac834
void FUN_001ac750_0x1ac750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac750_0x1ac750");
#endif

    switch (ctx->pc) {
        case 0x1ac778u: goto label_1ac778;
        case 0x1ac7c8u: goto label_1ac7c8;
        default: break;
    }

    ctx->pc = 0x1ac750u;

    // 0x1ac750: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ac750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ac754: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ac754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1ac758: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ac75c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ac75cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac760: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ac764: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ac764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac768: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ac768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ac76c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ac76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac770: 0xc06aef0  jal         func_1ABBC0
    ctx->pc = 0x1AC770u;
    SET_GPR_U32(ctx, 31, 0x1AC778u);
    ctx->pc = 0x1AC774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC770u;
    // 0x1ac774: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABBC0u, 0x1AC770u, 0x1AC778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC778u;
label_1ac778:
    // 0x1ac778: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC778u;
    {
        const bool branch_taken_0x1ac778 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC778u;
        // 0x1ac77c: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac778) {
            ctx->pc = 0x1AC788u;
            goto label_1ac788;
        }
    }
    ctx->pc = 0x1AC780u;
    // 0x1ac780: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1AC780u;
    {
        const bool branch_taken_0x1ac780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC780u;
        // 0x1ac784: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac780) {
            ctx->pc = 0x1AC820u;
            goto label_1ac820;
        }
    }
    ctx->pc = 0x1AC788u;
label_1ac788:
    // 0x1ac788: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AC788u;
    {
        const bool branch_taken_0x1ac788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC788u;
        // 0x1ac78c: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac788) {
            ctx->pc = 0x1AC80Cu;
            goto label_1ac80c;
        }
    }
    ctx->pc = 0x1AC790u;
    // 0x1ac790: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ac794: 0x26224780  addiu       $v0, $s1, 0x4780
    ctx->pc = 0x1ac794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 18304));
    // 0x1ac798: 0xae334780  sw          $s3, 0x4780($s1)
    ctx->pc = 0x1ac798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 18304), GPR_U32(ctx, 19));
    // 0x1ac79c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ac79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7a0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1ac7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1ac7a4: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
    // 0x1ac7a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac7ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ac7b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7b4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1ac7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ac7b8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac7b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7bc: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1ac7bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ac7c0: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AC7C0u;
    SET_GPR_U32(ctx, 31, 0x1AC7C8u);
    ctx->pc = 0x1AC7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7C0u;
    // 0x1ac7c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AC7C0u, 0x1AC7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC7C8u;
label_1ac7c8:
    // 0x1ac7c8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC7C8u;
    {
        const bool branch_taken_0x1ac7c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac7c8) {
            ctx->pc = 0x1AC7DCu;
            goto label_1ac7dc;
        }
    }
    ctx->pc = 0x1AC7D0u;
    // 0x1ac7d0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac7d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1AC7D4u;
    {
        const bool branch_taken_0x1ac7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7D4u;
        // 0x1ac7d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7d4) {
            ctx->pc = 0x1AC820u;
            goto label_1ac820;
        }
    }
    ctx->pc = 0x1AC7DCu;
label_1ac7dc:
    // 0x1ac7dc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC7DCu;
    {
        const bool branch_taken_0x1ac7dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7DCu;
        // 0x1ac7e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7dc) {
            ctx->pc = 0x1AC7F0u;
            goto label_1ac7f0;
        }
    }
    ctx->pc = 0x1AC7E4u;
    // 0x1ac7e4: 0x92224780  lbu         $v0, 0x4780($s1)
    ctx->pc = 0x1ac7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18304)));
    // 0x1ac7e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AC7E8u;
    {
        const bool branch_taken_0x1ac7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7E8u;
        // 0x1ac7ec: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7e8) {
            ctx->pc = 0x1AC81Cu;
            goto label_1ac81c;
        }
    }
    ctx->pc = 0x1AC7F0u;
label_1ac7f0:
    // 0x1ac7f0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC7F0u;
    {
        const bool branch_taken_0x1ac7f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7F0u;
        // 0x1ac7f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7f0) {
            ctx->pc = 0x1AC804u;
            goto label_1ac804;
        }
    }
    ctx->pc = 0x1AC7F8u;
    // 0x1ac7f8: 0x96224780  lhu         $v0, 0x4780($s1)
    ctx->pc = 0x1ac7f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18304)));
    // 0x1ac7fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AC7FCu;
    {
        const bool branch_taken_0x1ac7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7FCu;
        // 0x1ac800: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7fc) {
            ctx->pc = 0x1AC81Cu;
            goto label_1ac81c;
        }
    }
    ctx->pc = 0x1AC804u;
label_1ac804:
    // 0x1ac804: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC804u;
    {
        const bool branch_taken_0x1ac804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac804) {
            ctx->pc = 0x1AC808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC804u;
            // 0x1ac808: 0x8e224780  lw          $v0, 0x4780($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC818u;
            goto label_1ac818;
        }
    }
    ctx->pc = 0x1AC80Cu;
label_1ac80c:
    // 0x1ac80c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC810u;
    {
        const bool branch_taken_0x1ac810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC810u;
        // 0x1ac814: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac810) {
            ctx->pc = 0x1AC820u;
            goto label_1ac820;
        }
    }
    ctx->pc = 0x1AC818u;
label_1ac818:
    // 0x1ac818: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ac818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1ac81c:
    // 0x1ac81c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac81cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac820:
    // 0x1ac820: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ac820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ac824: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ac824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac828: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac82c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac82cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac830: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ac834u;
}
