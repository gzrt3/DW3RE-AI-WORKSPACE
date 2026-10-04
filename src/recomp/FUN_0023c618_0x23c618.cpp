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

// Function: FUN_0023c618
// Address: 0x23c618 - 0x23c6a8
void FUN_0023c618_0x23c618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023c618_0x23c618");
#endif

    switch (ctx->pc) {
        case 0x23c618u: goto label_23c618;
        case 0x23c61cu: goto label_23c61c;
        case 0x23c620u: goto label_23c620;
        case 0x23c624u: goto label_23c624;
        case 0x23c628u: goto label_23c628;
        case 0x23c62cu: goto label_23c62c;
        case 0x23c630u: goto label_23c630;
        case 0x23c634u: goto label_23c634;
        case 0x23c638u: goto label_23c638;
        case 0x23c63cu: goto label_23c63c;
        case 0x23c640u: goto label_23c640;
        case 0x23c644u: goto label_23c644;
        case 0x23c648u: goto label_23c648;
        case 0x23c64cu: goto label_23c64c;
        case 0x23c650u: goto label_23c650;
        case 0x23c654u: goto label_23c654;
        case 0x23c658u: goto label_23c658;
        case 0x23c65cu: goto label_23c65c;
        case 0x23c660u: goto label_23c660;
        case 0x23c664u: goto label_23c664;
        case 0x23c668u: goto label_23c668;
        case 0x23c66cu: goto label_23c66c;
        case 0x23c670u: goto label_23c670;
        case 0x23c674u: goto label_23c674;
        case 0x23c678u: goto label_23c678;
        case 0x23c67cu: goto label_23c67c;
        case 0x23c680u: goto label_23c680;
        case 0x23c684u: goto label_23c684;
        case 0x23c688u: goto label_23c688;
        case 0x23c68cu: goto label_23c68c;
        case 0x23c690u: goto label_23c690;
        case 0x23c694u: goto label_23c694;
        case 0x23c698u: goto label_23c698;
        case 0x23c69cu: goto label_23c69c;
        case 0x23c6a0u: goto label_23c6a0;
        case 0x23c6a4u: goto label_23c6a4;
        default: break;
    }

    ctx->pc = 0x23c618u;

label_23c618:
    // 0x23c618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23c61c:
    // 0x23c61c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c620:
    // 0x23c620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c624:
    // 0x23c624: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23c624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c628:
    // 0x23c628: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x23c628u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_23c62c:
    // 0x23c62c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23c630:
    // 0x23c630: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23c634:
    // 0x23c634: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_23c638:
    if (ctx->pc == 0x23C638u) {
        ctx->pc = 0x23C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C634u;
        // 0x23c638: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C63Cu;
        goto label_23c63c;
    }
    ctx->pc = 0x23C634u;
    {
        const bool branch_taken_0x23c634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C634u;
        // 0x23c638: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c634) {
            ctx->pc = 0x23C69Cu;
            goto label_23c69c;
        }
    }
    ctx->pc = 0x23C63Cu;
label_23c63c:
    // 0x23c63c: 0x8e2501d4  lw          $a1, 0x1D4($s1)
    ctx->pc = 0x23c63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_23c640:
    // 0x23c640: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_23c644:
    if (ctx->pc == 0x23C644u) {
        ctx->pc = 0x23C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C640u;
        // 0x23c644: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C648u;
        goto label_23c648;
    }
    ctx->pc = 0x23C640u;
    {
        const bool branch_taken_0x23c640 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C640u;
        // 0x23c644: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c640) {
            ctx->pc = 0x23C664u;
            goto label_23c664;
        }
    }
    ctx->pc = 0x23C648u;
label_23c648:
    // 0x23c648: 0xc08f114  jal         func_23C450
