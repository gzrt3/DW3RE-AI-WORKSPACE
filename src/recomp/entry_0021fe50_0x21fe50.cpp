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

// Function: entry_0021fe50
// Address: 0x21fe50 - 0x21fe78
void entry_0021fe50_0x21fe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fe50_0x21fe50");
#endif

    switch (ctx->pc) {
        case 0x21fe58u: goto label_21fe58;
        case 0x21fe6cu: goto label_21fe6c;
        default: break;
    }

    ctx->pc = 0x21fe50u;

    // 0x21fe50: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FE50u;
    SET_GPR_U32(ctx, 31, 0x21FE58u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FE50u, 0x21FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE58u;
label_21fe58:
    // 0x21fe58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FE58u;
    {
        const bool branch_taken_0x21fe58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE58u;
        // 0x21fe5c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe58) {
            ctx->pc = 0x21FE78u;
            return;
        }
    }
    ctx->pc = 0x21FE60u;
    // 0x21fe60: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21fe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21fe64: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FE64u;
    SET_GPR_U32(ctx, 31, 0x21FE6Cu);
    ctx->pc = 0x21FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE64u;
    // 0x21fe68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FE64u, 0x21FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE6Cu;
label_21fe6c:
    // 0x21fe6c: 0x10400188  beqz        $v0, . + 4 + (0x188 << 2)
    ctx->pc = 0x21FE6Cu;
    {
        const bool branch_taken_0x21fe6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe6c) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FE74u;
    // 0x21fe74: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x21fe78u;
}
