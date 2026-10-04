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

// Function: entry_001917bc
// Address: 0x1917bc - 0x191890
void entry_001917bc_0x1917bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001917bc_0x1917bc");
#endif

    switch (ctx->pc) {
        case 0x1917c4u: goto label_1917c4;
        case 0x191868u: goto label_191868;
        case 0x191878u: goto label_191878;
        default: break;
    }

    ctx->pc = 0x1917bcu;

    // 0x1917bc: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1917BCu;
    SET_GPR_U32(ctx, 31, 0x1917C4u);
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1917BCu, 0x1917C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917C4u;
label_1917c4:
    // 0x1917c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1917c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1917c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1917C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1917CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917C8u;
        // 0x1917cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1917C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1917D0u;
    // 0x1917d0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1917d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1917d4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1917d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1917d8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1917d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1917dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1917dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1917e0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1917e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1917e4: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x1917e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
    // 0x1917e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1917e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1917ec: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1917ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1917f0: 0x8ce400e8  lw          $a0, 0xE8($a3)
    ctx->pc = 0x1917f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 232)));
    // 0x1917f4: 0x278281e8  addiu       $v0, $gp, -0x7E18
    ctx->pc = 0x1917f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935016));
    // 0x1917f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1917f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1917fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1917fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191800: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191804: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191804u;
    {
        const bool branch_taken_0x191804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191804u;
        // 0x191808: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191804) {
            ctx->pc = 0x191814u;
            goto label_191814;
        }
    }
    ctx->pc = 0x19180Cu;
    // 0x19180c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19180Cu;
    {
        const bool branch_taken_0x19180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19180Cu;
        // 0x191810: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19180c) {
            ctx->pc = 0x191840u;
            goto label_191840;
        }
    }
    ctx->pc = 0x191814u;
label_191814:
    // 0x191814: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x191818: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x191818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19181c: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x19181cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x191820: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x191820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x191824: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x191824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x191828: 0x24849d40  addiu       $a0, $a0, -0x62C0
    ctx->pc = 0x191828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942016));
    // 0x19182c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19182cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191830: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x191830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x191834: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x191834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191838: 0x24820000  addiu       $v0, $a0, 0x0
    ctx->pc = 0x191838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x19183c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19183cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191840:
    // 0x191840: 0x8ce200b0  lw          $v0, 0xB0($a3)
    ctx->pc = 0x191840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x191844: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x191844u;
    {
        const bool branch_taken_0x191844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191844u;
        // 0x191848: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191844) {
            ctx->pc = 0x191870u;
            goto label_191870;
        }
    }
    ctx->pc = 0x19184Cu;
    // 0x19184c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x19184cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x191850: 0x30421800  andi        $v0, $v0, 0x1800
    ctx->pc = 0x191850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6144);
    // 0x191854: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x191854u;
    {
        const bool branch_taken_0x191854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191854) {
            ctx->pc = 0x191870u;
            goto label_191870;
        }
    }
    ctx->pc = 0x19185Cu;
    // 0x19185c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19185cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191860: 0xc066e26  jal         func_19B898
    ctx->pc = 0x191860u;
    SET_GPR_U32(ctx, 31, 0x191868u);
    ctx->pc = 0x191864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191860u;
    // 0x191864: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x191860u, 0x191868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191868u;
label_191868:
    // 0x191868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x191868u;
    {
        const bool branch_taken_0x191868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191868u;
        // 0x19186c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191868) {
            ctx->pc = 0x19187Cu;
            goto label_19187c;
        }
    }
    ctx->pc = 0x191870u;
label_191870:
    // 0x191870: 0xc066e26  jal         func_19B898
    ctx->pc = 0x191870u;
    SET_GPR_U32(ctx, 31, 0x191878u);
    ctx->pc = 0x191874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191870u;
    // 0x191874: 0x24e50020  addiu       $a1, $a3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x191870u, 0x191878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191878u;
label_191878:
    // 0x191878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19187c:
    // 0x19187c: 0x3e00008  jr          $ra
    ctx->pc = 0x19187Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19187Cu;
        // 0x191880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19187Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191884u;
    // 0x191884: 0x0  nop
    ctx->pc = 0x191884u;
    // NOP
    // 0x191888: 0x0  nop
    ctx->pc = 0x191888u;
    // NOP
    // 0x19188c: 0x0  nop
    ctx->pc = 0x19188cu;
    // NOP
    ctx->pc = 0x191890u;
}
