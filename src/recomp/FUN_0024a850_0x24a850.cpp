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

// Function: FUN_0024a850
// Address: 0x24a850 - 0x24a950
void FUN_0024a850_0x24a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0024a850_0x24a850");
#endif

    switch (ctx->pc) {
        case 0x24a850u: goto label_24a850;
        case 0x24a854u: goto label_24a854;
        case 0x24a858u: goto label_24a858;
        case 0x24a85cu: goto label_24a85c;
        case 0x24a860u: goto label_24a860;
        case 0x24a864u: goto label_24a864;
        case 0x24a868u: goto label_24a868;
        case 0x24a86cu: goto label_24a86c;
        case 0x24a870u: goto label_24a870;
        case 0x24a874u: goto label_24a874;
        case 0x24a878u: goto label_24a878;
        case 0x24a87cu: goto label_24a87c;
        case 0x24a880u: goto label_24a880;
        case 0x24a884u: goto label_24a884;
        case 0x24a888u: goto label_24a888;
        case 0x24a88cu: goto label_24a88c;
        case 0x24a890u: goto label_24a890;
        case 0x24a894u: goto label_24a894;
        case 0x24a898u: goto label_24a898;
        case 0x24a89cu: goto label_24a89c;
        case 0x24a8a0u: goto label_24a8a0;
        case 0x24a8a4u: goto label_24a8a4;
        case 0x24a8a8u: goto label_24a8a8;
        case 0x24a8acu: goto label_24a8ac;
        case 0x24a8b0u: goto label_24a8b0;
        case 0x24a8b4u: goto label_24a8b4;
        case 0x24a8b8u: goto label_24a8b8;
        case 0x24a8bcu: goto label_24a8bc;
        case 0x24a8c0u: goto label_24a8c0;
        case 0x24a8c4u: goto label_24a8c4;
        case 0x24a8c8u: goto label_24a8c8;
        case 0x24a8ccu: goto label_24a8cc;
        case 0x24a8d0u: goto label_24a8d0;
        case 0x24a8d4u: goto label_24a8d4;
        case 0x24a8d8u: goto label_24a8d8;
        case 0x24a8dcu: goto label_24a8dc;
        case 0x24a8e0u: goto label_24a8e0;
        case 0x24a8e4u: goto label_24a8e4;
        case 0x24a8e8u: goto label_24a8e8;
        case 0x24a8ecu: goto label_24a8ec;
        case 0x24a8f0u: goto label_24a8f0;
        case 0x24a8f4u: goto label_24a8f4;
        case 0x24a8f8u: goto label_24a8f8;
        case 0x24a8fcu: goto label_24a8fc;
        case 0x24a900u: goto label_24a900;
        case 0x24a904u: goto label_24a904;
        case 0x24a908u: goto label_24a908;
        case 0x24a90cu: goto label_24a90c;
        case 0x24a910u: goto label_24a910;
        case 0x24a914u: goto label_24a914;
        case 0x24a918u: goto label_24a918;
        case 0x24a91cu: goto label_24a91c;
        case 0x24a920u: goto label_24a920;
        case 0x24a924u: goto label_24a924;
        case 0x24a928u: goto label_24a928;
        case 0x24a92cu: goto label_24a92c;
        case 0x24a930u: goto label_24a930;
        case 0x24a934u: goto label_24a934;
        case 0x24a938u: goto label_24a938;
        case 0x24a93cu: goto label_24a93c;
        case 0x24a940u: goto label_24a940;
        case 0x24a944u: goto label_24a944;
        case 0x24a948u: goto label_24a948;
        case 0x24a94cu: goto label_24a94c;
        default: break;
    }

    ctx->pc = 0x24a850u;

label_24a850:
    // 0x24a850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24a854:
    // 0x24a854: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24a854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a858:
    // 0x24a858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24a858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24a85c:
    // 0x24a85c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a860:
    // 0x24a860: 0xc066440  jal         func_199100
label_24a864:
    if (ctx->pc == 0x24A864u) {
        ctx->pc = 0x24A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A860u;
        // 0x24a864: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A868u;
        goto label_24a868;
    }
    ctx->pc = 0x24A860u;
    SET_GPR_U32(ctx, 31, 0x24A868u);
    ctx->pc = 0x24A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A860u;
    // 0x24a864: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x24A860u, 0x24A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A868u;
label_24a868:
    // 0x24a868: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x24a868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24a86c:
    // 0x24a86c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_24a870:
    if (ctx->pc == 0x24A870u) {
        ctx->pc = 0x24A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A86Cu;
        // 0x24a870: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A874u;
        goto label_24a874;
    }
    ctx->pc = 0x24A86Cu;
    {
        const bool branch_taken_0x24a86c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A86Cu;
        // 0x24a870: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a86c) {
            ctx->pc = 0x24A880u;
            goto label_24a880;
        }
    }
    ctx->pc = 0x24A874u;
label_24a874:
    // 0x24a874: 0xc06614e  jal         func_198538
label_24a878:
    if (ctx->pc == 0x24A878u) {
        ctx->pc = 0x24A87Cu;
        goto label_24a87c;
    }
    ctx->pc = 0x24A874u;
    SET_GPR_U32(ctx, 31, 0x24A87Cu);
    ctx->pc = 0x198538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198538u, 0x24A874u, 0x24A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A87Cu;
