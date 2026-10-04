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

// Function: FUN_001ad5d8
// Address: 0x1ad5d8 - 0x1ad6cc
void FUN_001ad5d8_0x1ad5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad5d8_0x1ad5d8");
#endif

    switch (ctx->pc) {
        case 0x1ad618u: goto label_1ad618;
        case 0x1ad624u: goto label_1ad624;
        case 0x1ad634u: goto label_1ad634;
        case 0x1ad648u: goto label_1ad648;
        case 0x1ad660u: goto label_1ad660;
        case 0x1ad674u: goto label_1ad674;
        case 0x1ad690u: goto label_1ad690;
        default: break;
    }

    ctx->pc = 0x1ad5d8u;

    // 0x1ad5d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ad5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ad5dc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ad5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1ad5e0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1ad5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1ad5e4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ad5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ad5e8: 0x3c15001b  lui         $s5, 0x1B
    ctx->pc = 0x1ad5e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)27 << 16));
    // 0x1ad5ec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ad5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ad5f0: 0x3c14001b  lui         $s4, 0x1B
    ctx->pc = 0x1ad5f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)27 << 16));
    // 0x1ad5f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ad5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ad5f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ad5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ad5fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ad5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ad600: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ad600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ad604: 0x24506278  addiu       $s0, $v0, 0x6278
    ctx->pc = 0x1ad604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25208));
    // 0x1ad608: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1ad608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1ad60c: 0x8c446278  lw          $a0, 0x6278($v0)
    ctx->pc = 0x1ad60cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x286278u));
    // 0x1ad610: 0xc06b5b6  jal         func_1AD6D8
    ctx->pc = 0x1AD610u;
    SET_GPR_U32(ctx, 31, 0x1AD618u);
    ctx->pc = 0x1AD614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD610u;
    // 0x1ad614: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD6D8u, 0x1AD610u, 0x1AD618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD618u;
label_1ad618:
    // 0x1ad618: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1ad618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ad61c: 0xc06b5b6  jal         func_1AD6D8
    ctx->pc = 0x1AD61Cu;
    SET_GPR_U32(ctx, 31, 0x1AD624u);
    ctx->pc = 0x1AD620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD61Cu;
    // 0x1ad620: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD6D8u, 0x1AD61Cu, 0x1AD624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD624u;
label_1ad624:
    // 0x1ad624: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ad624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ad628: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1ad628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1ad62c: 0xc06b564  jal         func_1AD590
    ctx->pc = 0x1AD62Cu;
    SET_GPR_U32(ctx, 31, 0x1AD634u);
    ctx->pc = 0x1AD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD62Cu;
    // 0x1ad630: 0x26a6d550  addiu       $a2, $s5, -0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD590u, 0x1AD62Cu, 0x1AD634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD634u;
label_1ad634:
    // 0x1ad634: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ad634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad638: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ad638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ad63c: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1ad63cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1ad640: 0xc06b564  jal         func_1AD590
    ctx->pc = 0x1AD640u;
    SET_GPR_U32(ctx, 31, 0x1AD648u);
    ctx->pc = 0x1AD644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD640u;
    // 0x1ad644: 0x2686d518  addiu       $a2, $s4, -0x2AE8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD590u, 0x1AD640u, 0x1AD648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD648u;
label_1ad648:
    // 0x1ad648: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x1ad648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
    // 0x1ad64c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ad64cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad650: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x1ad650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x1ad654: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AD654u;
    {
        const bool branch_taken_0x1ad654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1AD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD654u;
        // 0x1ad658: 0x3c160028  lui         $s6, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad654) {
            ctx->pc = 0x1AD6A8u;
            goto label_1ad6a8;
        }
    }
    ctx->pc = 0x1AD65Cu;
    // 0x1ad65c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1ad65cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1ad660:
    // 0x1ad660: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AD660u;
    {
        const bool branch_taken_0x1ad660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD660u;
        // 0x1ad664: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad660) {
            ctx->pc = 0x1AD680u;
            goto label_1ad680;
        }
    }
    ctx->pc = 0x1AD668u;
    // 0x1ad668: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1ad668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1ad66c: 0xc06b564  jal         func_1AD590
    ctx->pc = 0x1AD66Cu;
    SET_GPR_U32(ctx, 31, 0x1AD674u);
    ctx->pc = 0x1AD670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD66Cu;
    // 0x1ad670: 0x26a6d550  addiu       $a2, $s5, -0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD590u, 0x1AD66Cu, 0x1AD674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD674u;
label_1ad674:
    // 0x1ad674: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ad674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad678: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AD678u;
    {
        const bool branch_taken_0x1ad678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD678u;
        // 0x1ad67c: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad678) {
            ctx->pc = 0x1AD698u;
            goto label_1ad698;
        }
    }
    ctx->pc = 0x1AD680u;
label_1ad680:
    // 0x1ad680: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1ad680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1ad684: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1ad684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1ad688: 0xc06b564  jal         func_1AD590
    ctx->pc = 0x1AD688u;
    SET_GPR_U32(ctx, 31, 0x1AD690u);
    ctx->pc = 0x1AD68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD688u;
    // 0x1ad68c: 0x2686d518  addiu       $a2, $s4, -0x2AE8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD590u, 0x1AD688u, 0x1AD690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD690u;
label_1ad690:
    // 0x1ad690: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ad690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad694: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x1ad694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_1ad698:
    // 0x1ad698: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1AD698u;
    {
        const bool branch_taken_0x1ad698 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1AD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD698u;
        // 0x1ad69c: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad698) {
            ctx->pc = 0x1AD660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad660;
        }
    }
    ctx->pc = 0x1AD6A0u;
    // 0x1ad6a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD6A0u;
    {
        const bool branch_taken_0x1ad6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6A0u;
        // 0x1ad6a4: 0xaed16270  sw          $s1, 0x6270($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 25200), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6a0) {
            ctx->pc = 0x1AD6ACu;
            goto label_1ad6ac;
        }
    }
    ctx->pc = 0x1AD6A8u;
label_1ad6a8:
    // 0x1ad6a8: 0xaed16270  sw          $s1, 0x6270($s6)
    ctx->pc = 0x1ad6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 25200), GPR_U32(ctx, 17));
label_1ad6ac:
    // 0x1ad6ac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ad6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ad6b0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1ad6b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ad6b4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1ad6b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ad6b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ad6b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad6bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ad6bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad6c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ad6c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad6c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ad6c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad6c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ad6ccu;
}
