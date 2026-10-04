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

// Function: entry_00204598
// Address: 0x204598 - 0x204aa0
void entry_00204598_0x204598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204598_0x204598");
#endif

    ctx->pc = 0x204598u;

    // 0x204598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x204598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20459c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20459cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2045a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2045A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2045A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045A0u;
        // 0x2045a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2045A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2045A8u;
    // 0x2045a8: 0x0  nop
    ctx->pc = 0x2045a8u;
    // NOP
    // 0x2045ac: 0x0  nop
    ctx->pc = 0x2045acu;
    // NOP
    // 0x2045b0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2045b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2045b4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2045b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2045b8: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x2045b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x2045bc: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2045bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2045c0: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2045c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2045c4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2045c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2045c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2045c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2045cc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2045ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2045d0: 0x10a00051  beqz        $a1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2045D0u;
    {
        const bool branch_taken_0x2045d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2045D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045D0u;
        // 0x2045d4: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045d0) {
            ctx->pc = 0x204718u;
            goto label_204718;
        }
    }
    ctx->pc = 0x2045D8u;
    // 0x2045d8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2045d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2045dc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2045dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2045e0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2045e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2045e4: 0x2442f500  addiu       $v0, $v0, -0xB00
    ctx->pc = 0x2045e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964480));
    // 0x2045e8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2045e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2045ec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2045ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2045f0: 0x440c0  sll         $t0, $a0, 3
    ctx->pc = 0x2045f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2045f4: 0x24060203  addiu       $a2, $zero, 0x203
    ctx->pc = 0x2045f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x2045f8: 0x484821  addu        $t1, $v0, $t0
    ctx->pc = 0x2045f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2045fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2045fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204600: 0x1204021  addu        $t0, $t1, $zero
    ctx->pc = 0x204600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 0)));
    // 0x204604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204608: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x204608u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x20460c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x20460cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x204610: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x204610u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
    // 0x204614: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x204614u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x204618: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x204618u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x20461c: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x20461cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x204620: 0xad2700a0  sw          $a3, 0xA0($t1)
    ctx->pc = 0x204620u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 160), GPR_U32(ctx, 7));
    // 0x204624: 0xad260098  sw          $a2, 0x98($t1)
    ctx->pc = 0x204624u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 152), GPR_U32(ctx, 6));
    // 0x204628: 0xad24009c  sw          $a0, 0x9C($t1)
    ctx->pc = 0x204628u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 156), GPR_U32(ctx, 4));
    // 0x20462c: 0xad2000a4  sw          $zero, 0xA4($t1)
    ctx->pc = 0x20462cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 164), GPR_U32(ctx, 0));
    // 0x204630: 0xad2000a8  sw          $zero, 0xA8($t1)
    ctx->pc = 0x204630u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 168), GPR_U32(ctx, 0));
    // 0x204634: 0xad2000ac  sw          $zero, 0xAC($t1)
    ctx->pc = 0x204634u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 172), GPR_U32(ctx, 0));
    // 0x204638: 0xad270138  sw          $a3, 0x138($t1)
    ctx->pc = 0x204638u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 312), GPR_U32(ctx, 7));
    // 0x20463c: 0xad260130  sw          $a2, 0x130($t1)
    ctx->pc = 0x20463cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 304), GPR_U32(ctx, 6));
    // 0x204640: 0xad240134  sw          $a0, 0x134($t1)
    ctx->pc = 0x204640u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 308), GPR_U32(ctx, 4));
    // 0x204644: 0xad20013c  sw          $zero, 0x13C($t1)
    ctx->pc = 0x204644u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 316), GPR_U32(ctx, 0));
    // 0x204648: 0xad200140  sw          $zero, 0x140($t1)
    ctx->pc = 0x204648u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 320), GPR_U32(ctx, 0));
    // 0x20464c: 0xad200144  sw          $zero, 0x144($t1)
    ctx->pc = 0x20464cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 324), GPR_U32(ctx, 0));
    // 0x204650: 0xac600480  sw          $zero, 0x480($v1)
    ctx->pc = 0x204650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 0));
    // 0x204654: 0x8c660484  lw          $a2, 0x484($v1)
    ctx->pc = 0x204654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
    // 0x204658: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204658u;
    {
        const bool branch_taken_0x204658 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x204658) {
            ctx->pc = 0x204674u;
            goto label_204674;
        }
    }
    ctx->pc = 0x204660u;
    // 0x204660: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x204660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x204664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204668: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x204668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x20466c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x20466Cu;
    {
        const bool branch_taken_0x20466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20466Cu;
        // 0x204670: 0xac640480  sw          $a0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20466c) {
            ctx->pc = 0x20471Cu;
            goto label_20471c;
        }
    }
    ctx->pc = 0x204674u;
