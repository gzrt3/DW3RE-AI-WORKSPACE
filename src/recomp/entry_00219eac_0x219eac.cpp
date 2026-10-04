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

// Function: entry_00219eac
// Address: 0x219eac - 0x219ec0
void entry_00219eac_0x219eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219eac_0x219eac");
#endif

    ctx->pc = 0x219eacu;

    // 0x219eac: 0x8f8292bc  lw          $v0, -0x6D44($gp)
    ctx->pc = 0x219eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
    // 0x219eb0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x219eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x219eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x219EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219EBCu;
    // 0x219ebc: 0x0  nop
    ctx->pc = 0x219ebcu;
    // NOP
    ctx->pc = 0x219ec0u;
}
