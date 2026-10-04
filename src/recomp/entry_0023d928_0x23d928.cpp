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

// Function: entry_0023d928
// Address: 0x23d928 - 0x23d940
void entry_0023d928_0x23d928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d928_0x23d928");
#endif

    ctx->pc = 0x23d928u;

    // 0x23d928: 0xdfb00460  ld          $s0, 0x460($sp)
    ctx->pc = 0x23d928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x23d92c: 0xdfb10468  ld          $s1, 0x468($sp)
    ctx->pc = 0x23d92cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x23d930: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x23d930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x23d934: 0x3e00008  jr          $ra
    ctx->pc = 0x23D934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D934u;
        // 0x23d938: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D93Cu;
    // 0x23d93c: 0x0  nop
    ctx->pc = 0x23d93cu;
    // NOP
    ctx->pc = 0x23d940u;
}
