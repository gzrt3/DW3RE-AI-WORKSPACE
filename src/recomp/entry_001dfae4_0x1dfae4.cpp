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

// Function: entry_001dfae4
// Address: 0x1dfae4 - 0x1dfb00
void entry_001dfae4_0x1dfae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfae4_0x1dfae4");
#endif

    ctx->pc = 0x1dfae4u;

    // 0x1dfae4: 0x0  nop
    ctx->pc = 0x1dfae4u;
    // NOP
    // 0x1dfae8: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DFAE8u;
    {
        const bool branch_taken_0x1dfae8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAE8u;
        // 0x1dfaec: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfae8) {
            ctx->pc = 0x1DFB00u;
            return;
        }
    }
    ctx->pc = 0x1DFAF0u;
    // 0x1dfaf0: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x1dfaf0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfaf4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dfaf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfaf8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DFAF8u;
    {
        const bool branch_taken_0x1dfaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAF8u;
        // 0x1dfafc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfaf8) {
            ctx->pc = 0x1DFB20u;
            return;
        }
    }
    ctx->pc = 0x1DFB00u;
}
