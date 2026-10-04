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

// Function: entry_00220208
// Address: 0x220208 - 0x220228
void entry_00220208_0x220208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220208_0x220208");
#endif

    switch (ctx->pc) {
        case 0x220210u: goto label_220210;
        case 0x220220u: goto label_220220;
        default: break;
    }

    ctx->pc = 0x220208u;

    // 0x220208: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x220208u;
    SET_GPR_U32(ctx, 31, 0x220210u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x220208u, 0x220210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220210u;
label_220210:
    // 0x220210: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x220210u;
    {
        const bool branch_taken_0x220210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220210u;
        // 0x220214: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220210) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x220218u;
    // 0x220218: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x220218u;
    SET_GPR_U32(ctx, 31, 0x220220u);
    ctx->pc = 0x22021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220218u;
    // 0x22021c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x220218u, 0x220220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220220u;
label_220220:
    // 0x220220: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x220220u;
    {
        const bool branch_taken_0x220220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220220) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x220228u;
}
