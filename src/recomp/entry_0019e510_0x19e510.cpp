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

// Function: entry_0019e510
// Address: 0x19e510 - 0x19e51c
void entry_0019e510_0x19e510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e510_0x19e510");
#endif

    ctx->pc = 0x19e510u;

    // 0x19e510: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x19E510u;
    {
        const bool branch_taken_0x19e510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E510u;
        // 0x19e514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e510) {
            ctx->pc = 0x19E480u;
            return;
        }
    }
    ctx->pc = 0x19E518u;
    // 0x19e518: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19e518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19e51cu;
}
