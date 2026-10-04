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

// Function: FUN_001ac600
// Address: 0x1ac600 - 0x1ac6fc
void FUN_001ac600_0x1ac600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac600_0x1ac600");
#endif

    switch (ctx->pc) {
        case 0x1ac630u: goto label_1ac630;
        case 0x1ac640u: goto label_1ac640;
        case 0x1ac66cu: goto label_1ac66c;
        case 0x1ac680u: goto label_1ac680;
        case 0x1ac6b0u: goto label_1ac6b0;
        default: break;
    }

    ctx->pc = 0x1ac600u;

    // 0x1ac600: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ac600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ac604: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ac604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1ac608: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ac608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1ac60c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ac60cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac610: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ac614: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ac614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac618: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ac61c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ac61cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac620: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ac620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ac624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac628: 0xc06aef0  jal         func_1ABBC0
    ctx->pc = 0x1AC628u;
    SET_GPR_U32(ctx, 31, 0x1AC630u);
    ctx->pc = 0x1AC62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC628u;
    // 0x1ac62c: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABBC0u, 0x1AC628u, 0x1AC630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC630u;
label_1ac630:
    // 0x1ac630: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1AC630u;
    {
        const bool branch_taken_0x1ac630 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC630u;
        // 0x1ac634: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac630) {
            ctx->pc = 0x1AC6E4u;
            goto label_1ac6e4;
        }
    }
    ctx->pc = 0x1AC638u;
    // 0x1ac638: 0xc06af30  jal         func_1ABCC0
    ctx->pc = 0x1AC638u;
    SET_GPR_U32(ctx, 31, 0x1AC640u);
    ctx->pc = 0x1ABCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABCC0u, 0x1AC638u, 0x1AC640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC640u;
label_1ac640:
    // 0x1ac640: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC640u;
    {
        const bool branch_taken_0x1ac640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac640) {
            ctx->pc = 0x1AC644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC640u;
            // 0x1ac644: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC654u;
            goto label_1ac654;
        }
    }
    ctx->pc = 0x1AC648u;
    // 0x1ac648: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac64c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1AC64Cu;
    {
        const bool branch_taken_0x1ac64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC64Cu;
        // 0x1ac650: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac64c) {
            ctx->pc = 0x1AC6E4u;
            goto label_1ac6e4;
        }
    }
    ctx->pc = 0x1AC654u;
label_1ac654:
    // 0x1ac654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ac654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac658: 0x24514788  addiu       $s1, $v0, 0x4788
    ctx->pc = 0x1ac658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18312));
    // 0x1ac65c: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1ac65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1ac660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac664: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1AC664u;
    SET_GPR_U32(ctx, 31, 0x1AC66Cu);
    ctx->pc = 0x1AC668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC664u;
    // 0x1ac668: 0x2630fff8  addiu       $s0, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1AC664u, 0x1AC66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC66Cu;
label_1ac66c:
    // 0x1ac66c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ac66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac670: 0xa2000103  sb          $zero, 0x103($s0)
    ctx->pc = 0x1ac670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac674: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1ac674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x1ac678: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1AC678u;
    SET_GPR_U32(ctx, 31, 0x1AC680u);
    ctx->pc = 0x1AC67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC678u;
    // 0x1ac67c: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1AC678u, 0x1AC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC680u;
label_1ac680:
    // 0x1ac680: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ac684: 0xa20001ff  sb          $zero, 0x1FF($s0)
    ctx->pc = 0x1ac684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 511), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac688: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ac688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac68c: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
    // 0x1ac690: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ac694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac698: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ac698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac69c: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1ac69cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ac6a0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ac6a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac6a4: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1ac6a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ac6a8: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AC6A8u;
    SET_GPR_U32(ctx, 31, 0x1AC6B0u);
    ctx->pc = 0x1AC6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC6A8u;
    // 0x1ac6ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AC6A8u, 0x1AC6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC6B0u;
label_1ac6b0:
    // 0x1ac6b0: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC6B0u;
    {
        const bool branch_taken_0x1ac6b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac6b0) {
            ctx->pc = 0x1AC6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC6B0u;
            // 0x1ac6b4: 0x8e22fff8  lw          $v0, -0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC6C4u;
            goto label_1ac6c4;
        }
    }
    ctx->pc = 0x1AC6B8u;
    // 0x1ac6b8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac6bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC6BCu;
    {
        const bool branch_taken_0x1ac6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6BCu;
        // 0x1ac6c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6bc) {
            ctx->pc = 0x1AC6E4u;
            goto label_1ac6e4;
        }
    }
    ctx->pc = 0x1AC6C4u;
label_1ac6c4:
    // 0x1ac6c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC6C4u;
    {
        const bool branch_taken_0x1ac6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac6c4) {
            ctx->pc = 0x1AC6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC6C4u;
            // 0x1ac6c8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC6D8u;
            goto label_1ac6d8;
        }
    }
    ctx->pc = 0x1AC6CCu;
    // 0x1ac6cc: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac6d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC6D0u;
    {
        const bool branch_taken_0x1ac6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6D0u;
        // 0x1ac6d4: 0x3442fffd  ori         $v0, $v0, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6d0) {
            ctx->pc = 0x1AC6E4u;
            goto label_1ac6e4;
        }
    }
    ctx->pc = 0x1AC6D8u;
label_1ac6d8:
    // 0x1ac6d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac6dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ac6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ac6e0: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x1ac6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_1ac6e4:
    // 0x1ac6e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ac6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ac6e8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ac6e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ac6ec: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ac6ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac6f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac6f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac6f4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac6f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ac6fcu;
}
