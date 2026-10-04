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

// Function: entry_0021fce8
// Address: 0x21fce8 - 0x21fd08
void entry_0021fce8_0x21fce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fce8_0x21fce8");
#endif

    switch (ctx->pc) {
        case 0x21fcf0u: goto label_21fcf0;
        case 0x21fd04u: goto label_21fd04;
        default: break;
    }

    ctx->pc = 0x21fce8u;

    // 0x21fce8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FCE8u;
    SET_GPR_U32(ctx, 31, 0x21FCF0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FCE8u, 0x21FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCF0u;
label_21fcf0:
    // 0x21fcf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FCF0u;
    {
        const bool branch_taken_0x21fcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCF0u;
        // 0x21fcf4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fcf0) {
            ctx->pc = 0x21FD08u;
            return;
        }
    }
    ctx->pc = 0x21FCF8u;
    // 0x21fcf8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x21fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21fcfc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FCFCu;
    SET_GPR_U32(ctx, 31, 0x21FD04u);
    ctx->pc = 0x21FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCFCu;
    // 0x21fd00: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FCFCu, 0x21FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD04u;
label_21fd04:
    // 0x21fd04: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x21fd08u;
}
