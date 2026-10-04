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

// Function: entry_00222514
// Address: 0x222514 - 0x222d20
void entry_00222514_0x222514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222514_0x222514");
#endif

    switch (ctx->pc) {
        case 0x222684u: goto label_222684;
        case 0x2226d4u: goto label_2226d4;
        case 0x22270cu: goto label_22270c;
        case 0x22275cu: goto label_22275c;
        case 0x222b18u: goto label_222b18;
        case 0x222b68u: goto label_222b68;
        case 0x222c50u: goto label_222c50;
        case 0x222ca0u: goto label_222ca0;
        default: break;
    }

    ctx->pc = 0x222514u;

    // 0x222514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x222514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22251c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22251cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222520: 0x3e00008  jr          $ra
    ctx->pc = 0x222520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222520u;
        // 0x222524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222528u;
    // 0x222528: 0x0  nop
    ctx->pc = 0x222528u;
    // NOP
    // 0x22252c: 0x0  nop
    ctx->pc = 0x22252cu;
    // NOP
    // 0x222530: 0x90830034  lbu         $v1, 0x34($a0)
    ctx->pc = 0x222530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x222534: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x222534u;
    {
        const bool branch_taken_0x222534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222534u;
        // 0x222538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222534) {
            ctx->pc = 0x22265Cu;
            goto label_22265c;
        }
    }
    ctx->pc = 0x22253Cu;
    // 0x22253c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22253cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222540: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x222540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x222544: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x222544u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x334AF4u));
    // 0x222548: 0x14a30044  bne         $a1, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x222548u;
    {
        const bool branch_taken_0x222548 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x222548) {
            ctx->pc = 0x22265Cu;
            goto label_22265c;
        }
    }
    ctx->pc = 0x222550u;
    // 0x222550: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222554: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222554u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x222558: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x222558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22255c: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x22255Cu;
    {
        const bool branch_taken_0x22255c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22255c) {
            ctx->pc = 0x22265Cu;
            goto label_22265c;
        }
    }
    ctx->pc = 0x222564u;
    // 0x222564: 0x8f84863c  lw          $a0, -0x79C4($gp)
    ctx->pc = 0x222564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x222568: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x222568u;
    {
        const bool branch_taken_0x222568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222568u;
        // 0x22256c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222568) {
            ctx->pc = 0x2225A8u;
            goto label_2225a8;
        }
    }
    ctx->pc = 0x222570u;
    // 0x222570: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x222574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222578: 0x9027490c  lbu         $a3, 0x490C($at)
    ctx->pc = 0x222578u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x22257c: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x22257cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x222580: 0x652014  dsllv       $a0, $a1, $v1
    ctx->pc = 0x222580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x222584: 0x24c6e1b0  addiu       $a2, $a2, -0x1E50
    ctx->pc = 0x222584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959536));
    // 0x222588: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x222588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x22258c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x22258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x222590: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x222590u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222594: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x222594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x222598: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x222598u;
    {
        const bool branch_taken_0x222598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222598) {
            ctx->pc = 0x22265Cu;
            goto label_22265c;
        }
    }
    ctx->pc = 0x2225A0u;
    // 0x2225a0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2225A0u;
    {
        const bool branch_taken_0x2225a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2225A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225A0u;
        // 0x2225a4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225a0) {
            ctx->pc = 0x22265Cu;
            goto label_22265c;
        }
    }
    ctx->pc = 0x2225A8u;
label_2225a8:
    // 0x2225a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x2225a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x2225ac: 0x8c274970  lw          $a3, 0x4970($at)
    ctx->pc = 0x2225acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    // 0x2225b0: 0x24a53420  addiu       $a1, $a1, 0x3420
    ctx->pc = 0x2225b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13344));
    // 0x2225b4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2225b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2225b8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2225b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2225bc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2225bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2225c0: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x2225c0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2225c4: 0x10e40007  beq         $a3, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2225C4u;
    {
        const bool branch_taken_0x2225c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x2225C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225C4u;
        // 0x2225c8: 0x9026490d  lbu         $a2, 0x490D($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225c4) {
            ctx->pc = 0x2225E4u;
            goto label_2225e4;
        }
    }
    ctx->pc = 0x2225CCu;
    // 0x2225cc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2225ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2225d0: 0x10e40005  beq         $a3, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2225D0u;
    {
        const bool branch_taken_0x2225d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x2225D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225D0u;
        // 0x2225d4: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225d0) {
            ctx->pc = 0x2225E8u;
            goto label_2225e8;
        }
    }
    ctx->pc = 0x2225D8u;
    // 0x2225d8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2225d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2225dc: 0x14e40004  bne         $a3, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2225DCu;
    {
        const bool branch_taken_0x2225dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x2225E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225DCu;
        // 0x2225e0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225dc) {
            ctx->pc = 0x2225F0u;
            goto label_2225f0;
        }
    }
    ctx->pc = 0x2225E4u;
label_2225e4:
    // 0x2225e4: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2225e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2225e8:
    // 0x2225e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2225E8u;
    {
        const bool branch_taken_0x2225e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2225ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225E8u;
        // 0x2225ec: 0x82040  sll         $a0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225e8) {
            ctx->pc = 0x2225FCu;
            goto label_2225fc;
        }
    }
    ctx->pc = 0x2225F0u;
