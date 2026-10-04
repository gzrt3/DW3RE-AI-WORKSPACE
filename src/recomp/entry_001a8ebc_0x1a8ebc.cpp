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

// Function: entry_001a8ebc
// Address: 0x1a8ebc - 0x1a8ed4
void entry_001a8ebc_0x1a8ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8ebc_0x1a8ebc");
#endif

    switch (ctx->pc) {
        case 0x1a8eccu: goto label_1a8ecc;
        default: break;
    }

    ctx->pc = 0x1a8ebcu;

    // 0x1a8ebc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8EBCu;
    {
        const bool branch_taken_0x1a8ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ebc) {
            ctx->pc = 0x1A8ED4u;
            return;
        }
    }
    ctx->pc = 0x1A8EC4u;
    // 0x1a8ec4: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1A8EC4u;
    SET_GPR_U32(ctx, 31, 0x1A8ECCu);
    ctx->pc = 0x1A8EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8EC4u;
    // 0x1a8ec8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1A8EC4u, 0x1A8ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8ECCu;
label_1a8ecc:
    // 0x1a8ecc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A8ECCu;
    {
        const bool branch_taken_0x1a8ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ECCu;
        // 0x1a8ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ecc) {
            ctx->pc = 0x1A8EE8u;
            return;
        }
    }
    ctx->pc = 0x1A8ED4u;
}
