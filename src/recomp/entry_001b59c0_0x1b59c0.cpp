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

// Function: entry_001b59c0
// Address: 0x1b59c0 - 0x1b59d0
void entry_001b59c0_0x1b59c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b59c0_0x1b59c0");
#endif

    ctx->pc = 0x1b59c0u;

    // 0x1b59c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B59C0u;
    {
        const bool branch_taken_0x1b59c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59C0u;
        // 0x1b59c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59c0) {
            ctx->pc = 0x1B59D0u;
            return;
        }
    }
    ctx->pc = 0x1B59C8u;
    // 0x1b59c8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1B59C8u;
    {
        const bool branch_taken_0x1b59c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59C8u;
        // 0x1b59cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59c8) {
            ctx->pc = 0x1B5B68u;
            return;
        }
    }
    ctx->pc = 0x1B59D0u;
}