label_2225f0:
    // 0x2225f0: 0x9029490f  lbu         $t1, 0x490F($at)
    ctx->pc = 0x2225f0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18703)));
    // 0x2225f4: 0x0  nop
    ctx->pc = 0x2225f4u;
    // NOP
    // 0x2225f8: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x2225f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2225fc:
    // 0x2225fc: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2225fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x222600: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x222600u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x222604: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x222604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x222608: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x222608u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x22260c: 0x24a5dad0  addiu       $a1, $a1, -0x2530
    ctx->pc = 0x22260cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957776));
    // 0x222610: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x222610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x222614: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x222614u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x222618: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x222618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x22261c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x22261cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x222620: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x222620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x222624: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x222624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x222628: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x222628u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x22262c: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x22262cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x222630: 0x24c40000  addiu       $a0, $a2, 0x0
    ctx->pc = 0x222630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x222634: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x222634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x222638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x222638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22263c: 0x24860000  addiu       $a2, $a0, 0x0
    ctx->pc = 0x22263cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x222640: 0x652014  dsllv       $a0, $a1, $v1
    ctx->pc = 0x222640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x222644: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x222644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x222648: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x222648u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22264c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22264cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x222650: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x222650u;
    {
        const bool branch_taken_0x222650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222650) {
            ctx->pc = 0x22265Cu;
            goto label_22265c;
        }
    }
    ctx->pc = 0x222658u;
    // 0x222658: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x222658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22265c:
    // 0x22265c: 0x3e00008  jr          $ra
    ctx->pc = 0x22265Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22265Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222664u;
    // 0x222664: 0x0  nop
    ctx->pc = 0x222664u;
    // NOP
    // 0x222668: 0x0  nop
    ctx->pc = 0x222668u;
    // NOP
    // 0x22266c: 0x0  nop
    ctx->pc = 0x22266cu;
    // NOP
    // 0x222670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222674: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x222674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222678: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x222678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x22267c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22267cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222680: 0x24844a30  addiu       $a0, $a0, 0x4A30
    ctx->pc = 0x222680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18992));
label_222684:
    // 0x222684: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x222684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x222688: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x222688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x22268c: 0xa1050003  sb          $a1, 0x3($t0)
    ctx->pc = 0x22268cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x222690: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x222690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x222694: 0xa1050007  sb          $a1, 0x7($t0)
    ctx->pc = 0x222694u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x222698: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x222698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x22269c: 0xa105000b  sb          $a1, 0xB($t0)
    ctx->pc = 0x22269cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 11), (uint8_t)GPR_U32(ctx, 5));
    // 0x2226a0: 0xa105000f  sb          $a1, 0xF($t0)
    ctx->pc = 0x2226a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 15), (uint8_t)GPR_U32(ctx, 5));
    // 0x2226a4: 0xa1050013  sb          $a1, 0x13($t0)
    ctx->pc = 0x2226a4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 19), (uint8_t)GPR_U32(ctx, 5));
    // 0x2226a8: 0xa1050017  sb          $a1, 0x17($t0)
    ctx->pc = 0x2226a8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 23), (uint8_t)GPR_U32(ctx, 5));
    // 0x2226ac: 0xa105001b  sb          $a1, 0x1B($t0)
    ctx->pc = 0x2226acu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 27), (uint8_t)GPR_U32(ctx, 5));
    // 0x2226b0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2226B0u;
    {
        const bool branch_taken_0x2226b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2226B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226B0u;
        // 0x2226b4: 0xa105001f  sb          $a1, 0x1F($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 31), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226b0) {
            ctx->pc = 0x222684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222684;
        }
    }
    ctx->pc = 0x2226B8u;
    // 0x2226b8: 0x28c1000c  slti        $at, $a2, 0xC
    ctx->pc = 0x2226b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2226bc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2226BCu;
    {
        const bool branch_taken_0x2226bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2226bc) {
            ctx->pc = 0x2226F4u;
            goto label_2226f4;
        }
    }
    ctx->pc = 0x2226C4u;
    // 0x2226c4: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x2226c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2226c8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x2226c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x2226cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2226ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2226d0: 0x24844a30  addiu       $a0, $a0, 0x4A30
    ctx->pc = 0x2226d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18992));
label_2226d4:
    // 0x2226d4: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2226d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2226d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2226d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2226dc: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x2226dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x2226e0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2226e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2226e4: 0x28c3000c  slti        $v1, $a2, 0xC
    ctx->pc = 0x2226e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2226e8: 0x0  nop
    ctx->pc = 0x2226e8u;
    // NOP
    // 0x2226ec: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2226ECu;
    {
        const bool branch_taken_0x2226ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2226ec) {
            ctx->pc = 0x2226D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2226d4;
        }
    }
    ctx->pc = 0x2226F4u;
label_2226f4:
    // 0x2226f4: 0x0  nop
    ctx->pc = 0x2226f4u;
    // NOP
    // 0x2226f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2226f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2226fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2226fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222700: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x222700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x222704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x222704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222708: 0x24844a30  addiu       $a0, $a0, 0x4A30
    ctx->pc = 0x222708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18992));
