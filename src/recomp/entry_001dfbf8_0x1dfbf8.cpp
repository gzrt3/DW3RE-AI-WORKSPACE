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

// Function: entry_001dfbf8
// Address: 0x1dfbf8 - 0x1dfc10
void entry_001dfbf8_0x1dfbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfbf8_0x1dfbf8");
#endif

    ctx->pc = 0x1dfbf8u;

    // 0x1dfbf8: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DFBF8u;
    {
        const bool branch_taken_0x1dfbf8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBF8u;
        // 0x1dfbfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbf8) {
            ctx->pc = 0x1DFC10u;
            return;
        }
    }
    ctx->pc = 0x1DFC00u;
    // 0x1dfc00: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1dfc00u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dfc04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DFC08u;
    {
        const bool branch_taken_0x1dfc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC08u;
        // 0x1dfc0c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc08) {
            ctx->pc = 0x1DFC40u;
            return;
        }
    }
    ctx->pc = 0x1DFC10u;
}
