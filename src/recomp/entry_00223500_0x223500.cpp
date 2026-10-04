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

// Function: entry_00223500
// Address: 0x223500 - 0x223518
void entry_00223500_0x223500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223500_0x223500");
#endif

    switch (ctx->pc) {
        case 0x223508u: goto label_223508;
        default: break;
    }

    ctx->pc = 0x223500u;

    // 0x223500: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x223500u;
    SET_GPR_U32(ctx, 31, 0x223508u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x223500u, 0x223508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223508u;
label_223508:
    // 0x223508: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x223508u;
    {
        const bool branch_taken_0x223508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223508u;
        // 0x22350c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223508) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x223510u;
    // 0x223510: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x223510u;
    {
        const bool branch_taken_0x223510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223510u;
        // 0x223514: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223510) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x223518u;
}