label_204674:
    // 0x204674: 0x14c40006  bne         $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204674u;
    {
        const bool branch_taken_0x204674 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x204674) {
            ctx->pc = 0x204690u;
            goto label_204690;
        }
    }
    ctx->pc = 0x20467Cu;
    // 0x20467c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x20467cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x204680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204684: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x204684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x204688: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x204688u;
    {
        const bool branch_taken_0x204688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204688u;
        // 0x20468c: 0xac640480  sw          $a0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204688) {
            ctx->pc = 0x20471Cu;
            goto label_20471c;
        }
    }
    ctx->pc = 0x204690u;
label_204690:
    // 0x204690: 0x10a70020  beq         $a1, $a3, . + 4 + (0x20 << 2)
    ctx->pc = 0x204690u;
    {
        const bool branch_taken_0x204690 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x204690) {
            ctx->pc = 0x204714u;
            goto label_204714;
        }
    }
    ctx->pc = 0x204698u;
    // 0x204698: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x204698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x20469c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20469Cu;
    {
        const bool branch_taken_0x20469c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2046A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20469Cu;
        // 0x2046a0: 0x28a2ffed  slti        $v0, $a1, -0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967277) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20469c) {
            ctx->pc = 0x2046B0u;
            goto label_2046b0;
        }
    }
    ctx->pc = 0x2046A4u;
    // 0x2046a4: 0x24020401  addiu       $v0, $zero, 0x401
    ctx->pc = 0x2046a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x2046a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2046A8u;
    {
        const bool branch_taken_0x2046a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2046ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046A8u;
        // 0x2046ac: 0xac620480  sw          $v0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046a8) {
            ctx->pc = 0x204708u;
            goto label_204708;
        }
    }
    ctx->pc = 0x2046B0u;
label_2046b0:
    // 0x2046b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2046B0u;
    {
        const bool branch_taken_0x2046b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046B0u;
        // 0x2046b4: 0x28a1fff6  slti        $at, $a1, -0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967286) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046b0) {
            ctx->pc = 0x2046C0u;
            goto label_2046c0;
        }
    }
    ctx->pc = 0x2046B8u;
    // 0x2046b8: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2046B8u;
    {
        const bool branch_taken_0x2046b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046B8u;
        // 0x2046bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046b8) {
            ctx->pc = 0x20470Cu;
            goto label_20470c;
        }
    }
    ctx->pc = 0x2046C0u;
label_2046c0:
    // 0x2046c0: 0x28a2ffcf  slti        $v0, $a1, -0x31
    ctx->pc = 0x2046c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967247) ? 1 : 0);
    // 0x2046c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2046C4u;
    {
        const bool branch_taken_0x2046c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046C4u;
        // 0x2046c8: 0x28a2ffc5  slti        $v0, $a1, -0x3B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967237) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046c4) {
            ctx->pc = 0x2046D8u;
            goto label_2046d8;
        }
    }
    ctx->pc = 0x2046CCu;
    // 0x2046cc: 0x28a1ffd9  slti        $at, $a1, -0x27
    ctx->pc = 0x2046ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967257) ? 1 : 0);
    // 0x2046d0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2046D0u;
    {
        const bool branch_taken_0x2046d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2046d0) {
            ctx->pc = 0x204708u;
            goto label_204708;
        }
    }
    ctx->pc = 0x2046D8u;
