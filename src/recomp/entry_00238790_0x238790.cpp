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

// Function: entry_00238790
// Address: 0x238790 - 0x238860
void entry_00238790_0x238790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238790_0x238790");
#endif

    switch (ctx->pc) {
        case 0x2387c0u: goto label_2387c0;
        case 0x2387f8u: goto label_2387f8;
        case 0x238818u: goto label_238818;
        case 0x23882cu: goto label_23882c;
        default: break;
    }

    ctx->pc = 0x238790u;

label_238790:
    // 0x238790: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x238790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_238794:
    // 0x238794: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_238798:
    if (ctx->pc == 0x238798u) {
        ctx->pc = 0x238798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238794u;
        // 0x238798: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23879Cu;
        goto label_23879c;
    }
    ctx->pc = 0x238794u;
    {
        const bool branch_taken_0x238794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238794) {
            ctx->pc = 0x238798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238794u;
            // 0x238798: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2387B0u;
            goto label_2387b0;
        }
    }
    ctx->pc = 0x23879Cu;
label_23879c:
    // 0x23879c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23879cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2387a0:
    // 0x2387a0: 0x8c430818  lw          $v1, 0x818($v0)
    ctx->pc = 0x2387a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_2387a4:
    // 0x2387a4: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x2387a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_2387a8:
    // 0x2387a8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2387a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2387ac:
    // 0x2387ac: 0x0  nop
    ctx->pc = 0x2387acu;
    // NOP
label_2387b0:
    // 0x2387b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2387b4:
    if (ctx->pc == 0x2387B4u) {
        ctx->pc = 0x2387B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387B0u;
        // 0x2387b4: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2387B8u;
        goto label_2387b8;
    }
    ctx->pc = 0x2387B0u;
    {
        const bool branch_taken_0x2387b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2387b0) {
            ctx->pc = 0x2387B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2387B0u;
            // 0x2387b4: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2387C4u;
            goto label_2387c4;
        }
    }
    ctx->pc = 0x2387B8u;
label_2387b8:
    // 0x2387b8: 0xc08e29c  jal         func_238A70
label_2387bc:
    if (ctx->pc == 0x2387BCu) {
        ctx->pc = 0x2387BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387B8u;
        // 0x2387bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2387C0u;
        goto label_2387c0;
    }
    ctx->pc = 0x2387B8u;
    SET_GPR_U32(ctx, 31, 0x2387C0u);
    ctx->pc = 0x2387BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2387B8u;
    // 0x2387bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A70u, 0x2387B8u, 0x2387C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2387C0u;
label_2387c0:
    // 0x2387c0: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x2387c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2387c4:
    // 0x2387c4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2387c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2387c8:
    // 0x2387c8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2387cc:
    if (ctx->pc == 0x2387CCu) {
        ctx->pc = 0x2387CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387C8u;
        // 0x2387cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2387D0u;
        goto label_2387d0;
    }
    ctx->pc = 0x2387C8u;
    {
        const bool branch_taken_0x2387c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2387CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387C8u;
        // 0x2387cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387c8) {
            ctx->pc = 0x238844u;
            goto label_238844;
        }
    }
    ctx->pc = 0x2387D0u;
label_2387d0:
    // 0x2387d0: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x2387d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2387d4:
    // 0x2387d4: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
label_2387d8:
    if (ctx->pc == 0x2387D8u) {
        ctx->pc = 0x2387D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387D4u;
        // 0x2387d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2387DCu;
        goto label_2387dc;
    }
    ctx->pc = 0x2387D4u;
    {
        const bool branch_taken_0x2387d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2387D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387D4u;
        // 0x2387d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387d4) {
            ctx->pc = 0x238844u;
            goto label_238844;
        }
    }
    ctx->pc = 0x2387DCu;
label_2387dc:
    // 0x2387dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2387dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2387e0:
    // 0x2387e0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2387e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_2387e4:
    // 0x2387e4: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x2387e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_2387e8:
    // 0x2387e8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2387ec:
    if (ctx->pc == 0x2387ECu) {
        ctx->pc = 0x2387ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387E8u;
        // 0x2387ec: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2387F0u;
        goto label_2387f0;
    }
    ctx->pc = 0x2387E8u;
    {
        const bool branch_taken_0x2387e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2387ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387E8u;
        // 0x2387ec: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387e8) {
            ctx->pc = 0x238810u;
            goto label_238810;
        }
    }
    ctx->pc = 0x2387F0u;
