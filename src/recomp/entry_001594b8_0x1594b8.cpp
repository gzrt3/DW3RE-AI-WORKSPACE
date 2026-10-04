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

// Function: entry_001594b8
// Address: 0x1594b8 - 0x1594d0
void entry_001594b8_0x1594b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001594b8_0x1594b8");
#endif

    ctx->pc = 0x1594b8u;

    // 0x1594b8: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1594B8u;
    {
        const bool branch_taken_0x1594b8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1594b8) {
            ctx->pc = 0x1594C4u;
            goto label_1594c4;
        }
    }
    ctx->pc = 0x1594C0u;
    // 0x1594c0: 0xa4650230  sh          $a1, 0x230($v1)
    ctx->pc = 0x1594c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 5));
label_1594c4:
    // 0x1594c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1594C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1594C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1594CCu;
    // 0x1594cc: 0x0  nop
    ctx->pc = 0x1594ccu;
    // NOP
    ctx->pc = 0x1594d0u;
}
