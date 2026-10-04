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

// Function: entry_002396dc
// Address: 0x2396dc - 0x2396f8
void entry_002396dc_0x2396dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002396dc_0x2396dc");
#endif

    ctx->pc = 0x2396dcu;

    // 0x2396dc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2396dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2396e0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2396e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2396e4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2396e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2396e8: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2396e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2396ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2396ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2396F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396ECu;
        // 0x2396f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2396ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2396F4u;
    // 0x2396f4: 0x0  nop
    ctx->pc = 0x2396f4u;
    // NOP
    ctx->pc = 0x2396f8u;
}