label_22270c:
    // 0x22270c: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x22270cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x222710: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x222710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x222714: 0xa0e50033  sb          $a1, 0x33($a3)
    ctx->pc = 0x222714u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 51), (uint8_t)GPR_U32(ctx, 5));
    // 0x222718: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x222718u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22271c: 0xa0e50037  sb          $a1, 0x37($a3)
    ctx->pc = 0x22271cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x222720: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x222720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x222724: 0xa0e5003b  sb          $a1, 0x3B($a3)
    ctx->pc = 0x222724u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 59), (uint8_t)GPR_U32(ctx, 5));
    // 0x222728: 0xa0e5003f  sb          $a1, 0x3F($a3)
    ctx->pc = 0x222728u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 63), (uint8_t)GPR_U32(ctx, 5));
    // 0x22272c: 0xa0e50043  sb          $a1, 0x43($a3)
    ctx->pc = 0x22272cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 67), (uint8_t)GPR_U32(ctx, 5));
    // 0x222730: 0xa0e50047  sb          $a1, 0x47($a3)
    ctx->pc = 0x222730u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 71), (uint8_t)GPR_U32(ctx, 5));
    // 0x222734: 0xa0e5004b  sb          $a1, 0x4B($a3)
    ctx->pc = 0x222734u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 75), (uint8_t)GPR_U32(ctx, 5));
    // 0x222738: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x222738u;
    {
        const bool branch_taken_0x222738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222738u;
        // 0x22273c: 0xa0e5004f  sb          $a1, 0x4F($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 79), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222738) {
            ctx->pc = 0x22270Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22270c;
        }
    }
    ctx->pc = 0x222740u;
    // 0x222740: 0x2901000c  slti        $at, $t0, 0xC
    ctx->pc = 0x222740u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x222744: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x222744u;
    {
        const bool branch_taken_0x222744 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x222744) {
            ctx->pc = 0x22277Cu;
            goto label_22277c;
        }
    }
    ctx->pc = 0x22274Cu;
    // 0x22274c: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x22274cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x222750: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x222750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x222754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x222754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222758: 0x24844a30  addiu       $a0, $a0, 0x4A30
    ctx->pc = 0x222758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18992));
label_22275c:
    // 0x22275c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x22275cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x222760: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x222760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x222764: 0xa0650033  sb          $a1, 0x33($v1)
    ctx->pc = 0x222764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 51), (uint8_t)GPR_U32(ctx, 5));
    // 0x222768: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x222768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x22276c: 0x2903000c  slti        $v1, $t0, 0xC
    ctx->pc = 0x22276cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x222770: 0x0  nop
    ctx->pc = 0x222770u;
    // NOP
    // 0x222774: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x222774u;
    {
        const bool branch_taken_0x222774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222774) {
            ctx->pc = 0x22275Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22275c;
        }
    }
    ctx->pc = 0x22277Cu;
label_22277c:
    // 0x22277c: 0x0  nop
    ctx->pc = 0x22277cu;
    // NOP
    // 0x222780: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222784: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x222784u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x334AF4u));
    // 0x222788: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x222788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x22278c: 0x10830160  beq         $a0, $v1, . + 4 + (0x160 << 2)
    ctx->pc = 0x22278Cu;
    {
        const bool branch_taken_0x22278c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22278c) {
            ctx->pc = 0x222D10u;
            goto label_222d10;
        }
    }
    ctx->pc = 0x222794u;
    // 0x222794: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x222794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x222798: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x222798u;
    {
        const bool branch_taken_0x222798 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x222798) {
            ctx->pc = 0x2227A8u;
            goto label_2227a8;
        }
    }
    ctx->pc = 0x2227A0u;
    // 0x2227a0: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x2227A0u;
    {
        const bool branch_taken_0x2227a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2227a0) {
            ctx->pc = 0x222D10u;
            goto label_222d10;
        }
    }
    ctx->pc = 0x2227A8u;
label_2227a8:
    // 0x2227a8: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x2227a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x2227ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2227acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227b0: 0x8c232570  lw          $v1, 0x2570($at)
    ctx->pc = 0x2227b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2F2570u));
    // 0x2227b4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2227b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2227b8: 0x9464000a  lhu         $a0, 0xA($v1)
    ctx->pc = 0x2227b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2227bc: 0x9027497c  lbu         $a3, 0x497C($at)
    ctx->pc = 0x2227bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x33497Cu));
    // 0x2227c0: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2227C0u;
    {
        const bool branch_taken_0x2227c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227C0u;
        // 0x2227c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227c0) {
            ctx->pc = 0x2227E8u;
            goto label_2227e8;
        }
    }
    ctx->pc = 0x2227C8u;
    // 0x2227c8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2227c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2227cc: 0x8c234974  lw          $v1, 0x4974($at)
    ctx->pc = 0x2227ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334974u));
    // 0x2227d0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2227D0u;
    {
        const bool branch_taken_0x2227d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2227d0) {
            ctx->pc = 0x2227E8u;
            goto label_2227e8;
        }
    }
    ctx->pc = 0x2227D8u;
    // 0x2227d8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2227d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2227dc: 0x8c23496c  lw          $v1, 0x496C($at)
    ctx->pc = 0x2227dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33496Cu));
    // 0x2227e0: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2227E0u;
    {
        const bool branch_taken_0x2227e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2227e0) {
            ctx->pc = 0x222854u;
            goto label_222854;
        }
    }
    ctx->pc = 0x2227E8u;
label_2227e8:
    // 0x2227e8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2227e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2227ec: 0x90234a0c  lbu         $v1, 0x4A0C($at)
    ctx->pc = 0x2227ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334A0Cu));
    // 0x2227f0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2227F0u;
    {
        const bool branch_taken_0x2227f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227F0u;
        // 0x2227f4: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227f0) {
            ctx->pc = 0x22281Cu;
            goto label_22281c;
        }
    }
    ctx->pc = 0x2227F8u;
    // 0x2227f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2227f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2227fc: 0x8c234a04  lw          $v1, 0x4A04($at)
    ctx->pc = 0x2227fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334A04u));
    // 0x222800: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x222800u;
    {
        const bool branch_taken_0x222800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222800) {
            ctx->pc = 0x222818u;
            goto label_222818;
        }
    }
    ctx->pc = 0x222808u;
    // 0x222808: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x22280c: 0x8c2349fc  lw          $v1, 0x49FC($at)
    ctx->pc = 0x22280cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3349FCu));
    // 0x222810: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x222810u;
    {
        const bool branch_taken_0x222810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222810) {
            ctx->pc = 0x222854u;
            goto label_222854;
        }
    }
    ctx->pc = 0x222818u;