label_24a87c:
    // 0x24a87c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x24a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_24a880:
    // 0x24a880: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x24a880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_24a884:
    // 0x24a884: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x24a884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_24a888:
    // 0x24a888: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x24a888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_24a88c:
    // 0x24a88c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24a890:
    // 0x24a890: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x24a890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_24a894:
    // 0x24a894: 0xc066c42  jal         func_19B108
label_24a898:
    if (ctx->pc == 0x24A898u) {
        ctx->pc = 0x24A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A894u;
        // 0x24a898: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A89Cu;
        goto label_24a89c;
    }
    ctx->pc = 0x24A894u;
    SET_GPR_U32(ctx, 31, 0x24A89Cu);
    ctx->pc = 0x24A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A894u;
    // 0x24a898: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B108u, 0x24A894u, 0x24A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A89Cu;
label_24a89c:
    // 0x24a89c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_24a8a0:
    // 0x24a8a0: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a8a4:
    // 0x24a8a4: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x24a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_24a8a8:
    // 0x24a8a8: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x24a8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_24a8ac:
    // 0x24a8ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24a8b0:
    // 0x24a8b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24a8b4:
    // 0x24a8b4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_24a8b8:
    if (ctx->pc == 0x24A8B8u) {
        ctx->pc = 0x24A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8B4u;
        // 0x24a8b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A8BCu;
        goto label_24a8bc;
    }
    ctx->pc = 0x24A8B4u;
    {
        const bool branch_taken_0x24a8b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8B4u;
        // 0x24a8b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8b4) {
            ctx->pc = 0x24A8D4u;
            goto label_24a8d4;
        }
    }
    ctx->pc = 0x24A8BCu;
label_24a8bc:
    // 0x24a8bc: 0xa0f809  jalr        $a1
label_24a8c0:
    if (ctx->pc == 0x24A8C0u) {
        ctx->pc = 0x24A8C4u;
        goto label_24a8c4;
    }
    ctx->pc = 0x24A8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x24A8C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A8BCu, 0x24A8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A8C4u;
label_24a8c4:
    // 0x24a8c4: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a8c8:
    // 0x24a8c8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x24a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_24a8cc:
    // 0x24a8cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_24a8d0:
    // 0x24a8d0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x24a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_24a8d4:
    // 0x24a8d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_24a8d8:
    // 0x24a8d8: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a8dc:
    // 0x24a8dc: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x24a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_24a8e0:
    // 0x24a8e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24a8e4:
    // 0x24a8e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a8e8:
    // 0x24a8e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24a8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24a8ec:
    // 0x24a8ec: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_24a8f0:
    if (ctx->pc == 0x24A8F0u) {
        ctx->pc = 0x24A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8ECu;
        // 0x24a8f0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A8F4u;
        goto label_24a8f4;
    }
    ctx->pc = 0x24A8ECu;
    {
        const bool branch_taken_0x24a8ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8ECu;
        // 0x24a8f0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8ec) {
            ctx->pc = 0x24A91Cu;
            goto label_24a91c;
        }
    }
    ctx->pc = 0x24A8F4u;
label_24a8f4:
    // 0x24a8f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x24a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_24a8f8:
    // 0x24a8f8: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x24a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_24a8fc:
    // 0x24a8fc: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x24a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_24a900:
    // 0x24a900: 0x24062081  addiu       $a2, $zero, 0x2081
    ctx->pc = 0x24a900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8321));
label_24a904:
    // 0x24a904: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x24a904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a908:
    // 0x24a908: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24a908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a90c:
    // 0x24a90c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24a90cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a910:
    // 0x24a910: 0xc066c72  jal         func_19B1C8
label_24a914:
    if (ctx->pc == 0x24A914u) {
        ctx->pc = 0x24A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A910u;
        // 0x24a914: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A918u;
        goto label_24a918;
    }
    ctx->pc = 0x24A910u;
    SET_GPR_U32(ctx, 31, 0x24A918u);
    ctx->pc = 0x24A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A910u;
    // 0x24a914: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x24A910u, 0x24A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A918u;
label_24a918:
    // 0x24a918: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_24a91c:
    // 0x24a91c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x24a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_24a920:
    // 0x24a920: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x24a920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_24a924:
    // 0x24a924: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x24a924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_24a928:
    // 0x24a928: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x24a928u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_24a92c:
    // 0x24a92c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x24a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_24a930:
    // 0x24a930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a934:
    // 0x24a934: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x24a934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_24a938:
    // 0x24a938: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24a938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24a93c:
    // 0x24a93c: 0x468024  and         $s0, $v0, $a2
    ctx->pc = 0x24a93cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_24a940:
    // 0x24a940: 0xc066c98  jal         func_19B260
label_24a944:
    if (ctx->pc == 0x24A944u) {
        ctx->pc = 0x24A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A940u;
        // 0x24a944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A948u;
        goto label_24a948;
    }
    ctx->pc = 0x24A940u;
    SET_GPR_U32(ctx, 31, 0x24A948u);
    ctx->pc = 0x24A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A940u;
    // 0x24a944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B260u, 0x24A940u, 0x24A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A948u;
label_24a948:
    // 0x24a948: 0xc066c46  jal         func_19B118
label_24a94c:
    if (ctx->pc == 0x24A94Cu) {
        ctx->pc = 0x24A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A948u;
        // 0x24a94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A950u;
        goto label_fallthrough_0x24a948;
    }
    ctx->pc = 0x24A948u;
    SET_GPR_U32(ctx, 31, 0x24A950u);
    ctx->pc = 0x24A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A948u;
    // 0x24a94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B118u, 0x24A948u, 0x24A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x24a948:
    ctx->pc = 0x24A950u;
}
