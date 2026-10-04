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

// Function: FUN_00138010
// Address: 0x138010 - 0x138180
void FUN_00138010_0x138010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00138010_0x138010");
#endif

    switch (ctx->pc) {
        case 0x13810cu: goto label_13810c;
        default: break;
    }

    ctx->pc = 0x138010u;

    // 0x138010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x138010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x138014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x138014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x138018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13801c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x138020: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x138020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x138024: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x138024u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x138028: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x138028u;
    {
        const bool branch_taken_0x138028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138028u;
        // 0x13802c: 0x2610a4a0  addiu       $s0, $s0, -0x5B60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138028) {
            ctx->pc = 0x138054u;
            goto label_138054;
        }
    }
    ctx->pc = 0x138030u;
    // 0x138030: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x138030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x138034: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x138034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x138038: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x138038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x13803c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x13803cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x138040: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x138040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x138044: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x138044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x138048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13804c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13804Cu;
    {
        const bool branch_taken_0x13804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13804Cu;
        // 0x138050: 0x84510000  lh          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13804c) {
            ctx->pc = 0x138080u;
            goto label_138080;
        }
    }
    ctx->pc = 0x138054u;
label_138054:
    // 0x138054: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x138054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x138058: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x138058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13805c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x13805cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x138060: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x138060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x138064: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x138064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x138068: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x138068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x13806c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x138070: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x138070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x138074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138078: 0x84510000  lh          $s1, 0x0($v0)
    ctx->pc = 0x138078u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13807c: 0x0  nop
    ctx->pc = 0x13807cu;
    // NOP
label_138080:
    // 0x138080: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x138080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x138084: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138084u;
    {
        const bool branch_taken_0x138084 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x138088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138084u;
        // 0x138088: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138084) {
            ctx->pc = 0x138094u;
            goto label_138094;
        }
    }
    ctx->pc = 0x13808Cu;
    // 0x13808c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13808Cu;
    {
        const bool branch_taken_0x13808c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13808Cu;
        // 0x138090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13808c) {
            ctx->pc = 0x1380A8u;
            goto label_1380a8;
        }
    }
    ctx->pc = 0x138094u;
label_138094:
    // 0x138094: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x138094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x138098: 0x24420cf4  addiu       $v0, $v0, 0xCF4
    ctx->pc = 0x138098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3316));
    // 0x13809c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1380a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1380a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1380a4: 0x0  nop
    ctx->pc = 0x1380a4u;
    // NOP
label_1380a8:
    // 0x1380a8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1380a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1380ac: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1380acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x1380b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1380B0u;
    {
        const bool branch_taken_0x1380b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1380B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380B0u;
        // 0x1380b4: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380b0) {
            ctx->pc = 0x1380C0u;
            goto label_1380c0;
        }
    }
    ctx->pc = 0x1380B8u;
    // 0x1380b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1380B8u;
    {
        const bool branch_taken_0x1380b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380B8u;
        // 0x1380bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380b8) {
            ctx->pc = 0x1380D4u;
            goto label_1380d4;
        }
    }
    ctx->pc = 0x1380C0u;
label_1380c0:
    // 0x1380c0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1380c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1380c4: 0x24420d04  addiu       $v0, $v0, 0xD04
    ctx->pc = 0x1380c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3332));
    // 0x1380c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1380c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1380cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1380ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1380d0: 0x0  nop
    ctx->pc = 0x1380d0u;
    // NOP
label_1380d4:
    // 0x1380d4: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1380d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1380d8: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1380d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x1380dc: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1380DCu;
    {
        const bool branch_taken_0x1380dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1380dc) {
            ctx->pc = 0x1380ECu;
            goto label_1380ec;
        }
    }
    ctx->pc = 0x1380E4u;
    // 0x1380e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1380E4u;
    {
        const bool branch_taken_0x1380e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380E4u;
        // 0x1380e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380e4) {
            ctx->pc = 0x138104u;
            goto label_138104;
        }
    }
    ctx->pc = 0x1380ECu;
label_1380ec:
    // 0x1380ec: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1380ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1380f0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1380f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1380f4: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1380f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x1380f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1380f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1380fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1380fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138100: 0x0  nop
    ctx->pc = 0x138100u;
    // NOP
label_138104:
    // 0x138104: 0xc0415dc  jal         func_105770
    ctx->pc = 0x138104u;
    SET_GPR_U32(ctx, 31, 0x13810Cu);
    ctx->pc = 0x138108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138104u;
    // 0x138108: 0x26060004  addiu       $a2, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105770u, 0x138104u, 0x13810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13810Cu;
label_13810c:
    // 0x13810c: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x13810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x138110: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138110u;
    {
        const bool branch_taken_0x138110 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x138114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138110u;
        // 0x138114: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138110) {
            ctx->pc = 0x138120u;
            goto label_138120;
        }
    }
    ctx->pc = 0x138118u;
    // 0x138118: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x138118u;
    {
        const bool branch_taken_0x138118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138118u;
        // 0x13811c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138118) {
            ctx->pc = 0x138134u;
            goto label_138134;
        }
    }
    ctx->pc = 0x138120u;
label_138120:
    // 0x138120: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x138120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x138124: 0x24630cf4  addiu       $v1, $v1, 0xCF4
    ctx->pc = 0x138124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3316));
    // 0x138128: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x138128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13812c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138130: 0x0  nop
    ctx->pc = 0x138130u;
    // NOP
label_138134:
    // 0x138134: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x138134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x138138: 0x332c0  sll         $a2, $v1, 11
    ctx->pc = 0x138138u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x13813c: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x13813cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x138140: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x138140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x138144: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x138144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x138148: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x138148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x13814c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13814Cu;
    {
        const bool branch_taken_0x13814c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x138150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13814Cu;
        // 0x138150: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13814c) {
            ctx->pc = 0x13815Cu;
            goto label_13815c;
        }
    }
    ctx->pc = 0x138154u;
    // 0x138154: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x138154u;
    {
        const bool branch_taken_0x138154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138154u;
        // 0x138158: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138154) {
            ctx->pc = 0x138174u;
            goto label_138174;
        }
    }
    ctx->pc = 0x13815Cu;
label_13815c:
    // 0x13815c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x13815cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x138160: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x138160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x138164: 0x24630d08  addiu       $v1, $v1, 0xD08
    ctx->pc = 0x138164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3336));
    // 0x138168: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x138168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13816c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13816cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138170: 0x0  nop
    ctx->pc = 0x138170u;
    // NOP
label_138174:
    // 0x138174: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x138174u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x138178: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x138178u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x13817c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13817cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x138180u;
}
