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

// Function: entry_001ac904
// Address: 0x1ac904 - 0x1ac920
void entry_001ac904_0x1ac904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac904_0x1ac904");
#endif

    ctx->pc = 0x1ac904u;

    // 0x1ac904: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ac904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac908: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac90c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac910: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac914: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC914u;
        // 0x1ac918: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC91Cu;
    // 0x1ac91c: 0x0  nop
    ctx->pc = 0x1ac91cu;
    // NOP
    ctx->pc = 0x1ac920u;
}