label_2387f0:
    // 0x2387f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2387f4:
    if (ctx->pc == 0x2387F4u) {
        ctx->pc = 0x2387F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387F0u;
        // 0x2387f4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2387F8u;
        goto label_2387f8;
    }
    ctx->pc = 0x2387F0u;
    {
        const bool branch_taken_0x2387f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2387F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387F0u;
        // 0x2387f4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387f0) {
            ctx->pc = 0x238810u;
            goto label_238810;
        }
    }
    ctx->pc = 0x2387F8u;
label_2387f8:
    // 0x2387f8: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2387f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2387fc:
    // 0x2387fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2387fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_238800:
    // 0x238800: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x238800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_238804:
    // 0x238804: 0x1000000f  b           . + 4 + (0xF << 2)
label_238808:
    if (ctx->pc == 0x238808u) {
        ctx->pc = 0x238808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238804u;
        // 0x238808: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23880Cu;
        goto label_23880c;
    }
    ctx->pc = 0x238804u;
    {
        const bool branch_taken_0x238804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238804u;
        // 0x238808: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238804) {
            ctx->pc = 0x238844u;
            goto label_238844;
        }
    }
    ctx->pc = 0x23880Cu;
label_23880c:
    // 0x23880c: 0x0  nop
    ctx->pc = 0x23880cu;
    // NOP
label_238810:
    // 0x238810: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
label_238814:
    if (ctx->pc == 0x238814u) {
        ctx->pc = 0x238814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238810u;
        // 0x238814: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238818u;
        goto label_238818;
    }
    ctx->pc = 0x238810u;
    {
        const bool branch_taken_0x238810 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x238814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238810u;
        // 0x238814: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238810) {
            ctx->pc = 0x238840u;
            goto label_238840;
        }
    }
    ctx->pc = 0x238818u;
label_238818:
    // 0x238818: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x238818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_23881c:
    // 0x23881c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23881cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238820:
    // 0x238820: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x238820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_238824:
    // 0x238824: 0x40f809  jalr        $v0
label_238828:
    if (ctx->pc == 0x238828u) {
        ctx->pc = 0x238828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238824u;
        // 0x238828: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23882Cu;
        goto label_23882c;
    }
    ctx->pc = 0x238824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23882Cu);
        ctx->pc = 0x238828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238824u;
        // 0x238828: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238824u, 0x23882Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23882Cu;
label_23882c:
    // 0x23882c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23882cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238830:
    // 0x238830: 0x1860fff1  blez        $v1, . + 4 + (-0xF << 2)
label_238834:
    if (ctx->pc == 0x238834u) {
        ctx->pc = 0x238834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238830u;
        // 0x238834: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238838u;
        goto label_238838;
    }
    ctx->pc = 0x238830u;
    {
        const bool branch_taken_0x238830 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x238834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238830u;
        // 0x238834: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238830) {
            ctx->pc = 0x2387F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2387f8;
        }
    }
    ctx->pc = 0x238838u;
label_238838:
    // 0x238838: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
label_23883c:
    if (ctx->pc == 0x23883Cu) {
        ctx->pc = 0x23883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238838u;
        // 0x23883c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238840u;
        goto label_238840;
    }
    ctx->pc = 0x238838u;
    {
        const bool branch_taken_0x238838 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x23883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238838u;
        // 0x23883c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238838) {
            ctx->pc = 0x238818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238818;
        }
    }
    ctx->pc = 0x238840u;
label_238840:
    // 0x238840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x238840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238844:
    // 0x238844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238848:
    // 0x238848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23884c:
    // 0x23884c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23884cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238850:
    // 0x238850: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x238850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_238854:
    // 0x238854: 0x3e00008  jr          $ra
label_238858:
    if (ctx->pc == 0x238858u) {
        ctx->pc = 0x238858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238854u;
        // 0x238858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23885Cu;
        goto label_23885c;
    }
    ctx->pc = 0x238854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238854u;
        // 0x238858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23885Cu;
label_23885c:
    // 0x23885c: 0x0  nop
    ctx->pc = 0x23885cu;
    // NOP
    ctx->pc = 0x238860u;
}
