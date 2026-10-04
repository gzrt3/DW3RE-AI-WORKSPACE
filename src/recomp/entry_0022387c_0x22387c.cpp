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

// Function: entry_0022387c
// Address: 0x22387c - 0x22388c
void entry_0022387c_0x22387c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022387c_0x22387c");
#endif

    ctx->pc = 0x22387cu;

    // 0x22387c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22387cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223880: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x223880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x223884: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x223884u;
    {
        const bool branch_taken_0x223884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223884u;
        // 0x223888: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223884) {
            ctx->pc = 0x2238A8u;
            return;
        }
    }
    ctx->pc = 0x22388Cu;
}
