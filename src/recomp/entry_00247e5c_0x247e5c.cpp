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

// Function: entry_00247e5c
// Address: 0x247e5c - 0x247e70
void entry_00247e5c_0x247e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247e5c_0x247e5c");
#endif

    ctx->pc = 0x247e5cu;

label_247e5c:
    // 0x247e5c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x247e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_247e60:
    // 0x247e60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247e64:
    // 0x247e64: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x247e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_247e68:
    // 0x247e68: 0x320f809  jalr        $t9
label_247e6c:
    if (ctx->pc == 0x247E6Cu) {
        ctx->pc = 0x247E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E68u;
        // 0x247e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E70u;
        goto label_fallthrough_0x247e68;
    }
    ctx->pc = 0x247E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247E70u);
        ctx->pc = 0x247E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E68u;
        // 0x247e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247E68u, 0x247E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x247e68:
    ctx->pc = 0x247E70u;
}
