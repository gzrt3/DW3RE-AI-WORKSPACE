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

// Function: FUN_0023c540
// Address: 0x23c540 - 0x23c610
void FUN_0023c540_0x23c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023c540_0x23c540");
#endif

    switch (ctx->pc) {
        case 0x23c540u: goto label_23c540;
        case 0x23c544u: goto label_23c544;
        case 0x23c548u: goto label_23c548;
        case 0x23c54cu: goto label_23c54c;
        case 0x23c550u: goto label_23c550;
        case 0x23c554u: goto label_23c554;
        case 0x23c558u: goto label_23c558;
        case 0x23c55cu: goto label_23c55c;
        case 0x23c560u: goto label_23c560;
        case 0x23c564u: goto label_23c564;
        case 0x23c568u: goto label_23c568;
        case 0x23c56cu: goto label_23c56c;
        case 0x23c570u: goto label_23c570;
        case 0x23c574u: goto label_23c574;
        case 0x23c578u: goto label_23c578;
        case 0x23c57cu: goto label_23c57c;
        case 0x23c580u: goto label_23c580;
        case 0x23c584u: goto label_23c584;
        case 0x23c588u: goto label_23c588;
        case 0x23c58cu: goto label_23c58c;
        case 0x23c590u: goto label_23c590;
        case 0x23c594u: goto label_23c594;
        case 0x23c598u: goto label_23c598;
        case 0x23c59cu: goto label_23c59c;
        case 0x23c5a0u: goto label_23c5a0;
        case 0x23c5a4u: goto label_23c5a4;
        case 0x23c5a8u: goto label_23c5a8;
        case 0x23c5acu: goto label_23c5ac;
        case 0x23c5b0u: goto label_23c5b0;
        case 0x23c5b4u: goto label_23c5b4;
        case 0x23c5b8u: goto label_23c5b8;
        case 0x23c5bcu: goto label_23c5bc;
        case 0x23c5c0u: goto label_23c5c0;
        case 0x23c5c4u: goto label_23c5c4;
        case 0x23c5c8u: goto label_23c5c8;
        case 0x23c5ccu: goto label_23c5cc;
        case 0x23c5d0u: goto label_23c5d0;
        case 0x23c5d4u: goto label_23c5d4;
        case 0x23c5d8u: goto label_23c5d8;
        case 0x23c5dcu: goto label_23c5dc;
        case 0x23c5e0u: goto label_23c5e0;
        case 0x23c5e4u: goto label_23c5e4;
        case 0x23c5e8u: goto label_23c5e8;
        case 0x23c5ecu: goto label_23c5ec;
        case 0x23c5f0u: goto label_23c5f0;
        case 0x23c5f4u: goto label_23c5f4;
        case 0x23c5f8u: goto label_23c5f8;
        case 0x23c5fcu: goto label_23c5fc;
        case 0x23c600u: goto label_23c600;
        case 0x23c604u: goto label_23c604;
        case 0x23c608u: goto label_23c608;
        case 0x23c60cu: goto label_23c60c;
        default: break;
    }

    ctx->pc = 0x23c540u;

label_23c540:
    // 0x23c540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23c544:
    // 0x23c544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23c548:
    // 0x23c548: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c54c:
    // 0x23c54c: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x23c54cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_23c550:
    // 0x23c550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c554:
    // 0x23c554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23c558:
    // 0x23c558: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23c55c:
    if (ctx->pc == 0x23C55Cu) {
        ctx->pc = 0x23C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C558u;
        // 0x23c55c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C560u;
        goto label_23c560;
    }
    ctx->pc = 0x23C558u;
    {
        const bool branch_taken_0x23c558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C558u;
        // 0x23c55c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c558) {
            ctx->pc = 0x23C570u;
            goto label_23c570;
        }
    }
    ctx->pc = 0x23C560u;
label_23c560:
    // 0x23c560: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x23c560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_23c564:
    // 0x23c564: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c568:
    // 0x23c568: 0x10000026  b           . + 4 + (0x26 << 2)
label_23c56c:
    if (ctx->pc == 0x23C56Cu) {
        ctx->pc = 0x23C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C568u;
        // 0x23c56c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C570u;
        goto label_23c570;
    }
    ctx->pc = 0x23C568u;
    {
        const bool branch_taken_0x23c568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C568u;
        // 0x23c56c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c568) {
            ctx->pc = 0x23C604u;
            goto label_23c604;
        }
    }
    ctx->pc = 0x23C570u;
label_23c570:
    // 0x23c570: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x23c570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_23c574:
    // 0x23c574: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_23c578:
    if (ctx->pc == 0x23C578u) {
        ctx->pc = 0x23C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C574u;
        // 0x23c578: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C57Cu;
        goto label_23c57c;
    }
    ctx->pc = 0x23C574u;
    {
        const bool branch_taken_0x23c574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C574u;
        // 0x23c578: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c574) {
            ctx->pc = 0x23C594u;
            goto label_23c594;
        }
    }
    ctx->pc = 0x23C57Cu;
label_23c57c:
    // 0x23c57c: 0xc08f114  jal         func_23C450
label_23c580:
    if (ctx->pc == 0x23C580u) {
        ctx->pc = 0x23C584u;
        goto label_23c584;
    }
    ctx->pc = 0x23C57Cu;
    SET_GPR_U32(ctx, 31, 0x23C584u);
    ctx->pc = 0x23C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C450u, 0x23C57Cu, 0x23C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C584u;
