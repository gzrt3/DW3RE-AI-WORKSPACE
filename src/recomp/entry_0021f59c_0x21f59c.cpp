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

// Function: entry_0021f59c
// Address: 0x21f59c - 0x21f5a8
void entry_0021f59c_0x21f59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f59c_0x21f59c");
#endif

    ctx->pc = 0x21f59cu;

    // 0x21f59c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x21F59Cu;
    {
        const bool branch_taken_0x21f59c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F59Cu;
        // 0x21f5a0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f59c) {
            ctx->pc = 0x21F5F0u;
            return;
        }
    }
    ctx->pc = 0x21F5A4u;
    // 0x21f5a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21f5a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21f5a8u;
}
