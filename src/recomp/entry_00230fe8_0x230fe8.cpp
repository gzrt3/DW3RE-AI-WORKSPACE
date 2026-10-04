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

// Function: entry_00230fe8
// Address: 0x230fe8 - 0x231000
void entry_00230fe8_0x230fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230fe8_0x230fe8");
#endif

    switch (ctx->pc) {
        case 0x230ff0u: goto label_230ff0;
        default: break;
    }

    ctx->pc = 0x230fe8u;

    // 0x230fe8: 0xc08cd5c  jal         func_233570
    ctx->pc = 0x230FE8u;
    SET_GPR_U32(ctx, 31, 0x230FF0u);
    ctx->pc = 0x230FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FE8u;
    // 0x230fec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233570u, 0x230FE8u, 0x230FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FF0u;
label_230ff0:
    // 0x230ff0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x230FF0u;
    {
        const bool branch_taken_0x230ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FF0u;
        // 0x230ff4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ff0) {
            ctx->pc = 0x230FE0u;
            return;
        }
    }
    ctx->pc = 0x230FF8u;
    // 0x230ff8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x230FF8u;
    {
        const bool branch_taken_0x230ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ff8) {
            ctx->pc = 0x231008u;
            return;
        }
    }
    ctx->pc = 0x231000u;
}