label_222818:
    // 0x222818: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x222818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_22281c:
    // 0x22281c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x22281cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x222820: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x222820u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222824: 0xa0204a60  sb          $zero, 0x4A60($at)
    ctx->pc = 0x222824u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19040), (uint8_t)GPR_U32(ctx, 0));
    // 0x222828: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x222828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x22282c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x22282cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x222830: 0x24633b82  addiu       $v1, $v1, 0x3B82
    ctx->pc = 0x222830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15234));
    // 0x222834: 0xa0204a61  sb          $zero, 0x4A61($at)
    ctx->pc = 0x222834u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x364A61u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x364A61u, _value); } while (0);
    // 0x222838: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x222838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22283c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x22283cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x222840: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x222840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222844: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222848: 0xa0234a62  sb          $v1, 0x4A62($at)
    ctx->pc = 0x222848u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x364A62u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x364A62u, _value); } while (0);
    // 0x22284c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x22284cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x222850: 0xa0204a63  sb          $zero, 0x4A63($at)
    ctx->pc = 0x222850u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x364A63u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x364A63u, _value); } while (0);
label_222854:
    // 0x222854: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222858: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x222858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22285c: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x22285cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x222860: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x222860u;
    {
        const bool branch_taken_0x222860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x222864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222860u;
        // 0x222864: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222860) {
            ctx->pc = 0x222940u;
            goto label_222940;
        }
    }
    ctx->pc = 0x222868u;
    // 0x222868: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x222868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x22286c: 0x8c2325b8  lw          $v1, 0x25B8($at)
    ctx->pc = 0x22286cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2F25B8u));
    // 0x222870: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x222870u;
    {
        const bool branch_taken_0x222870 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x222874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222870u;
        // 0x222874: 0x9469000a  lhu         $t1, 0xA($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222870) {
            ctx->pc = 0x22289Cu;
            goto label_22289c;
        }
    }
    ctx->pc = 0x222878u;
    // 0x222878: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x22287c: 0x8c234974  lw          $v1, 0x4974($at)
    ctx->pc = 0x22287cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334974u));
    // 0x222880: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x222880u;
    {
        const bool branch_taken_0x222880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222880) {
            ctx->pc = 0x22289Cu;
            goto label_22289c;
        }
    }
    ctx->pc = 0x222888u;
    // 0x222888: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x22288c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222890: 0x8c24496c  lw          $a0, 0x496C($at)
    ctx->pc = 0x222890u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33496Cu));
    // 0x222894: 0x10830097  beq         $a0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x222894u;
    {
        const bool branch_taken_0x222894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x222894) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x22289Cu;
label_22289c:
    // 0x22289c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22289cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2228a0: 0x90234a0c  lbu         $v1, 0x4A0C($at)
    ctx->pc = 0x2228a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334A0Cu));
    // 0x2228a4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2228A4u;
    {
        const bool branch_taken_0x2228a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2228a4) {
            ctx->pc = 0x2228D0u;
            goto label_2228d0;
        }
    }
    ctx->pc = 0x2228ACu;
    // 0x2228ac: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2228acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2228b0: 0x8c234a04  lw          $v1, 0x4A04($at)
    ctx->pc = 0x2228b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334A04u));
    // 0x2228b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2228B4u;
    {
        const bool branch_taken_0x2228b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2228b4) {
            ctx->pc = 0x2228D0u;
            goto label_2228d0;
        }
    }
    ctx->pc = 0x2228BCu;
    // 0x2228bc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2228bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2228c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2228c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2228c4: 0x8c2449fc  lw          $a0, 0x49FC($at)
    ctx->pc = 0x2228c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3349FCu));
    // 0x2228c8: 0x1083008a  beq         $a0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x2228C8u;
    {
        const bool branch_taken_0x2228c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2228c8) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x2228D0u;
label_2228d0:
    // 0x2228d0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2228d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2228d4: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x2228d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2228d8: 0x24634a60  addiu       $v1, $v1, 0x4A60
    ctx->pc = 0x2228d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19040));
    // 0x2228dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2228dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2228e0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2228e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2228e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2228e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2228e8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2228e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2228ec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2228ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2228f0: 0x24634a61  addiu       $v1, $v1, 0x4A61
    ctx->pc = 0x2228f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19041));
    // 0x2228f4: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x2228f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2228f8: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x2228f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2228fc: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x2228fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x222900: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x222900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x222904: 0x694023  subu        $t0, $v1, $t1
    ctx->pc = 0x222904u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x222908: 0x24843b82  addiu       $a0, $a0, 0x3B82
    ctx->pc = 0x222908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15234));
    // 0x22290c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22290cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x222910: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x222910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x222914: 0x24634a62  addiu       $v1, $v1, 0x4A62
    ctx->pc = 0x222914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19042));
    // 0x222918: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x222918u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x22291c: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x22291cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x222920: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x222920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x222924: 0x24634a63  addiu       $v1, $v1, 0x4A63
    ctx->pc = 0x222924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19043));
    // 0x222928: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x222928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x22292c: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x22292cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x222930: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x222930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x222934: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x222934u;
    {
        const bool branch_taken_0x222934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222934) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x22293Cu;
    // 0x22293c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x22293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_222940:
    // 0x222940: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x222940u;
    {
        const bool branch_taken_0x222940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x222944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222940u;
        // 0x222944: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222940) {
            ctx->pc = 0x222A20u;
            goto label_222a20;
        }
    }
    ctx->pc = 0x222948u;
    // 0x222948: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x222948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x22294c: 0x8c2325b8  lw          $v1, 0x25B8($at)
    ctx->pc = 0x22294cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2F25B8u));
    // 0x222950: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x222950u;
    {
        const bool branch_taken_0x222950 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x222954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222950u;
        // 0x222954: 0x9469000a  lhu         $t1, 0xA($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222950) {
            ctx->pc = 0x22297Cu;
            goto label_22297c;
        }
    }
    ctx->pc = 0x222958u;
    // 0x222958: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x22295c: 0x8c234974  lw          $v1, 0x4974($at)
    ctx->pc = 0x22295cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334974u));
    // 0x222960: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x222960u;
    {
        const bool branch_taken_0x222960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222960) {
            ctx->pc = 0x22297Cu;
            goto label_22297c;
        }
    }
    ctx->pc = 0x222968u;
    // 0x222968: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x22296c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222970: 0x8c24496c  lw          $a0, 0x496C($at)
    ctx->pc = 0x222970u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33496Cu));
    // 0x222974: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x222974u;
    {
        const bool branch_taken_0x222974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x222974) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x22297Cu;
