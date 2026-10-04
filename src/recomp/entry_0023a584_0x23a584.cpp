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

// Function: entry_0023a584
// Address: 0x23a584 - 0x23a6b0
void entry_0023a584_0x23a584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a584_0x23a584");
#endif

    switch (ctx->pc) {
        case 0x23a5dcu: goto label_23a5dc;
        case 0x23a620u: goto label_23a620;
        case 0x23a658u: goto label_23a658;
        case 0x23a688u: goto label_23a688;
        default: break;
    }

    ctx->pc = 0x23a584u;

label_23a584:
    // 0x23a584: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23a584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23a588: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23a58c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23a58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23a590: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23a590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23a594: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23a598: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A598u;
    {
        const bool branch_taken_0x23a598 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x23a598) {
            ctx->pc = 0x23A584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a584;
        }
    }
    ctx->pc = 0x23A5A0u;
    // 0x23a5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x23A5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5A0u;
        // 0x23a5a4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A5A8u;
    // 0x23a5a8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x23a5a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a5ac: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x23a5acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x23a5b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23A5B0u;
    {
        const bool branch_taken_0x23a5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5B0u;
        // 0x23a5b4: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5b0) {
            ctx->pc = 0x23A600u;
            goto label_23a600;
        }
    }
    ctx->pc = 0x23A5B8u;
    // 0x23a5b8: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x23a5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x23a5bc: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x23a5bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x23a5c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23A5C0u;
    {
        const bool branch_taken_0x23a5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5C0u;
        // 0x23a5c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5c0) {
            ctx->pc = 0x23A600u;
            goto label_23a600;
        }
    }
    ctx->pc = 0x23A5C8u;
    // 0x23a5c8: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x23a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x23a5cc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23a5d0: 0x10c20034  beq         $a2, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x23A5D0u;
    {
        const bool branch_taken_0x23a5d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5D0u;
        // 0x23a5d4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5d0) {
            ctx->pc = 0x23A6A4u;
            goto label_23a6a4;
        }
    }
    ctx->pc = 0x23A5D8u;
    // 0x23a5d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a5dc:
    // 0x23a5dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x23a5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x23a5e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23a5e4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23a5e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23a5e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23a5ec: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23a5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23a5f0: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A5F0u;
    {
        const bool branch_taken_0x23a5f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x23a5f0) {
            ctx->pc = 0x23A5DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a5dc;
        }
    }
    ctx->pc = 0x23A5F8u;
    // 0x23a5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x23A5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5F8u;
        // 0x23a5fc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A600u;
label_23a600:
    // 0x23a600: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x23a600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x23a604: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x23A604u;
    {
        const bool branch_taken_0x23a604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a604) {
            ctx->pc = 0x23A608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A604u;
            // 0x23a608: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A67Cu;
            goto label_23a67c;
        }
    }
    ctx->pc = 0x23A60Cu;
    // 0x23a60c: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x23a60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x23a610: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23a610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23a614: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x23A614u;
    {
        const bool branch_taken_0x23a614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a614) {
            ctx->pc = 0x23A618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A614u;
            // 0x23a618: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A67Cu;
            goto label_23a67c;
        }
    }
    ctx->pc = 0x23A61Cu;
    // 0x23a61c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x23a61cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23a620:
    // 0x23a620: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x23a620u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23a624: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x23a624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x23a628: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23a628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x23a62c: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x23a62cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x23a630: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x23a630u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x23a634: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x23a634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x23a638: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23a638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23a63c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23a63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x23a640: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x23a640u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x23a644: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x23A644u;
    {
        const bool branch_taken_0x23a644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A644u;
        // 0x23a648: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a644) {
            ctx->pc = 0x23A620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a620;
        }
    }
    ctx->pc = 0x23A64Cu;
    // 0x23a64c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23a64cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23a650: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23A650u;
    {
        const bool branch_taken_0x23a650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A650u;
        // 0x23a654: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a650) {
            ctx->pc = 0x23A678u;
            goto label_23a678;
        }
    }
    ctx->pc = 0x23A658u;
label_23a658:
    // 0x23a658: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23a658u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23a65c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x23a65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x23a660: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23a660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x23a664: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23a664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23a668: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x23a668u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x23a66c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A66Cu;
    {
        const bool branch_taken_0x23a66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A66Cu;
        // 0x23a670: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a66c) {
            ctx->pc = 0x23A658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a658;
        }
    }
    ctx->pc = 0x23A674u;
    // 0x23a674: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x23a674u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23a678:
    // 0x23a678: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23a67c:
    // 0x23a67c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23a680: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23A680u;
    {
        const bool branch_taken_0x23a680 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A680u;
        // 0x23a684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a680) {
            ctx->pc = 0x23A6A4u;
            goto label_23a6a4;
        }
    }
    ctx->pc = 0x23A688u;
label_23a688:
    // 0x23a688: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23a688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23a68c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23a690: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23a690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23a694: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23a694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23a698: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23a69c: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A69Cu;
    {
        const bool branch_taken_0x23a69c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x23a69c) {
            ctx->pc = 0x23A688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a688;
        }
    }
    ctx->pc = 0x23A6A4u;
label_23a6a4:
    // 0x23a6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x23A6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6A4u;
        // 0x23a6a8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A6ACu;
    // 0x23a6ac: 0x0  nop
    ctx->pc = 0x23a6acu;
    // NOP
    ctx->pc = 0x23a6b0u;
}