label_2046d8:
    // 0x2046d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2046D8u;
    {
        const bool branch_taken_0x2046d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046D8u;
        // 0x2046dc: 0x28a1ffcf  slti        $at, $a1, -0x31 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967247) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046d8) {
            ctx->pc = 0x2046E8u;
            goto label_2046e8;
        }
    }
    ctx->pc = 0x2046E0u;
    // 0x2046e0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2046E0u;
    {
        const bool branch_taken_0x2046e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2046e0) {
            ctx->pc = 0x204708u;
            goto label_204708;
        }
    }
    ctx->pc = 0x2046E8u;
label_2046e8:
    // 0x2046e8: 0x28a2ffb1  slti        $v0, $a1, -0x4F
    ctx->pc = 0x2046e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967217) ? 1 : 0);
    // 0x2046ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2046ECu;
    {
        const bool branch_taken_0x2046ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046ECu;
        // 0x2046f0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046ec) {
            ctx->pc = 0x204700u;
            goto label_204700;
        }
    }
    ctx->pc = 0x2046F4u;
    // 0x2046f4: 0x28a1ffbb  slti        $at, $a1, -0x45
    ctx->pc = 0x2046f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967227) ? 1 : 0);
    // 0x2046f8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2046F8u;
    {
        const bool branch_taken_0x2046f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2046f8) {
            ctx->pc = 0x204708u;
            goto label_204708;
        }
    }
    ctx->pc = 0x204700u;
label_204700:
    // 0x204700: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x204700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x204704: 0xac620480  sw          $v0, 0x480($v1)
    ctx->pc = 0x204704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 2));
label_204708:
    // 0x204708: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20470c:
    // 0x20470c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20470Cu;
    {
        const bool branch_taken_0x20470c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20470c) {
            ctx->pc = 0x20471Cu;
            goto label_20471c;
        }
    }
    ctx->pc = 0x204714u;
label_204714:
    // 0x204714: 0xac620480  sw          $v0, 0x480($v1)
    ctx->pc = 0x204714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 2));
label_204718:
    // 0x204718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20471c:
    // 0x20471c: 0x3e00008  jr          $ra
    ctx->pc = 0x20471Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20471Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204724u;
    // 0x204724: 0x0  nop
    ctx->pc = 0x204724u;
    // NOP
    // 0x204728: 0x0  nop
    ctx->pc = 0x204728u;
    // NOP
    // 0x20472c: 0x0  nop
    ctx->pc = 0x20472cu;
    // NOP
    // 0x204730: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204730u;
    {
        const bool branch_taken_0x204730 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x204734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204730u;
        // 0x204734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204730) {
            ctx->pc = 0x204740u;
            goto label_204740;
        }
    }
    ctx->pc = 0x204738u;
    // 0x204738: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x204738u;
    {
        const bool branch_taken_0x204738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204738) {
            ctx->pc = 0x20478Cu;
            goto label_20478c;
        }
    }
    ctx->pc = 0x204740u;