label_22297c:
    // 0x22297c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22297cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222980: 0x90234a0c  lbu         $v1, 0x4A0C($at)
    ctx->pc = 0x222980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334A0Cu));
    // 0x222984: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x222984u;
    {
        const bool branch_taken_0x222984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222984) {
            ctx->pc = 0x2229B0u;
            goto label_2229b0;
        }
    }
    ctx->pc = 0x22298Cu;
    // 0x22298c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22298cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222990: 0x8c234a04  lw          $v1, 0x4A04($at)
    ctx->pc = 0x222990u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334A04u));
    // 0x222994: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x222994u;
    {
        const bool branch_taken_0x222994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222994) {
            ctx->pc = 0x2229B0u;
            goto label_2229b0;
        }
    }
    ctx->pc = 0x22299Cu;
    // 0x22299c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22299cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2229a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2229a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2229a4: 0x8c2449fc  lw          $a0, 0x49FC($at)
    ctx->pc = 0x2229a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3349FCu));
    // 0x2229a8: 0x10830052  beq         $a0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x2229A8u;
    {
        const bool branch_taken_0x2229a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2229a8) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x2229B0u;
label_2229b0:
    // 0x2229b0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2229b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2229b4: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x2229b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2229b8: 0x24634a60  addiu       $v1, $v1, 0x4A60
    ctx->pc = 0x2229b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19040));
    // 0x2229bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2229bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2229c0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2229c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2229c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2229c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2229c8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2229c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2229cc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2229ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2229d0: 0x24634a61  addiu       $v1, $v1, 0x4A61
    ctx->pc = 0x2229d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19041));
    // 0x2229d4: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x2229d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2229d8: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x2229d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2229dc: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x2229dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2229e0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x2229e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x2229e4: 0x694023  subu        $t0, $v1, $t1
    ctx->pc = 0x2229e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2229e8: 0x24843b82  addiu       $a0, $a0, 0x3B82
    ctx->pc = 0x2229e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15234));
    // 0x2229ec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2229ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x2229f0: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x2229f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2229f4: 0x24634a62  addiu       $v1, $v1, 0x4A62
    ctx->pc = 0x2229f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19042));
    // 0x2229f8: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x2229f8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2229fc: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x2229fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x222a00: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x222a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x222a04: 0x24634a63  addiu       $v1, $v1, 0x4A63
    ctx->pc = 0x222a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19043));
    // 0x222a08: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x222a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x222a0c: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x222a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x222a10: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x222a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x222a14: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x222A14u;
    {
        const bool branch_taken_0x222a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222a14) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x222A1Cu;
    // 0x222a1c: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x222a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_222a20:
    // 0x222a20: 0x14830034  bne         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x222A20u;
    {
        const bool branch_taken_0x222a20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x222a20) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x222A28u;
    // 0x222a28: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x222a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x222a2c: 0x8c2325b8  lw          $v1, 0x25B8($at)
    ctx->pc = 0x222a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2F25B8u));
    // 0x222a30: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x222A30u;
    {
        const bool branch_taken_0x222a30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A30u;
        // 0x222a34: 0x9469000a  lhu         $t1, 0xA($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a30) {
            ctx->pc = 0x222A5Cu;
            goto label_222a5c;
        }
    }
    ctx->pc = 0x222A38u;
    // 0x222a38: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222a3c: 0x8c234974  lw          $v1, 0x4974($at)
    ctx->pc = 0x222a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334974u));
    // 0x222a40: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x222A40u;
    {
        const bool branch_taken_0x222a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222a40) {
            ctx->pc = 0x222A5Cu;
            goto label_222a5c;
        }
    }
    ctx->pc = 0x222A48u;
    // 0x222a48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222a4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x222a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222a50: 0x8c24496c  lw          $a0, 0x496C($at)
    ctx->pc = 0x222a50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33496Cu));
    // 0x222a54: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x222A54u;
    {
        const bool branch_taken_0x222a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x222a54) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x222A5Cu;
label_222a5c:
    // 0x222a5c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222a60: 0x90234a0c  lbu         $v1, 0x4A0C($at)
    ctx->pc = 0x222a60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334A0Cu));
    // 0x222a64: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x222A64u;
    {
        const bool branch_taken_0x222a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222a64) {
            ctx->pc = 0x222A90u;
            goto label_222a90;
        }
    }
    ctx->pc = 0x222A6Cu;
    // 0x222a6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222a70: 0x8c234a04  lw          $v1, 0x4A04($at)
    ctx->pc = 0x222a70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334A04u));
    // 0x222a74: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x222A74u;
    {
        const bool branch_taken_0x222a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222a74) {
            ctx->pc = 0x222A90u;
            goto label_222a90;
        }
    }
    ctx->pc = 0x222A7Cu;
    // 0x222a7c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222a80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x222a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222a84: 0x8c2449fc  lw          $a0, 0x49FC($at)
    ctx->pc = 0x222a84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3349FCu));
    // 0x222a88: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x222A88u;
    {
        const bool branch_taken_0x222a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x222a88) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x222A90u;
