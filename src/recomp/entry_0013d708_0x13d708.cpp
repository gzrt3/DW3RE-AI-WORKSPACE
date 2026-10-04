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

// Function: entry_0013d708
// Address: 0x13d708 - 0x13d738
void entry_0013d708_0x13d708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d708_0x13d708");
#endif

    ctx->pc = 0x13d708u;

    // 0x13d708: 0x94e3001e  lhu         $v1, 0x1E($a3)
    ctx->pc = 0x13d708u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x13d70c: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13D70Cu;
    {
        const bool branch_taken_0x13d70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x13d70c) {
            ctx->pc = 0x13D758u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x13D724u;
    // 0x13d724: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D724u;
    {
        const bool branch_taken_0x13d724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d724) {
            ctx->pc = 0x13D738u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x13D738u;
}