label_204740:
    // 0x204740: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x204740u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x204744: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x204744u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x204748: 0x24c6f508  addiu       $a2, $a2, -0xAF8
    ctx->pc = 0x204748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964488));
    // 0x20474c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204750: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x204750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x204754: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x204754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x204758: 0x683823  subu        $a3, $v1, $t0
    ctx->pc = 0x204758u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x20475c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x20475cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x204760: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x204760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x204764: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x204764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x204768: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20476c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20476cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x204770: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204774: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x204774u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x204778: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x204778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x20477c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x20477cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x204780: 0x24c30000  addiu       $v1, $a2, 0x0
    ctx->pc = 0x204780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x204784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204788: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x204788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_20478c:
    // 0x20478c: 0x3e00008  jr          $ra
    ctx->pc = 0x20478Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20478Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204794u;
    // 0x204794: 0x0  nop
    ctx->pc = 0x204794u;
    // NOP
    // 0x204798: 0x0  nop
    ctx->pc = 0x204798u;
    // NOP
    // 0x20479c: 0x0  nop
    ctx->pc = 0x20479cu;
    // NOP
    // 0x2047a0: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x2047a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2047a4: 0xa01026  xor         $v0, $a1, $zero
    ctx->pc = 0x2047a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
    // 0x2047a8: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x2047a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x2047ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2047acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2047b0: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x2047b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
    // 0x2047b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2047b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2047b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2047b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2047bc: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2047bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2047c0: 0x24040203  addiu       $a0, $zero, 0x203
    ctx->pc = 0x2047c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x2047c4: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x2047c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2047c8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2047c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2047cc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2047ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2047d0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2047d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2047d4: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x2047d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2047d8: 0xe03021  addu        $a2, $a3, $zero
    ctx->pc = 0x2047d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
    // 0x2047dc: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x2047dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x2047e0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2047e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2047e4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2047e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2047e8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2047e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x2047ec: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x2047ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x2047f0: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x2047f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x2047f4: 0xace500a0  sw          $a1, 0xA0($a3)
    ctx->pc = 0x2047f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 5));
    // 0x2047f8: 0xace40098  sw          $a0, 0x98($a3)
    ctx->pc = 0x2047f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 4));
    // 0x2047fc: 0xace3009c  sw          $v1, 0x9C($a3)
    ctx->pc = 0x2047fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 3));
    // 0x204800: 0xace000a4  sw          $zero, 0xA4($a3)
    ctx->pc = 0x204800u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 0));
    // 0x204804: 0xace000a8  sw          $zero, 0xA8($a3)
    ctx->pc = 0x204804u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 0));
    // 0x204808: 0xace000ac  sw          $zero, 0xAC($a3)
    ctx->pc = 0x204808u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
    // 0x20480c: 0xace50138  sw          $a1, 0x138($a3)
    ctx->pc = 0x20480cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 312), GPR_U32(ctx, 5));
    // 0x204810: 0xace40130  sw          $a0, 0x130($a3)
    ctx->pc = 0x204810u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 304), GPR_U32(ctx, 4));
    // 0x204814: 0xace30134  sw          $v1, 0x134($a3)
    ctx->pc = 0x204814u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 308), GPR_U32(ctx, 3));
    // 0x204818: 0xace0013c  sw          $zero, 0x13C($a3)
    ctx->pc = 0x204818u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 316), GPR_U32(ctx, 0));
    // 0x20481c: 0xace00140  sw          $zero, 0x140($a3)
    ctx->pc = 0x20481cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 0));
    // 0x204820: 0x3e00008  jr          $ra
    ctx->pc = 0x204820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204820u;
        // 0x204824: 0xace00144  sw          $zero, 0x144($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204828u;
    // 0x204828: 0x0  nop
    ctx->pc = 0x204828u;
    // NOP
    // 0x20482c: 0x0  nop
    ctx->pc = 0x20482cu;
    // NOP
    // 0x204830: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x204830u;
    {
        const bool branch_taken_0x204830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x204834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204830u;
        // 0x204834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204830) {
            ctx->pc = 0x2048B8u;
            goto label_2048b8;
        }
    }
    ctx->pc = 0x204838u;
    // 0x204838: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x204838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20483c: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x20483cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x204840: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x204840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
    // 0x204844: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x204844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204848: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x204848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20484c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20484cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204850: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x204850u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x204854: 0x24040203  addiu       $a0, $zero, 0x203
    ctx->pc = 0x204854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x204858: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x204858u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20485c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x20485cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x204860: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x204860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x204864: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x204864u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x204868: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x204868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20486c: 0xe03021  addu        $a2, $a3, $zero
    ctx->pc = 0x20486cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
    // 0x204870: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x204870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x204874: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x204874u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x204878: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x204878u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x20487c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x20487cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x204880: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x204880u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x204884: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x204884u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x204888: 0xace500a0  sw          $a1, 0xA0($a3)
    ctx->pc = 0x204888u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 5));
    // 0x20488c: 0xace40098  sw          $a0, 0x98($a3)
    ctx->pc = 0x20488cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 4));
    // 0x204890: 0xace3009c  sw          $v1, 0x9C($a3)
    ctx->pc = 0x204890u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 3));
    // 0x204894: 0xace000a4  sw          $zero, 0xA4($a3)
    ctx->pc = 0x204894u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 0));
    // 0x204898: 0xace000a8  sw          $zero, 0xA8($a3)
    ctx->pc = 0x204898u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 0));
    // 0x20489c: 0xace000ac  sw          $zero, 0xAC($a3)
    ctx->pc = 0x20489cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
    // 0x2048a0: 0xace50138  sw          $a1, 0x138($a3)
    ctx->pc = 0x2048a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 312), GPR_U32(ctx, 5));
    // 0x2048a4: 0xace40130  sw          $a0, 0x130($a3)
    ctx->pc = 0x2048a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 304), GPR_U32(ctx, 4));
    // 0x2048a8: 0xace30134  sw          $v1, 0x134($a3)
    ctx->pc = 0x2048a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 308), GPR_U32(ctx, 3));
    // 0x2048ac: 0xace0013c  sw          $zero, 0x13C($a3)
    ctx->pc = 0x2048acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 316), GPR_U32(ctx, 0));
    // 0x2048b0: 0xace00140  sw          $zero, 0x140($a3)
    ctx->pc = 0x2048b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 0));
    // 0x2048b4: 0xace00144  sw          $zero, 0x144($a3)
    ctx->pc = 0x2048b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 0));
