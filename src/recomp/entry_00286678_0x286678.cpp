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

// Function: entry_00286678
// Address: 0x286678 - 0x286728
void entry_00286678_0x286678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286678_0x286678");
#endif

    switch (ctx->pc) {
        case 0x2866b4u: goto label_2866b4;
        case 0x2866ccu: goto label_2866cc;
        case 0x2866dcu: goto label_2866dc;
        case 0x2866ecu: goto label_2866ec;
        case 0x2866fcu: goto label_2866fc;
        case 0x28670cu: goto label_28670c;
        case 0x28671cu: goto label_28671c;
        default: break;
    }

    ctx->pc = 0x286678u;

label_286678:
    // 0x286678: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28667c:
    // 0x28667c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x28667cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_286680:
    // 0x286680: 0x0  nop
    ctx->pc = 0x286680u;
    // NOP
label_286684:
    // 0x286684: 0x0  nop
    ctx->pc = 0x286684u;
    // NOP
label_286688:
    // 0x286688: 0x0  nop
    ctx->pc = 0x286688u;
    // NOP
label_28668c:
    // 0x28668c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_286690:
    if (ctx->pc == 0x286690u) {
        ctx->pc = 0x286694u;
        goto label_286694;
    }
    ctx->pc = 0x28668Cu;
    {
        const bool branch_taken_0x28668c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28668c) {
            ctx->pc = 0x286678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286678;
        }
    }
    ctx->pc = 0x286694u;
label_286694:
    // 0x286694: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x286694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_286698:
    // 0x286698: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x286698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28669c:
    // 0x28669c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x28669cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_2866a0:
    // 0x2866a0: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x2866a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_2866a4:
    // 0x2866a4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2866a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2866a8:
    // 0x2866a8: 0x8c624760  lw          $v0, 0x4760($v1)
    ctx->pc = 0x2866a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18272)));
label_2866ac:
    // 0x2866ac: 0x40f809  jalr        $v0
label_2866b0:
    if (ctx->pc == 0x2866B0u) {
        ctx->pc = 0x2866B4u;
        goto label_2866b4;
    }
    ctx->pc = 0x2866ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2866B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866ACu, 0x2866B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2866B4u;
label_2866b4:
    // 0x2866b4: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2866b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_2866b8:
    // 0x2866b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2866b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2866bc:
    // 0x2866bc: 0x8c434764  lw          $v1, 0x4764($v0)
    ctx->pc = 0x2866bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18276)));
label_2866c0:
    // 0x2866c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2866c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2866c4:
    // 0x2866c4: 0x60f809  jalr        $v1
label_2866c8:
    if (ctx->pc == 0x2866C8u) {
        ctx->pc = 0x2866C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866C4u;
        // 0x2866c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2866CCu;
        goto label_2866cc;
    }
    ctx->pc = 0x2866C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2866CCu);
        ctx->pc = 0x2866C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866C4u;
        // 0x2866c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866C4u, 0x2866CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2866CCu;
label_2866cc:
    // 0x2866cc: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2866ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_2866d0:
    // 0x2866d0: 0x8c43474c  lw          $v1, 0x474C($v0)
    ctx->pc = 0x2866d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18252)));
label_2866d4:
    // 0x2866d4: 0x60f809  jalr        $v1
label_2866d8:
    if (ctx->pc == 0x2866D8u) {
        ctx->pc = 0x2866D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866D4u;
        // 0x2866d8: 0x3404dffd  ori         $a0, $zero, 0xDFFD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57341);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2866DCu;
        goto label_2866dc;
    }
    ctx->pc = 0x2866D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2866DCu);
        ctx->pc = 0x2866D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866D4u;
        // 0x2866d8: 0x3404dffd  ori         $a0, $zero, 0xDFFD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57341);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866D4u, 0x2866DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2866DCu;
label_2866dc:
    // 0x2866dc: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2866dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_2866e0:
    // 0x2866e0: 0x8c434750  lw          $v1, 0x4750($v0)
    ctx->pc = 0x2866e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18256)));
label_2866e4:
    // 0x2866e4: 0x60f809  jalr        $v1
label_2866e8:
    if (ctx->pc == 0x2866E8u) {
        ctx->pc = 0x2866ECu;
        goto label_2866ec;
    }
    ctx->pc = 0x2866E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2866ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866E4u, 0x2866ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2866ECu;
label_2866ec:
    // 0x2866ec: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2866ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_2866f0:
    // 0x2866f0: 0x8c43475c  lw          $v1, 0x475C($v0)
    ctx->pc = 0x2866f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18268)));
label_2866f4:
    // 0x2866f4: 0x60f809  jalr        $v1
label_2866f8:
    if (ctx->pc == 0x2866F8u) {
        ctx->pc = 0x2866F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866F4u;
        // 0x2866f8: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2866FCu;
        goto label_2866fc;
    }
    ctx->pc = 0x2866F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2866FCu);
        ctx->pc = 0x2866F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866F4u;
        // 0x2866f8: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866F4u, 0x2866FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2866FCu;
label_2866fc:
    // 0x2866fc: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2866fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_286700:
    // 0x286700: 0x8c434754  lw          $v1, 0x4754($v0)
    ctx->pc = 0x286700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18260)));
label_286704:
    // 0x286704: 0x60f809  jalr        $v1
label_286708:
    if (ctx->pc == 0x286708u) {
        ctx->pc = 0x28670Cu;
        goto label_28670c;
    }
    ctx->pc = 0x286704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28670Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286704u, 0x28670Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28670Cu;
label_28670c:
    // 0x28670c: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x28670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_286710:
    // 0x286710: 0x8c434758  lw          $v1, 0x4758($v0)
    ctx->pc = 0x286710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18264)));
label_286714:
    // 0x286714: 0x60f809  jalr        $v1
label_286718:
    if (ctx->pc == 0x286718u) {
        ctx->pc = 0x28671Cu;
        goto label_28671c;
    }
    ctx->pc = 0x286714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28671Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286714u, 0x28671Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28671Cu;
label_28671c:
    // 0x28671c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28671cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286720:
    // 0x286720: 0x3e00008  jr          $ra
label_286724:
    if (ctx->pc == 0x286724u) {
        ctx->pc = 0x286724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286720u;
        // 0x286724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286728u;
        goto label_fallthrough_0x286720;
    }
    ctx->pc = 0x286720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286720u;
        // 0x286724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x286720:
    ctx->pc = 0x286728u;
}