label_23c64c:
    if (ctx->pc == 0x23C64Cu) {
        ctx->pc = 0x23C650u;
        goto label_23c650;
    }
    ctx->pc = 0x23C648u;
    SET_GPR_U32(ctx, 31, 0x23C650u);
    ctx->pc = 0x23C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C450u, 0x23C648u, 0x23C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C650u;
label_23c650:
    // 0x23c650: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_23c654:
    if (ctx->pc == 0x23C654u) {
        ctx->pc = 0x23C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C650u;
        // 0x23c654: 0x8e2501d4  lw          $a1, 0x1D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C658u;
        goto label_23c658;
    }
    ctx->pc = 0x23C650u;
    {
        const bool branch_taken_0x23c650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c650) {
            ctx->pc = 0x23C654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C650u;
            // 0x23c654: 0x8e2501d4  lw          $a1, 0x1D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C660u;
            goto label_23c660;
        }
    }
    ctx->pc = 0x23C658u;
label_23c658:
    // 0x23c658: 0x10000010  b           . + 4 + (0x10 << 2)
label_23c65c:
    if (ctx->pc == 0x23C65Cu) {
        ctx->pc = 0x23C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C658u;
        // 0x23c65c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C660u;
        goto label_23c660;
    }
    ctx->pc = 0x23C658u;
    {
        const bool branch_taken_0x23c658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C658u;
        // 0x23c65c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c658) {
            ctx->pc = 0x23C69Cu;
            goto label_23c69c;
        }
    }
    ctx->pc = 0x23C660u;
label_23c660:
    // 0x23c660: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x23c660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_23c664:
    // 0x23c664: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x23c664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23c668:
    // 0x23c668: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x23c668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c66c:
    // 0x23c66c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_23c670:
    if (ctx->pc == 0x23C670u) {
        ctx->pc = 0x23C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C66Cu;
        // 0x23c670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C674u;
        goto label_23c674;
    }
    ctx->pc = 0x23C66Cu;
    {
        const bool branch_taken_0x23c66c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C66Cu;
        // 0x23c670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c66c) {
            ctx->pc = 0x23C69Cu;
            goto label_23c69c;
        }
    }
    ctx->pc = 0x23C674u;
label_23c674:
    // 0x23c674: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23c674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c678:
    // 0x23c678: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_23c67c:
    if (ctx->pc == 0x23C67Cu) {
        ctx->pc = 0x23C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C678u;
        // 0x23c67c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C680u;
        goto label_23c680;
    }
    ctx->pc = 0x23C678u;
    {
        const bool branch_taken_0x23c678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x23C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C678u;
        // 0x23c67c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c678) {
            ctx->pc = 0x23C69Cu;
            goto label_23c69c;
        }
    }
    ctx->pc = 0x23C680u;
label_23c680:
    // 0x23c680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c684:
    // 0x23c684: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_23c688:
    if (ctx->pc == 0x23C688u) {
        ctx->pc = 0x23C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C684u;
        // 0x23c688: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C68Cu;
        goto label_23c68c;
    }
    ctx->pc = 0x23C684u;
    {
        const bool branch_taken_0x23c684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x23C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C684u;
        // 0x23c688: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c684) {
            ctx->pc = 0x23C69Cu;
            goto label_23c69c;
        }
    }
    ctx->pc = 0x23C68Cu;
label_23c68c:
    // 0x23c68c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x23c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_23c690:
    // 0x23c690: 0xa0f809  jalr        $a1
label_23c694:
    if (ctx->pc == 0x23C694u) {
        ctx->pc = 0x23C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C690u;
        // 0x23c694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C698u;
        goto label_23c698;
    }
    ctx->pc = 0x23C690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23C698u);
        ctx->pc = 0x23C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C690u;
        // 0x23c694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C690u, 0x23C698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C698u;
label_23c698:
    // 0x23c698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23c698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c69c:
    // 0x23c69c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c6a0:
    // 0x23c6a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c6a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c6a4:
    // 0x23c6a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x23c6a8u;
}