label_2048b8:
    // 0x2048b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2048B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2048B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2048C0u;
    // 0x2048c0: 0x4a10021  bgez        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2048C0u;
    {
        const bool branch_taken_0x2048c0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2048C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048C0u;
        // 0x2048c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048c0) {
            ctx->pc = 0x204948u;
            goto label_204948;
        }
    }
    ctx->pc = 0x2048C8u;
    // 0x2048c8: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x2048c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2048cc: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x2048ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x2048d0: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x2048d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
    // 0x2048d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2048d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2048d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2048d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2048dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2048dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2048e0: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2048e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2048e4: 0x24040203  addiu       $a0, $zero, 0x203
    ctx->pc = 0x2048e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x2048e8: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x2048e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2048ec: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2048ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2048f0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2048f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2048f4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2048f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2048f8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x2048f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2048fc: 0xe03021  addu        $a2, $a3, $zero
    ctx->pc = 0x2048fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
    // 0x204900: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x204900u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x204904: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x204904u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x204908: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x204908u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x20490c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x20490cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x204910: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x204910u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x204914: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x204914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x204918: 0xace500a0  sw          $a1, 0xA0($a3)
    ctx->pc = 0x204918u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 5));
    // 0x20491c: 0xace40098  sw          $a0, 0x98($a3)
    ctx->pc = 0x20491cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 4));
    // 0x204920: 0xace3009c  sw          $v1, 0x9C($a3)
    ctx->pc = 0x204920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 3));
    // 0x204924: 0xace000a4  sw          $zero, 0xA4($a3)
    ctx->pc = 0x204924u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 0));
    // 0x204928: 0xace000a8  sw          $zero, 0xA8($a3)
    ctx->pc = 0x204928u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 0));
    // 0x20492c: 0xace000ac  sw          $zero, 0xAC($a3)
    ctx->pc = 0x20492cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
    // 0x204930: 0xace50138  sw          $a1, 0x138($a3)
    ctx->pc = 0x204930u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 312), GPR_U32(ctx, 5));
    // 0x204934: 0xace40130  sw          $a0, 0x130($a3)
    ctx->pc = 0x204934u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 304), GPR_U32(ctx, 4));
    // 0x204938: 0xace30134  sw          $v1, 0x134($a3)
    ctx->pc = 0x204938u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 308), GPR_U32(ctx, 3));
    // 0x20493c: 0xace0013c  sw          $zero, 0x13C($a3)
    ctx->pc = 0x20493cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 316), GPR_U32(ctx, 0));
    // 0x204940: 0xace00140  sw          $zero, 0x140($a3)
    ctx->pc = 0x204940u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 0));
    // 0x204944: 0xace00144  sw          $zero, 0x144($a3)
    ctx->pc = 0x204944u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 0));
