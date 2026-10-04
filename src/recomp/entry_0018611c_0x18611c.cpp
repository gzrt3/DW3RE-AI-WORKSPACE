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

// Function: entry_0018611c
// Address: 0x18611c - 0x186138
void entry_0018611c_0x18611c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018611c_0x18611c");
#endif

    ctx->pc = 0x18611cu;

    // 0x18611c: 0x106000b1  beqz        $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x18611Cu;
    {
        const bool branch_taken_0x18611c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18611c) {
            ctx->pc = 0x1863E4u;
            return;
        }
    }
    ctx->pc = 0x186124u;
    // 0x186124: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186124u;
    {
        const bool branch_taken_0x186124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x186124) {
            ctx->pc = 0x186138u;
            return;
        }
    }
    ctx->pc = 0x18612Cu;
    // 0x18612c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18612cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186130: 0xc061cd8  jal         func_187360
    ctx->pc = 0x186130u;
    SET_GPR_U32(ctx, 31, 0x186138u);
    ctx->pc = 0x186134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186130u;
    // 0x186134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187360u, 0x186130u, 0x186138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186138u;
}
