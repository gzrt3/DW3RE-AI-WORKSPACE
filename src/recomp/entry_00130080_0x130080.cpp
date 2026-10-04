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

// Function: entry_00130080
// Address: 0x130080 - 0x1300a0
void entry_00130080_0x130080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130080_0x130080");
#endif

    switch (ctx->pc) {
        case 0x130088u: goto label_130088;
        case 0x130098u: goto label_130098;
        default: break;
    }

    ctx->pc = 0x130080u;

    // 0x130080: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x130080u;
    SET_GPR_U32(ctx, 31, 0x130088u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x130080u, 0x130088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130088u;
label_130088:
    // 0x130088: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130088u;
    {
        const bool branch_taken_0x130088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130088u;
        // 0x13008c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130088) {
            ctx->pc = 0x1300A0u;
            return;
        }
    }
    ctx->pc = 0x130090u;
    // 0x130090: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x130090u;
    SET_GPR_U32(ctx, 31, 0x130098u);
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x130090u, 0x130098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130098u;
label_130098:
    // 0x130098: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x130098u;
    SET_GPR_U32(ctx, 31, 0x1300A0u);
    ctx->pc = 0x13009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130098u;
    // 0x13009c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x130098u, 0x1300A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300A0u;
}