label_204948:
    // 0x204948: 0x3e00008  jr          $ra
    ctx->pc = 0x204948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204950u;
    // 0x204950: 0xa01026  xor         $v0, $a1, $zero
    ctx->pc = 0x204950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
    // 0x204954: 0x3e00008  jr          $ra
    ctx->pc = 0x204954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204954u;
        // 0x204958: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20495Cu;
    // 0x20495c: 0x0  nop
    ctx->pc = 0x20495cu;
    // NOP
    // 0x204960: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x204960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x204964: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x204964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x204968: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x204968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x20496c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x20496cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x204970: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204974: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x204974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x204978: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20497c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x20497cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x204980: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204980u;
    {
        const bool branch_taken_0x204980 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x204984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204980u;
        // 0x204984: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204980) {
            ctx->pc = 0x204990u;
            goto label_204990;
        }
    }
    ctx->pc = 0x204988u;
    // 0x204988: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x204988u;
    {
        const bool branch_taken_0x204988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204988u;
        // 0x20498c: 0xac45048c  sw          $a1, 0x48C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1164), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204988) {
            ctx->pc = 0x2049A8u;
            goto label_2049a8;
        }
    }
    ctx->pc = 0x204990u;
label_204990:
    // 0x204990: 0xac40048c  sw          $zero, 0x48C($v0)
    ctx->pc = 0x204990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1164), GPR_U32(ctx, 0));
    // 0x204994: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x204994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x204998: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204998u;
    {
        const bool branch_taken_0x204998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x204998) {
            ctx->pc = 0x2049A8u;
            goto label_2049a8;
        }
    }
    ctx->pc = 0x2049A0u;
    // 0x2049a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2049A0u;
    {
        const bool branch_taken_0x2049a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049A0u;
        // 0x2049a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049a0) {
            ctx->pc = 0x2049ACu;
            goto label_2049ac;
        }
    }
    ctx->pc = 0x2049A8u;
