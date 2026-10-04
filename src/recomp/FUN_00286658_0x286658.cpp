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

// Function: FUN_00286658
// Address: 0x286658 - 0x286720
void FUN_00286658_0x286658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00286658_0x286658");
#endif

    switch (ctx->pc) {
        case 0x286658u: goto label_286658;
        case 0x28665cu: goto label_28665c;
        case 0x286660u: goto label_286660;
        case 0x286664u: goto label_286664;
        case 0x286668u: goto label_286668;
        case 0x28666cu: goto label_28666c;
        case 0x286670u: goto label_286670;
        case 0x286674u: goto label_286674;
        case 0x286678u: goto label_286678;
        case 0x28667cu: goto label_28667c;
        case 0x286680u: goto label_286680;
        case 0x286684u: goto label_286684;
        case 0x286688u: goto label_286688;
        case 0x28668cu: goto label_28668c;
        case 0x286690u: goto label_286690;
        case 0x286694u: goto label_286694;
        case 0x286698u: goto label_286698;
        case 0x28669cu: goto label_28669c;
        case 0x2866a0u: goto label_2866a0;
        case 0x2866a4u: goto label_2866a4;
        case 0x2866a8u: goto label_2866a8;
        case 0x2866acu: goto label_2866ac;
        case 0x2866b0u: goto label_2866b0;
        case 0x2866b4u: goto label_2866b4;
        case 0x2866b8u: goto label_2866b8;
        case 0x2866bcu: goto label_2866bc;
        case 0x2866c0u: goto label_2866c0;
        case 0x2866c4u: goto label_2866c4;
        case 0x2866c8u: goto label_2866c8;
        case 0x2866ccu: goto label_2866cc;
        case 0x2866d0u: goto label_2866d0;
        case 0x2866d4u: goto label_2866d4;
        case 0x2866d8u: goto label_2866d8;
        case 0x2866dcu: goto label_2866dc;
        case 0x2866e0u: goto label_2866e0;
        case 0x2866e4u: goto label_2866e4;
        case 0x2866e8u: goto label_2866e8;
        case 0x2866ecu: goto label_2866ec;
        case 0x2866f0u: goto label_2866f0;
        case 0x2866f4u: goto label_2866f4;
        case 0x2866f8u: goto label_2866f8;
        case 0x2866fcu: goto label_2866fc;
        case 0x286700u: goto label_286700;
        case 0x286704u: goto label_286704;
        case 0x286708u: goto label_286708;
        case 0x28670cu: goto label_28670c;
        case 0x286710u: goto label_286710;
        case 0x286714u: goto label_286714;
        case 0x286718u: goto label_286718;
        case 0x28671cu: goto label_28671c;
        default: break;
    }

    ctx->pc = 0x286658u;

label_286658:
    // 0x286658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x286658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28665c:
    // 0x28665c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x28665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_286660:
    // 0x286660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x286660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_286664:
    // 0x286664: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x286664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_286668:
    // 0x286668: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x286668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_28666c:
    // 0x28666c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x28666cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_286670:
    // 0x286670: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x286670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_286674:
    // 0x286674: 0x3484f000  ori         $a0, $a0, 0xF000
    ctx->pc = 0x286674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
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
    ctx->pc = 0x286720u;
}
