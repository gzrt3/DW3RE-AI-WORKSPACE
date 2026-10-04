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

// Function: entry_001faf48
// Address: 0x1faf48 - 0x1faf58
void entry_001faf48_0x1faf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faf48_0x1faf48");
#endif

    switch (ctx->pc) {
        case 0x1faf50u: goto label_1faf50;
        default: break;
    }

    ctx->pc = 0x1faf48u;

    // 0x1faf48: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x1FAF48u;
    SET_GPR_U32(ctx, 31, 0x1FAF50u);
    ctx->pc = 0x1FAF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAF48u;
    // 0x1faf4c: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1FAF48u, 0x1FAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF50u;
label_1faf50:
    // 0x1faf50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAF50u;
    {
        const bool branch_taken_0x1faf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF50u;
        // 0x1faf54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf50) {
            ctx->pc = 0x1FAF70u;
            return;
        }
    }
    ctx->pc = 0x1FAF58u;
}