label_222a90:
    // 0x222a90: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x222a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x222a94: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x222a94u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x222a98: 0x24634a60  addiu       $v1, $v1, 0x4A60
    ctx->pc = 0x222a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19040));
    // 0x222a9c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x222a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222aa0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x222aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x222aa4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222aa8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x222aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x222aac: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x222aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x222ab0: 0x24634a61  addiu       $v1, $v1, 0x4A61
    ctx->pc = 0x222ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19041));
    // 0x222ab4: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x222ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x222ab8: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x222ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x222abc: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x222abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x222ac0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x222ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x222ac4: 0x694023  subu        $t0, $v1, $t1
    ctx->pc = 0x222ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x222ac8: 0x24843b82  addiu       $a0, $a0, 0x3B82
    ctx->pc = 0x222ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15234));
    // 0x222acc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x222accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x222ad0: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x222ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x222ad4: 0x24634a62  addiu       $v1, $v1, 0x4A62
    ctx->pc = 0x222ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19042));
    // 0x222ad8: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x222ad8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x222adc: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x222adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x222ae0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x222ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x222ae4: 0x24634a63  addiu       $v1, $v1, 0x4A63
    ctx->pc = 0x222ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19043));
    // 0x222ae8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x222ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x222aec: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x222aecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x222af0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x222af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_222af4:
    // 0x222af4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x222af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x222af8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x222af8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222afc: 0x24846d28  addiu       $a0, $a0, 0x6D28
    ctx->pc = 0x222afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27944));
    // 0x222b00: 0x3c0b0036  lui         $t3, 0x36
    ctx->pc = 0x222b00u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)54 << 16));
    // 0x222b04: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x222b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x222b08: 0x256b4a30  addiu       $t3, $t3, 0x4A30
    ctx->pc = 0x222b08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 18992));
    // 0x222b0c: 0x24633b80  addiu       $v1, $v1, 0x3B80
    ctx->pc = 0x222b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15232));
    // 0x222b10: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x222b10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222b14: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x222b14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_222b18:
    // 0x222b18: 0x0  nop
    ctx->pc = 0x222b18u;
    // NOP
    // 0x222b1c: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x222b1cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222b20: 0x91a90010  lbu         $t1, 0x10($t5)
    ctx->pc = 0x222b20u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x222b24: 0x1920003c  blez        $t1, . + 4 + (0x3C << 2)
    ctx->pc = 0x222B24u;
    {
        const bool branch_taken_0x222b24 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x222b24) {
            ctx->pc = 0x222C18u;
            goto label_222c18;
        }
    }
    ctx->pc = 0x222B2Cu;
    // 0x222b2c: 0x95b8000a  lhu         $t8, 0xA($t5)
    ctx->pc = 0x222b2cu;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x222b30: 0x184900  sll         $t1, $t8, 4
    ctx->pc = 0x222b30u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x222b34: 0x1384823  subu        $t1, $t1, $t8
    ctx->pc = 0x222b34u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 24)));
    // 0x222b38: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x222b38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x222b3c: 0x912f0002  lbu         $t7, 0x2($t1)
    ctx->pc = 0x222b3cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x222b40: 0x29e90029  slti        $t1, $t7, 0x29
    ctx->pc = 0x222b40u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x222b44: 0x15200004  bnez        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x222B44u;
    {
        const bool branch_taken_0x222b44 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x222b44) {
            ctx->pc = 0x222B58u;
            goto label_222b58;
        }
    }
    ctx->pc = 0x222B4Cu;
    // 0x222b4c: 0x91a90012  lbu         $t1, 0x12($t5)
    ctx->pc = 0x222b4cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 18)));
    // 0x222b50: 0x152c0031  bne         $t1, $t4, . + 4 + (0x31 << 2)
    ctx->pc = 0x222B50u;
    {
        const bool branch_taken_0x222b50 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 12));
        if (branch_taken_0x222b50) {
            ctx->pc = 0x222C18u;
            goto label_222c18;
        }
    }
    ctx->pc = 0x222B58u;
label_222b58:
    // 0x222b58: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x222b58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x222b5c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x222B5Cu;
    {
        const bool branch_taken_0x222b5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B5Cu;
        // 0x222b60: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b5c) {
            ctx->pc = 0x222B88u;
            goto label_222b88;
        }
    }
    ctx->pc = 0x222B64u;
    // 0x222b64: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x222b64u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222b68:
    // 0x222b68: 0x16e4821  addu        $t1, $t3, $t6
    ctx->pc = 0x222b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x222b6c: 0x91290032  lbu         $t1, 0x32($t1)
    ctx->pc = 0x222b6cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 50)));
    // 0x222b70: 0x112f0005  beq         $t1, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x222B70u;
    {
        const bool branch_taken_0x222b70 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 15));
        if (branch_taken_0x222b70) {
            ctx->pc = 0x222B88u;
            goto label_222b88;
        }
    }
    ctx->pc = 0x222B78u;
    // 0x222b78: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x222b78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x222b7c: 0x1a6482a  slt         $t1, $t5, $a2
    ctx->pc = 0x222b7cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x222b80: 0x1520fff9  bnez        $t1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x222B80u;
    {
        const bool branch_taken_0x222b80 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x222B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B80u;
        // 0x222b84: 0x25ce0004  addiu       $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b80) {
            ctx->pc = 0x222B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222b68;
        }
    }
    ctx->pc = 0x222B88u;
