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

// Function: entry_001b1618
// Address: 0x1b1618 - 0x1b16c8
void entry_001b1618_0x1b1618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1618_0x1b1618");
#endif

    switch (ctx->pc) {
        case 0x1b1660u: goto label_1b1660;
        case 0x1b16a0u: goto label_1b16a0;
        default: break;
    }

    ctx->pc = 0x1b1618u;

    // 0x1b1618: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b1618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b161c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b161cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1620: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b1620u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1624: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1628: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b162c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b162cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1630: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1630u;
        // 0x1b1634: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1638u;
    // 0x1b1638: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b1638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b163c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1b163cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b1640: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b1640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b1644: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1B1644u;
    {
        const bool branch_taken_0x1b1644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1644) {
            ctx->pc = 0x1B1648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1644u;
            // 0x1b1648: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1684u;
            goto label_1b1684;
        }
    }
    ctx->pc = 0x1B164Cu;
    // 0x1b164c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1b164cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b1650: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B1650u;
    {
        const bool branch_taken_0x1b1650 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1650u;
        // 0x1b1654: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1650) {
            ctx->pc = 0x1B1680u;
            goto label_1b1680;
        }
    }
    ctx->pc = 0x1B1658u;
    // 0x1b1658: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x1b1658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1b165c: 0x0  nop
    ctx->pc = 0x1b165cu;
    // NOP
label_1b1660:
    // 0x1b1660: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1b1660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1b1664: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b1664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1668: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b1668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b166c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1b166cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b1670: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b1670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b1674: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b1674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b1678: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B1678u;
    {
        const bool branch_taken_0x1b1678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1678u;
        // 0x1b167c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1678) {
            ctx->pc = 0x1B1660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1660;
        }
    }
    ctx->pc = 0x1B1680u;
label_1b1680:
    // 0x1b1680: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b1680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b1684:
    // 0x1b1684: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1684u;
    {
        const bool branch_taken_0x1b1684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1684) {
            ctx->pc = 0x1B16C0u;
            goto label_1b16c0;
        }
    }
    ctx->pc = 0x1B168Cu;
    // 0x1b168c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1b168cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b1690: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B1690u;
    {
        const bool branch_taken_0x1b1690 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1690u;
        // 0x1b1694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1690) {
            ctx->pc = 0x1B16C0u;
            goto label_1b16c0;
        }
    }
    ctx->pc = 0x1B1698u;
    // 0x1b1698: 0x24870050  addiu       $a3, $a0, 0x50
    ctx->pc = 0x1b1698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1b169c: 0x0  nop
    ctx->pc = 0x1b169cu;
    // NOP
label_1b16a0:
    // 0x1b16a0: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1b16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1b16a4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b16a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b16a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b16a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b16ac: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1b16acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b16b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b16b4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b16b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b16b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B16B8u;
    {
        const bool branch_taken_0x1b16b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16B8u;
        // 0x1b16bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16b8) {
            ctx->pc = 0x1B16A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b16a0;
        }
    }
    ctx->pc = 0x1B16C0u;
label_1b16c0:
    // 0x1b16c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B16C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B16C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B16C8u;
}
