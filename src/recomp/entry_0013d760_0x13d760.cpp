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

// Function: entry_0013d760
// Address: 0x13d760 - 0x13d780
void entry_0013d760_0x13d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d760_0x13d760");
#endif

    ctx->pc = 0x13d760u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x13D780u;
}