label_222b88:
    // 0x222b88: 0x15a60023  bne         $t5, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x222B88u;
    {
        const bool branch_taken_0x222b88 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 6));
        if (branch_taken_0x222b88) {
            ctx->pc = 0x222C18u;
            goto label_222c18;
        }
    }
    ctx->pc = 0x222B90u;
    // 0x222b90: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x222B90u;
    {
        const bool branch_taken_0x222b90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B90u;
        // 0x222b94: 0x330dffff  andi        $t5, $t8, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b90) {
            ctx->pc = 0x222BB8u;
            goto label_222bb8;
        }
    }
    ctx->pc = 0x222B98u;
    // 0x222b98: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222b9c: 0x8c294974  lw          $t1, 0x4974($at)
    ctx->pc = 0x222b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x334974u));
    // 0x222ba0: 0x152a0005  bne         $t1, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x222BA0u;
    {
        const bool branch_taken_0x222ba0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        if (branch_taken_0x222ba0) {
            ctx->pc = 0x222BB8u;
            goto label_222bb8;
        }
    }
    ctx->pc = 0x222BA8u;
    // 0x222ba8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222bac: 0x8c29496c  lw          $t1, 0x496C($at)
    ctx->pc = 0x222bacu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x33496Cu));
    // 0x222bb0: 0x11280018  beq         $t1, $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x222BB0u;
    {
        const bool branch_taken_0x222bb0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x222bb0) {
            ctx->pc = 0x222C14u;
            goto label_222c14;
        }
    }
    ctx->pc = 0x222BB8u;
label_222bb8:
    // 0x222bb8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222bbc: 0x90294a0c  lbu         $t1, 0x4A0C($at)
    ctx->pc = 0x222bbcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x334A0Cu));
    // 0x222bc0: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x222BC0u;
    {
        const bool branch_taken_0x222bc0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x222bc0) {
            ctx->pc = 0x222BE8u;
            goto label_222be8;
        }
    }
    ctx->pc = 0x222BC8u;
    // 0x222bc8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222bcc: 0x8c294a04  lw          $t1, 0x4A04($at)
    ctx->pc = 0x222bccu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x334A04u));
    // 0x222bd0: 0x152a0005  bne         $t1, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x222BD0u;
    {
        const bool branch_taken_0x222bd0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        if (branch_taken_0x222bd0) {
            ctx->pc = 0x222BE8u;
            goto label_222be8;
        }
    }
    ctx->pc = 0x222BD8u;
    // 0x222bd8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x222bdc: 0x8c2949fc  lw          $t1, 0x49FC($at)
    ctx->pc = 0x222bdcu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3349FCu));
    // 0x222be0: 0x1128000c  beq         $t1, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x222BE0u;
    {
        const bool branch_taken_0x222be0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x222be0) {
            ctx->pc = 0x222C14u;
            goto label_222c14;
        }
    }
    ctx->pc = 0x222BE8u;
label_222be8:
    // 0x222be8: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x222be8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x222bec: 0x1697021  addu        $t6, $t3, $t1
    ctx->pc = 0x222becu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x222bf0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222bf4: 0xd4900  sll         $t1, $t5, 4
    ctx->pc = 0x222bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x222bf8: 0xa1ca0030  sb          $t2, 0x30($t6)
    ctx->pc = 0x222bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 48), (uint8_t)GPR_U32(ctx, 10));
    // 0x222bfc: 0x12d4823  subu        $t1, $t1, $t5
    ctx->pc = 0x222bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x222c00: 0xa1c80031  sb          $t0, 0x31($t6)
    ctx->pc = 0x222c00u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 49), (uint8_t)GPR_U32(ctx, 8));
    // 0x222c04: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x222c04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x222c08: 0x91290002  lbu         $t1, 0x2($t1)
    ctx->pc = 0x222c08u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x222c0c: 0xa1c90032  sb          $t1, 0x32($t6)
    ctx->pc = 0x222c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 50), (uint8_t)GPR_U32(ctx, 9));
    // 0x222c10: 0xa1c00033  sb          $zero, 0x33($t6)
    ctx->pc = 0x222c10u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 51), (uint8_t)GPR_U32(ctx, 0));
label_222c14:
    // 0x222c14: 0x0  nop
    ctx->pc = 0x222c14u;
    // NOP
