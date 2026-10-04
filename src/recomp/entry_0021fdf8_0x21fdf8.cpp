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

// Function: entry_0021fdf8
// Address: 0x21fdf8 - 0x21fe18
void entry_0021fdf8_0x21fdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fdf8_0x21fdf8");
#endif

    switch (ctx->pc) {
        case 0x21fe00u: goto label_21fe00;
        case 0x21fe14u: goto label_21fe14;
        default: break;
    }

    ctx->pc = 0x21fdf8u;

    // 0x21fdf8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FDF8u;
    SET_GPR_U32(ctx, 31, 0x21FE00u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FDF8u, 0x21FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE00u;
label_21fe00:
    // 0x21fe00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FE00u;
    {
        const bool branch_taken_0x21fe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE00u;
        // 0x21fe04: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe00) {
            ctx->pc = 0x21FE18u;
            return;
        }
    }
    ctx->pc = 0x21FE08u;
    // 0x21fe08: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x21fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21fe0c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FE0Cu;
    SET_GPR_U32(ctx, 31, 0x21FE14u);
    ctx->pc = 0x21FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE0Cu;
    // 0x21fe10: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FE0Cu, 0x21FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE14u;
label_21fe14:
    // 0x21fe14: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x21fe18u;
}
