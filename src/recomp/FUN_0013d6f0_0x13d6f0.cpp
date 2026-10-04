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

// Function: FUN_0013d6f0
// Address: 0x13d6f0 - 0x13d7e4
void FUN_0013d6f0_0x13d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d6f0_0x13d6f0");
#endif

    switch (ctx->pc) {
        case 0x13d708u: goto label_13d708;
        case 0x13d780u: goto label_13d780;
        default: break;
    }

    ctx->pc = 0x13d6f0u;

    // 0x13d6f0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13d6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13d6f4: 0x8c257b44  lw          $a1, 0x7B44($at)
    ctx->pc = 0x13d6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x317B44u));
    // 0x13d6f8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13d6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13d6fc: 0x8c277b40  lw          $a3, 0x7B40($at)
    ctx->pc = 0x13d6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x317B40u));
    // 0x13d700: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13D700u;
    {
        const bool branch_taken_0x13d700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D700u;
        // 0x13d704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d700) {
            ctx->pc = 0x13D760u;
            goto label_13d760;
        }
    }
    ctx->pc = 0x13D708u;
label_13d708:
    // 0x13d708: 0x94e3001e  lhu         $v1, 0x1E($a3)
    ctx->pc = 0x13d708u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x13d70c: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13D70Cu;
    {
        const bool branch_taken_0x13d70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x13d70c) {
            ctx->pc = 0x13D758u;
            goto label_13d758;
        }
    }
    ctx->pc = 0x13D714u;
    // 0x13d714: 0x94e8001c  lhu         $t0, 0x1C($a3)
    ctx->pc = 0x13d714u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d718: 0x31030002  andi        $v1, $t0, 0x2
    ctx->pc = 0x13d718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x13d71c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D71Cu;
    {
        const bool branch_taken_0x13d71c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D71Cu;
        // 0x13d720: 0x31030008  andi        $v1, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d71c) {
            ctx->pc = 0x13D738u;
            goto label_13d738;
        }
    }
    ctx->pc = 0x13D724u;
    // 0x13d724: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D724u;
    {
        const bool branch_taken_0x13d724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d724) {
            ctx->pc = 0x13D738u;
            goto label_13d738;
        }
    }
    ctx->pc = 0x13D72Cu;
    // 0x13d72c: 0x35030008  ori         $v1, $t0, 0x8
    ctx->pc = 0x13d72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8);
    // 0x13d730: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13D730u;
    {
        const bool branch_taken_0x13d730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D730u;
        // 0x13d734: 0xa4e3001c  sh          $v1, 0x1C($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d730) {
            ctx->pc = 0x13D758u;
            goto label_13d758;
        }
    }
    ctx->pc = 0x13D738u;
label_13d738:
    // 0x13d738: 0x31030004  andi        $v1, $t0, 0x4
    ctx->pc = 0x13d738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x13d73c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D73Cu;
    {
        const bool branch_taken_0x13d73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D73Cu;
        // 0x13d740: 0x31030008  andi        $v1, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d73c) {
            ctx->pc = 0x13D758u;
            goto label_13d758;
        }
    }
    ctx->pc = 0x13D744u;
    // 0x13d744: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D744u;
    {
        const bool branch_taken_0x13d744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d744) {
            ctx->pc = 0x13D758u;
            goto label_13d758;
        }
    }
    ctx->pc = 0x13D74Cu;
    // 0x13d74c: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d74cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d750: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x13d750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x13d754: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d754u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
label_13d758:
    // 0x13d758: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13d758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13d75c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x13d75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_13d760:
    // 0x13d760: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x13d760u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13d764: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x13D764u;
    {
        const bool branch_taken_0x13d764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D764u;
        // 0x13d768: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d764) {
            ctx->pc = 0x13D708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d708;
        }
    }
    ctx->pc = 0x13D76Cu;
    // 0x13d76c: 0x8c267b34  lw          $a2, 0x7B34($at)
    ctx->pc = 0x13d76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31540)));
    // 0x13d770: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13d770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13d774: 0x8c277b30  lw          $a3, 0x7B30($at)
    ctx->pc = 0x13d774u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x317B30u));
    // 0x13d778: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13D778u;
    {
        const bool branch_taken_0x13d778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D778u;
        // 0x13d77c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d778) {
            ctx->pc = 0x13D7D8u;
            goto label_13d7d8;
        }
    }
    ctx->pc = 0x13D780u;
label_13d780:
    // 0x13d780: 0x94e3001e  lhu         $v1, 0x1E($a3)
    ctx->pc = 0x13d780u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x13d784: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13D784u;
    {
        const bool branch_taken_0x13d784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x13d784) {
            ctx->pc = 0x13D7D0u;
            goto label_13d7d0;
        }
    }
    ctx->pc = 0x13D78Cu;
    // 0x13d78c: 0x94e5001c  lhu         $a1, 0x1C($a3)
    ctx->pc = 0x13d78cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d790: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x13d790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x13d794: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D794u;
    {
        const bool branch_taken_0x13d794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D794u;
        // 0x13d798: 0x30a30008  andi        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d794) {
            ctx->pc = 0x13D7B0u;
            goto label_13d7b0;
        }
    }
    ctx->pc = 0x13D79Cu;
    // 0x13d79c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D79Cu;
    {
        const bool branch_taken_0x13d79c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d79c) {
            ctx->pc = 0x13D7B0u;
            goto label_13d7b0;
        }
    }
    ctx->pc = 0x13D7A4u;
    // 0x13d7a4: 0x34a30008  ori         $v1, $a1, 0x8
    ctx->pc = 0x13d7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x13d7a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13D7A8u;
    {
        const bool branch_taken_0x13d7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7A8u;
        // 0x13d7ac: 0xa4e3001c  sh          $v1, 0x1C($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7a8) {
            ctx->pc = 0x13D7D0u;
            goto label_13d7d0;
        }
    }
    ctx->pc = 0x13D7B0u;
label_13d7b0:
    // 0x13d7b0: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x13d7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x13d7b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D7B4u;
    {
        const bool branch_taken_0x13d7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7B4u;
        // 0x13d7b8: 0x30a30008  andi        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7b4) {
            ctx->pc = 0x13D7D0u;
            goto label_13d7d0;
        }
    }
    ctx->pc = 0x13D7BCu;
    // 0x13d7bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D7BCu;
    {
        const bool branch_taken_0x13d7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d7bc) {
            ctx->pc = 0x13D7D0u;
            goto label_13d7d0;
        }
    }
    ctx->pc = 0x13D7C4u;
    // 0x13d7c4: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d7c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d7c8: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x13d7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x13d7cc: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
label_13d7d0:
    // 0x13d7d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x13d7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x13d7d4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x13d7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_13d7d8:
    // 0x13d7d8: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x13d7d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x13d7dc: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x13D7DCu;
    {
        const bool branch_taken_0x13d7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d7dc) {
            ctx->pc = 0x13D780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d780;
        }
    }
    ctx->pc = 0x13D7E4u;
}
