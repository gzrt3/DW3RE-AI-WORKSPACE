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

// Function: entry_0016bc08
// Address: 0x16bc08 - 0x16bc18
void entry_0016bc08_0x16bc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bc08_0x16bc08");
#endif

    ctx->pc = 0x16bc08u;

    // 0x16bc08: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x16bc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x16bc0c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BC0Cu;
    {
        const bool branch_taken_0x16bc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC0Cu;
        // 0x16bc10: 0x30430040  andi        $v1, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc0c) {
            ctx->pc = 0x16BC18u;
            return;
        }
    }
    ctx->pc = 0x16BC14u;
    // 0x16bc14: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x16bc14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    ctx->pc = 0x16bc18u;
}
