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

// Function: FUN_0013d590
// Address: 0x13d590 - 0x13d6e4
void FUN_0013d590_0x13d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d590_0x13d590");
#endif

    switch (ctx->pc) {
        case 0x13d5a8u: goto label_13d5a8;
        case 0x13d650u: goto label_13d650;
        default: break;
    }

    ctx->pc = 0x13d590u;

    // 0x13d590: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13d590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13d594: 0x8c257b44  lw          $a1, 0x7B44($at)
    ctx->pc = 0x13d594u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x317B44u));
    // 0x13d598: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13d598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13d59c: 0x8c277b40  lw          $a3, 0x7B40($at)
    ctx->pc = 0x13d59cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x317B40u));
    // 0x13d5a0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13D5A0u;
    {
        const bool branch_taken_0x13d5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5A0u;
        // 0x13d5a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5a0) {
            ctx->pc = 0x13D630u;
            goto label_13d630;
        }
    }
    ctx->pc = 0x13D5A8u;
label_13d5a8:
    // 0x13d5a8: 0x94e3001e  lhu         $v1, 0x1E($a3)
    ctx->pc = 0x13d5a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x13d5ac: 0x1464001e  bne         $v1, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x13D5ACu;
    {
        const bool branch_taken_0x13d5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x13d5ac) {
            ctx->pc = 0x13D628u;
            goto label_13d628;
        }
    }
    ctx->pc = 0x13D5B4u;
    // 0x13d5b4: 0x94e8001c  lhu         $t0, 0x1C($a3)
    ctx->pc = 0x13d5b4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d5b8: 0x31030002  andi        $v1, $t0, 0x2
    ctx->pc = 0x13d5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x13d5bc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13D5BCu;
    {
        const bool branch_taken_0x13d5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5BCu;
        // 0x13d5c0: 0x31030008  andi        $v1, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5bc) {
            ctx->pc = 0x13D5F0u;
            goto label_13d5f0;
        }
    }
    ctx->pc = 0x13D5C4u;
    // 0x13d5c4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D5C4u;
    {
        const bool branch_taken_0x13d5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d5c4) {
            ctx->pc = 0x13D5F0u;
            goto label_13d5f0;
        }
    }
    ctx->pc = 0x13D5CCu;
    // 0x13d5cc: 0x3103fffd  andi        $v1, $t0, 0xFFFD
    ctx->pc = 0x13d5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65533);
    // 0x13d5d0: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d5d4: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d5d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d5d8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x13d5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x13d5dc: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d5e0: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d5e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d5e4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x13d5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13d5e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13D5E8u;
    {
        const bool branch_taken_0x13d5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5E8u;
        // 0x13d5ec: 0xa4e3001c  sh          $v1, 0x1C($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5e8) {
            ctx->pc = 0x13D628u;
            goto label_13d628;
        }
    }
    ctx->pc = 0x13D5F0u;
label_13d5f0:
    // 0x13d5f0: 0x31030004  andi        $v1, $t0, 0x4
    ctx->pc = 0x13d5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x13d5f4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13D5F4u;
    {
        const bool branch_taken_0x13d5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5F4u;
        // 0x13d5f8: 0x31030008  andi        $v1, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5f4) {
            ctx->pc = 0x13D628u;
            goto label_13d628;
        }
    }
    ctx->pc = 0x13D5FCu;
    // 0x13d5fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D5FCu;
    {
        const bool branch_taken_0x13d5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d5fc) {
            ctx->pc = 0x13D628u;
            goto label_13d628;
        }
    }
    ctx->pc = 0x13D604u;
    // 0x13d604: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d604u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d608: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x13d608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x13d60c: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d60cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d610: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d614: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x13d614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
    // 0x13d618: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d618u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d61c: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d61cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d620: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x13d620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x13d624: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d624u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
label_13d628:
    // 0x13d628: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13d628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13d62c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x13d62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_13d630:
    // 0x13d630: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x13d630u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13d634: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x13D634u;
    {
        const bool branch_taken_0x13d634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D634u;
        // 0x13d638: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d634) {
            ctx->pc = 0x13D5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d5a8;
        }
    }
    ctx->pc = 0x13D63Cu;
    // 0x13d63c: 0x8c267b34  lw          $a2, 0x7B34($at)
    ctx->pc = 0x13d63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31540)));
    // 0x13d640: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13d640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13d644: 0x8c277b30  lw          $a3, 0x7B30($at)
    ctx->pc = 0x13d644u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x317B30u));
    // 0x13d648: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13D648u;
    {
        const bool branch_taken_0x13d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D648u;
        // 0x13d64c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d648) {
            ctx->pc = 0x13D6D8u;
            goto label_13d6d8;
        }
    }
    ctx->pc = 0x13D650u;
label_13d650:
    // 0x13d650: 0x94e3001e  lhu         $v1, 0x1E($a3)
    ctx->pc = 0x13d650u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x13d654: 0x1464001e  bne         $v1, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x13D654u;
    {
        const bool branch_taken_0x13d654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x13d654) {
            ctx->pc = 0x13D6D0u;
            goto label_13d6d0;
        }
    }
    ctx->pc = 0x13D65Cu;
    // 0x13d65c: 0x94e5001c  lhu         $a1, 0x1C($a3)
    ctx->pc = 0x13d65cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d660: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x13d660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x13d664: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13D664u;
    {
        const bool branch_taken_0x13d664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D664u;
        // 0x13d668: 0x30a30008  andi        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d664) {
            ctx->pc = 0x13D698u;
            goto label_13d698;
        }
    }
    ctx->pc = 0x13D66Cu;
    // 0x13d66c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D66Cu;
    {
        const bool branch_taken_0x13d66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d66c) {
            ctx->pc = 0x13D698u;
            goto label_13d698;
        }
    }
    ctx->pc = 0x13D674u;
    // 0x13d674: 0x30a3fffd  andi        $v1, $a1, 0xFFFD
    ctx->pc = 0x13d674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65533);
    // 0x13d678: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d678u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d67c: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d67cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d680: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x13d680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x13d684: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d684u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d688: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d688u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d68c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x13d68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13d690: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13D690u;
    {
        const bool branch_taken_0x13d690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D690u;
        // 0x13d694: 0xa4e3001c  sh          $v1, 0x1C($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d690) {
            ctx->pc = 0x13D6D0u;
            goto label_13d6d0;
        }
    }
    ctx->pc = 0x13D698u;
label_13d698:
    // 0x13d698: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x13d698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x13d69c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13D69Cu;
    {
        const bool branch_taken_0x13d69c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D69Cu;
        // 0x13d6a0: 0x30a30008  andi        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d69c) {
            ctx->pc = 0x13D6D0u;
            goto label_13d6d0;
        }
    }
    ctx->pc = 0x13D6A4u;
    // 0x13d6a4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D6A4u;
    {
        const bool branch_taken_0x13d6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d6a4) {
            ctx->pc = 0x13D6D0u;
            goto label_13d6d0;
        }
    }
    ctx->pc = 0x13D6ACu;
    // 0x13d6ac: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d6acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d6b0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x13d6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x13d6b4: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d6b8: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d6b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d6bc: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x13d6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
    // 0x13d6c0: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d6c4: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d6c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d6c8: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x13d6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x13d6cc: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
label_13d6d0:
    // 0x13d6d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x13d6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x13d6d4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x13d6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_13d6d8:
    // 0x13d6d8: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x13d6d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x13d6dc: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x13D6DCu;
    {
        const bool branch_taken_0x13d6dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d6dc) {
            ctx->pc = 0x13D650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d650;
        }
    }
    ctx->pc = 0x13D6E4u;
}