label_2049a8:
    // 0x2049a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2049a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2049ac:
    // 0x2049ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2049ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2049ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2049B4u;
    // 0x2049b4: 0x0  nop
    ctx->pc = 0x2049b4u;
    // NOP
    // 0x2049b8: 0x0  nop
    ctx->pc = 0x2049b8u;
    // NOP
    // 0x2049bc: 0x0  nop
    ctx->pc = 0x2049bcu;
    // NOP
    // 0x2049c0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2049c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2049c4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2049c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2049c8: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x2049c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x2049cc: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2049ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2049d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2049d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2049d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2049d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2049d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2049d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2049dc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2049dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2049e0: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2049E0u;
    {
        const bool branch_taken_0x2049e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049E0u;
        // 0x2049e4: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049e0) {
            ctx->pc = 0x204A84u;
            goto label_204a84;
        }
    }
    ctx->pc = 0x2049E8u;
    // 0x2049e8: 0xad000480  sw          $zero, 0x480($t0)
    ctx->pc = 0x2049e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1152), GPR_U32(ctx, 0));
    // 0x2049ec: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x2049ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x2049f0: 0xad000488  sw          $zero, 0x488($t0)
    ctx->pc = 0x2049f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1160), GPR_U32(ctx, 0));
    // 0x2049f4: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x2049f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
    // 0x2049f8: 0xad00048c  sw          $zero, 0x48C($t0)
    ctx->pc = 0x2049f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1164), GPR_U32(ctx, 0));
    // 0x2049fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2049fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204a00: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x204a00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x204a04: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x204a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x204a08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x204a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204a0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204a10: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x204a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x204a14: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x204a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x204a18: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x204a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x204a1c: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x204a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x204a20: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x204a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x204a24: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x204a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x204a28: 0xe02021  addu        $a0, $a3, $zero
    ctx->pc = 0x204a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
    // 0x204a2c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x204a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x204a30: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x204a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x204a34: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x204a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x204a38: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x204a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x204a3c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x204a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x204a40: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x204a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x204a44: 0xace600a0  sw          $a2, 0xA0($a3)
    ctx->pc = 0x204a44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 6));
    // 0x204a48: 0xace50098  sw          $a1, 0x98($a3)
    ctx->pc = 0x204a48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 5));
    // 0x204a4c: 0xace3009c  sw          $v1, 0x9C($a3)
    ctx->pc = 0x204a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 3));
    // 0x204a50: 0xace000a4  sw          $zero, 0xA4($a3)
    ctx->pc = 0x204a50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 0));
    // 0x204a54: 0xace000a8  sw          $zero, 0xA8($a3)
    ctx->pc = 0x204a54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 0));
    // 0x204a58: 0xace000ac  sw          $zero, 0xAC($a3)
    ctx->pc = 0x204a58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
    // 0x204a5c: 0xace60138  sw          $a2, 0x138($a3)
    ctx->pc = 0x204a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 312), GPR_U32(ctx, 6));
    // 0x204a60: 0xace50130  sw          $a1, 0x130($a3)
    ctx->pc = 0x204a60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 304), GPR_U32(ctx, 5));
    // 0x204a64: 0xace30134  sw          $v1, 0x134($a3)
    ctx->pc = 0x204a64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 308), GPR_U32(ctx, 3));
    // 0x204a68: 0xace0013c  sw          $zero, 0x13C($a3)
    ctx->pc = 0x204a68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 316), GPR_U32(ctx, 0));
    // 0x204a6c: 0xace00140  sw          $zero, 0x140($a3)
    ctx->pc = 0x204a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 0));
    // 0x204a70: 0xace00144  sw          $zero, 0x144($a3)
    ctx->pc = 0x204a70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 0));
    // 0x204a74: 0x8d030480  lw          $v1, 0x480($t0)
    ctx->pc = 0x204a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1152)));
    // 0x204a78: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x204a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x204a7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x204A7Cu;
    {
        const bool branch_taken_0x204a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A7Cu;
        // 0x204a80: 0xad030480  sw          $v1, 0x480($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a7c) {
            ctx->pc = 0x204A98u;
            goto label_204a98;
        }
    }
    ctx->pc = 0x204A84u;
label_204a84:
    // 0x204a84: 0x8d040480  lw          $a0, 0x480($t0)
    ctx->pc = 0x204a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1152)));
    // 0x204a88: 0x2403f3ff  addiu       $v1, $zero, -0xC01
    ctx->pc = 0x204a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x204a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204a90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x204a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x204a94: 0xad030480  sw          $v1, 0x480($t0)
    ctx->pc = 0x204a94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1152), GPR_U32(ctx, 3));
label_204a98:
    // 0x204a98: 0x3e00008  jr          $ra
    ctx->pc = 0x204A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204AA0u;
}
