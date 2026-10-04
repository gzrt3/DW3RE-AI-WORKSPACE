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

// Function: entry_001ed2f4
// Address: 0x1ed2f4 - 0x1ed310
void entry_001ed2f4_0x1ed2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed2f4_0x1ed2f4");
#endif

    ctx->pc = 0x1ed2f4u;

    // 0x1ed2f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed2f8: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1ed2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
    // 0x1ed2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2FCu;
        // 0x1ed300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED304u;
    // 0x1ed304: 0x0  nop
    ctx->pc = 0x1ed304u;
    // NOP
    // 0x1ed308: 0x0  nop
    ctx->pc = 0x1ed308u;
    // NOP
    // 0x1ed30c: 0x0  nop
    ctx->pc = 0x1ed30cu;
    // NOP
    ctx->pc = 0x1ed310u;
}
