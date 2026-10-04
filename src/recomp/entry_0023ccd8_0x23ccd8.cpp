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

// Function: entry_0023ccd8
// Address: 0x23ccd8 - 0x23ccf8
void entry_0023ccd8_0x23ccd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ccd8_0x23ccd8");
#endif

    ctx->pc = 0x23ccd8u;

    // 0x23ccd8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x23ccd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23ccdc: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23CCDCu;
    {
        const bool branch_taken_0x23ccdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ccdc) {
            ctx->pc = 0x23CCCCu;
            return;
        }
    }
    ctx->pc = 0x23CCE4u;
    // 0x23cce4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x23cce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23cce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23cce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ccec: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x23ccecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x23ccf0: 0x3e00008  jr          $ra
    ctx->pc = 0x23CCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCF0u;
        // 0x23ccf4: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CCF8u;
}