label_222c18:
    // 0x222c18: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x222c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x222c1c: 0x290900ff  slti        $t1, $t0, 0xFF
    ctx->pc = 0x222c1cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x222c20: 0x1520ffbd  bnez        $t1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x222C20u;
    {
        const bool branch_taken_0x222c20 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x222C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C20u;
        // 0x222c24: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c20) {
            ctx->pc = 0x222B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222b18;
        }
    }
    ctx->pc = 0x222C28u;
    // 0x222c28: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x222c28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x222c2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x222c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c30: 0x24c66d28  addiu       $a2, $a2, 0x6D28
    ctx->pc = 0x222c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27944));
    // 0x222c34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x222c34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c38: 0x3c0a0036  lui         $t2, 0x36
    ctx->pc = 0x222c38u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)54 << 16));
    // 0x222c3c: 0x3c0c0025  lui         $t4, 0x25
    ctx->pc = 0x222c3cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)37 << 16));
    // 0x222c40: 0x254a4a30  addiu       $t2, $t2, 0x4A30
    ctx->pc = 0x222c40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 18992));
    // 0x222c44: 0x258c3b80  addiu       $t4, $t4, 0x3B80
    ctx->pc = 0x222c44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 15232));
    // 0x222c48: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x222c48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222c4c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x222c4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_222c50:
    // 0x222c50: 0x0  nop
    ctx->pc = 0x222c50u;
    // NOP
    // 0x222c54: 0x8ccd0000  lw          $t5, 0x0($a2)
    ctx->pc = 0x222c54u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x222c58: 0x91a70010  lbu         $a3, 0x10($t5)
    ctx->pc = 0x222c58u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x222c5c: 0x18e00027  blez        $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x222C5Cu;
    {
        const bool branch_taken_0x222c5c = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x222c5c) {
            ctx->pc = 0x222CFCu;
            goto label_222cfc;
        }
    }
    ctx->pc = 0x222C64u;
    // 0x222c64: 0x95a8000a  lhu         $t0, 0xA($t5)
    ctx->pc = 0x222c64u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x222c68: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x222c68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x222c6c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x222c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x222c70: 0x1873821  addu        $a3, $t4, $a3
    ctx->pc = 0x222c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x222c74: 0x90ee0002  lbu         $t6, 0x2($a3)
    ctx->pc = 0x222c74u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x222c78: 0x29c70029  slti        $a3, $t6, 0x29
    ctx->pc = 0x222c78u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x222c7c: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x222C7Cu;
    {
        const bool branch_taken_0x222c7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x222c7c) {
            ctx->pc = 0x222C90u;
            goto label_222c90;
        }
    }
    ctx->pc = 0x222C84u;
    // 0x222c84: 0x91a70012  lbu         $a3, 0x12($t5)
    ctx->pc = 0x222c84u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 18)));
    // 0x222c88: 0x14eb001c  bne         $a3, $t3, . + 4 + (0x1C << 2)
    ctx->pc = 0x222C88u;
    {
        const bool branch_taken_0x222c88 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x222c88) {
            ctx->pc = 0x222CFCu;
            goto label_222cfc;
        }
    }
    ctx->pc = 0x222C90u;
label_222c90:
    // 0x222c90: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x222c90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x222c94: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x222C94u;
    {
        const bool branch_taken_0x222c94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C94u;
        // 0x222c98: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c94) {
            ctx->pc = 0x222CC0u;
            goto label_222cc0;
        }
    }
    ctx->pc = 0x222C9Cu;
    // 0x222c9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x222c9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222ca0:
    // 0x222ca0: 0x1483821  addu        $a3, $t2, $t0
    ctx->pc = 0x222ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x222ca4: 0x90e70002  lbu         $a3, 0x2($a3)
    ctx->pc = 0x222ca4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x222ca8: 0x10ee0005  beq         $a3, $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x222CA8u;
    {
        const bool branch_taken_0x222ca8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        if (branch_taken_0x222ca8) {
            ctx->pc = 0x222CC0u;
            goto label_222cc0;
        }
    }
    ctx->pc = 0x222CB0u;
    // 0x222cb0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x222cb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x222cb4: 0x1a5382a  slt         $a3, $t5, $a1
    ctx->pc = 0x222cb4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x222cb8: 0x14e0fff9  bnez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x222CB8u;
    {
        const bool branch_taken_0x222cb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x222CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CB8u;
        // 0x222cbc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cb8) {
            ctx->pc = 0x222CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222ca0;
        }
    }
    ctx->pc = 0x222CC0u;
label_222cc0:
    // 0x222cc0: 0x15a5000e  bne         $t5, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x222CC0u;
    {
        const bool branch_taken_0x222cc0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 5));
        if (branch_taken_0x222cc0) {
            ctx->pc = 0x222CFCu;
            goto label_222cfc;
        }
    }
    ctx->pc = 0x222CC8u;
    // 0x222cc8: 0x1436821  addu        $t5, $t2, $v1
    ctx->pc = 0x222cc8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x222ccc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x222cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x222cd0: 0xa1a90000  sb          $t1, 0x0($t5)
    ctx->pc = 0x222cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x222cd4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x222cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x222cd8: 0xa1a40001  sb          $a0, 0x1($t5)
    ctx->pc = 0x222cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x222cdc: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x222cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x222ce0: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x222ce0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x222ce4: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x222ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x222ce8: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x222ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x222cec: 0x1873821  addu        $a3, $t4, $a3
    ctx->pc = 0x222cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x222cf0: 0x90e70002  lbu         $a3, 0x2($a3)
    ctx->pc = 0x222cf0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x222cf4: 0xa1a70002  sb          $a3, 0x2($t5)
    ctx->pc = 0x222cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x222cf8: 0xa1a00003  sb          $zero, 0x3($t5)
    ctx->pc = 0x222cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 0));
label_222cfc:
    // 0x222cfc: 0x0  nop
    ctx->pc = 0x222cfcu;
    // NOP
    // 0x222d00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x222d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x222d04: 0x288700ff  slti        $a3, $a0, 0xFF
    ctx->pc = 0x222d04u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x222d08: 0x14e0ffd1  bnez        $a3, . + 4 + (-0x2F << 2)
    ctx->pc = 0x222D08u;
    {
        const bool branch_taken_0x222d08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x222D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D08u;
        // 0x222d0c: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d08) {
            ctx->pc = 0x222C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222c50;
        }
    }
    ctx->pc = 0x222D10u;
label_222d10:
    // 0x222d10: 0x3e00008  jr          $ra
    ctx->pc = 0x222D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222D18u;
    // 0x222d18: 0x0  nop
    ctx->pc = 0x222d18u;
    // NOP
    // 0x222d1c: 0x0  nop
    ctx->pc = 0x222d1cu;
    // NOP
    ctx->pc = 0x222d20u;
}