label_23c584:
    // 0x23c584: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_23c588:
    if (ctx->pc == 0x23C588u) {
        ctx->pc = 0x23C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C584u;
        // 0x23c588: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C58Cu;
        goto label_23c58c;
    }
    ctx->pc = 0x23C584u;
    {
        const bool branch_taken_0x23c584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C584u;
        // 0x23c588: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c584) {
            ctx->pc = 0x23C604u;
            goto label_23c604;
        }
    }
    ctx->pc = 0x23C58Cu;
label_23c58c:
    // 0x23c58c: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x23c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_23c590:
    // 0x23c590: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23c590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23c594:
    // 0x23c594: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x23c594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23c598:
    // 0x23c598: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x23c598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c59c:
    // 0x23c59c: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
label_23c5a0:
    if (ctx->pc == 0x23C5A0u) {
        ctx->pc = 0x23C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C59Cu;
        // 0x23c5a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5A4u;
        goto label_23c5a4;
    }
    ctx->pc = 0x23C59Cu;
    {
        const bool branch_taken_0x23c59c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c59c) {
            ctx->pc = 0x23C5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C59Cu;
            // 0x23c5a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C5D0u;
            goto label_23c5d0;
        }
    }
    ctx->pc = 0x23C5A4u;
label_23c5a4:
    // 0x23c5a4: 0xc08f1e6  jal         func_23C798
label_23c5a8:
    if (ctx->pc == 0x23C5A8u) {
        ctx->pc = 0x23C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5A4u;
        // 0x23c5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5ACu;
        goto label_23c5ac;
    }
    ctx->pc = 0x23C5A4u;
    SET_GPR_U32(ctx, 31, 0x23C5ACu);
    ctx->pc = 0x23C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C5A4u;
    // 0x23c5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C798u, 0x23C5A4u, 0x23C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C5ACu;
label_23c5ac:
    // 0x23c5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23c5b0:
    // 0x23c5b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23c5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c5b4:
    // 0x23c5b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c5b8:
    // 0x23c5b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c5bc:
    // 0x23c5bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c5c0:
    // 0x23c5c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23c5c4:
    // 0x23c5c4: 0x808f1ce  j           func_23C738
label_23c5c8:
    if (ctx->pc == 0x23C5C8u) {
        ctx->pc = 0x23C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5C4u;
        // 0x23c5c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5CCu;
        goto label_23c5cc;
    }
    ctx->pc = 0x23C5C4u;
    ctx->pc = 0x23C5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C5C4u;
    // 0x23c5c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C738u;
    FUN_0023c738_0x23c738(rdram, ctx, runtime); return;
    ctx->pc = 0x23C5CCu;
label_23c5cc:
    // 0x23c5cc: 0x0  nop
    ctx->pc = 0x23c5ccu;
    // NOP
label_23c5d0:
    // 0x23c5d0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_23c5d4:
    if (ctx->pc == 0x23C5D4u) {
        ctx->pc = 0x23C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5D0u;
        // 0x23c5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5D8u;
        goto label_23c5d8;
    }
    ctx->pc = 0x23C5D0u;
    {
        const bool branch_taken_0x23c5d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x23C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5D0u;
        // 0x23c5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5d0) {
            ctx->pc = 0x23C604u;
            goto label_23c604;
        }
    }
    ctx->pc = 0x23C5D8u;
label_23c5d8:
    // 0x23c5d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c5dc:
    // 0x23c5dc: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
label_23c5e0:
    if (ctx->pc == 0x23C5E0u) {
        ctx->pc = 0x23C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5DCu;
        // 0x23c5e0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5E4u;
        goto label_23c5e4;
    }
    ctx->pc = 0x23C5DCu;
    {
        const bool branch_taken_0x23c5dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c5dc) {
            ctx->pc = 0x23C5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C5DCu;
            // 0x23c5e0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C5F8u;
            goto label_23c5f8;
        }
    }
    ctx->pc = 0x23C5E4u;
label_23c5e4:
    // 0x23c5e4: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x23c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_23c5e8:
    // 0x23c5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c5ec:
    // 0x23c5ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_23c5f0:
    if (ctx->pc == 0x23C5F0u) {
        ctx->pc = 0x23C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5ECu;
        // 0x23c5f0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5F4u;
        goto label_23c5f4;
    }
    ctx->pc = 0x23C5ECu;
    {
        const bool branch_taken_0x23c5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5ECu;
        // 0x23c5f0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5ec) {
            ctx->pc = 0x23C604u;
            goto label_23c604;
        }
    }
    ctx->pc = 0x23C5F4u;
label_23c5f4:
    // 0x23c5f4: 0x0  nop
    ctx->pc = 0x23c5f4u;
    // NOP
label_23c5f8:
    // 0x23c5f8: 0xa0f809  jalr        $a1
label_23c5fc:
    if (ctx->pc == 0x23C5FCu) {
        ctx->pc = 0x23C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5F8u;
        // 0x23c5fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C600u;
        goto label_23c600;
    }
    ctx->pc = 0x23C5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23C600u);
        ctx->pc = 0x23C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5F8u;
        // 0x23c5fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C5F8u, 0x23C600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C600u;
label_23c600:
    // 0x23c600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23c600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c604:
    // 0x23c604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c608:
    // 0x23c608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c60c:
    // 0x23c60c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x23c610u;
}
