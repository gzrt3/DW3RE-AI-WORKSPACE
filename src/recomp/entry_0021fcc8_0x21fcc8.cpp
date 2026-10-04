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

// Function: entry_0021fcc8
// Address: 0x21fcc8 - 0x21fce8
void entry_0021fcc8_0x21fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fcc8_0x21fcc8");
#endif

    switch (ctx->pc) {
        case 0x21fcd0u: goto label_21fcd0;
        case 0x21fce4u: goto label_21fce4;
        default: break;
    }

    ctx->pc = 0x21fcc8u;

    // 0x21fcc8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FCC8u;
    SET_GPR_U32(ctx, 31, 0x21FCD0u);
    ctx->pc = 0x21FCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCC8u;
    // 0x21fccc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FCC8u, 0x21FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCD0u;
label_21fcd0:
    // 0x21fcd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FCD0u;
    {
        const bool branch_taken_0x21fcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCD0u;
        // 0x21fcd4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fcd0) {
            ctx->pc = 0x21FCE8u;
            return;
        }
    }
    ctx->pc = 0x21FCD8u;
    // 0x21fcd8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fcdc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FCDCu;
    SET_GPR_U32(ctx, 31, 0x21FCE4u);
    ctx->pc = 0x21FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCDCu;
    // 0x21fce0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FCDCu, 0x21FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCE4u;
label_21fce4:
    // 0x21fce4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x21fce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x21fce8u;
}
