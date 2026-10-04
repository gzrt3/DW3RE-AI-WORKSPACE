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

// Function: entry_0021fd98
// Address: 0x21fd98 - 0x21fdb8
void entry_0021fd98_0x21fd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fd98_0x21fd98");
#endif

    switch (ctx->pc) {
        case 0x21fda0u: goto label_21fda0;
        case 0x21fdb0u: goto label_21fdb0;
        default: break;
    }

    ctx->pc = 0x21fd98u;

    // 0x21fd98: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FD98u;
    SET_GPR_U32(ctx, 31, 0x21FDA0u);
    ctx->pc = 0x21FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD98u;
    // 0x21fd9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FD98u, 0x21FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDA0u;
label_21fda0:
    // 0x21fda0: 0x104001bb  beqz        $v0, . + 4 + (0x1BB << 2)
    ctx->pc = 0x21FDA0u;
    {
        const bool branch_taken_0x21fda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDA0u;
        // 0x21fda4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fda0) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FDA8u;
    // 0x21fda8: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FDA8u;
    SET_GPR_U32(ctx, 31, 0x21FDB0u);
    ctx->pc = 0x21FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDA8u;
    // 0x21fdac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FDA8u, 0x21FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDB0u;
label_21fdb0:
    // 0x21fdb0: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x21FDB0u;
    {
        const bool branch_taken_0x21fdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fdb0) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FDB8u;
}
