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

// Function: entry_001ab03c
// Address: 0x1ab03c - 0x1ab054
void entry_001ab03c_0x1ab03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab03c_0x1ab03c");
#endif

    switch (ctx->pc) {
        case 0x1ab04cu: goto label_1ab04c;
        default: break;
    }

    ctx->pc = 0x1ab03cu;

    // 0x1ab03c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB03Cu;
    {
        const bool branch_taken_0x1ab03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab03c) {
            ctx->pc = 0x1AB054u;
            return;
        }
    }
    ctx->pc = 0x1AB044u;
    // 0x1ab044: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1AB044u;
    SET_GPR_U32(ctx, 31, 0x1AB04Cu);
    ctx->pc = 0x1AB048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB044u;
    // 0x1ab048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1AB044u, 0x1AB04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB04Cu;
label_1ab04c:
    // 0x1ab04c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB04Cu;
    {
        const bool branch_taken_0x1ab04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB04Cu;
        // 0x1ab050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab04c) {
            ctx->pc = 0x1AB068u;
            return;
        }
    }
    ctx->pc = 0x1AB054u;
}
