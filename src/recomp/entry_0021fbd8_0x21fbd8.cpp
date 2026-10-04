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

// Function: entry_0021fbd8
// Address: 0x21fbd8 - 0x21fbf8
void entry_0021fbd8_0x21fbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fbd8_0x21fbd8");
#endif

    switch (ctx->pc) {
        case 0x21fbe0u: goto label_21fbe0;
        case 0x21fbf0u: goto label_21fbf0;
        default: break;
    }

    ctx->pc = 0x21fbd8u;

    // 0x21fbd8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FBD8u;
    SET_GPR_U32(ctx, 31, 0x21FBE0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FBD8u, 0x21FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBE0u;
label_21fbe0:
    // 0x21fbe0: 0x1040022b  beqz        $v0, . + 4 + (0x22B << 2)
    ctx->pc = 0x21FBE0u;
    {
        const bool branch_taken_0x21fbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBE0u;
        // 0x21fbe4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbe0) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FBE8u;
    // 0x21fbe8: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FBE8u;
    SET_GPR_U32(ctx, 31, 0x21FBF0u);
    ctx->pc = 0x21FBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBE8u;
    // 0x21fbec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FBE8u, 0x21FBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBF0u;
label_21fbf0:
    // 0x21fbf0: 0x10000227  b           . + 4 + (0x227 << 2)
    ctx->pc = 0x21FBF0u;
    {
        const bool branch_taken_0x21fbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fbf0) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FBF8u;
}
